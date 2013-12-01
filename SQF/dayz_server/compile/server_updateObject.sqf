/*
[_object,_type] spawn server_updateObject;
*/
private ["_object","_type","_objectID","_uid","_lastUpdate","_needUpdate","_object_position","_object_inventory","_object_damage","_isNotOk","_parachuteWest","_firstTime","_object_killed","_object_repair","_isbuildable"];

_object = 	_this select 0;

if(isNull(_object)) exitWith {
	diag_log format["Skipping Null Object: %1", _object];
};

_type = 	_this select 1;
_parachuteWest = ((typeOf _object == "ParachuteWest") or (typeOf _object == "ParachuteC"));
_isbuildable = (typeOf _object) in dayz_allowedObjects;
_isNotOk = false;
_firstTime = false;

_objectID =	_object getVariable ["ObjectID","0"];
_uid = 		_object getVariable ["ObjectUID","0"];

if ((typeName _objectID != "string") || (typeName _uid != "string")) then
{ 
    diag_log(format["Non-string Object: ID %1 UID %2", _objectID, _uid]);
    //force fail
    _objectID = "0";
    _uid = "0";
};
if (!_parachuteWest and !(locked _object)) then {
	if (_objectID == "0" && _uid == "0") then
	{
		_object_position = getPosATL _object;
    	_isNotOk = true;
	};
};

// do not update if buildable and not ok
if (_isNotOk and _isbuildable) exitWith {  };

// delete if still not ok
if (_isNotOk) exitWith { deleteVehicle _object; diag_log(format["Deleting object %1 with invalid ID at pos [%2,%3,%4]",typeOf _object,_object_position select 0,_object_position select 1, _object_position select 2]); };


_lastUpdate = _object getVariable ["lastUpdate",time];
_needUpdate = _object in needUpdate_objects;

// TODO ----------------------
_object_position = {
	private["_position","_worldspace","_fuel","_key"];
		_position = getPosATL _object;
		_worldspace = [
			round(direction _object),
			_position
		];
		_fuel = 0;
		if (_object isKindOf "AllVehicles") then {
			_fuel = fuel _object;
		};
		_key = format["CHILD:305:%1:%2:%3:",_objectID,_worldspace,_fuel];
		//diag_log ("HIVE: WRITE: "+ str(_key));
		_key call server_hiveWrite;
};

_object_inventory = {
	private["_inventory","_previous","_key"];
		_inventory = [
			getWeaponCargo _object,
			getMagazineCargo _object,
			getBackpackCargo _object
		];
		_previous = str(_object getVariable["lastInventory",[]]);
		if (str(_inventory) != _previous) then {
			_object setVariable["lastInventory",_inventory];
			if (_objectID == "0") then {
				_key = format["CHILD:309:%1:%2:",_uid,_inventory];
			} else {
				_key = format["CHILD:303:%1:%2:",_objectID,_inventory];
			};
			//diag_log ("HIVE: WRITE: "+ str(_key));
			_key call server_hiveWrite;
		};
};

_object_damage = {
	private["_hitpoints","_array","_hit","_selection","_key","_damage"];
		_hitpoints = _object call vehicle_getHitpoints;
		_damage = damage _object;
		_array = [];
		{
			_hit = [_object,_x] call object_getHit;
			_selection = getText (configFile >> "CfgVehicles" >> (typeOf _object) >> "HitPoints" >> _x >> "name");
			if (_hit > 0) then {_array set [count _array,[_selection,_hit]]};
			_object setHit ["_selection", _hit]
		} forEach _hitpoints;
	
		_key = format["CHILD:306:%1:%2:%3:",_objectID,_array,_damage];
		//diag_log ("HIVE: WRITE: "+ str(_key));
		_key call server_hiveWrite;
	_object setVariable ["needUpdate",false,true];
	};

_object_killed = {
	private["_hitpoints","_array","_hit","_selection","_key","_damage"];
	_hitpoints = _object call vehicle_getHitpoints;
	//_damage = damage _object;
	_damage = 1;
	_array = [];
	{
		_hit = [_object,_x] call object_getHit;
		_selection = getText (configFile >> "CfgVehicles" >> (typeOf _object) >> "HitPoints" >> _x >> "name");
		if (_hit > 0) then {_array set [count _array,[_selection,_hit]]};
		_hit = 1;
		_object setHit ["_selection", _hit]
	} forEach _hitpoints;
	
	if (_objectID == "0") then {
		_key = format["CHILD:306:%1:%2:%3:",_uid,_array,_damage];
	} else {
		_key = format["CHILD:306:%1:%2:%3:",_objectID,_array,_damage];
	};
	//diag_log ("HIVE: WRITE: "+ str(_key));
	_key call server_hiveWrite;
	_object setVariable ["needUpdate",false,true];
};

_object_repair = {
	private["_hitpoints","_array","_hit","_selection","_key","_damage"];
	_hitpoints = _object call vehicle_getHitpoints;
	_damage = damage _object;
	_array = [];
	{
		_hit = [_object,_x] call object_getHit;
		_selection = getText (configFile >> "CfgVehicles" >> (typeOf _object) >> "HitPoints" >> _x >> "name");
		if (_hit > 0) then {_array set [count _array,[_selection,_hit]]};
		_object setHit ["_selection", _hit]
	} forEach _hitpoints;
	
	_key = format["CHILD:306:%1:%2:%3:",_objectID,_array,_damage];
	//diag_log ("HIVE: WRITE: "+ str(_key));
	_key call server_hiveWrite;
	_object setVariable ["needUpdate",false,true];
};
// TODO ----------------------

_object setVariable ["lastUpdate",time,true];
switch (_type) do {
	case "all": {
		call _object_position;
		call _object_inventory;
		call _object_damage;
		};
	case "position": {
		if (!(_object in needUpdate_objects)) then {
			//diag_log format["DEBUG Position: Added to NeedUpdate=%1",_object];
			needUpdate_objects set [count needUpdate_objects, _object];
		};
	};
	case "gear": {
		call _object_inventory;
			};
	case "damage": {
		if ( (time - _lastUpdate) > 5) then {
			call _object_damage;
		} else {
			if (!(_object in needUpdate_objects)) then {
				//diag_log format["DEBUG Damage: Added to NeedUpdate=%1",_object];
				needUpdate_objects set [count needUpdate_objects, _object];
			};
		};
	};
	case "killed": {
		call _object_killed;
	};
	case "repair": {
		call _object_damage;
	};
};
