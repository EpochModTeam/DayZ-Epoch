disableSerialization;

//Model Variables
Bandit1_DZ = 	"Bandit1_DZ";
BanditW1_DZ = 	"BanditW1_DZ";
Survivor1_DZ = 	"Survivor2_DZ";
Survivor2_DZ = 	"Survivor2_DZ";
SurvivorW2_DZ = "SurvivorW2_DZ";
Sniper1_DZ = 	"Sniper1_DZ";
Camo1_DZ = 		"Camo1_DZ";
Soldier1_DZ = 	"Soldier1_DZ";
Rocket_DZ = 	"Rocket_DZ";

dayz_combatLog = "";


//Hunting Variables
dayZ_partClasses = [
	"PartFueltank",
	"PartWheel",
	//"PartGeneric",	//No need to add, it is default for everything
	"PartEngine"
];
dayZ_explosiveParts = [
	"palivo",
	"motor"
];
//Survival Variables
SleepFood =				2160; //minutes (48 hours)
SleepWater =			1440; //minutes (24 hours)
SleepTemperatur	= 		90 / 100;	//Firs Value = Minutes untill Player reaches the coldest Point at night (without other effects! night factor expected to be -1)			//TeeChange

//Server Variables
dayZ_hivePipe1 = 		"\\.\pipe\dayz";	//The named pipe
dayZ_hivePipeAuth = 	"\\.\pipe\dayzAuth";	//The named pipe
hiveInUse	=			false;
allowConnection = 		false;
isSinglePlayer =		false;
dayz_serverObjectMonitor = [];

//Streaming Variables (player only)
dayz_Locations = [];
dayz_locationsActive = [];

//GUI
Dayz_GUI_R = 0.38; // 0.7
Dayz_GUI_G = 0.63; // -0.63
Dayz_GUI_B = 0.26; // -0.26

//Player self-action handles
dayz_resetSelfActions = {
	s_player_fire =			-1;
	s_player_cook =			-1;
	s_player_fireout =		-1;
	s_player_butcher =		-1;
	s_player_packtent = 	-1;
	s_player_fillwater =	-1;
	s_player_fillwater2 = 	-1;
	s_player_fillfuel = 	-1;
	s_player_grabflare = 	-1;
	s_player_removeflare = 	-1;
	s_player_painkiller =	-1;
	s_player_studybody = 	-1;
	s_build_Sandbag1_DZ = 	-1;
	s_build_Hedgehog_DZ =	-1;
	s_build_Wire_cat1 =		-1;
	s_player_deleteBuild =	-1;
	s_player_forceSave = 	-1;
};
call dayz_resetSelfActions;

//Engineering variables
s_player_lastTarget =	objNull;
s_player_repairActions = [];

//Initialize Medical Variables
r_interrupt = 			false;
r_doLoop = 				false;
r_self = 				false;
r_self_actions = 		[];
r_drag_sqf = 			false;
r_action = 				false;
r_action_unload = 		false;
r_player_handler = 		false;
r_player_handler1 = 	false;
r_player_dead = 		false;
r_player_unconscious = 	false;
r_player_infected =		false;
r_player_injured = 		false;
r_player_inpain = 		false;
r_player_loaded = 		false;
r_player_cardiac = 		false;
r_fracture_legs =		false;
r_fracture_arms =		false;
r_player_vehicle =		player;
r_player_blood = 		12000;
r_player_lowblood = 	false;
r_player_timeout =		0;
r_player_bloodTotal = 	r_player_blood;
r_public_blood =		r_player_blood;
r_player_bloodDanger =	r_player_bloodTotal * 0.2;
r_player_actions = 		[];
r_handlerCount = 		0;
r_action_repair = 		false;
r_action_targets = 		[];
r_pitchWhine = 			false;
r_isBandit =			false;
USEC_woundHit 	= [
	"",
	"body",
	"hands",
	"legs",
	"head_hit"
];
DAYZ_woundHit 	= [
	[
		"body",
		"hands",
		"legs",
		"head_hit"
	],[
		0.45,
		0.4,
		0.1,
		0.05
	]
];
DAYZ_woundHit_ok = [
	[
		"body",
		"hands",
		"legs"
	],[
		0.5,
		0.3,
		0.2
	]
];
USEC_MinorWounds 	= [
	"hands",
	"legs"
];
USEC_woundPoint	= [
	["Pelvis","aimpoint"],
	["aimpoint"], //,"RightShoulder","LeftShoulder"
	["lelbow","relbow"],
	["RightFoot","LeftFoot"],
	["neck","pilot"]
];
USEC_typeOfWounds = [
	"Pelvis",
	"aimpoint",
	"lelbow","relbow",
	"RightFoot","LeftFoot",
	"neck","pilot"
];

