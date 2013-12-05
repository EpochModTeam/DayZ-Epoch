private ["_array","_type","_classname","_holder","_config","_isOk","_muzzles","_playerID","_claimedBy","_text","_playerNear","_obj","_qty"];

// Exit if player zombie
if(player isKindOf "PZombie_VB") exitWith {};

if (!DZE_CanPickup) exitWith { cutText [(localize "str_epoch_player_38") , "PLAIN DOWN"]; };
DZE_CanPickup = false;

_array = _this select 3;
_type = _array select 0;
_classname = _array select 1;
_holder = _array select 2;

// if holder is null disallow pickup for 5 seconds 
if(isNull _holder) exitWith { 
	DZE_CanPickup = true;
};

// Check if closest player
_PlayerNear = _holder call dze_isnearest_player;
if (_PlayerNear) exitWith {cutText [localize "str_pickup_limit_4", "PLAIN DOWN"]};

_text = getText (configFile >> _type >> _classname >> "displayName");

player playActionNow "PutDown";

if(_classname isKindOf "TrapBear") exitwith {DZE_CanPickup = true; deleteVehicle _holder;};

if(_classname isKindOf "Bag_Base_EP1") exitwith {
	
	// diag_log("Picked up a bag: " + _classname);
	if(_classname == typeOf _holder) then {
		player action ["TakeBag", _holder];
	};
	DZE_CanPickup = true;
};

_obj = nearestObjects [(getPosATL player), [(typeOf _holder)], 5];
_qty = count _obj;

if(_qty >= 1) then {
	_config = (configFile >> _type >> _classname);
	_isOk = [player,_config] call BIS_fnc_invAdd;
	if (_isOk) then {
		deleteVehicle _holder;
		if (_classname in ["MeleeHatchet_DZE","MeleeCrowbar","MeleeMachete","MeleeFishingPole","MeleeSledge"]) then {
			if (_type == "cfgWeapons") then {
				_muzzles = getArray(configFile >> "cfgWeapons" >> _classname >> "muzzles");
				//_wtype = ((weapons player) select 0);
				if (count _muzzles > 1) then {
					player selectWeapon (_muzzles select 0);
				} else {
					player selectWeapon _classname;
				};
			};
		};
	};
};

DZE_CanPickup = true;