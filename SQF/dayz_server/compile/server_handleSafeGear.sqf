private ["_backpacks","_charID","_clientID","_dir","_holder","_lockCode","_lockedClass","_magazines","_name","_obj","_objectID","_objectUID","_ownerID","_packedClass","_player","_playerUID","_pos","_status","_statusText","_type","_unlockedClass","_vector","_weapons","_message","_suppliedCode"];

_player = _this select 0;
_obj = _this select 1;
_status = _this select 2;

_name = ["Dead Player",name _player] select (alive _player);
_type = typeOf _obj;
_pos = _obj getVariable ["OEMPos",getPosATL _obj];
_dir = direction _obj;
_vector = [vectorDir _obj, vectorUp _obj];
_charID = _obj getVariable ["CharacterID","0"];
_objectID = _obj getVariable ["ObjectID","0"];
_objectUID = _obj getVariable ["ObjectUID","0"];
_ownerID = _obj getVariable ["ownerPUID","0"];
_lockCode = _charID;

if (count _this > 3) then {
	_suppliedCode = _this select 3;
	if (_status != 3 && {_status != 6}) then {_lockCode = _suppliedCode;};
};

// Player may have disconnected or died before message send. Attempt lock/unlock/pack/save procedure anyway
if (isNull _player) then {diag_log "ERROR: server_handleSafeGear called with Null player object";};

_clientID = owner _player;
_playerUID = getPlayerUID _player;

_statusText = call {
	if (_status == 0) exitwith {"UNLOCKED"}; // unlock safe/lockbox
	if (_status == 1) exitwith {"LOCKED"}; // lock safe/lockbox
	if (_status == 5) exitwith {"UNLOCKED"}; // unlock door
	if (_status == 4) exitwith {"LOCKED"}; // lock door
	if (_status == 3) exitwith {"FAILED unlocking"}; // failed unlock safe/lockbox
	if (_status == 6) exitwith {"FAILED unlocking"}; // failed unlocking door
	if (_status == 2) exitwith {"PACKED"}; // pack safe/lockbox
};

if (isNull _obj) exitWith {
	diag_log format["ERROR: server_handleSafeGear called with Null object by %1 (%2). %3 attempt failed.",_name,_playerUID,_statusText];
	if (_status < 3) then {
		dze_waiting = "fail";
		_clientID publicVariableClient "dze_waiting";
	};
};

call {
	if (_status == 0) exitwith { //Unlocking
		_unlockedClass = getText (configFile >> "CfgVehicles" >> _type >> "unlockedClass");
		_weapons = _obj getVariable ["WeaponCargo",[]];
		_magazines = _obj getVariable ["MagazineCargo",[]];
		_backpacks = _obj getVariable ["BackpackCargo",[]];

		// Create new unlocked safe, then delete old locked safe
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

		[_weapons,_magazines,_backpacks,_holder] call fn_addCargo;
	};
	if (_status == 1) exitwith { //Locking
		_lockedClass = getText (configFile >> "CfgVehicles" >> _type >> "lockedClass");

		// Save to database (also happens if a player is within 10m in server_playerSync and server_onPlayerDisconnect)
		[_obj,"gear"] call server_updateObject;
		_weapons = getWeaponCargo _obj;
		_magazines = getMagazineCargo _obj;
		_backpacks = getBackpackCargo _obj;

		// Create new locked safe, then delete old unlocked safe
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
	if (_status == 2) exitwith { //Packing
		_packedClass = getText (configFile >> "CfgVehicles" >> _type >> "packedClass");
		if (_packedClass == "") exitWith {diag_log format["Server_HandleSafeGear Error: invalid object type: %1",_type];};
		_weapons = getWeaponCargo _obj;
		_magazines = getMagazineCargo _obj;
		_backpacks = getBackpackCargo _obj;

		_holder = _packedClass createVehicle [0,0,0];
		deleteVehicle _obj;
		_holder setDir _dir;
		_holder setPosATL _pos;
		_holder addMagazineCargoGlobal [getText(configFile >> "CfgVehicles" >> _packedClass >> "seedItem"),1];
		[_weapons,_magazines,_backpacks,_holder] call fn_addCargo;

		// Delete safe from database
		[_objectID,_objectUID,_obj] call server_deleteObjDirect;
	};
};

if (_status < 4) then {
	_type = call {
		if (_type == "VaultStorageLocked" || {_type == "VaultStorage"}) exitwith {
			"Safe"
		};
		if (_type == "LockboxStorage") exitwith {
			"LockBox"
		};
		if (_type == "LockboxStorageLocked") exitwith {
			_lockCode = _charID call fnc_lockCode;
			if (_status == 3) then {_suppliedCode = _suppliedCode call fnc_lockCode;};
			"LockBox"
		};
	};
};

if (_statusText == "FAILED unlocking") then {
	_message = format["%1 (%2) %3 %4 with code: %5 (actual: %8) @%6 %7",_name,_playerUID,_statusText,_type,_suppliedCode,mapGridPosition _pos,_pos,_lockCode];
} else {
	_message = format["%1 (%2) %3 %4 with code: %5 @%6 %7",_name,_playerUID,_statusText,_type,_lockCode,mapGridPosition _pos,_pos];
};

diag_log _message;
if (_status < 3) then {
	dze_waiting = "success";
	_clientID publicVariableClient "dze_waiting";
};
