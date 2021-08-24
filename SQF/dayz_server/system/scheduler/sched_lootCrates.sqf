#include "\z\addons\dayz_server\compile\server_toggle_debug.hpp"

// Delete loot crates, graves and crosses after 25 minutes 
sched_lootCrates = {
	private ["_delQtyCrate","_crateTime","_objects","_crates","_graves","_cross"];

	_delQtyCrate = 0;
	#define CENTER getMarkerPos "center"
	#define RADIUS ((getMarkerSize "center") select 1)*2

	_crates = CENTER nearObjects ["DZ_AmmoBoxSmallUS",RADIUS];
	_graves = CENTER nearObjects ["Grave",RADIUS];
	_cross = CENTER nearObjects ["GraveCross1",RADIUS];

	_objects = _crates + _graves + _cross;

	{
		if (_x getVariable ["bury",false]) then {
			_crateTime = _x getVariable ["sched_co_crateTime", -1];
			if (_crateTime == -1) exitWith {
				_crateTime = diag_tickTime;
				_x setVariable ["sched_co_crateTime", _crateTime];
			};
			if (diag_tickTime - _crateTime > 25*60) then {
				_x call sched_co_deleteVehicle;
				_delQtyCrate = _delQtyCrate + 1;
			};
		};
	} forEach _objects;

#ifdef SERVER_DEBUG
	if (_delQtyCrate> 0) then {
		diag_log format ["%1: Deleted %2 bury/butcher objects.",__FILE__,_delQtyCrate];
	};
#endif

	objNull
};