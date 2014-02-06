/*
	DayZ Lock Safe
	Usage: [_obj] spawn player_unlockVault;
	Made for DayZ Epoch please ask permission to use/edit/distrubute email vbawol@veteranbastards.com.
*/
private ["_objectID","_objectUID","_obj","_ownerID","_charID","_dir","_pos","_holder","_weapons","_magazines","_backpacks","_objWpnTypes","_objWpnQty","_countr","_alreadyPacking","_playerNear","_playerID","_claimedBy","_unlockedClass","_text","_nul","_objType"];

if(DZE_ActionInProgress) exitWith { cutText [(localize "str_epoch_player_21") , "PLAIN DOWN"]; };
DZE_ActionInProgress = true;

{player removeAction _x} forEach s_player_combi;s_player_combi = [];
s_player_unlockvault = 1;

_obj = _this;
_objType = typeOf _obj;

if (!(_objType in DZE_LockedStorage)) exitWith {
	s_player_unlockvault = -1;
	DZE_ActionInProgress = false;
};

_playerNear = _obj call dze_isnearest_player;
if(_playerNear) exitWith { DZE_ActionInProgress = false; cutText [(localize "str_epoch_player_20") , "PLAIN DOWN"];  };

// Silently exit if object no longer exists or alive
if(isNull _obj or !(alive _obj)) exitWith { DZE_ActionInProgress = false; };

_unlockedClass = getText (configFile >> "CfgVehicles" >> _objType >> "unlockedClass");
_text = 		getText (configFile >> "CfgVehicles" >> _objType >> "displayName");

_alreadyPacking = _obj getVariable["packing",0];
_claimedBy = _obj getVariable["claimed","0"];
_charID = _obj getVariable["CharacterID","0"];

if ((typeName _charID) == "ARRAY") then {
	_ownerID = _charID select 0;
} else {
	_ownerID = _charID;
};

if (_alreadyPacking == 1) exitWith {DZE_ActionInProgress = false; cutText [format[(localize "str_epoch_player_124"),_text], "PLAIN DOWN"]};

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
			[1,1] call dayz_HungerThirst;
			player playActionNow "Medic";
			sleep 1;
			[player,"tentpack",0,false] call dayz_zombieSpeak;
			sleep 5;

			PVDZE_obj_getlocalVars = [player, _obj, ["WeaponCargo", "MagazineCargo", "BackpackCargo"]];
			publicVariableServer "PVDZE_obj_getlocalVars";
			
			PVDZE_localVarsResult = nil;
			waitUntil {sleep 1; !isNil "PVDZE_localVarsResult"};

			_weapons = if (typeName (PVDZE_localVarsResult select 0) == "ARRAY") then { (PVDZE_localVarsResult select 0) } else { [] };
			_magazines = if (typeName (PVDZE_localVarsResult select 1) == "ARRAY") then { (PVDZE_localVarsResult select 1) } else { [] };
			_backpacks = if (typeName (PVDZE_localVarsResult select 2) == "ARRAY") then { (PVDZE_localVarsResult select 2) } else { [] };

			_holder = createVehicle [_unlockedClass,_pos,[], 0, "CAN_COLLIDE"];
			if ((isNull _holder) or (isNil "_holder")) then {
				_holder = createVehicle [_unlockedClass,_pos,[], 0, "CAN_COLLIDE"];
			};
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
	
			cutText [format[(localize "str_epoch_player_125"),_text], "PLAIN DOWN"];
		};
	} else {
		DZE_ActionInProgress = false; 
		cutText [format[(localize "str_player_beinglooted"),_text] , "PLAIN DOWN"];
	};
} else {
	[10,10] call dayz_HungerThirst;
	player playActionNow "Medic";
	sleep 1;
	[player,"repair",0,false] call dayz_zombieSpeak;
	[player,25,true,(getPosATL player)] spawn player_alertZombies;
	sleep 5;
	cutText [format[(localize "str_epoch_player_126"),_text], "PLAIN DOWN"];
};
s_player_unlockvault = -1;
DZE_ActionInProgress = false;