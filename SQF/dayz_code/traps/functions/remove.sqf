private ["_obj","_objectID","_objectUID"];

_obj = _this select 0;
_objectID = _obj getVariable ["ObjectID","0"];
_objectUID = _obj getVariable ["ObjectUID","0"];

if (isServer) then {
	[_objectID,_objectUID,"__SERVER__"] call server_deleteObj;
} else {
	if (count _this == 2) then {
		//single use trap triggered, remove with no animation
		//For normal remove let object_pickup.sqf perform deletion to ensure player has room in gear first, no others remove at same time and animation runs
		PVDZ_obj_Destroy = [_objectID,_objectUID,player];
		publicVariableServer "PVDZ_obj_Destroy";
		deleteVehicle _obj;
	};
};