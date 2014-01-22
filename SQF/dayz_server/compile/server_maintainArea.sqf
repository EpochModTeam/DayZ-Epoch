/* Maintain Area - written by Skaronator */
private ["_player","_ObjArray","_uniqueID","_objects","_key"];
_player = _this select 0;
_option = _this select 1;
/*
1: PVDZE_maintainArea = [player,1,_target];
2: PVDZE_maintainArea = [player,2,_object];
*/
_targetObj = _this select 2;

if (_option == 1) then {
	_objects = nearestObjects [_targetObj, DZE_maintainClasses, DZE_maintainRange];
	{
		if (damage _x >= 0.1) then {
			// repair object also removes maintain option
			_x setDamage 0;
			_objectID = _x getVariable ["ObjectID","0"];
			if (_objectID == "0") then {
				_objectUID = _x getVariable ["ObjectUID","0"];
				if (_objectUID != "0") then {
					_key = format["CHILD:397:%1:", _objectUID]; // use UID if not "0" and ID is "0"
					_key call server_maintainObj;
				};
			} else {
				_key = format["CHILD:396:%1:", _objectID]; //Use ID instead of UID because ID is shorter
				_key call server_maintainObj;
			};
		};
	} forEach _objects;

	diag_log format ["MAINTAIN AREA BY %1 - %2 Objects at %3", name _player, count _objects, position _player];
};
if (_option == 2) then {
	if (damage _targetObj >= 0.1) then {
		_objectID = _targetObj getVariable ["ObjectID","0"];
		if (_objectID == "0") then {
			_objectUID = _targetObj getVariable ["ObjectUID","0"];
			if (_objectUID != "0") then {
				_key = format["CHILD:397:%1:", _objectUID]; // use UID if not "0" and ID is "0"
				_key call server_maintainObj;
			};
		} else {
			_key = format["CHILD:396:%1:", _objectID]; //Use ID instead of UID because ID is shorter
			_key call server_maintainObj;
		};
	};
};