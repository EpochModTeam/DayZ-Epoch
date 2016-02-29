private ["_array","_type","_classname","_holder","_playerID","_text","_broken","_claimedBy","_config","_isOk","_PlayerNear","_wpn","_ismelee"];

_array = _this select 3;
_type = _array select 0;
_classname = _array select 1;
_holder = _array select 2;

// Check if closest player
_PlayerNear = _holder call dze_isnearest_player;
if (_PlayerNear) exitWith {cutText [localize "str_pickup_limit_4", "PLAIN DOWN"]};


if (player distance _holder > 3) exitwith { localize "str_pickup_limit_1","PLAIN DOWN" };

_playerID = getPlayerUID player;
player removeAction s_player_holderPickup;
_text = getText (configFile >> _type >> _classname >> "displayName");

if (!canPickup || !DZE_CanPickup) exitwith {
	if (pickupInit) then {
		cutText [localize "str_pickup_limit_2","PLAIN DOWN"];
	} else {
		cutText [localize "str_pickup_limit_3","PLAIN DOWN"];
	};
};

_claimedBy = _holder getVariable "claimed";

if (isnil "claimed") then {
	_holder setVariable["claimed",_playerID,true];
};

canPickup = false;
DZE_CanPickup = false;

if(_classname isKindOf "TrapBear") exitwith {DZE_CanPickup = true; deleteVehicle _holder; };

player playActionNow "PutDown";

//Adding random chance of arrow is re-usable on pickup
_broken = false;

if(_classname == "WoodenArrow") then {
	if ([0.15] call fn_chance) then {
		_broken = true;
	};
};

if (_broken) exitWith {DZE_CanPickup = true; deleteVehicle _holder; cutText [localize "str_broken_arrow", "PLAIN DOWN"]; };

sleep 0.25; //Why are we waiting? Animation

_claimedBy = _holder getVariable["claimed","0"];

if (_claimedBy != _playerID) exitWith { cutText [format [localize "str_player_beinglooted",_text] , "PLAIN DOWN"]; };

if(_classname isKindOf "Bag_Base_EP1") exitwith {
	_PlayerNear = {isPlayer _x} count ((getPosATL _holder) nearEntities ["CAManBase", 10]) > 1;
	if (_PlayerNear) exitWith {DZE_CanPickup = true; cutText [localize "str_pickup_limit_4", "PLAIN DOWN"]};

	diag_log("Picked up a bag: " + _classname);
	
	_hasBag = unitBackpack player;

	if (isNull _hasBag) then {
		player action ["TakeBag", _holder];
	} else {
		player action ["putbag", player];
		
		uisleep 0.03;
		
		player action ["TakeBag", _holder];
	};
	DZE_CanPickup = true;
	//Lets wait to make sure the player has some kind of backpack.
	waitUntil { !isNull (unitBackpack player) };
	
	uisleep 0.03;
	
	//Lets call inventory save
	PVDZ_plr_Save = [player,nil,false];
	publicVariableServer "PVDZ_plr_Save";
};

_config = (configFile >> _type >> _classname);

//Remove melee magazines (BIS_fnc_invAdd fix)
{player removeMagazines _x} forEach MeleeMagazines;

_isOk = [player,_config] call BIS_fnc_invAdd;

if (_isOk) then {
	deleteVehicle _holder;
} else {
	if (!_isOk) exitWith {
		_holder setVariable["claimed",0,true];
		cutText [localize "str_player_24", "PLAIN DOWN"];
	};
};

uisleep 3;

//adding melee mags back if needed
_wpn = primaryWeapon player;
//diag_log format["Classname: %1, WPN: %2", _classname,_wpn];
_ismelee = (getNumber (configFile >> "CfgWeapons" >> _wpn >> "melee") == 1);
if (_ismelee) then {
	call dayz_meleeMagazineCheck;
};
DZE_CanPickup = true;