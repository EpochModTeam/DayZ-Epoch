/*	
	For DayZ Epoch
	Addons Credits: Jetski Yanahui by Kol9yN, Zakat, Gerasimow9, YuraPetrov, zGuba, A.Karagod, IceBreakr, Sahbazz
*/
startLoadingScreen ["","RscDisplayLoadCustom"];
cutText ["","BLACK OUT"];
enableSaving [false, false];

//REALLY IMPORTANT VALUES
dayZ_instance =	11;		//The instance
dayzHiveRequest = [];
initialized = false;
dayz_previousID = 0;

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
dayz_maxZeds = 500;				// Default: 500
dayz_maxLocalZombies = 30; 			// Default: 15 
dayz_maxGlobalZombiesInit = 15;			// Default: 15
dayz_maxGlobalZombiesIncrease = 5;		// Default: 5	
dayz_zedsAttackVehicles = true;			// Default: true

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

//Load In Compiled Functions
call compile preprocessFileLineNumbers "\z\addons\dayz_code\init\variables.sqf";		//Initilize the Variables (IMPORTANT: Must happen very early)
progressLoadingScreen 0.1;
call compile preprocessFileLineNumbers "\z\addons\dayz_code\init\publicEH.sqf";			//Initilize the publicVariable event handlers
progressLoadingScreen 0.2;
call compile preprocessFileLineNumbers "\z\addons\dayz_code\medical\setup_functions_med.sqf";	//Functions used by CLIENT for medical
progressLoadingScreen 0.4;
call compile preprocessFileLineNumbers "\z\addons\dayz_code\init\compiles.sqf";			//Compile regular functions
progressLoadingScreen 0.5;
call compile preprocessFileLineNumbers "server_traders.sqf";					//Compile trader configs
progressLoadingScreen 1.0;

"filmic" setToneMappingParams [0.153, 0.357, 0.231, 0.1573, 0.011, 3.750, 6, 4]; setToneMapping "Filmic";

if (isServer) then {
	//Compile Vehicle Configs
	call compile preprocessFileLineNumbers "\z\addons\dayz_server\missions\DayZ_Epoch_11.Chernarus\dynamic_vehicle.sqf";

	//Add Trader Citys
	_nil = [] execVM "\z\addons\dayz_server\missions\DayZ_Epoch_11.Chernarus\mission.sqf";
	_serverMonitor = [] execVM "\z\addons\dayz_code\system\server_monitor.sqf";
};

if (!isDedicated) then {
	//Conduct Map Operations
	0 fadeSound 0;
	waitUntil {!isNil "dayz_loadScreenMsg"};
	dayz_loadScreenMsg = (localize "STR_AUTHENTICATING");
	
	//Run The Player Monitor
	_id = player addEventHandler ["Respawn", {_id = [] spawn player_death;}];
	_playerMonitor = [] execVM "\z\addons\dayz_code\system\player_monitor.sqf";	
	
	//Anti-Hack
	[] execVM "\z\addons\dayz_code\system\antihack.sqf";

	//Lights
	//[false,12] execVM "\z\addons\dayz_code\compile\local_lights_init.sqf";
};

//Start Dynamic Weather
execVM "\z\addons\dayz_code\external\DynamicWeatherEffects.sqf";

#include "\z\addons\dayz_code\system\REsec.sqf"
#include "\z\addons\dayz_code\system\BIS_Effects\init.sqf"
