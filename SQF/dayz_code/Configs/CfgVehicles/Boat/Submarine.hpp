class ship;
class Submarine: ship
{
	scope	= 0;
	class HitPoints;
	class ViewPilot;
};

class Submarine_DZE_base: Submarine
{
	displayName	= "Submarine";
	model = "\z\addons\dayz_epoch_v\vehicles\sub\epoch_sub_01.p3d";
	picture	= "\ca\water\data\ico\pbx_CA.paa";
	Icon = "\Ca\water\Data\map_ico\icomap_rubber_CA.paa";
	mapSize = 6;
	vehicleClass = "DayZ Epoch Vehicles";
//vehicle characteristics
	maxSpeed = 60;
	brakeDistance = 20;
	armor = 40;
	damageResistance = 0.00318;
	crewVulnerable = 1;
	castDriverShadow = 0;
	castCargoShadow = 0;
	supplyRadius = 5;
	fuelCapacity = 150;
	hasGunner = 0;
	enableManualFire = 0;
	weapons[] = {};
	magazines[] = {};
	precision = 10;
	enableGPS = 0;
	memoryPointsGetInDriver 	= "pos driver";
	memoryPointsGetInDriverDir 	= "pos driver dir";
	memoryPointsGetInCargo 		= "pos cargo";
	memoryPointsGetInCargoDir 	= "pos cargo dir";
//need to remove the spray, submarine is not a speedboat
	leftWaterEffect = "subspray";
	rightWaterEffect = "subspray";
	leftEngineEffect = "subspray";
	rightEngineEffect = "subspray";
	destrType = DestructWreck;
	class DestructionEffects;
	//driverForceOptics = 1;
	//driverOpticsModel = "\ca\Tracked\optika_M1A1_commander";
	
//based on fishing boat
	transportMaxMagazines 	= 500;
	transportMaxWeapons 	= 50;
	transportMaxBackpacks 	= 10;
//	unitInfoType		= UnitInfoCar; //By default no hud information
//crew
	getInAction 		= GetInLow;
	getOutAction 		= GetOutLow;
	transportSoldier 	= 2;
	typicalCargo[]		= {RU_Soldier,RU_Soldier_AR,RU_Soldier_AR};
	driverAction 		= PBX_Driver;
	cargoAction[] 		= {Truck_Cargo04,Truck_Cargo01,Truck_Cargo01};
//		FB_Cargo01,FB_Cargo02,FB_Cargo03,FB_Cargo03,FB_Cargo03,FB_Cargo03,FB_Cargo04
	cargoGetInAction[] 	= {"GetInLow"};
	cargoGetOutAction[] 	= {"GetOutLow"};
	extCameraPosition[] 	= {0,4.0,-14.0};

//ensure no turrets active
	class turrets{};
//anim sources
	class AnimationSources
	{
		class dive
		{
			AnimPeriod = 12;
			source = "user";
			InitPhase = 0;
		};
		class peri_trans
		{
			AnimPeriod = 3;
			source = "user";
			InitPhase = 0;
		};
		class IndicatorSonar
		{
			AnimPeriod = 1;
			source = "user";
			InitPhase = 0;
		};
	};
//in vehicle actions
	class UserActions
	{
		class dive
		{
			displayName = "Dive";
			displayNameDefault = "";
			onlyforplayer = true;
			position = "zamerny";
			radius = 1;
			priority = 99;
			condition = "(player == (driver this)) && {(surfaceIsWater position this) && {(((getPosATL this) select 2) > 10) && (this animationphase ""dive"" <= 0.5)}}";
			statement = "this animate [""dive"", 1]";
		};
		class surface : dive
		{
			displayName = "Surface";
			condition = "(player == (driver this)) && {(this animationphase ""dive"" > 0.5)}";
			statement = "this animate [""dive"", 0];";
		};
		/*
		class periscope_up
		{
			displayName = "Periscope Up";
			displayNameDefault = "";
			onlyforplayer = true;
			position = "zamerny";
			radius = 3;
			priority = 99;
			condition = "(player == driver this) && (this animationphase ""peri_trans"" < 0.5)";
			statement = "this animate [""peri_trans"", 1]";
		};
		class periscope_down : periscope_up
		{
			displayName = "Periscope Down";
			condition = "(player == driver this) && (this animationphase ""peri_trans"" > 0.5)";
			statement = "this animate [""peri_trans"", 0];";
		};
		*/
	};
//damage
	class HitPoints: HitPoints
	{
		class HitHull
		{
			armor = 0.85;
			material = -1;
			name = "karoserie";
			visual = "zbytek";
			passThrough = 1;
		};
		class HitEngine 
		{
			armor = 1.2;
			material = 60;
			name = "motor";
			visual = "zbytek";
			passThrough	= 1;
		};
	};
	class Damage
	{
		tex[] = {};
		mat[] = 
		{
			"z\addons\dayz_epoch_v\vehicles\sub\data\sub_01.rvmat",
			"z\addons\dayz_epoch_v\vehicles\sub\data\sub_01_damage.rvmat",
			"z\addons\dayz_epoch_v\vehicles\sub\data\sub_01_destruct.rvmat",
			"z\addons\dayz_epoch_v\vehicles\sub\data\sub_02.rvmat",
			"z\addons\dayz_epoch_v\vehicles\sub\data\sub_02_damage.rvmat",
			"z\addons\dayz_epoch_v\vehicles\sub\data\sub_02_destruct.rvmat",
			"z\addons\dayz_epoch_v\vehicles\sub\data\sub_03.rvmat",
			"z\addons\dayz_epoch_v\vehicles\sub\data\sub_03_damage.rvmat",
			"z\addons\dayz_epoch_v\vehicles\sub\data\sub_03_destruct.rvmat",
			"z\addons\dayz_epoch_v\vehicles\sub\data\sub_details.rvmat",
			"z\addons\dayz_epoch_v\vehicles\sub\data\sub_details_damage.rvmat",
			"z\addons\dayz_epoch_v\vehicles\sub\data\sub_details_destruct.rvmat",
			"z\addons\dayz_epoch_v\vehicles\sub\data\sub_int.rvmat",
			"z\addons\dayz_epoch_v\vehicles\sub\data\sub_int_damage.rvmat",
			"z\addons\dayz_epoch_v\vehicles\sub\data\sub_int_destruct.rvmat",
			"z\addons\dayz_epoch_v\vehicles\sub\data\sub_shell.rvmat",
			"z\addons\dayz_epoch_v\vehicles\sub\data\sub_shell_damage.rvmat",
			"z\addons\dayz_epoch_v\vehicles\sub\data\sub_shell_destruct.rvmat"
		};
	};
//sounds
	insideSoundCoef = 1;
	soundEngineOnInt[] = {"ca\sounds\vehicles\water\rhib\ext-boat-start-01", db-20, 1.0};
	soundEngineOnExt[] = {"ca\sounds\vehicles\water\rhib\ext-boat-start-01", db0, 1.0, 150};
	soundEngineOffInt[] = {"ca\sounds\vehicles\water\rhib\ext-boat-stop-01", db-20, 1.0};
	soundEngineOffExt[] = {"ca\sounds\vehicles\water\rhib\ext-boat-stop-01", db0, 1.0, 150};
	class Sounds
	{
		class Engine
		{
			sound[] =  {"ca\sounds\vehicles\water\rhib\ext-boat-engine-low-01", db0, 0.9, 300};
			frequency = "(randomizer*0.05+0.95)*rpm";
			volume = "engineOn*(rpm factor[0.5, 0.1])";
		};
		class EngineHighOut
		{
			sound[] = {"ca\sounds\vehicles\water\rhib\ext-boat-engine-high-01", db0, 0.8, 300};
			frequency = "(randomizer*0.05+0.95)*rpm";
			volume = "engineOn*(rpm factor[0.4, 1.3])";
		};
		class IdleOut
		{
			sound[] = {"ca\sounds\vehicles\water\rhib\ext-boat-engine-idle-03", db-5, 1.0, 150};
			frequency = "1";
			volume = "engineOn*(rpm factor[0.3, 0])";
		};
		class WaternoiseOutW0
		{
			sound[] = {"ca\sounds\vehicles\water\water_sfx\ext-water-noise-nospeed", db-8, 1.0, 100};
			frequency = "1";
			volume = "(speed factor[7, 0])";
		};
		class WaternoiseOutW1
		{
			sound[] = {"ca\sounds\vehicles\water\water_sfx\ext-boat-lospd-noise-02", db-8, 1.0, 100};
			frequency = "1";
			volume = "((speed factor[2, 12]) min (speed factor[12, 2]))";
		};
		class WaternoiseOutW2
		{
			sound[] = {"ca\sounds\vehicles\water\water_sfx\ext-boat-hispd-noise-02", db-8, 1.0, 100};
			frequency = "1";
			volume = "(speed factor[9, 18.7])";
		};
	};
	class ViewPilot: ViewPilot
	{
		initFov = 0.7; 
		minFov = 0.25; 
		maxFov = 1.4;
		initAngleX = 0; 
		minAngleX = -65; 
		maxAngleX = 85; //Rg
		initAngleY = 0; 
		minAngleY = -150; 
		maxAngleY = 150; //Rg
	};
//searchlight
	class Reflectors
	{
		class main_reflector
		{
			color[] = {0.8, 0.8, 0.9, 1.0};
			ambient[] = {0.1, 0.1, 0.1, 1.0};
			position = "light";
			direction = "lightEnd";
			hitpoint = "light";
			selection = "light";
			size = 1.0;
			brightness = 5.0;
		};
	};
//blinkers
	class MarkerLights
	{
		class RedStill
		{
			name = "red_light";
			color[] = {1.0, 0.1, 0.1, 1};
			ambient[] = {0.1, 0.01, 0.01, 1};
			brightness = 0.01;
			blinking = false;
		};
		class GreenStill
		{
			name = "green_light";
			color[] = {0.1, 1.0, 0.1, 1};
			ambient[] = {0.01, 0.1, 0.01, 1};
			brightness = 0.01;
			blinking = false;
		};
		class WhiteStill
		{
			name = "white_light";
			color[] = {1.0, 1.0, 1.0, 1};
			ambient[] = {0.1, 0.1, 0.1, 1};
			brightness = 0.01;
			blinking = false;
		};
	};
};

class Submarine_DZE: Submarine_DZE_base
{
	scope = 2;
	displayName	= $STR_VEH_NAME_SUBMARINE;
	transportMaxMagazines = 360;
	transportMaxWeapons = 80;
	transportMaxBackpacks = 20;
};