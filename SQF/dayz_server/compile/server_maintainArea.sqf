/* Maintain Area - written by Skaronator 
How to use: PVDZE_maintainArea = [player,[_target, _objectClasses, _range]];
*/
private ["_player","_area","_uniqueID","_objects","_key"];
_player = _this select 0;
_area = _this select 1;
_uniqueID = _this select 2;

if (_uniqueID in DZEMaintainCache) exitWith { }; //Just do it only one time

DZEMaintainCache = DZEMaintainCache + [_uniqueID];

_objects = nearestObjects _area;

{
	_objectID = _x getVariable ["ObjectID","0"];
	//_objectUID = _x getVariable ["ObjectUID","0"];

	_key = format["CHILD:396:%1:", _objectID]; //Use ID instead of UID because ID is shorter
	_key call server_maintainObj;
} forEach _objects;


diag_log format ["MAINTAIN AREA BY %1 - %2 Objects at %3", name _player, count _objects, position _player];