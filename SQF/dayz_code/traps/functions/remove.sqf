private ["_obj","_objectID","_objectUID"];

_obj = _this select 0;
_objectID = _obj getVariable ["ObjectID","0"];
_objectUID = _obj getVariable ["ObjectUID","0"];

if (isServer) then {
	[_objectID,_objectUID,"__SERVER__"] call server_deleteObj;
} else {
	[nil,nil,nil,_obj] execVM "\z\addons\dayz_code\actions\remove.sqf";
};