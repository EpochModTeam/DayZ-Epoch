/* Block local script execution bug. Still not fixed in A20A as of 1.63.131129 */
inGameUISetEventHandler ["PrevAction","false"];
inGameUISetEventHandler ["NextAction","false"];
inGameUISetEventHandler ["Action","false"];

// (c) facoptere@gmail.com, licensed to DayZMod for the community
//
// check that plants libs are properly loaded
// thanks to Tansien the great
// run only once per character life
{
	_plant = _x createVehicleLocal (getMarkerPos "center");
	uiSleep 0.1;
	if (sizeOf _x == 0) exitWith { 
		PVDZ_sec_atp = toArray ("Plants texture hack for type " + _x);
		publicVariableServer "PVDZ_sec_atp";
		endMission "LOSER";
	};
	deleteVehicle _plant;
} count ["grass","prunus","picea","fallentree","phragmites","acer","amygdalusn","Brush","fiberplant","amygdalusc","boulder"];

diag_log format ["%1: Plants libs tests done!",__FILE__];