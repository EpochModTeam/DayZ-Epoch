//Start server selection for infectedWaterHoles.
private ["_WaterHoleArray","_ShuffleArray"];

_WaterHoleArray = [
	"BlackLake",
	"Gvozdno",
	"Kabanino",
	"Kopyto",
	"Mogilevka",
	"Nadezdinho",
	"NorthNadezdinho",
	"NorthPusta",
	"NorthTopolka",
	"Novy",
	"PobedaDam",
	"Pogorevka",
	"Polana",
	"Prud",
	"Sosnovy",
	"Stary",
	"Topolka",
	"Vysota",
	"WillowLake"
];

_infectedWaterHoles = _WaterHoleArray call fn_shuffleArray;

infectedWaterHoles = [];

{
	if ((random 1) < 0.5) then {
		infectedWaterHoles set [count infectedWaterHoles, _x]; // set  
	};
} count _infectedWaterHoles;

//Send the random array to everyone.
publicVariable "infectedWaterHoles";

diag_log format["INFO: Chosen waterholes to be infectious - %1",infectedWaterHoles];

/*
//Setup on each client witch water holes have been chosen by the server to be infected
if (!isServer) then {

	waitUntil { sleep 0.1; !isNil "infectedWaterHoles" };
	
	{
			call compile preprocessFileLineNumbers ("\z\addons\dayz_code\system\mission\chernarus\infectiousWaterholes\"+_x+".sqf"); 
	} count infectedWaterHoles;
	
	diag_log (infectedWaterHoles);
};
*/


