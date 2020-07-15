// For DayZ Epoch

// EPOCH CONFIG VARIABLES START //
#include "\z\addons\dayz_code\configVariables.sqf" // Don't remove this line
// See the above file for a full list including descriptions and default values

// Server only settings
if (isServer) then {
	dayZ_instance = 24; //Instance ID of this server
	dayz_POIs = false; //Adds Point of Interest map additions (negatively impacts FPS)
	MaxDynamicDebris = 500; // Max number of random road blocks to spawn around the map
	MaxVehicleLimit = 300; // Max number of random vehicles to spawn around the map
	spawnArea = 1400; // Distance around markers to find a safe spawn position
	spawnShoremode = 1; // Random spawn locations  1 = on shores, 0 = inland
	EpochEvents = [ //[year,month,day of month, minutes,name of file - .sqf] If minutes is set to -1, the event will run once immediately after server start.
		//["any","any","any","any",-1,"Infected_Camps"], // (negatively impacts FPS)
		["any","any","any","any",-1,"Care_Packages"],
		["any","any","any","any",-1,"CrashSites"]
	];
};

// Client only settings
if (!isDedicated) then {
	dayz_antihack = 1; // DayZ Antihack / 1 = enabled // 0 = disabled
	dayZ_serverName = ""; //Shown to all players in the bottom left of the screen (country code + server number)
	dayz_enableRules = true; //Enables a nice little news/rules feed on player login (make sure to keep the lists quick).
	dayz_quickSwitch = false; //Turns on forced animation for weapon switch. (hotkeys 1,2,3) False = enable animations, True = disable animations
	dayz_randomMaxFuelAmount = 500; //Puts a random amount of fuel in all fuel stations.
	dayz_bleedingeffect = 2; //1 = blood on the ground (negatively impacts FPS), 2 = partical effect, 3 = both
	dayz_nutritionValuesSystem = true; //true, Enables nutrition system, false, disables nutrition system.
	dayz_DamageMultiplier = 2; //1 - 0 = Disabled, anything over 1 will multiply damage. Damage Multiplier for Zombies.
	dayz_maxGlobalZeds = 500; //Limit the total zeds server wide.
	dayz_temperature_override = false; // Set to true to disable all temperature changes.
	DZE_TwoPrimaries = 2; // 0 do not allow primary weapon on back. 1 allow primary weapon on back, but not when holding a primary weapon in hand. 2 allow player to hold two primary weapons, one on back and one in their hands.
	dayz_paraSpawn = false; // Halo spawn
	DZE_BackpackAntiTheft = false; // Prevent stealing from backpacks in trader zones
	DZE_BuildOnRoads = false; // Allow building on roads
	DZE_R3F_WEIGHT = true; // Enable R3F weight. Players carrying too much will be overburdened and forced to move slowly.
	DZE_StaticConstructionCount = 0; // Steps required to build. If greater than 0 this applies to all objects.
	DZE_requireplot = 1; // Require a plot pole to build  0 = Off, 1 = On
	DZE_PlotPole = [30,45]; // Radius owned by plot pole [Regular objects,Other plotpoles]. Difference between them is the minimum buffer between bases.
	DZE_BuildingLimit = 150; // Max number of built objects allowed in DZE_PlotPole radius
	DZE_SelfTransfuse = true; // Allow players to bloodbag themselves
	DZE_selfTransfuse_Values = [12000,15,120]; // [blood amount given, infection chance %, cooldown in seconds]
	dayz_maxMaxWeaponHolders = 120; // Maximum number of loot piles that can spawn within 200 meters of a player.
};

// Settings for both server and client
dayz_REsec = 1; // DayZ RE Security / 1 = enabled // 0 = disabled
dayz_infectiousWaterholes = false; //Randomly adds some bodies, graves and wrecks by ponds (negatively impacts FPS)
dayz_ForcefullmoonNights = true; // Forces night time to be full moon.
dayz_spawnselection = 0; //(Chernarus only) Turn on spawn selection 0 = random only spawns, 1 = spawn choice based on limits
dayz_classicBloodBagSystem = true; // disable blood types system and use the single classic ItemBloodbag
dayz_enableFlies = false; // Enable flies on dead bodies (negatively impacts FPS).
DZE_PlayerZed = true; // Enable spawning as a player zombie when players die with infected status
DZE_GodModeBase = false; // Make player built base objects indestructible
DZE_SafeZonePosArray = [[[8246,15485,0],100],[[15506,13229,0],100],[[12399,5074,0],100],[[10398,8279,0],100],[[5149,4864,0],100],[[15128,16421,0],100]]; // Format is [[[3D POS],RADIUS],[[3D POS],RADIUS]]; Stops loot and zed spawn, salvage and players being killed if their vehicle is destroyed in these zones.
DZE_Weather = 1; // Options: 1 - Summer Static, 2 - Summer Dynamic, 3 - Winter Static, 4 - Winter Dynamic. If static is selected, the weather settings will be set at server startup and not change. Weather settings can be adjusted with array DZE_WeatherVariables in configVariables.sqf.

