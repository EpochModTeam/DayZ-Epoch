//it is pertinent that the CSJ_GyroAC addon is loaded before DayZ_code, do not remove it from or move its location in preloadAddon[] in config.cpp
class CSJ_GyroP: Plane
{
	scope = 2;
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};
	faction = "CIV";
	crew = "";
	cabinOpening = 0;
	driverAction = "UH60_Pilot";
	vehicleClass = "CSJ_Air";
	model = "\CSJ_GyroAC\CSJ_GyroP";
	displayName = "AutoGyro";
	getInAction = "GetInLow";
	transportSoldier = 0;
	picture = "\CSJ_GyroAC\data\gyropic.paa";
	Icon = "\CSJ_GyroAC\data\gyroIcon.paa";
	destrType = "DestructWreck";
	secondaryExplosion = 0;
	gearRetracting = 0;
	nameSound = "plane";
	mapSize = 8;
	fov = 0.5;
	side = 3;
	//soundEngine[] = {"\CSJ_GyroAC\camel1.wss",5.62341,1.8};
	soundEngineOnInt[] = {"ca\sounds\Air\MV22\ext_start",0.562341,1};
	soundEngineOnExt[] = {"ca\sounds\Air\MV22\ext_start",0.562341,1,800};
	soundEngineOffInt[] = {"ca\sounds\Air\MV22\ext_stop",0.562341,1};
	soundEngineOffExt[] = {"ca\sounds\Air\MV22\ext_stop",0.562341,1,800};
	insideSoundCoef = 1;
	airBrake = 0;
	flaps = 0;
	wheelSteeringSensitivity = 0.25;
	nightVision = 0;
	preferRoads = 0;
	showWeaponCargo = 0;
	camouflage = 8;
	audible = 8;
	driverCanSee = "2+8";
	maxSpeed = 150;
	landingSpeed = 80;
	landingAoa = "rad 2";
	armor = 20;
	ejectSpeed[] = {0,0,0};
	ejectDamageLimit = 0.8;
	cost = 1000;
	formationX = 8;
	formationZ = 8;
	castCargoShadow = 0;
	castCommanderShadow = 0;
	castDriverShadow = 1;
	castGunnerShadow = 0;
	hideWeaponsDriver = 1;
	hideWeaponsCargo = 1;
	threat[] = {0,0,0};
	aileronSensitivity = 0.1;
	elevatorSensitivity = 0.12;
	noseDownCoef = 0;
	brakeDistance = 10;
	dammageHalf[] = {};
	dammageFull[] = {};
	extCameraPosition[] = {0,0,-5};
	mainRotorSpeed = 2;
	backRotorSpeed = 1;
	class Library
	{
		libTextDesc = "Auto_Gyro (CSJ)";
	};
	class ViewPilot: ViewPilot
	{
		initFov = 1;
		minFov = 0.3;
		maxFov = 1.2;
		initAngleX = 25;
		minAngleX = -65;
		maxAngleX = 80;
		initAngleY = 0;
		minAngleY = -155;
		maxAngleY = 155;
	};
	class AnimationSources: AnimationSources{};
	class Reflectors{};
	weapons[] = {"GyroGrenadeLauncher"};
	magazines[] = {"3Rnd_GyroGrenade"};
	class UserActions
	{
		class rotateLeft
		{
			displayName = "rotate aircraft left";
			position = "osa leve smerovky";
			onlyforplayer = 0;
			radius = 2;
			condition = "(Count (Crew this)==0) and ((getpos this select 2) <1) and (!isengineon this)";
			statement = "this exec ""\CSJ_GyroAC\scripts\CSJ_rotateGyroLeft.sqs"" ";
		};
		class rotateRight
		{
			displayName = "rotate aircraft right";
			position = "osa leve smerovky";
			onlyforplayer = 0;
			radius = 2;
			condition = "(Count (Crew this)==0) and ((getpos this select 2) <1) and (!isengineon this)";
			statement = "this exec ""\CSJ_GyroAC\scripts\CSJ_rotateGyroRight.sqs"" ";
		};
		class push
		{
			displayName = $STR_ACTIONS_PUSH;
			position = "osa leve smerovky";
			onlyforplayer = 0;
			radius = 2;
			condition = "(Count (Crew this)==0) and ((getpos this select 2) <1) and (!isengineon this)";
			statement = "this exec ""\CSJ_GyroAC\scripts\CSJ_moveGyro.sqs"" ";
		};
		//class Repair {ACTION_REPAIR; radius = 4;};
		//class Salvage {ACTION_SALVAGE; radius = 4;};
	};
	class DefaultEventhandlers;
	class EventHandlers: DefaultEventhandlers
	{
		killed = "_this call BIS_Effects_EH_Killed;";
	};
	class Sounds
	{
		class Engine
		{
			sound[] = {"\CSJ_GyroAC\camel1.wss",1,1,800};
			frequency = "rpm";
			volume = "(camPos)*(engineOn*(rpm factor[0.55, 1.0]))*1.7";
		};
		class EngineIn
		{
			sound[] = {"\CSJ_GyroAC\camel1.wss",1,1};
			frequency = "rpm";
			volume = "(1-camPos)*(engineOn*(rpm factor[0.55, 1.0]))*1.7";
		};
	};
};
class CSJ_GyroCover: CSJ_GyroP
{
	model = "\CSJ_GyroAC\CSJ_GyroCover";
	displayName = "AutoGyro enclosed";
	class Library
	{
		libTextDesc = "Auto_Gyro  Enclosed(CSJ)";
	};
};
class CSJ_GyroC: Helicopter
{
	scope = 2;
	model = "\CSJ_GyroAC\CSJ_GyroC.p3d";
	displayName = "Mozzie";
	destrType = "DestructWreck";
	secondaryExplosion = 0;
	mapSize = 8;
	side = 3;
	cabinOpening = 0;
	hiddenSelections[] = {"0","1","2","3","4","5"};
	vehicleClass = "CSJ_Air";
	picture = "\CSJ_GyroAC\data\MozPic.paa";
	maxSpeed = 120;
	Icon = "\CSJ_GyroAC\data\Cicon.paa";
	nameSound = "chopper";
	faction = "CIV";
	crew = "";
	accuracy = 0.3;
	armor = 30;
	damageResistance = 0.003;
	cost = 100000;
	transportSoldier = 0;
	cargoAction[] = {};
	transportAmmo = 0;
	supplyRadius = 2.5;
	type = "VAir";
	fov = 0.5;
	driverAction = "UH60_Pilot";
	hasGunner = 0;
	class Turrets{};
	insideSoundCoef = 1;
	formationX = 8;
	formationZ = 8;
	threat[] = {0,0,0};
	extCameraPosition[] = {0,0,-5};
	soundGetIn[] = {"",0.1,1};
	soundGetOut[] = {"",0.1,1};
	//soundEngine[] = {"\CSJ_GyroAC\UH1_v1.wss",10.1189,2};
	soundEngineOnInt[] = {"\z\addons\dayz_code\Configs\CfgVehicles\DZE\UH1_v1int",1,1};
	soundEngineOnExt[] = {"\z\addons\dayz_code\Configs\CfgVehicles\DZE\UH1_v1int",1,1,800};
	soundEngineOffInt[] = {"\z\addons\dayz_code\Configs\CfgVehicles\DZE\UH1_v1stop",1,1};
	soundEngineOffExt[] = {"\z\addons\dayz_code\Configs\CfgVehicles\DZE\UH1_v1stop",1,1,800};
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};
	weapons[] = {"GyroGrenadeLauncher"};
	magazines[] = {"3Rnd_GyroGrenade"};
	transportMaxMagazines = 0;
	transportMaxWeapons = 0;
	commanderCanSee = 2+16+32;
	gunnerCanSee = 2+16+32;
	driverCanSee = 2+16+32;
	forceHideDriver = 1;
	castDriverShadow = 1;
	mainRotorSpeed = 1.5;
	backRotorSpeed = 4;
	class ViewPilot: ViewPilot
	{
		initFov = 1;
		minFov = 0.3;
		maxFov = 1.2;
		initAngleX = 35;
		minAngleX = -45;
		maxAngleX = 80;
		initAngleY = 0;
		minAngleY = -155;
		maxAngleY = 155;
	};
	class Library
	{
		libTextDesc = "CSJ_Mozzie";
	};
	dammageHalf[] = {};
	dammageFull[] = {};
	class Reflectors{};
	class AnimationSources: AnimationSources{};
	class UserActions {
		//class Repair {ACTION_REPAIR; radius = 4;};
		//class Salvage {ACTION_SALVAGE; radius = 4;};
	};
	class DefaultEventhandlers;
	class EventHandlers: DefaultEventhandlers
	{
		killed = "_this call BIS_Effects_EH_Killed;";
	};
	class Sounds
	{
		class Engine
		{
			//sound[] = {"Ca\Sounds_E\Air_E\UH1H\UH1H_engine_ext_2",1,1,800};
			sound[] = {"\CSJ_GyroAC\UH1_v1.wss",1,1,800};
			frequency = "rotorSpeed";
			volume = "camPos*((rotorSpeed-0.72)*5)";
		};
		class EngineIn
		{
			sound[] = {"\CSJ_GyroAC\UH1_v1.wss",1,1};
			frequency = "rotorSpeed";
			volume = "(rotorSpeed-0.72)*5";
		};
	};
};