/*
	Add POI objects locally on every machine early.
	Do not use execVM. This must be unscheduled to finish before player_monitor.fsm and server_monitor.sqf run. (objects or player spawn on top)
*/

{
	call compile preprocessFileLineNumbers ("\z\addons\dayz_code\system\mission\chernarus\poi\" + _x + ".sqf");
} forEach [
	//"Twains", //Filled with Server sleeps, removed for now
	"DevilsFarm",
	"NEA",
	"C130Crash",
	"ChernoBuildings",
	"DeadForest",
	"KomyshovoRoadblock",
	"MilitaryAirpoort",
	"ZelenogorskBuildings",
	"NWATentCamp"
];