// Uncomment the lines below to change the default loadout
//DefaultMagazines = ["HandRoadFlare","ItemBandage","ItemPainkiller","8Rnd_9x18_Makarov","8Rnd_9x18_Makarov"];
//DefaultWeapons = ["Makarov_DZ","ItemFlashlight"];
//DefaultBackpack = "DZ_Patrol_Pack_EP1";
//DefaultBackpackItems = []; // Can include both weapons and magazines i.e. ["PDW_DZ","30Rnd_9x19_UZI"];

// EPOCH CONFIG VARIABLES END //

enableRadio false;
enableSentences false;
//setTerrainGrid 25;

diag_log 'dayz_preloadFinished reset';
dayz_preloadFinished=nil;
onPreloadStarted "diag_log [diag_tickTime,'onPreloadStarted']; dayz_preloadFinished = false;";
onPreloadFinished "diag_log [diag_tickTime,'onPreloadFinished']; dayz_preloadFinished = true;";
with uiNameSpace do {RscDMSLoad=nil;}; // autologon at next logon

if (!isDedicated) then {
	enableSaving [false, false];
	startLoadingScreen ["","RscDisplayLoadCustom"];
	dayz_progressBarValue = 0;
	dayz_loadScreenMsg = localize 'str_login_missionFile';
	progress_monitor = [] execVM "\z\addons\dayz_code\system\progress_monitor.sqf";
	0 cutText ['','BLACK',0];
	0 fadeSound 0;
	0 fadeMusic 0;
};

initialized = false;
call compile preprocessFileLineNumbers "\z\addons\dayz_code\init\variables.sqf";
dayz_progressBarValue = 0.05;
call compile preprocessFileLineNumbers "\z\addons\dayz_code\init\publicEH.sqf";
dayz_progressBarValue = 0.1;
call compile preprocessFileLineNumbers "\z\addons\dayz_code\medical\setup_functions_med.sqf";
dayz_progressBarValue = 0.15;
call compile preprocessFileLineNumbers "\z\addons\dayz_code\init\compiles.sqf";
dayz_progressBarValue = 0.25;
call compile preprocessFileLineNumbers "\z\addons\dayz_code\system\mission\napf.sqf"; //Add trader city objects locally on every machine early
initialized = true;

if (dayz_REsec == 1) then {call compile preprocessFileLineNumbers "\z\addons\dayz_code\system\REsec.sqf";};

if (isServer) then {
	if (dayz_POIs) then {call compile preprocessFileLineNumbers "\z\addons\dayz_code\system\mission\chernarus\poi\init.sqf";};
	call compile preprocessFileLineNumbers "\z\addons\dayz_server\system\dynamic_vehicle.sqf";
	call compile preprocessFileLineNumbers "\z\addons\dayz_server\system\server_monitor.sqf";
	execVM "\z\addons\dayz_server\traders\napf.sqf"; //Add trader agents
	
	//Get the server to setup what waterholes are going to be infected and then broadcast to everyone.
	if (dayz_infectiousWaterholes) then {execVM "\z\addons\dayz_code\system\mission\chernarus\infectiousWaterholes\init.sqf";};
	
	// Lootable objects from CfgTownGeneratorDefault.hpp
	if (dayz_townGenerator) then { execVM "\z\addons\dayz_code\system\mission\chernarus\MainLootableObjects.sqf"; };
};

if (!isDedicated) then {
	call compile preprocessFileLineNumbers "\z\addons\dayz_code\system\mission\server_traders\napf.sqf";

	if (toLower worldName in ["chernarus","chernarus_winter"]) then {
		execVM "\z\addons\dayz_code\system\mission\chernarus\hideGlitchObjects.sqf";
	};
	
	// Enables Plant lib fixes
	execVM "\z\addons\dayz_code\system\antihack.sqf";
	
	if (dayz_townGenerator) then {execVM "\z\addons\dayz_code\compile\client_plantSpawner.sqf";};
	execFSM "\z\addons\dayz_code\system\player_monitor.fsm";
	//[false,12] execVM "\z\addons\dayz_code\compile\local_lights_init.sqf";
	//[600,.15,30] execVM "\z\addons\dayz_code\compile\fn_chimney.sqf"; // Smoking chimney effects.
	if (DZE_R3F_WEIGHT) then {execVM "\z\addons\dayz_code\external\R3F_Realism\R3F_Realism_Init.sqf";};
	waitUntil {scriptDone progress_monitor};
	cutText ["","BLACK IN", 3];
	3 fadeSound 1;
	3 fadeMusic 1;
	endLoadingScreen;
};
