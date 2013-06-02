private ["_array","_type","_classname","_holder","_config","_isOk","_muzzles","_playerID","_claimedBy","_text","_broken","_playerNear","_obj","_qty"];

// Exit if player zombie
if(player isKindOf "PZombie_VB") exitWith {};

if(TradeInprogress) exitWith { cutText ["Take item already in progress." , "PLAIN DOWN"]; };
TradeInprogress = true;

// Test cannot lock while another player is nearby
_playerNear = {isPlayer _x} count (player nearEntities ["CAManBase", 6]) > 1;
if(_playerNear) exitWith { TradeInprogress = false; cutText ["Cannot take item while another player is nearby." , "PLAIN DOWN"];  };

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

if(_classname isKindOf "TrapBear") exitwith {TradeInprogress = false; deleteVehicle _holder;};

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

_broken = false;
if(_classname == "WoodenArrow") then {
	if (20 > random 100) then {
		_broken = true;
	};
};
if (_broken) exitWith { deleteVehicle _holder; TradeInprogress = false; cutText [localize "str_broken_arrow", "PLAIN DOWN"] };

sleep 1;

_claimedBy = _holder getVariable["claimed","0"];

if (_claimedBy != _playerID) exitWith {TradeInprogress = false; cutText [format[(localize "str_player_beinglooted"),_text] , "PLAIN DOWN"]};

if(_classname isKindOf "Bag_Base_EP1") then {
	diag_log("Picked up a bag: " + _classname);
};

// test to see if item still exists just before adding and removing
if(isNull _holder) exitWith { TradeInprogress = false; };

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
TradeInprogress = false;
