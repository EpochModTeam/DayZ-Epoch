/*
	This scheduled task checks for changes in the number of bear traps set by players.
	It is set to run every 30 seconds by default in sched_init.
	For each of the traps, it gets the "armed" variable and calls the appropriate script
	to arm or disarm the bear trap. Lazy eval has been added so that the function evaluates
	quickly. Bear traps are not a popular feature in DayZ Epoch.
*/

sched_traps_init = {
	//diag_log("Bear Trap Monitor Started");
	[str dayz_traps,str dayz_traps_active,str dayz_traps_trigger]
};

sched_traps = {
	private ["_array","_array2","_array3","_script","_armed"];
	_array = _this select 0;
	_array2 = _this select 1;
	_array3 = _this select 2;
	
	if ((str dayz_traps != _array) || {str dayz_traps_active != _array2} || {str dayz_traps_trigger != _array3}) then {
		_array = str dayz_traps;
		_array2 = str dayz_traps_active;
		_array3 = str dayz_traps_trigger;
		//diag_log "DEBUG: traps";
		//diag_log format["dayz_traps (%2) -> %1", dayz_traps, count dayz_traps];
		//diag_log format["dayz_traps_active (%2) -> %1", dayz_traps_active, count dayz_traps_active];
		//diag_log format["dayz_traps_trigger (%2) -> %1", dayz_traps_trigger, count dayz_traps_trigger];
		//diag_log "DEBUG: end traps";
	};
	
	{
		if (isNull _x) then {
			dayz_traps = dayz_traps - [_x];
			_armed = false;
			_script = {};
		} else {
			_armed = _x getVariable ["armed", false];
			_script = call compile getText (configFile >> "CfgVehicles" >> typeOf _x >> "script");
		};
		
		if (_armed) then {
			if !(_x in dayz_traps_active) then {["arm", _x] call _script;};
		} else {
			if (_x in dayz_traps_active) then {["disarm", _x] call _script;};
		};
	} forEach dayz_traps;
		
	[_array,_array2,_array3]
};
