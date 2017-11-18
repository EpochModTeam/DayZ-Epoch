/*
	Add POI objects on server machine only.
	Do not use execVM. This must be unscheduled to finish before server_monitor.sqf runs (vehicles or players can spawn on top)
	Do not use createVehicleLocal for these. They contain trees and buildings (need chopped/destroyed status synchronized for all clients)
*/

{
	call compile preprocessFileLineNumbers ("\z\addons\dayz_code\system\mission\chernarus\poi\" + _x + ".sqf");
	
	//This is needed to process all setVehicleInit commands
	processInitCommands;
} forEach [
	"NWATentCamp",
	"ElektroWells",
	"GvozdnoMilitaryBase",
	"Shakhovka",
	"Trains",
	"DevilsFarm",
	"NEA",
	"C130Crash",
	"ChernoBuildings",
	"DeadForest",
	"KomyshovoRoadblock",
	"MilitaryAirpoort",
	"ZelenogorskBuildings"
];