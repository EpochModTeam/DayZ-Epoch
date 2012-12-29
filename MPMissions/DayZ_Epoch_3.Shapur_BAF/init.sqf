startLoadingScreen ["","DayZ_loadingScreen"];
/*	
	INITILIZATION
*/
enableSaving [false, false];

//REALLY IMPORTANT VALUES
dayZ_hivePipe1 = 	"\\.\pipe\dayz";	//The named pipe
dayZ_instance = 3;	//The instance
hiveInUse	=	true;
dayzHiveRequest = [];
initialized = false;
dayz_previousID = 0;

//disable greeting menu 
player setVariable ["BIS_noCoreConversations", true];
//disable radio messages to be heard and shown in the left lower corner of the screen
enableRadio false;

// DayZ Epoch config
spawnShoremode = 0; // Default = 1 (on shore)
spawnArea= 250; // Default = 1500
MaxHeliCrashes= 1; // Default = 5
MaxVehicleLimit = 50; // Default = 50
MaxDynamicDebris = 50; // Default = 100
dayz_MapArea = 2000; // Default = 10000
dayz_maxLocalZombies = 40; // Default = 40

// DayZ Epoch TRADERS
weapon_trader = 'Policeman';
parts_trader  = 'CIV_EuroMan01_EP1';
can_trader    = 'Profiteer4';
ammo_trader   = 'Functionary1';
auto_trader   = 'CIV_EuroMan02_EP1';
auto_trader_2 = 'RU_Pilot';
mad_sci       = 'Dr_Hladik_EP1';
bank_atm      = 'Vault';
metals_trader = 'RU_Profiteer3';
boat_trader	  = 'Citizen3_EP1'; 

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
	
	// First Test moving DVS config to mission file
	// TODO: Needs major performace overhaul current method is not ideal
	// 1 : Motocycles
	// 2 : Bicycles, ATV's
	// 3 : Trucks Unarmed
	// 4 : Trucks
	// 5 : Cars 
	// 6 : Jeeps
	// 7 : Bus, Tractor, SUV, Vans
	// 8 : Helicopters
	// 9 : Helicopters Unarmed
	// 10: Military Unarmed
	// 11: Military
	// 12: Boat Unarmed
	// 13: Boat
	// 14: Heavy Armor Unarmed
	// 15: Fuel Trucks
	// 16: Custom kpfs_uaz451
	// 17-20: Custom Sigma 6
	// 21: CSJ Gyro
	
	AllowedVehiclesList = ["M1030_US_DES_EP1","TT650_TK_CIV_EP1","Old_moto_TK_Civ_EP1","TT650_Civ","TT650_Ins",
							"MMT_Civ","Old_bike_TK_INS_EP1","ATV_US_EP1","BAF_ATV_D","ATV_CZ_EP1",
							"hilux1_civil_3_open_EP1","hilux1_civil_2_covered","hilux1_civil_1_open","datsun1_civil_3_open","datsun1_civil_2_covered","datsun1_civil_1_open",
							"Pickup_PK_TK_GUE_EP1","Pickup_PK_GUE","Pickup_PK_INS",
							"policecar","Octavia_ACR","Lada1","Lada2","LadaLM","Skoda","SkodaBlue","SkodaGreen","SkodaRed","VWGolf","car_hatchback","car_sedan","Lada1_TK_CIV_EP1","Lada2_TK_CIV_EP1","VolhaLimo_TK_CIV_EP1","Volha_1_TK_CIV_EP1","Volha_2_TK_CIV_EP1",
							"UAZ_CDF","UAZ_INS","UAZ_RU","UAZ_Unarmed_TK_CIV_EP1","UAZ_Unarmed_TK_EP1","UAZ_Unarmed_UN_EP1",
							"Ikarus","Ikarus_TK_CIV_EP1","tractor","SUV_Green","SUV_Silver","SUV_White","SUV_Charcoal","SUV_TK_CIV_EP1","S1203_TK_CIV_EP1","S1203_ambulance_EP1",
							"UH1H_DZ","UH1H_TK_EP1","CH_47F_EP1","Mi17_TK_EP1","Mi17_UN_CDF_EP1","Mi171Sh_CZ_EP1","UH60M_EP1","Mi17_CDF","MH60S","UH1Y",
							"Mi17_Civilian","MH6J_EP1","UH60M_MEV_EP1",
							"LandRover_ACR","LandRover_CZ_EP1","LandRover_TK_CIV_EP1","HMMWV","HMMWV_DES_EP1","HMMWV_M1035_DES_EP1","HMMWV_Ambulance","HMMWV_Ambulance_CZ_DES_EP1","GAZ_Vodnik_MedEvac","Ural_TK_CIV_EP1","Ural_UN_EP1","V3S_Open_TK_CIV_EP1","V3S_Open_TK_EP1","MTVR_DES_EP1","Kamaz",
							"HMMWV_M998A2_SOV_DES_EP1","HMMWV_M1151_M2_CZ_DES_EP1","LandRover_Special_CZ_EP1","LandRover_MG_TK_EP1","ArmoredSUV_PMC",
							"Fishing_Boat","PBX","PBX_ACR","Smallboat_1","Smallboat_2","Zodiac",
							"RHIB","RHIB2Turret",
							"M113Ambul_UN_EP1","M113Ambul_TK_EP1","BMP2_Ambul_CDF","BMP2_Ambul_INS",
							"KamazRefuel","MtvrRefuel_DES_EP1","UralRefuel_TK_EP1","V3S_Refuel_TK_GUE_EP1","T810Refuel_Des_ACR","T810Refuel_ACR",
							"kpfs_uaz451_black","kpfs_uaz451_green","kpfs_uaz451_cz",
							"440cuda","oldtruck","monaco","roadrunner","roadrunner2",
							"cuda","barcuda","hemicuda","cd71hm","oltruc3",
							"fury","sahco","civic","challenger","cooter",
							"jailbus","mackr","240GD","schoolbus","rosco","oldtruc2",
							"CSJ_GyroP","CSJ_GyroCover","CSJ_GyroC"];
	
	
	AllowedVehiclesChance = [0.55,0.65,0.25,0.35,0.45,
							  0.25,0.75,0.45,0.45,0.45,
							  0.40,0.35,0.35,0.25,0.20,0.25,
							  0.25,0.25,0.25,
							  0.2,0.25,0.45,0.45,0.45,0.45,0.45,0.45,0.45,0.35,0.40,0.40,0.40,0.25,0.45,0.45,0.45,
							  0.30,0.30,0.30,0.30,0.30,0.30,
							  0.15,0.15,0.15,0.05,0.05,0.05,0.05,0.05,0.30,0.15,
							  0.05,0.05,0.01,0.025,0.025,0.025,0.025,0.02,0.02,0.02,
							  0.09,0.08,0.07,
							  0.11,0.11,0.11,0.10,0.10,0.10,0.05,0.05,0.05,0.05,0.10,0.10,0.10,0.10,0.10,
							  0.05,0.05,0.01,0.05,0.01,
							  0.15,0.15,0.15,0.15,0.15,0.15,
							  0.01,0.01,
							  0.01,0.01,0.01,0.01,
							  0.001,0.001,0.001,0.001,0.001,0.001,
							  0.05,0.05,0.05,
							  0.01,0.20,0.01,0.01,0.01,
							  0.01,0.01,0.01,0.01,0.15,
							  0.01,0.01,0.12,0.01,0.05,
							  0.01,0.01,0.01,0.01,0.01,0.10,
							  0.1,0.1,0.05];
	
	
	hiveInUse	=	true;
	_serverMonitor = 	[] execVM "\z\addons\dayz_code\system\server_monitor.sqf";
	// Add trader citys
	_nil = [] execVM "mission.sqf";
};

if (!isDedicated) then {
	//Conduct map operations
	0 fadeSound 0;
	0 cutText [(localize "STR_AUTHENTICATING"), "BLACK FADED",60];
	
	//Run the player monitor
	_id = player addEventHandler ["Respawn", {_id = [] spawn player_death;}];
	_playerMonitor = 	[] execVM "\z\addons\dayz_code\system\player_monitor.sqf";	
};