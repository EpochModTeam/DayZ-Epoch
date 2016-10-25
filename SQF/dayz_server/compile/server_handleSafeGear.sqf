private ["_backpacks","_charID","_clientID","_dir","_holder","_lockCode","_lockColor","_lockedClass","_magazines","_name","_obj","_objectID","_objectUID","_ownerID","_packedClass","_player","_playerUID","_pos","_status","_statusText","_type","_unlockedClass","_vector","_weapons"];

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
_lockCode = "0";

// Player may have disconnected or died before message send. Attempt lock/unlock/pack/save procedure anyway
if (isNull _player) then {diag_log "ERROR: server_handleSafeGear called with Null player object";};

_clientID = owner _player;
_playerUID = getPlayerUID _player;

_statusText = switch (_status) do {
	case 0: {"UNLOCKED"};
	case 1: {"LOCKED"};
	case 2: {"PACKED"};
};

if (isNull _obj) exitWith {
	diag_log format["ERROR: server_handleSafeGear called with Null safe object by %1(%2). %3 attempt failed.",_name,_playerUID,_statusText];
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
		//_holder = createVehicle [_unlockedClass,_pos,[],0,"CAN_COLLIDE"];
		_holder = _unlockedClass createVehicle [0,0,0];
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
		//_holder = createVehicle [_lockedClass,_pos,[],0,"CAN_COLLIDE"];
		_holder = _lockedClass createVehicle [0,0,0];
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
		
		//_holder = createVehicle [_packedClass,_pos,[],0,"CAN_COLLIDE"];
		_holder = _packedClass createVehicle [0,0,0];
		deleteVehicle _obj;
		_holder setDir _dir;
		_holder setPosATL _pos;
		_holder addMagazineCargoGlobal [getText(configFile >> "CfgVehicles" >> _packedClass >> "seedItem"),1];
		[_weapons,_magazines,_backpacks,_holder] call server_addCargo;
		
		// Delete safe from database
		[_objectID,_objectUID,_player] call server_deleteObj;
	};
};

_type = switch _type do {
    case "VaultStorage";
    case "VaultStorageLocked": {
		_lockCode = _charID;
		"Safe"
	};
    case "LockboxStorage";
    case "LockboxStorageLocked": {
		_lockColor = "";
		_lockCode =  parseNumber _charID;
		_lockCode = _lockCode - 10000;
		if (_lockCode <= 99) then { _lockColor = "Red"; };
		if (_lockCode >= 100 && _lockCode <= 199) then { _lockColor = "Green"; _lockCode = _lockCode - 100; };
		if (_lockCode >= 200) then { _lockColor = "Blue"; _lockCode = _lockCode - 200; };
		if (_lockCode <= 9) then { _lockCode = format["0%1", _lockCode]; };
		_lockCode = format ["%1%2",_lockColor,_lockCode];
		"LockBox"
	};
};

diag_log format["%1 (%2) %3 %4 with code: %5 @%6 (%7)",_name,_playerUID,_statusText,_type,_lockCode,mapGridPosition _pos,_pos];

dze_waiting = "success";
_clientID publicVariableClient "dze_waiting";