//Initialize Zombie Variables
dayz_zombieTargetList = [
	["SoldierWB",50],
	["Air",500],
	["LandVehicle",200]
];
dayzHit = [];
dayzPublishObj = [];		//used for eventhandler to spawn a mirror of players tent
dayzHideBody = objNull;

//DayZ settings
dayz_dawn = 6;
dayz_dusk = 18;
dayz_maxAnimals = 5;
DAYZ_agentnumber = 0;
dayz_animalDistance = 800;
dayz_zSpawnDistance = 1000;

if(isnil "dayz_maxLocalZombies") then {
	dayz_maxLocalZombies = 40;
};

dayz_spawnPos = getPosATL player;

if(isDedicated) then {
	dayz_disco = [];
};

if(isServer) then {
	dayz_players = [];
	dead_bodyCleanup = [];
	needUpdate_objects = [];
};

if(!isDedicated) then {
	//Establish Location Streaming
	_funcGetLocation = 
	{
		for "_i" from 0 to ((count _this) - 1) do 
		{
			private ["_location","_config","_locHdr","_position","_size","_type"];
			//Get Location Data from config
			_config = 	(_this select _i);
			_locHdr = 	configName _config;
			_position = getArray	(_config >> "position");
			_size = 	getNumber	(_config >> "size");
			_type = 	getText		(_config >> "type");
			
			//Find the Location
			_location = nearestLocation [_position, _type];
			
			//Record details
			dayz_Locations set [count dayz_Locations, [_location,_locHdr,_size]]; 
		};
	};
	_cfgLocation = configFile >> "CfgTownGenerator";
	_cfgLocation call _funcGetLocation;
	
	dayz_buildingMonitor = [];	//Buildings to check
	dayz_bodyMonitor = [];
	dayz_flyMonitor = [];		//used for monitor flies
	
	dayz_buildingMonitor = [];	//Buildings to check
	dayz_bodyMonitor = [];
	dayz_flyMonitor = [];		//used for monitor flies
	
	dayz_baseTypes = 		getArray (configFile >> "CfgBuildingLoot" >> "Default" >> "zombieClass");
	
	//temperature variables
	dayz_temperatur 		= 	36;		//TeeChange
	dayz_temperaturnormal 	= 	36;		//TeeChange
	dayz_temperaturmax 		= 	42;		//TeeChange
	dayz_temperaturmin 		= 	27;		//TeeChange
	
	//player special variables
	dayZ_lastPlayerUpdate = 0;
	dayZ_everyonesTents =	[];
	dayz_hunger	=			0;
	dayz_thirst = 			0;
	dayz_combat =			0;
	dayz_preloadFinished = 	false;
	dayz_statusArray =		[1,1];
	dayz_disAudial =		0;
	dayz_disVisual =		0;
	dayz_firedCooldown = 	0;
	dayz_DeathActioned =	false;
	dayz_canDisconnect = 	true;
	dayz_damageCounter =	time;
	dayz_lastSave =			time;
	dayz_isSwimming	=		true;
	dayz_currentDay = 		0;
	dayz_hasLight = 		false;
	dayz_surfaceNoise =		0;
	dayz_surfaceType =		"None";
	dayz_noPenalty = 		[];
	dayz_heavenCooldown =	0;
	deathHandled = 			false;
	dayz_lastHumanity =		0;
	dayz_guiHumanity =		-90000;
	dayz_firstGroup = 		group player;
	dayz_originalPlayer = 	player;
	dayz_playerName =		"Unknown";
	dayz_sourceBleeding =	objNull;
	dayz_clientPreload = 	false;
	dayz_panicCooldown = 	0;
	dayz_areaAffect =		2;
	dayz_heartBeat = 		false;
	dayzClickTime =			0;
	dayz_spawnDelay =		300;
	dayz_spawnWait =		-300;
	dayz_lootDelay =		3;
	dayz_lootWait =			-300;
	dayz_spawnZombies =		0;
	dayz_inVehicle =		false;
	dayz_Magazines = 		[];
	dayzGearSave = 			false;
	dayz_unsaved =			false;
	dayz_scaleLight = 		0;
	dayzDebug = false;
	dayzState = -1;
	//uiNamespace setVariable ['DAYZ_GUI_display',displayNull];
	//if (uiNamespace getVariable ['DZ_displayUI', 0] == 2) then {
	//	dayzDebug = true;
	//};
};