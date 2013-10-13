class CH47_base_EP1: Helicopter
{
	expansion = 1;
	scope = 0;
	displayName = "CH-47";
	side = 1;
	faction = "BIS_US";
	accuracy = 0.5;
	mainRotorSpeed = 1;
	backRotorSpeed = 1;
	armor = 30;
	damageResistance = 0.001;
	destrType = "DestructWreck";
	memoryPointsGetInCargo[] = {"pos codriver","pos cargo"};
	memoryPointsGetInCargoDir[] = {"pos codriver dir","pos cargo dir"};
	cargoAction[] = {"CH47_Cargo_EP1","CH47_Cargo01_EP1","CH47_Cargo01_EP1","CH47_Cargo02_EP1","CH47_Cargo03_EP1","CH47_Cargo01_EP1","CH47_Cargo03_EP1","CH47_Cargo02_EP1","CH47_Cargo01_EP1","CH47_Cargo03_EP1","CH47_Cargo02_EP1","CH47_Cargo03_EP1","CH47_Cargo02_EP1","CH47_Cargo03_EP1","CH47_Cargo01_EP1","CH47_Cargo02_EP1","CH47_Cargo01_EP1","CH47_Cargo03_EP1","CH47_Cargo02_EP1","CH47_Cargo01_EP1","CH47_Cargo03_EP1","CH47_Cargo02_EP1","CH47_Cargo01_EP1","CH47_Cargo03_EP1","CH47_Cargo02_EP1"};
	cargoIsCoDriver[] = {1,0};
	transportSoldier = 24;
	transportMaxBackpacks = 10;
	weapons[] = {"CMFlareLauncher"};
	magazines[] = {"120Rnd_CMFlareMagazine"};
	LockDetectionSystem = 2;
	IncommingMisslieDetectionSystem = 16;
	radarType = 4;
	enableManualFire = 0;
	threat[] = {0.6,0.1,0};
	class HitPoints: HitPoints
	{
		class HitVRotor
		{
			armor = 1;
			material = 51;
			name = "mala vrtule";
			visual = "mala vrtule staticka";
			passThrough = 0.5;
		};
		class HitHRotor
		{
			armor = 1;
			material = 51;
			name = "velka vrtule";
			visual = "velka vrtule staticka";
			passThrough = 0.5;
		};
	};
	soundGetIn[] = {"Ca\Sounds_E\Air_E\CH47\close",0.316228,1};
	soundGetOut[] = {"Ca\Sounds_E\Air_E\CH47\open",0.316228,1,40};
	soundDammage[] = {"Ca\Sounds_E\Air_E\CH47\int-alarm_loop",0.562341,1};
	soundEngineOnInt[] = {"Ca\Sounds_E\Air_E\CH47\CH47_start_int",0.1,1};
	soundEngineOnExt[] = {"Ca\Sounds_E\Air_E\CH47\CH47_start_ext",0.562341,1,800};
	soundEngineOffInt[] = {"Ca\Sounds_E\Air_E\CH47\CH47_stop_int",0.1,1};
	soundEngineOffExt[] = {"Ca\Sounds_E\Air_E\CH47\CH47_stop_ext",0.562341,1,800};
	class Sounds
	{
		class Engine
		{
			sound[] = {"Ca\Sounds_E\Air_E\CH47\CH47_engine_high_ext",1,1,800};
			frequency = "rotorSpeed";
			volume = "camPos*((rotorSpeed-0.72)*4)";
		};
		class RotorLowOut
		{
			sound[] = {"Ca\Sounds_E\Air_E\CH47\CH47_rotor_ext",3.16228,1,1500};
			frequency = "rotorSpeed";
			volume = "camPos*(0 max (rotorSpeed-0.1))";
			cone[] = {1.8,3.14,2,0.9};
		};
		class RotorHighOut
		{
			sound[] = {"Ca\Sounds_E\Air_E\CH47\CH47_rotor_forsage_ext",3.16228,1,1800};
			frequency = "rotorSpeed";
			volume = "camPos*10*(0 max (rotorThrust-0.95))";
			cone[] = {1.8,3.14,2,0.9};
		};
		class EngineIn
		{
			sound[] = {"Ca\Sounds_E\Air_E\CH47\CH47_engine_high_int",1.77828,1};
			frequency = "rotorSpeed";
			volume = "(1-camPos)*((rotorSpeed-0.75)*4)";
		};
		class RotorLowIn
		{
			sound[] = {"Ca\Sounds_E\Air_E\CH47\CH47_rotor_int",1.77828,1};
			frequency = "rotorSpeed";
			volume = "2*(1-camPos)*((rotorSpeed factor[0.3, 1.1]) min (rotorSpeed factor[1.1, 0.3]))";
		};
		class RotorHighIn
		{
			sound[] = {"Ca\Sounds_E\Air_E\CH47\CH47_rotor_forsage_int",1.77828,1};
			frequency = "rotorSpeed";
			volume = "(1-camPos)*3*(rotorThrust-0.9)";
		};
	};
	class Library
	{
		libTextDesc = "The CH-47 Chinook is a versatile, twin-engine, tandem rotor heavy-lift helicopter. Its top speed of 315 km/h was faster any comparable helicopter in the 1960s and even many of today.<br/>The main use of the CH-47 includes troop movement, artillery emplacement and battlefield resupply.";
	};
	class Reflectors
	{
		class Middle
		{
			color[] = {0.8,0.8,1,1};
			ambient[] = {0.07,0.07,0.07,1};
			position = "svetlo";
			direction = "svetlo konec";
			hitpoint = "svetlo";
			selection = "svetlo";
			size = 1;
			brightness = 1;
		};
	};
	class Damage
	{
		tex[] = {};
		mat[] = {"Ca\Air_E\CH47\data\ch47_1.rvmat","Ca\Air_E\CH47\data\ch47_1_damage.rvmat","Ca\Air_E\CH47\data\ch47_1_destruct.rvmat","Ca\Air_E\CH47\data\ch47_2.rvmat","Ca\Air_E\CH47\data\ch47_2_damage.rvmat","Ca\Air_E\CH47\data\ch47_2_destruct.rvmat","Ca\Air_E\CH47\data\ch47_1_int.rvmat","Ca\Air_E\CH47\data\ch47_1_int.rvmat","Ca\Air_E\CH47\data\ch47_1_int_destruct.rvmat","Ca\Air_E\CH47\data\ch47_2_int.rvmat","Ca\Air_E\CH47\data\ch47_2_int.rvmat","Ca\Air_E\CH47\data\ch47_2_int_destruct.rvmat","Ca\Air_E\CH47\data\ch47_sklo_in.rvmat","Ca\Air_E\CH47\data\ch47_sklo_in_damage.rvmat","Ca\Air_E\CH47\data\ch47_sklo_in_damage.rvmat","Ca\Air_E\CH47\data\ch47_sklo.rvmat","Ca\Air_E\CH47\data\ch47_sklo_damage.rvmat","Ca\Air_E\CH47\data\ch47_sklo_damage.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default_destruct.rvmat"};
	};
	irScanRangeMin = 100;
	irScanRangeMax = 1000;
	irScanToEyeFactor = 2;
};

