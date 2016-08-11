private ["_player","_obj","_objectID","_objectUID","_statusText","_puid","_status","_clientID","_type","_lockedClass","_unlockedClass","_packedClass",
"_name","_pos","_dir","_vector","_charID","_ownerID","_weapons","_magazines","_backpacks","_holder"];

_player = _this select 0;
_obj = _this select 1;
_status = _this select 2;
_name = if (alive _player) then {name _player} else {"Dead Player"};

_type = typeOf _obj;
_pos = _obj getVariable ["OEMPos",getPosATL _obj];
_dir = direction _obj;
_vector = [vectorDir _obj, vectorUp _obj];
_charID = _obj getVariable ["CharacterID","0"];
_objectID = _obj getVariable ["ObjectID","0"];
_objectUID = _obj getVariable ["ObjectUID","0"];
_ownerID = _obj getVariable ["ownerPUID","0"];

// Player may have disconnected or died before message send. Attempt lock/unlock/pack/save procedure anyway
if (isNull _player) then {diag_log "ERROR: server_handleSafeGear called with Null player object";};

_clientID = owner _player;
_puid = [_player] call FNC_GetPlayerUID;

_statusText = switch (_status) do {
	case 0: {"UNLOCKED"};
	case 1: {"LOCKED"};
	case 2: {"PACKED"};
};

if (isNull _obj) exitWith {
	diag_log format["ERROR: server_handleSafeGear called with Null safe object by %1(%2). %3 attempt failed.",_name,_puid,_statusText];
	dze_waiting = "fail";
	_clientID publicVariableClient "dze_waiting";
};

switch (_status) do {
	case 0: { //Unlocking
		_unlockedClass = getText (configFile >> "CfgVehicles" >> _type >> "unlockedClass");
		_weapons = _obj getVariable ["WeaponCargo",[]];
		_magazines = _obj getVariable ["MagazineCargo",[]];
		_backpacks = _obj getVariable ["BackpackCargo",[]];
		
		// Create new unlocked safe, then delete old locked safe
		_holder = createVehicle [_unlockedClass,_pos,[],0,"CAN_COLLIDE"];
		_holder setDir _dir;
		_holder setVariable ["memDir",_dir,true];
		_holder setVectorDirAndUp _vector;
		_holder setPosATL _pos;
		_holder setVariable ["CharacterID",_charID,true];
		_holder setVariable ["ObjectID",_objectID,true];
		_holder setVariable ["ObjectUID",_objectUID,true];
		_holder setVariable ["OEMPos",_pos,true];
		if (DZE_permanentPlot) then {_holder setVariable ["ownerPUID",_ownerID,true];};
		deleteVehicle _obj;
		
		[_weapons,_magazines,_backpacks,_holder] call server_addCargo;
	};
	case 1: { //Locking
		_lockedClass = getText (configFile >> "CfgVehicles" >> _type >> "lockedClass");
	
		// Save to database (also happens if a player is within 10m in server_playerSync and server_onPlayerDisconnect)
		[_obj,"gear"] call server_updateObject;
		_weapons = getWeaponCargo _obj;
		_magazines = getMagazineCargo _obj;
		_backpacks = getBackpackCargo _obj;
		
		// Create new locked safe, then delete old unlocked safe
		_holder = createVehicle [_lockedClass,_pos,[],0,"CAN_COLLIDE"];
		_holder setDir _dir;
		_holder setVariable ["memDir",_dir,true];
		_holder setVectorDirAndUp _vector;
		_holder setPosATL _pos;
		_holder setVariable ["CharacterID",_charID,true];
		_holder setVariable ["ObjectID",_objectID,true];
		_holder setVariable ["ObjectUID",_objectUID,true];
		_holder setVariable ["OEMPos",_pos,true];
		if (DZE_permanentPlot) then {_holder setVariable ["ownerPUID",_ownerID,true];};		
		deleteVehicle _obj;
		
		// Local setVariable gear onto new locked safe for easy access on next unlock
		// Do not send big arrays over network! Only server needs these
		_holder setVariable ["WeaponCargo",_weapons,false];
		_holder setVariable ["MagazineCargo",_magazines,false];
		_holder setVariable ["BackpackCargo",_backpacks,false];
	};
	case 2: { //Packing
		_packedClass = getText (configFile >> "CfgVehicles" >> _type >> "packedClass");		
		_weapons = getWeaponCargo _obj;
		_magazines = getMagazineCargo _obj;
		_backpacks = getBackpackCargo _obj;
		
		_holder = createVehicle [_packedClass,_pos,[],0,"CAN_COLLIDE"];
		deleteVehicle _obj;
		_holder setDir _dir;
		_holder setPosATL _pos;
		_holder addMagazineCargoGlobal [getText(configFile >> "CfgVehicles" >> _packedClass >> "seedItem"),1];
		[_weapons,_magazines,_backpacks,_holder] call server_addCargo;
		
		// Delete safe from database
		[_objectID,_objectUID,_player] call server_deleteObj;
	};
};

diag_log format["%6 %5: ID:%1 CID:%7 UID:%2 BY %3(%4)",_objectID,_objectUID,_name,_puid,_statusText,_type,_charID];
dze_waiting = "success";
_clientID publicVariableClient "dze_waiting";