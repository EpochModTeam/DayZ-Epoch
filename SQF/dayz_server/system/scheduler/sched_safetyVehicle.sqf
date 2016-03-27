
sched_safetyVehicle = {
	{
		if (vehicle _x != _x && !(vehicle _x in dayz_serverObjectMonitor) && !((typeOf vehicle _x) in DZE_safeVehicle)) then {
			diag_log [ __FILE__, "KILLING A HACKER", name _x, " IN ", typeOf vehicle _x ];
			(vehicle _x) setDamage 1;
			_x setDamage 1;
		};
	} forEach allUnits;

	objNull
};
