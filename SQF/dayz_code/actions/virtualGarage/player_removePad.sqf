// Written by salival (https://github.com/oiad)

closeDialog 0;

local _plotCheck = [player, false] call FNC_find_plots;
local _hasAccess = [player,_plotCheck select 2] call FNC_check_access;

if ((_hasAccess select 0) or (_hasAccess select 2) or (_hasAccess select 3) or (_hasAccess select 4)) then {
	
	{
		PVDZ_obj_Destroy = [netID player,netID _x,dayz_authKey];
		publicVariableServer "PVDZ_obj_Destroy";

		systemChat format[localize "STR_CL_VG_HELIPAD_REMOVED",typeOf _x];
	} count (nearestObjects [_plotCheck select 2,vg_heliPads,Z_VehicleDistance]);
} else {
	systemChat localize "STR_EPOCH_PLAYER_134";
};
