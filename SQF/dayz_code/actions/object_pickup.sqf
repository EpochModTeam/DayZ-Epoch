private ["_array","_type","_classname","_holder","_config","_isOk","_muzzles","_playerID","_claimedBy","_text","_broken","_playerNear","_obj","_qty"];

// Exit if player zombie
if(player isKindOf "PZombie_VB") exitWith {};

// Test cannot lock while another player is nearby
// _playerNear = {isPlayer _x} count (player nearEntities ["CAManBase", 6]) > 1;
// if(_playerNear) exitWith {cutText ["Cannot take item while another player is nearby." , "PLAIN DOWN"];  };

if (!DZE_CanPickup) exitWith { cutText ["Take item already in progress." , "PLAIN DOWN"]; };
DZE_CanPickup = false;

_array = _this select 3;
_type = _array select 0;
_classname = _array select 1;
_holder = _array select 2;

_playerID = getPlayerUID player;
_text = getText (configFile >> _type >> _classname >> "displayName");

_claimedBy = _holder getVariable["claimed","0"];

// Check if any players are nearby if not allow player to claim item.
_playerNear = {isPlayer _x} count (player nearEntities ["CAManBase", 6]) > 1;

// Only allow if not already claimed.
if (_claimedBy == "0" or !_playerNear) then {
	// Since item was not claimed proceed with claiming it.
	_holder setVariable["claimed",_playerID,true];
};

if(_classname isKindOf "TrapBear") exitwith {DZE_CanPickup = true; deleteVehicle _holder;};

player playActionNow "PutDown";

if (_classname == "MeleeCrowbar") then {
	player addMagazine 'crowbar_swing';
};
if (_classname == "MeleeHatchet") then {
	player addMagazine 'hatchet_swing';
};
if (_classname == "MeleeMachete") then {
	player addMagazine 'Machete_swing';
};
if (_classname == "MeleeFishingPole") then {
	player addMagazine 'Fishing_Swing';
};

sleep 1;

_claimedBy = _holder getVariable["claimed","0"];

if (_claimedBy != _playerID) exitWith {sleep 1; DZE_CanPickup = true; cutText [format[(localize "str_player_beinglooted"),_text] , "PLAIN DOWN"]};

if(_classname isKindOf "Bag_Base_EP1") then {
	diag_log("Picked up a bag: " + _classname);
};

// test to see if item still exists just before adding and removing
if(isNull _holder) exitWith { sleep 1; DZE_CanPickup = true; };

_obj = nearestObjects [(getPosATL player), [(typeOf _holder)], 5];
_qty = count _obj;

if(_qty >= 1) then {

	_config = (configFile >> _type >> _classname);
	_isOk = [player,_config] call BIS_fnc_invAdd;
	if (_isOk) then {

		deleteVehicle _holder;
		if (_classname in ["MeleeHatchet","MeleeCrowbar","MeleeMachete","MeleeFishingPole"]) then {

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
	} else {
		_holder setVariable["claimed","0",true];
		cutText [localize "STR_DAYZ_CODE_2", "PLAIN DOWN"];
		if (_classname == "MeleeCrowbar") then {
			player removeMagazine 'crowbar_swing';
		};
		if (_classname == "MeleeHatchet") then {
			player removeMagazine 'hatchet_swing';
		};
		if (_classname == "MeleeMachete") then {
			player removeMagazine 'Machete_swing';
		};
		if (_classname == "MeleeFishingPole") then {
			player removeMagazine 'Fishing_Swing';
		};
	};
};

sleep 1;
DZE_CanPickup = true;