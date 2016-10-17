//Start server selection for infectedWaterHoles.
if (isServer) then {
	private ["_WaterHoleArray","_ShuffleArray"];

	_WaterHoleArray = [
		"BlackLake",
		"Gvozdno",
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

	diag_log format["INFO: Choosing waterholes to be infectious",true];

	{
		if ((random 1) < 0.5) then {
			infectedWaterHoles set [count infectedWaterHoles, _x]; // set  
		};
		uiSleep 0.01;
	} count _infectedWaterHoles;

	//Send the random array to everyone.
	publicVariable "infectedWaterHoles";
	
	diag_log format["INFO: Chosen waterholes to be infectious - %1",infectedWaterHoles];
};

//Setup on each client witch water holes have been chosen by the server to be infected
if (!isDedicated) then {

	waitUntil { uiSleep 0.1; !isNil "infectedWaterHoles" };
	
	{
			call compile preprocessFileLineNumbers ("\z\addons\dayz_code\system\mission\chernarus\infectiousWaterholes\"+_x+".sqf"); 
	} count infectedWaterHoles;
};


