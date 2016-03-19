/*	
	For DayZ Epoch
	Addons Credits: Jetski Yanahui by Kol9yN, Zakat, Gerasimow9, YuraPetrov, zGuba, A.Karagod, IceBreakr, Sahbazz
*/

enableSaving [false, false];

//REALLY IMPORTANT VALUES
dayZ_instance =	11;	//The instance
dayZ_serverName = ""; //Shown to all players in the bottom left of the screen
dayzHiveRequest = [];
initialized = false;
dayz_previousID = 0;

//Gamesettings
dayz_antihack = 0; // DayZ Antihack / 1 = enabled // 0 = disabled
dayz_REsec = 1; // DayZ RE Security / 1 = enabled // 0 = disabled
dayz_enableRules = true; //Enables a nice little news/rules feed on player login (make sure to keep the lists quick).
dayz_quickSwitch = false; //Turns on forced animation for weapon switch. (hotkeys 1,2,3) False = enable animations, True = disable animations
dayz_POIs = true;
dayz_infectiousWaterholes = true;

//DayazMod Presets 
dayz_presets = "Vanilla"; //"Custom","Classic","Vanilla","Elite"

//Only need to edit if you running a custom server.
if ( dayz_presets == "Custom") then {
	dayz_enableGhosting = true; //Enable disable the ghosting system.
	dayz_ghostTimer = 30; //Sets how long in seconds a player must be dissconnected before being able to login again.
	dayz_spawnselection = 1; //Turn on spawn selection 0 = random only spawns, 1 = Spawn choice based on limits
	dayz_spawncarepkgs_clutterCutter = 2; //0 =  loot hidden in grass, 1 = loot lifted and 2 = no grass
	dayz_spawnCrashSite_clutterCutter = 2;	// heli crash options 0 =  loot hidden in grass, 1 = loot lifted and 2 = no grass
	dayz_spawnInfectedSite_clutterCutter = 2; // infected base spawn... 0: loot hidden in grass, 1: loot lifted, 2: no grass 
	dayz_bleedingeffect = 3; //1= blood on the ground, 2= partical effect, 3 = both.
	dayz_ForcefullmoonNights = false; // Forces night time to be full moon.
	dayz_OpenTarget_TimerTicks = 60 * 10; //how long can a player be freely attacked for after attacking someone unprovoked.
	dayz_nutritionValuesSystem = false; //Enables nutrition system
	
	//not implmented yet.
	dayz_classicBloodBagSystem = false; // removes all blood type bloodbags
};
//temp settings
dayz_DamageMultiplier = 2; //1 - 0 = Disabled, anything over 1 will multiply damage. Damage Multiplier for Zombies.
dayz_maxGlobalZeds = 500; //Limit the total zeds server wide.
dayz_temperature_override = false; // Set to true to disable all temperature changes.

//Disable Greeting Menu 
player setVariable ["BIS_noCoreConversations", true];

//Disable radio messages to be heard and shown in the left lower corner of the screen
enableRadio false;

//May prevent "how are you civillian?" messages from NPC
enableSentences false;

//--------------------------------------------------------------------//
//------------------------DayZ Epoch Config---------------------------//
//--------------------------------------------------------------------//

//Map & Player Spawn Variables
spawnShoremode = 1; 				// Default: 1 (on shore)
spawnArea= 1500; 				// Default: 1500
dayz_paraSpawn = false;				// Default: false
dayz_fullMoonNights = true;			// Default: false
dayz_MapArea = 14000;				// Default: 10000

//Do Not Edit - Chernarus Specific
dayz_minpos = -1; 				// Do Not Edit - Chernarus Specific
dayz_maxpos = 16000;				// Do Not Edit - Chernarus Specific

//Item Spawn Variables
MaxHeliCrashes= 5; 				// Default: 5
MaxVehicleLimit = 300; 				// Default: 50
MaxDynamicDebris = 500; 			// Default: 100
MaxMineVeins = 50;				// Default: 50
MaxAmmoBoxes = 3;				// Default: 3

//Zombie Variables
dayz_maxLocalZombies = 30; 			// Default: 15 

//Animal Variables
dayz_maxAnimals = 8; 				// Default: 8
dayz_tameDogs = false;				// Default: false

//Trader Variables
dayz_sellDistance_vehicle = 10;			// Default: 10
dayz_sellDistance_boat = 30;			// Default: 30
dayz_sellDistance_air = 40;			// Default: 40

//Player Variables
DZE_R3F_WEIGHT = true;				// Default: true
DZE_FriendlySaving = true;			// Default: true
DZE_PlayerZed = true;				// Default: true
DZE_BackpackGuard = true;			// Default: true
DZE_SelfTransfuse = false;			// Default: false
DZE_selfTransfuse_Values = [3000, 15, 300];	// Default: [12000, 15, 300]; = [blood amount, infection chance, cool-down (seconds)]

//Name Tags
DZE_ForceNameTags = false;			// Default: false
DZE_ForceNameTagsOff = false;			// Default: false
DZE_ForceNameTagsInTrader = false;		// Default: false
DZE_HumanityTargetDistance = 25;		// Default: 25

//Death Messages
DZE_DeathMsgGlobal = false;			// Default: false
DZE_DeathMsgSide = false;			// Default: false
DZE_DeathMsgTitleText = false;			// Default: false

//Vehicles Variables
DZE_AllowForceSave = false;			// Default: false
DZE_AllowCargoCheck = false;			// Default: false
DZE_HeliLift = true;				// Default: true
DZE_HaloJump = true;				// Default: true
DZE_AntiWallLimit = 3;				// Default: 3
DynamicVehicleDamageLow = 0; 			// Default: 0
DynamicVehicleDamageHigh = 100; 		// Default: 100