class CH_47F_EP1;
class CH_47F_EP1_DZ : CH_47F_EP1 { 
	accuracy = 1000; 
	model = "\ca\air_E\CH47\CH_47F"; 
	scope = 2; 
	displayName = "CH-47F DZ"; 
	crew = ""; 
	typicalCargo[] = {}; 
	commanderCanSee = 2+16+32;
	gunnerCanSee = 2+16+32;
	driverCanSee = 2+16+32;
	transportMaxWeapons = 10;
	transportMaxMagazines = 200;
	transportmaxbackpacks = 5;
};

class CH_47F_EP1_DZE: CH47_base_EP1
{
	accuracy = 1000;
	model = "\ca\air_E\CH47\CH_47F";
	scope = 2;
	maxSpeed = 293;
	displayName = "CH-47F AL";
	picture = "\ca\air_e\data\UI\Picture_ch47f_CA.paa";
	icon = "\ca\air_e\data\UI\Icon_ch47f_CA.paa";
	mapSize = 24;
	crew = "";
	typicalCargo[] = {}; 
	driverAction = "CH47_Pilot_EP1";
	commanderCanSee = 2+16+32;
	gunnerCanSee = 2+16+32;
	driverCanSee = 2+16+32;
	transportMaxWeapons = 10;
	transportMaxMagazines = 200;
	transportmaxbackpacks = 5;
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			body = "mainTurret";
			gun = "mainGun";
			minElev = -50;
			maxElev = 30;
			initElev = -30;
			minTurn = -3;
			maxTurn = 173;
			initTurn = 0;
			soundServo[] = {"",0.01,1};
			animationSourceHatch = "";
			stabilizedInAxes = "StabilizedInAxesNone";
			gunBeg = "muzzle_1";
			gunEnd = "chamber_1";
			weapons[] = {"M134"};
			magazines[] = {};
			gunnerName = "crew chief";
			gunnerOpticsModel = "\ca\weapons\optika_empty";
			gunnerOutOpticsShowCursor = 1;
			gunnerOpticsShowCursor = 1;
			gunnerAction = "CH47_Gunner_EP1";
			gunnerInAction = "CH47_Gunner_EP1";
			commanding = -2;
			primaryGunner = 0;
			class ViewOptics
			{
				initAngleX = 0;
				minAngleX = -30;
				maxAngleX = 30;
				initAngleY = 0;
				minAngleY = -100;
				maxAngleY = 100;
				initFov = 0.7;
				minFov = 0.25;
				maxFov = 1.1;
			};
			gunnerCompartments = "Compartment2";
			memoryPointsGetInGunner = "pos gunner";
			memoryPointsGetInGunnerDir = "pos gunner dir";
		};
		class RightDoorGun: MainTurret
		{
			body = "Turret2";
			gun = "Gun_2";
			minElev = -60;
			maxElev = 30;
			initElev = -30;
			minTurn = -173;
			maxTurn = 3;
			initTurn = 0;
			animationSourceBody = "Turret_2";
			animationSourceGun = "Gun_2";
			stabilizedInAxes = "StabilizedInAxesNone";
			selectionFireAnim = "zasleh_1";
			proxyIndex = 2;
			gunnerName = "door gunner";
			commanding = -3;
			weapons[] = {"M134_2"};
			gunBeg = "muzzle_2";
			gunEnd = "chamber_2";
			primaryGunner = 0;
			memoryPointGun = "machinegun_2";
			memoryPointGunnerOptics = "gunnerview_2";
		};
		class BackDoorGun: MainTurret
		{
			body = "Turret3";
			gun = "Gun_3";
			minTurn = 130;
			maxTurn = 230;
			initTurn = 180;
			minElev = -50;
			maxElev = 50;
			initElev = 0;
			animationSourceBody = "Turret_3";
			animationSourceGun = "Gun_3";
			stabilizedInAxes = "StabilizedInAxesNone";
			selectionFireAnim = "zasleh_3";
			proxyIndex = 3;
			gunnerName = "rear gunner";
			gunnerOpticsShowCursor = 0;
			commanding = -1;
			gunnerAction = "CH47_Gunner01_EP1";
			gunnerInAction = "CH47_Gunner01_EP1";
			weapons[] = {"M240_veh"};
			magazines[] = {};
			gunBeg = "muzzle_3";
			gunEnd = "chamber_3";
			primaryGunner = 1;
			memoryPointGun = "machinegun_3";
			memoryPointGunnerOptics = "gunnerview_3";
		};
	};
	class AnimationSources: AnimationSources
	{
		class ReloadAnim
		{
			source = "reload";
			weapon = "M240_veh";
		};
		class ReloadMagazine
		{
			source = "reloadmagazine";
			weapon = "M240_veh";
		};
		class Revolving
		{
			source = "revolving";
			weapon = "M240_veh";
		};
		class Gatling_1
		{
			source = "revolving";
			weapon = "M134";
		};
		class Gatling_2
		{
			source = "revolving";
			weapon = "M134_2";
		};
	};
};