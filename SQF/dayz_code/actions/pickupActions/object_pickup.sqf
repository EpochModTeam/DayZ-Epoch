if (dayz_actionInProgress) exitWith {localize "str_player_actionslimit" call dayz_rollingMessages;};
if (player isKindOf "PZombie_VB") exitWith {};
private ["_array","_type","_classname","_holder","_playerID","_text","_broken","_claimedBy","_config","_isOk","_PlayerNear","_wpn","_ismelee","_hasBag"];

_array = _this select 3;
_type = _array select 0;
_classname = _array select 1;
_holder = _array select 2;

if (player distance _holder > 3) exitwith {localize "str_pickup_limit_1" call dayz_rollingMessages};

_playerID = getPlayerUID player;
player removeAction s_player_holderPickup;
_text = getText (configFile >> _type >> _classname >> "displayName");

if (!canPickup) exitwith {
	if (pickupInit) then {
		localize "str_pickup_limit_2" call dayz_rollingMessages;
	} else {
		localize "str_pickup_limit_3" call dayz_rollingMessages;
	};
};

_claimedBy = _holder getVariable "claimed";

if (isNil "claimed") then {_holder setVariable["claimed",_playerID,true];};

canPickup = false;

player playActionNow "PutDown";

_broken = ((_classname == "1Rnd_Arrow_Wood") && {[0.15] call fn_chance}); // Adding random chance of arrow is re-usable on pickup
if (_broken) exitWith { deleteVehicle _holder; localize "str_broken_arrow" call dayz_rollingMessages; };

_claimedBy = _holder getVariable["claimed","0"];

if (_claimedBy != _playerID) exitWith { format[localize "str_player_beinglooted",_text] call dayz_rollingMessages; };

if (_classname isKindOf "Bag_Base_EP1") exitWith {
	_PlayerNear = {isPlayer _x} count ((getPosATL _holder) nearEntities ["CAManBase", 12]) > 1;
	if (_PlayerNear) exitWith {localize "str_pickup_limit_4" call dayz_rollingMessages;};

	_hasBag = unitBackpack player;

	if (isNull _hasBag) then {
		player action ["TakeBag", _holder];
	} else {
		player action ["putbag", player];
		uiSleep 0.03;
		player action ["TakeBag", _holder];
	};

	waitUntil { !isNull (unitBackpack player) };
	uiSleep 0.03;
	
	call player_regularSave;
};

_config = (configFile >> _type >> _classname);

//Remove melee magazines (BIS_fnc_invAdd fix)
false call dz_fn_meleeMagazines;
_isOk = [player,_config] call BIS_fnc_invAdd;
true call dz_fn_meleeMagazines;

if (_isOk) then {
	if (_holder isKindOf "TrapItems") then {
		if !(_holder getVariable ["fullRefund",true]) then {
			//Trap was already triggered, refund all parts except grenade
			player removeMagazine _classname;
			["equip_string",1,1] call fn_dropItem;
			["PartWoodPile",1,1] call fn_dropItem;
			["equip_duct_tape",1,1] call fn_dropItem;
		};
		PVDZ_obj_Destroy = [(_holder getVariable["ObjectID","0"]),(_holder getVariable["ObjectUID","0"]),player,_holder,dayz_authKey];
		publicVariableServer "PVDZ_obj_Destroy";
	} else {
		deleteVehicle _holder;
	};
} else {
	if (!_isOk) exitWith {
		_holder setVariable["claimed",0,true];
		localize "str_player_24" call dayz_rollingMessages;
	};
};
uiSleep 3;

_wpn = primaryWeapon player;
_ismelee = (getNumber (configFile >> "CfgWeapons" >> _wpn >> "melee") == 1);

if (_ismelee) then {call dayz_meleeMagazineCheck;};
