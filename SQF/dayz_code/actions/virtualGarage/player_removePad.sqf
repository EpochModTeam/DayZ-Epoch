// Written by salival (https://github.com/oiad)

private ["_hasAccess","_objectID","_objectUID","_plotCheck"];

closeDialog 0;

_plotCheck = [player, false] call FNC_find_plots;
_hasAccess = [player,_plotCheck select 2] call FNC_check_access;

if ((_hasAccess select 0) or (_hasAccess select 2) or (_hasAccess select 3) or (_hasAccess select 4)) then {
	
	{
		_objectID = _x getVariable ["ObjectID","0"];
		_objectUID = _x getVariable ["ObjectUID","0"];

		PVDZ_obj_Destroy = [_objectID,_objectUID,player,_x,dayz_authKey];
		publicVariableServer "PVDZ_obj_Destroy";

		deleteVehicle _x;
		systemChat format[localize "STR_CL_VG_HELIPAD_REMOVED",typeOf _x];
	} count (nearestObjects [_plotCheck select 2,vg_heliPads,Z_VehicleDistance]);
} else {
	systemChat localize "STR_EPOCH_PLAYER_134";
};
