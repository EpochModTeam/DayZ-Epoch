sched_traps = {
	private ["_n","_x"];
	// EVERY 5 SECONDS
	// CHECK TRAPS STATE
	if (!isNil "dayz_traps") then {
		_n = 0;
		{
			if ((isNil "_x") OR {(isNull _x)}) then {
				dayz_traps = dayz_traps - [_x];
			}
			else {
				if (_x getVariable ["armed", false]) then {
					if !(_x in dayz_traps_active) then {
						["arm", _x] call compile getText (configFile >> "CfgVehicles" >> typeOf _x >> "script");
						if !(_x in dayz_traps_active) then { dayz_traps_active set [ count dayz_traps_active, _x ]; };
						_n = _n + 1;
					};
				} else {
					if (_x in dayz_traps_active) then {
						["disarm", _x] call compile getText (configFile >> "CfgVehicles" >> typeOf _x >> "script");
						if (_x in dayz_traps_active) then { dayz_traps_active = dayz_traps_active - [_x]; };
						_n = _n + 1;
					};
				};
			};
		} forEach dayz_traps;
		if (_n > 0) then {
			diag_log format ["%1: traps polling, changed %2 states", __FILE__, _n];
		};
	};

	objNull
};