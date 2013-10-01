/*
	DayZ Lock Safe
	Usage: [_obj] spawn player_unlockVault;
	Made for DayZ Epoch please ask permission to use/edit/distrubute email vbawol@veteranbastards.com.
*/
private ["_objectID","_objectUID","_obj","_ownerID","_dir","_pos","_holder","_weapons","_magazines","_backpacks","_objWpnTypes","_objWpnQty","_countr","_alreadyPacking"];

if(TradeInprogress) exitWith { cutText ["Unlock already in progress." , "PLAIN DOWN"]; };
TradeInprogress = true;

// Test cannot lock while another player is nearby
_playerNear = {isPlayer _x} count (player nearEntities ["CAManBase", 6]) > 1;
if(_playerNear) exitWith { TradeInprogress = false; cutText ["Cannot unlock while another player is nearby." , "PLAIN DOWN"];  };

_obj = _this;

_unlockedClass = getText (configFile >> "CfgVehicles" >> (typeOf _obj) >> "unlockedClass");
_text = 		getText (configFile >> "CfgVehicles" >> (typeOf _obj) >> "displayName");

_alreadyPacking = _obj getVariable["packing",0];
_claimedBy = _obj getVariable["claimed","0"];

{player removeAction _x} forEach s_player_combi;s_player_combi = [];
s_player_unlockvault = 1;

// Silently exit if object no longer exists or alive
if(isNull _obj or !(alive _obj)) exitWith { TradeInprogress = false; };

_ownerID = _obj getVariable["CharacterID","0"];

if (_alreadyPacking == 1) exitWith {TradeInprogress = false; cutText [format["That %1 is already being unlocked.",_text], "PLAIN DOWN"]};

// Promt user for password if _ownerID != dayz_playerUID
if ((_ownerID == dayz_combination) or (_ownerID == dayz_playerUID)) then {

	// Check if any players are nearby if not allow player to claim item.
	_playerNear = {isPlayer _x} count (player nearEntities ["CAManBase", 6]) > 1;

	_playerID = getPlayerUID player;
	
	// Only allow if not already claimed.
	if (_claimedBy == "0" or !_playerNear) then {
		// Since item was not claimed proceed with claiming it.
		_obj setVariable["claimed",_playerID,true];
	};
	
	_dir = direction _obj;
	_pos	= _obj getVariable["OEMPos",(getposATL _obj)];
	_objectID 	= _obj getVariable["ObjectID","0"];
	_objectUID	= _obj getVariable["ObjectUID","0"];

	_claimedBy = _obj getVariable["claimed","0"];
	
	if (_claimedBy == _playerID) then {

		if(!isNull _obj and alive _obj) then {

			_obj setVariable["packing",1];

			_weapons = 		_obj getVariable["WeaponCargo",[]];
			_magazines = 	_obj getVariable["MagazineCargo",[]];
			_backpacks = 	_obj getVariable["BackpackCargo",[]];
	
			player playActionNow "Medic";
			sleep 1;
			[player,"tentpack",0,false] call dayz_zombieSpeak;
			sleep 5;

			_holder = createVehicle [_unlockedClass,_pos,[], 0, "CAN_COLLIDE"];
			// Remove locked vault
			deleteVehicle _obj;
			_holder setdir _dir;
			_holder setPosATL _pos;
			player reveal _holder;
	
			_holder setVariable["CharacterID",_ownerID,true];
			_holder setVariable["ObjectID",_objectID,true];
			_holder setVariable["ObjectUID",_objectUID,true];
			_holder setVariable ["OEMPos", _pos, true];

			if (count _weapons > 0) then {
				//Add weapons
				_objWpnTypes = 	_weapons select 0;
				_objWpnQty = 	_weapons select 1;
				_countr = 0;
				{
					_holder addweaponcargoGlobal [_x,(_objWpnQty select _countr)];
					_countr = _countr + 1;
				} forEach _objWpnTypes;
			};
	
			if (count _magazines > 0) then {
				//Add Magazines
				_objWpnTypes = _magazines select 0;
				_objWpnQty = _magazines select 1;
				_countr = 0;
				{
					_holder addmagazinecargoGlobal [_x,(_objWpnQty select _countr)];
					_countr = _countr + 1;
				} forEach _objWpnTypes;
			};

			if (count _backpacks > 0) then {
				//Add Backpacks
				_objWpnTypes = _backpacks select 0;
				_objWpnQty = _backpacks select 1;
				_countr = 0;
				{
					_holder addbackpackcargoGlobal [_x,(_objWpnQty select _countr)];
					_countr = _countr + 1;
				} forEach _objWpnTypes;
			};
	
			cutText [format["%1 has been unlocked.",_text], "PLAIN DOWN"];
		};
	} else {
		TradeInprogress = false; 
		cutText [format[(localize "str_player_beinglooted"),_text] , "PLAIN DOWN"];
	};
} else {
	player playActionNow "Medic";
	sleep 1;
	[player,"repair",0,false] call dayz_zombieSpeak;
	null = [player,25,true,(getPosATL player)] spawn player_alertZombies;
	sleep 5;
	cutText [format["Combination incorrect, %1 is still locked.",_text], "PLAIN DOWN"];
};
s_player_unlockvault = -1;
TradeInprogress = false;