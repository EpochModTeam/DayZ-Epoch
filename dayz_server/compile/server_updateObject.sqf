/*
[_object,_type] spawn server_updateObject;
*/
private["_object","_type","_objectID","_uid","_lastUpdate","_needUpdate"];

_object = 	_this select 0;
_type = 	_this select 1;

_objectID =	_object getVariable ["ObjectID","0"];
_uid = 		_object getVariable ["ObjectUID","0"];
if (_objectID == "0" && _uid == "0") then { _uid = _object call dayz_objectUID; }; //seems never been call

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
		diag_log ("HIVE: WRITE: "+ str(_key));
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
			diag_log ("HIVE: WRITE: "+ str(_key));
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
		} forEach _hitpoints;
		_key = format["CHILD:306:%1:%2:%3:",_objectID,_array,_damage];
		diag_log ("HIVE: WRITE: "+ str(_key));
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
		call _object_position;
	};
	case "gear": {
		call _object_inventory;
			};
	case "damage": {
		if ( (time - _lastUpdate) > 5 && !_needUpdate ) then {
			call _object_damage;
		} else {
			if ( !_needUpdate ) then {
				needUpdate_objects set [count needUpdate_objects, _object];
		};
	};
	};
	case "repair": {
		call _object_damage;
	};
};