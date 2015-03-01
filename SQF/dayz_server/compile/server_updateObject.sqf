/*
	USAGE:
	[_object, _type] spawn server_updateObject;
*/

private ["_object","_type","_objectID","_uid","_lastUpdate","_needUpdate","_object_position","_object_inventory","_object_damage","_isNotOk","_parachuteWest","_firstTime","_object_killed","_object_repair","_isbuildable"];

_object = _this select 0;

if (isNull _object) exitWith {
	diag_log format ["Skipping Null Object: %1", _object];
};

_type = _this select 1;
_parachuteWest = (typeOf _object) in ["ParachuteWest","ParachuteC"];
_isbuildable = (typeOf _object) in dayz_allowedObjects;
_isNotOk = false;
_firstTime = false;

_objectID =	_object getVariable ["ObjectID","0"];
_uid = 		_object getVariable ["ObjectUID","0"];

if (typeName _objectID != "STRING" || typeName _uid != "STRING") then {
    diag_log format ["Non-string Object: ID %1 UID %2", _objectID, _uid];
    _objectID = "0";
    _uid = "0";
};

if (!_parachuteWest && !locked _object) then {
	if (_objectID == "0" && _uid == "0") then {
		_object_position = getPosATL _object;
    		_isNotOk = true;
	};
};

if (_isNotOk && _isbuildable) exitWith {};
if (_isNotOk) exitWith {
	deleteVehicle _object;
	diag_log format ["Deleting object %1 with invalid ID at pos [%2,%3,%4]", typeOf _object, _object_position select 0, _object_position select 1, _object_position select 2];
};

_lastUpdate = _object getVariable ["lastUpdate", time];
_needUpdate = _object in needUpdate_objects;

_object_position = {
	private ["_position","_worldspace","_fuel","_key"];
	_position = getPosATL _object;
	_worldspace = [
		round (getDir _object),
		_position
	];
	_fuel = if (_object isKindOf "AllVehicles") then { fuel _object } else { 0 };
	_key = format ["CHILD:305:%1:%2:%3:", _objectID, _worldspace, _fuel];
	_key call server_hiveWrite;
};

_object_inventory = {
	private["_inventory","_previous","_key"];
	_inventory = [
		getWeaponCargo _object,
		getMagazineCargo _object,
		getBackpackCargo _object
	];
	_previous = str (_object getVariable ["lastInventory", []]);
	if (str _inventory != _previous) then {
		_object setVariable ["lastInventory", _inventory];
		_key = if (_objectID == "0") then { format ["CHILD:309:%1:", _uid] + str _inventory + ":" } else { format ["CHILD:303:%1:", _objectID] + str _inventory + ":" };
		_key call server_hiveWrite;
	};
};

_object_damage = {
	private ["_hitpoints","_array","_hit","_selection","_key","_damage"];
	_hitpoints = _object call vehicle_getHitpoints;
	_damage = damage _object;

	_array = [];
	{
		_hit = [_object, _x] call object_getHit;
		_selection = getText (configFile >> "CfgVehicles" >> typeOf _object >> "HitPoints" >> _x >> "name");
		if (_hit > 0) then {
			_array set [count _array, [_selection,_hit]];
		};
		_object setHit [_selection, _hit];
	} count _hitpoints;

	_key = "CHILD:306:" + _objectID + ":" + str _array + ":" + str _damage + ":";
	_key call server_hiveWrite;
	_object setVariable ["needUpdate", false, true];
};

_object_killed = {
	private ["_hitpoints","_array","_hit","_PUID","_selection","_key","_damage"];
	_hitpoints = _object call vehicle_getHitpoints;
	_damage = 1;

	_array = [];
	{
		_hit = [_object, _x] call object_getHit;
		_selection = getText (configFile >> "CfgVehicles" >> typeOf _object >> "HitPoints" >> _x >> "name");
		if (_hit > 0) then {
			_array set [count _array, [_selection, _hit]];
		};
		_object setHit [_selection, 1];
	} count _hitpoints;

	_key = "CHILD:306:" + _objectID + ":" + str _array + ":" + str _damage + ":";
	_key call server_hiveWrite;

	_object setVariable ["needUpdate", false, true];

	if (count _this > 2) then {
		_killer = _this select 2;
		_charID = _object getVariable ["CharacterID", "0"];
		_objID 	= _object getVariable ["ObjectID", "0"];
		_objUID	= _object getVariable ["ObjectUID", "0"];
		_worldSpace = getPosATL _object;
		_PUID = [_killer] call FNC_GetPlayerUID;
		if (_PUID != "") then {
			_name = if (alive _killer) then { name _killer } else { format["OBJECT %1", _killer] };
			diag_log format ["Vehicle killed: Vehicle %1 (TYPE: %2), CharacterID: %3, ObjectID: %4, ObjectUID: %5, Position: %6, Killer: %7 (UID: %8)", _object, typeOf _object, _charID, _objID, _objUID, _worldSpace, _name, _PUID];
		} else {
			diag_log format ["Vehicle killed: Vehicle %1 (TYPE: %2), CharacterID: %3, ObjectID: %4, ObjectUID: %5, Position: %6", _object, typeOf _object, _charID, _objID, _objUID, _worldSpace];
		};
	};
};

_object_repair = {
	private ["_hitpoints","_array","_hit","_selection","_key","_damage"];
	_hitpoints = _object call vehicle_getHitpoints;
	_damage = damage _object;

	_array = [];
	{
		_hit = [_object,_x] call object_getHit;
		_selection = getText (configFile >> "CfgVehicles" >> (typeOf _object) >> "HitPoints" >> _x >> "name");
		if (_hit > 0) then {
			_array set [count _array, [_selection, _hit]];
		};
		_object setHit [_selection, _hit];
	} count _hitpoints;

	_key = "CHILD:306:" + _objectID + ":" + str _array + ":" + str _damage + ":";
	_key call server_hiveWrite;
	_object setVariable ["needUpdate", false, true];
};

_object setVariable ["lastUpdate", time, true];

if (_type == "all") exitWith {
	call _object_position;
	call _object_inventory;
	call _object_damage;
};

if (_type == "position") exitWith {
	if !(_object in needUpdate_objects) then {
		needUpdate_objects set [count needUpdate_objects, _object];
	};
};

if (_type == "gear") exitWith {
	call _object_inventory;
};

if (_type == "damage") exitWith {
	if (time - _lastUpdate > 5) then {
		call _object_damage;
	} else {
		if !(_object in needUpdate_objects) then {
			needUpdate_objects set [count needUpdate_objects, _object];
		};
	};
};

if (_type == "killed") exitWith {
	call _object_killed;
};

if (_type == "repair") exitWith {
	call _object_damage;
};
