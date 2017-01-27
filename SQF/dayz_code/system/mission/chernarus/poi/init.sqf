/*
	Add POI objects locally on each machine early.
	Do not use execVM. This must be unscheduled so it finishes spawning before the player object is moved (possibly on top of them).
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