//Build Variables
DZE_GodModeBase = false;			// Default: false
DZE_BuildingLimit = 200;			// Default: 150
DZE_requireplot = 1;				// Default: 1
DZE_PlotPole = [30,45];				// Default: [30,45] = [x,y]
DZE_BuildOnRoads = false; 			// Default: false

//--------------------------------------------------------------------//
//--------------------------------------------------------------------//
//--------------------------------------------------------------------//

//Server Events
EpochEvents = [
["any","any","any","any",30,"crash_spawner"],
["any","any","any","any",0,"crash_spawner"],
["any","any","any","any",15,"supply_drop"]
];

// DO NOT EDIT BELOW HERE UNTIL progressLoadingScreen 1.0;//
MISSION_ROOT=toArray __FILE__;MISSION_ROOT resize(count MISSION_ROOT-8);MISSION_ROOT=toString MISSION_ROOT;
//diag_log 'dayz_preloadFinished reset';
dayz_preloadFinished=nil;
onPreloadStarted "diag_log [diag_tickTime, 'onPreloadStarted']; dayz_preloadFinished = false;";
onPreloadFinished "diag_log [diag_tickTime, 'onPreloadFinished']; if (!isNil 'init_keyboard') then { [] spawn init_keyboard; }; dayz_preloadFinished = true;";

with uiNameSpace do {RscDMSLoad=nil;}; // autologon at next logon

if (!isDedicated) then {
	enableSaving [false, false];
	startLoadingScreen ["","RscDisplayLoadCustom"];
	progressLoadingScreen 0;
	dayz_loadScreenMsg = localize 'str_login_missionFile';
	progress_monitor = [] execVM "\z\addons\dayz_code\system\progress_monitor.sqf";
	0 cutText ['','BLACK',0];
	0 fadeSound 0;
	0 fadeMusic 0;
};

initialized = false;
//Load In Compiled Functions
call compile preprocessFileLineNumbers "\z\addons\dayz_code\init\variables.sqf";		//Initilize the Variables (IMPORTANT: Must happen very early)
progressLoadingScreen 0.05;
call compile preprocessFileLineNumbers "\z\addons\dayz_code\init\publicEH.sqf";			//Initilize the publicVariable event handlers
progressLoadingScreen 0.08;
call compile preprocessFileLineNumbers "\z\addons\dayz_code\medical\setup_functions_med.sqf";	//Functions used by CLIENT for medical
progressLoadingScreen 0.11;
call compile preprocessFileLineNumbers "\z\addons\dayz_code\init\compiles.sqf";			//Compile regular functions
progressLoadingScreen 0.14;
call compile preprocessFileLineNumbers "\z\addons\dayz_code\system\BIS_Effects\init.sqf";
progressLoadingScreen 0.17;
call compile preprocessFileLineNumbers "server_traders.sqf";					//Compile trader configs
progressLoadingScreen 0.21;
call compile preprocessFileLineNumbers "\z\addons\dayz_code\system\mission\chernarus11.sqf"; //Add trader city objects locally on each machine early
progressLoadingScreen 0.25;
initialized = true;

"filmic" setToneMappingParams [0.153, 0.357, 0.231, 0.1573, 0.011, 3.750, 6, 4]; setToneMapping "Filmic";
if (dayz_REsec == 1) then { call compile preprocessFileLineNumbers "\z\addons\dayz_code\system\REsec.sqf"; };

if (isServer) then {
	//Compile Vehicle Configs
	call compile preprocessFileLineNumbers "\z\addons\dayz_server\system\dynamic_vehicle.sqf";
	//Add trader agents
	execVM "\z\addons\dayz_server\traders\chernarus11.sqf";
	execVM "\z\addons\dayz_server\system\server_monitor.sqf";
};

if (dayz_POIs) then { execVM "\z\addons\dayz_code\system\mission\chernarus\poi\init.sqf"; };

if (!isDedicated) then {
	//Conduct Map Operations
	if (dayz_infectiousWaterholes) then { execVM "\z\addons\dayz_code\system\mission\chernarus\infectiousWaterholes\init.sqf"; };
	if (dayz_antihack != 0) then {
		execVM "\z\addons\dayz_code\system\mission\chernarus\security\init.sqf";
		call compile preprocessFileLineNumbers "\z\addons\dayz_code\system\antihack.sqf";
	};
	
	//Run The Player Monitor
	//_id = player addEventHandler ["Respawn", {_id = [] spawn player_death;}];
	_playerMonitor = [] execVM "\z\addons\dayz_code\system\player_monitor.sqf";	 //STILL NEEDED FOR R3F

	//Lights
	//[false,12] execVM "\z\addons\dayz_code\compile\local_lights_init.sqf";
	if (dayz_enableRules) then { execVM "rules.sqf"; };
	if (!isNil "dayZ_serverName") then { execVM "\z\addons\dayz_code\system\watermark.sqf"; };
	execVM "\z\addons\dayz_code\compile\client_plantSpawner.sqf";
	execFSM "\z\addons\dayz_code\system\player_monitor.fsm";
	waituntil {scriptDone progress_monitor};
	cutText ["","BLACK IN", 3];
	3 fadeSound 1;
	3 fadeMusic 1;
	endLoadingScreen;
};

//Start Dynamic Weather
execVM "\z\addons\dayz_code\external\DynamicWeatherEffects.sqf";

#include "\z\addons\dayz_code\system\REsec.sqf"
