/* Maintain Area - written by Skaronator */
private ["_player","_ObjArray","_uniqueID","_objects","_key"];
_player = _this select 0;
_option = _this select 1;
/*
1: PVDZE_maintainArea = [player,1,[_target, _objectClasses, _range],_uniqueID];
2: PVDZE_maintainArea = [player,2,[_object],_uniqueID];
*/
_ObjArray = _this select 2;
_uniqueID = _this select 3;

if (_uniqueID in DZEMaintainCache) exitWith { }; //Just do it only one time
DZEMaintainCache = DZEMaintainCache + [_uniqueID];

if (_option == 1) then {
	_objects = nearestObjects _ObjArray;

	{
		_objectID = _x getVariable ["ObjectID","0"];
		//_objectUID = _x getVariable ["ObjectUID","0"];

		_key = format["CHILD:396:%1:", _objectID]; //Use ID instead of UID because ID is shorter
		_key call server_maintainObj;
	} forEach _objects;


	diag_log format ["MAINTAIN AREA BY %1 - %2 Objects at %3", name _player, count _objects, position _player];
};
if (_option == 2) then {
	_objectID = _ObjArray getVariable ["ObjectID","0"];
	_key = format["CHILD:396:%1:", _objectID]; //Use ID instead of UID because ID is shorter
	_key call server_maintainObj;
};