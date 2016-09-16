/*
	Fixes swimming in ground after spawn, change clothes or relog
	on maps with respawn_west position in water.
*/

private ["_debug","_floor"];

_debug = getMarkerPos "respawn_west";

if (surfaceIsWater _debug) then {
	_debug set [2,0.1];
	_floor = "MetalFloor_DZ" createVehicleLocal [0,0,0];
	_floor setPosASL _debug;
	_floor allowDamage false;
	_floor enableSimulation false;
	_floor setVariable ["",true,false]; // stops global setVariable by sched_townGenerator, checked in player_spawnCheck for loot spawn
};