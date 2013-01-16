/*	
	INITILIZATION
*/
startLoadingScreen ["","RscDisplayLoadCustom"];
cutText ["","BLACK OUT"];
enableSaving [false, false];

//REALLY IMPORTANT VALUES
dayZ_hivePipe1 = 	"\\.\pipe\dayz";	//The named pipe
dayZ_instance = 11;	//The instance
hiveInUse	=	true;
dayzHiveRequest = [];
initialized = false;
dayz_previousID = 0;

//disable greeting menu 
player setVariable ["BIS_noCoreConversations", true];
//disable radio messages to be heard and shown in the left lower corner of the screen
enableRadio false;


// DayZ Epoch config
spawnShoremode = 1; // Default = 1 (on shore)
spawnArea= 1500; // Default = 1500
MaxHeliCrashes= 5; // Default = 5
MaxVehicleLimit = 200; // Default = 50
MaxDynamicDebris = 500; // Default = 100
dayz_MapArea = 14000; // Default = 10000
dayz_maxLocalZombies = 40; // Default = 40

// DayZ Epoch TRADERS
weapon_trader = 'CIV_EuroMan01_EP1';
parts_trader  = 'Woodlander3';
can_trader    = 'RU_WorkWoman5';
ammo_trader   = 'CIV_EuroMan02_EP1';
auto_trader   = 'Worker3';
auto_trader_2 = 'Profiteer4';
mad_sci       = 'Dr_Hladik_EP1';
metals_trader = 'RU_Functionary1';
boat_trader	  = 'RU_Villager3'; 

//Load in compiled functions
call compile preprocessFileLineNumbers "\z\addons\dayz_code\init\variables.sqf";				//Initilize the Variables (IMPORTANT: Must happen very early)
progressLoadingScreen 0.1;
call compile preprocessFileLineNumbers "\z\addons\dayz_code\init\publicEH.sqf";				//Initilize the publicVariable event handlers
progressLoadingScreen 0.2;
call compile preprocessFileLineNumbers "\z\addons\dayz_code\medical\setup_functions_med.sqf";	//Functions used by CLIENT for medical
progressLoadingScreen 0.4;
call compile preprocessFileLineNumbers "\z\addons\dayz_code\init\compiles.sqf";				//Compile regular functions
progressLoadingScreen 1.0;

"filmic" setToneMappingParams [0.153, 0.357, 0.231, 0.1573, 0.011, 3.750, 6, 4]; setToneMapping "Filmic";

if ((!isServer) && (isNull player) ) then
{
waitUntil {!isNull player};
waitUntil {time > 3};
};

if ((!isServer) && (player != player)) then
{
  waitUntil {player == player};
  waitUntil {time > 3};
};

if (isServer) then {
	
	// TODO: Still Needs major overhaul current method is not ideal	
	AllowedVehiclesList = [ "Old_moto_TK_Civ_EP1",
							"MMT_Civ",
							"Old_bike_TK_INS_EP1",
							"ATV_US_EP1",
							"hilux1_civil_3_open_EP1",
							"datsun1_civil_3_open",
							"Pickup_PK_TK_GUE_EP1",
							"Octavia_ACR",
							"VWGolf",
							"Lada1",
							"Skoda",
							"car_sedan",
							"Volha_1_TK_CIV_EP1",
							"VolhaLimo_TK_CIV_EP1",
							"UAZ_Unarmed_TK_EP1",
							"Ikarus",
							"SUV_TK_CIV_EP1",
							"SUV_Green",
							"UH1H_DZ",
							"Mi17_Civilian",
							"LandRover_CZ_EP1",
							"HMMWV_Ambulance",
							"ArmoredSUV_PMC",
							"PBX",
							"RHIB",
							"Fishing_Boat",
							"M113Ambul_UN_EP1",
							"KamazRefuel",
							"UralRefuel_TK_EP1",
							"tractor",
							"CSJ_GyroP"];
	
	AllowedVehiclesChance = [ 0.25, // "Old_moto_TK_Civ_EP1",
							  0.55, // "MMT_Civ"
							  0.55, // Old_bike_TK_INS_EP1
							  0.45, // "ATV_US_EP1",
							  0.55, // "hilux1_civil_3_open_EP1", 
							  0.25, // "datsun1_civil_3_open",
							  0.20, // "Pickup_PK_TK_GUE_EP1",
							  0.20, // Octavia_ACR
							  0.20, // VWGolf
							  0.25, // "Lada1",
							  0.25, // "Skoda",
							  0.2,  // "car_sedan",
							  0.2,  // "Volha_1_TK_CIV_EP1",
							  0.05, // "VolhaLimo_TK_CIV_EP1"
							  0.15, // "UAZ_Unarmed_TK_EP1"
							  0.01, // "Ikarus"
							  0.1,  // "SUV_TK_CIV_EP1"
							  0.1,  // "SUV_Green",
							  0.05, // "UH1H_DZ"
							  0.09, // "Mi17_Civilian"
							  0.11, // "LandRover_CZ_EP1"
							  0.11, // "HMMWV_Ambulance"
							  0.05, // "ArmoredSUV_PMC"
							  0.15, // "PBX"
							  0.01, // "RHIB"
							  0.1,  // "Fishing_Boat",
							  0.01, // "M113Ambul_UN_EP1"
							  0.01, // "KamazRefuel"
							  0.01, // UralRefuel_TK_EP1
							  0.1,  // "tractor"
							  0.1]; // "CSJ_GyroP"
	
	AllowedVehiclesLimit =  [ 5, // "Old_moto_TK_Civ_EP1",
							  10, // "MMT_Civ"
							  10, // Old_bike_TK_INS_EP1
							  5, // "ATV_US_EP1",
							  5, // "hilux1_civil_3_open_EP1",
							  5, // "datsun1_civil_3_open",
							  3, // "Pickup_PK_TK_GUE_EP1",
							  2, // "Octavia_ACR"
							  2, // VWGolf
							  3, // "Lada1",
							  3, // "Skoda",
							  3, // "car_sedan",
							  3, // "Volha_1_TK_CIV_EP1",
							  1, // "VolhaLimo_TK_CIV_EP1"
							  3, // "UAZ_Unarmed_TK_EP1"
							  2, // "Ikarus"
							  4, // "SUV_TK_CIV_EP1"
							  2, // "SUV_Green",
							  2, // "UH1H_DZ"
							  2, // "Mi17_Civilian"
							  2, // "LandRover_CZ_EP1"
							  3, // "HMMWV_Ambulance"
							  2, // "ArmoredSUV_PMC"
							  5, // "PBX"
							  2, // "RHIB"
							  4, // "Fishing_Boat",
							  3, // "M113Ambul_UN_EP1"
							  2, // "KamazRefuel"
							  2, // UralRefuel_TK_EP1
							  1, // "tractor"
							  5]; // "CSJ_GyroP"						
	
	hiveInUse = true;
	
	// Add trader citys
	_nil = [] execVM "mission.sqf";
	_serverMonitor = 	[] execVM "\z\addons\dayz_code\system\server_monitor.sqf";
};

if (!isDedicated) then {
	//Conduct map operations
	0 fadeSound 0;
	waitUntil {!isNil "dayz_loadScreenMsg"};
	dayz_loadScreenMsg = (localize "STR_AUTHENTICATING");
	
	//Run the player monitor
	_id = player addEventHandler ["Respawn", {_id = [] spawn player_death;}];
	_playerMonitor = 	[] execVM "\z\addons\dayz_code\system\player_monitor.sqf";	
};