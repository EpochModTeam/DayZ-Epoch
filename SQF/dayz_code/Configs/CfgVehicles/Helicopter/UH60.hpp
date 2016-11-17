class UH60_Base: Helicopter {
	scope = private;
	side = 1;
	faction = "USMC";
	accuracy = 0.5;
	displayName = "UH-60";
	irScanRangeMin = 500;
	irScanRangeMax = 2000;
	irScanToEyeFactor = 2;
	weapons[] = {"CMFlareLauncher"};
	magazines[] = {"60Rnd_CMFlareMagazine"};
	lockDetectionSystem = "8 + 4";
	incommingMisslieDetectionSystem = 0;
	fuelCapacity = 2760;
};
class MH60S_DZ : UH60_Base {
	crew = "";
	typicalCargo[] = {};
	class TransportMagazines{};
	class TransportWeapons{};
	commanderCanSee = 2+16+32;
	gunnerCanSee = 2+16+32;
	driverCanSee = 2+16+32;
	transportMaxWeapons = 10;
	transportMaxMagazines = 100;
	transportMaxBackpacks = 5;
	scope = public;
	accuracy = 1.5;	// accuracy needed to recognize type of this target
	displayName = "MH-60S DZ";
	class Turrets : Turrets {
		class MainTurret : MainTurret {
			body = "mainTurret";
			gun = "mainGun";
			minElev = -80;
			maxElev = 25;
			initElev = -80;
			minTurn = 30;
			maxTurn = 150;
			initTurn = 90;
			soundServo[] = {"",0.01,1};
			stabilizedInAxes = "StabilizedInAxesNone";
			gunBeg = "muzzle_1";	// endpoint of the gun
			gunEnd = "chamber_1";	// chamber of the gun
			weapons[] = {"M240_veh"};
			magazines[] = {"100Rnd_762x51_M240", "100Rnd_762x51_M240", "100Rnd_762x51_M240"};
			gunnerName = $STR_POSITION_CREWCHIEF;
			gunnerOpticsModel = "\ca\weapons\optika_empty";
			gunnerOutOpticsShowCursor = 1;
			gunnerOpticsShowCursor = 1;
			gunnerAction = "MH60_Gunner";
			gunnerInAction = "MH60_Gunner";
			primaryGunner = 1;
			class ViewOptics {
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
		};

		class RightDoorGun : MainTurret {
			body = "Turret_2";
			gun = "Gun_2";
			animationSourceBody = "Turret_2";
			animationSourceGun = "Gun_2";
			weapons[] = {"M240_veh_2"};
			animationSourceHatch = "";
			selectionFireAnim = "zasleh_1";
			proxyIndex = 2;
			gunnerName = $STR_POSITION_DOORGUNNER;
			commanding = -2;
			minTurn = -150;
			maxTurn = -30;
			initTurn = -90;
			stabilizedInAxes = "StabilizedInAxesNone";
			gunBeg = "muzzle_2";	// endpoint of the gun
			gunEnd = "chamber_2";	// chamber of the gun
			primaryGunner = 0;
			gunnerCompartments = "Compartment2";
			memoryPointGun = "machinegun_2";
			memoryPointGunnerOptics = "gunnerview_2";
		};
	};
	class AnimationSources : AnimationSources {
		class ReloadAnim {
			source = "reload";
			weapon = "M240_veh";
		};

		class ReloadMagazine {
			source = "reloadmagazine";
			weapon = "M240_veh";
		};

		class Revolving {
			source = "revolving";
			weapon = "M240_veh";
		};

		class ReloadAnim_2 {
			source = "reload";
			weapon = "M240_veh_2";
		};

		class ReloadMagazine_2 {
			source = "reloadmagazine";
			weapon = "M240_veh_2";
		};

		class Revolving_2 {
			source = "revolving";
			weapon = "M240_veh_2";
		};
	};

	destrType = "DestructWreck";
	vehicleClass = "Air";
	model = "\ca\air\Mh_60mg";
	mapSize = 17;
	picture = "\ca\air\data\ico\MH_60mg_CA.paa";
	Icon = "\ca\air\data\map_ico\icomap_MH60mg_CA.paa";
	side = TWest;
	faction = USMC;
	attendant = true;
	maxSpeed = 270;	// max speed on level road, km/h
	armor = 35;
	damageResistance = 0.00242;
	cost = 10000000;
	mainRotorSpeed = -1;
	soundGetIn[] = {"\ca\Sounds\Air\Noises\heli_door_01", db-10, 1};
	soundGetOut[] = {"\ca\Sounds\Air\Noises\heli_door_01", db-10, 1, 30};
	soundEnviron[] = {"", db-30, 1.0};
	soundDammage[] = {"\ca\Air\Data\Sound\alarm_loop1", 0.001, 1};
	soundEngineOnInt[] = {"ca\sounds\Air\UH1Y\int\int-start-final", 0.1, 1.0};
	soundEngineOnExt[] = {"ca\sounds\Air\UH1Y\ext\ext-motor-start", 1.0, 1.0, 800};
	soundEngineOffInt[] = {"ca\sounds\Air\UH1Y\int\int-stop-final", 0.1, 1.0};
	soundEngineOffExt[] = {"ca\sounds\Air\UH1Y\ext\ext-motor-stop", 1.0, 1.0, 800};

	class Sounds {
		class Engine {
			sound[] = {"ca\sounds\air\uh1y\ext\ext-fly-mode2", 2.51189, 1.0, 900};
			frequency = "rotorSpeed";
			volume = "camPos*((rotorSpeed-0.72)*4)";
		};

		class RotorLowOut {
			sound[] = {"ca\sounds\air\uh1y\int\int-rotor-single5b", 2.51189, 1.0, 1400};
			frequency = "rotorSpeed";
			volume = "camPos*(0 max (rotorSpeed-0.1))";
			cone[] = {1.6, 3.14, 2.0, 0.5};
		};

		class RotorHighOut {
			sound[] = {"ca\sounds\air\uh1y\int\int-rotor-single5a", 2.51189, 1.0, 1600};
			frequency = "rotorSpeed";
			volume = "camPos*10*(0 max (rotorThrust-0.9))";
			cone[] = {1.6, 3.14, 2.0, 0.5};
		};

		class EngineIn {
			sound[] = {"ca\sounds\air\uh1y\int\int-fly-mode7", db10, 1.0};
			frequency = "rotorSpeed";
			volume = "(1-camPos)*((rotorSpeed-0.75)*4)";
		};

		class RotorLowIn {
			sound[] = {"ca\sounds\air\uh1y\int\int-rotor-single5b", db10, 1.0};
			frequency = "rotorSpeed";
			volume = "2*(1-camPos)*((rotorSpeed factor[0.3, 1.1]) min (rotorSpeed factor[1.1, 0.3]))";
		};

		class RotorHighIn {
			sound[] = {"ca\sounds\air\uh1y\int\int-rotor-single5a", db10, 1.0};
			frequency = "rotorSpeed";
			volume = "(1-camPos)*3*(rotorThrust-0.9)";
		};
	};
	driverInAction = "UH60_Pilot";
	driverAction = "UH60_Pilot";
	cargoAction[] = {"UH60_Cargo01", "UH1Y_Cargo02", "UH1Y_Cargo01", "UH1Y_Cargo01", "UH1Y_Cargo01", "UH60_Cargo02"};
	transportSoldier = 13;
	driverCompartments = "Compartment1";
	cargoCompartments[] = {"Compartment2"};
	enableSweep = false;
	transportAmmo = 0;
	supplyRadius = 2.5;
	initCargoAngleY = 10;
	minCargoAngleY = -60;
	maxCargoAngleY = 120;
	type = VAir;

	// threat (VSoft, VArmor, VAir), how threatening vehicle is to unit types
	threat[] = {0.3, 1, 0.4};
	cargoIsCoDriver[] = {1, 0, 0};
	weapons[] = {};
	magazines[] = {};
	forceHideDriver = true;
	castDriverShadow = true;
	castCargoShadow = true;

	class Library {
		libTextDesc = $STR_LIB_MH60S;
	};

	class Damage {
		tex[] = {};
		mat[] = {"ca\air\Data\uh60_skla.rvmat", "ca\air\Data\uh60_skla_damage.rvmat", "ca\air\Data\uh60_skla_damage.rvmat", "ca\air\Data\uh60_skla_in.rvmat", "ca\air\Data\uh60_skla_in_damage.rvmat", "ca\air\Data\uh60_skla_in_damage.rvmat", "ca\air\Data\materialy\uh60_01.rvmat", "ca\air\Data\materialy\uh60_01_damage.rvmat", "ca\air\Data\materialy\uh60_01_destruct.rvmat"};
	};
	enableManualFire = 0;

	class Reflectors {
		class Left {
			color[] = {0.8, 0.8, 1.0, 1.0};
			ambient[] = {0.07, 0.07, 0.07, 1.0};
			position = "L svetlo";
			direction = "konec L svetla";
			hitpoint = "L svetlo";
			selection = "L svetlo";
			size = 1;
			brightness = 1.0;
		};

		class Right {
			color[] = {0.8, 0.8, 1.0, 1.0};
			ambient[] = {0.07, 0.07, 0.07, 1.0};
			position = "P svetlo";
			direction = "konec P svetla";
			hitpoint = "P svetlo";
			selection = "P svetlo";
			size = 1;
			brightness = 1.0;
		};
	};
};
class UH60M_base_EP1: UH60_Base {
	expansion = 1;
	scope = private;
	model = "\Ca\Air_E\UH60M\UH60M.p3d";
	displayName = "UH-60";
	destrType = "DestructWreck";
	picture = "\ca\air_e\data\UI\Picture_uh60m_CA.paa";
	icon = "\ca\air_e\data\UI\Icon_uh60m_CA.paa";
	mapSize = 17;
	class Library {
		libTextDesc = "The Blackhawk is the US Army�s front-line utility helicopter used for transport roles, medical evacuation and even air support.<br />It is capable of carrying 11 combat-equipped soldiers. Easy to maintain in the field, the Blackhawk performs well in a variety of roles including air assault and medical evacuation.";
	};
	crew = "";
	typicalCargo[] = {};
	gunnerAction = "ManActTestDriver";
	transportMaxBackpacks = 10;
	transportSoldier = 13;
	maxSpeed = 295;
	mainRotorSpeed = 1.2;
	backRotorSpeed = 6.1;
	memoryPointsGetInGunner = "pos gunner";
	memoryPointsGetInGunnerDir = "pos gunner dir";
	memoryPointsGetInCargo[] = {"pos codriver","pos cargo"};
	memoryPointsGetInCargoDir[] = {"pos codriver dir","pos cargo dir"};
	cargoIsCoDriver[] = {0,0};
	threat[] = {0.8,0.1,0.3};
	class TransportMagazines {
		class _xx_30Rnd_556x45_Stanag {
			magazine = "30Rnd_556x45_Stanag";
			count = 30;
		};
		class _xx_HandGrenade_West {
			magazine = "HandGrenade_West";
			count = 5;
		};
		class _xx_SmokeShellGreen {
			magazine = "SmokeShellGreen";
			count = 2;
		};
		class _xx_SmokeShell {
			magazine = "SmokeShell";
			count = 2;
		};
	};
	class TransportWeapons {
	};
	radarType = 4;
	soundGetIn[] = {"Ca\Sounds_E\Air_E\UH1H\open_close",0.316228,1};
	soundGetOut[] = {"Ca\Sounds_E\Air_E\UH1H\open_close",0.316228,1,40};
	soundEngineOnInt[] = {"Ca\Sounds_E\Air_E\UH1H\UH1H_start_int",0.446684,1};
	soundEngineOnExt[] = {"Ca\Sounds_E\Air_E\UH1H\UH1H_start_ext",0.446684,1,700};
	soundEngineOffInt[] = {"Ca\Sounds_E\Air_E\UH1H\UH1H_stop_int",0.446684,1};
	soundEngineOffExt[] = {"Ca\Sounds_E\Air_E\UH1H\UH1H_stop_ext",0.446684,1,700};
	class Sounds {
		class Engine {
			sound[] = {"Ca\Sounds_E\Air_E\UH1H\UH1H_engine_ext_2",1,0.8,800};
			frequency = "rotorSpeed";
			volume = "camPos*((rotorSpeed-0.72)*4)";
		};
		class RotorLowOut {
			sound[] = {"Ca\Sounds_E\Air_E\UH1H\UH1H_rotor_ext_1",2.51189,1.1,1400};
			frequency = "rotorSpeed";
			volume = "camPos*(0 max (rotorSpeed-0.1))";
			cone[] = {1.6,3.14,2,0.5};
		};
		class RotorHighOut {
			sound[] = {"Ca\Sounds_E\Air_E\UH1H\UH1H_rotor_high_ext_1",2.51189,1.1,1600};
			frequency = "rotorSpeed";
			volume = "camPos*10*(0 max (rotorThrust-0.9))";
			cone[] = {1.6,3.14,2,0.5};
		};
		class EngineIn {
			sound[] = {"Ca\Sounds_E\Air_E\UH1H\UH1H_engine_int_1",1,0.8};
			frequency = "rotorSpeed";
			volume = "(1-camPos)*((rotorSpeed-0.75)*4)";
		};
		class RotorLowIn {
			sound[] = {"Ca\Sounds_E\Air_E\UH1H\UH1H_rotor_int_1",1.77828,1.1};
			frequency = "rotorSpeed";
			volume = "2*(1-camPos)*((rotorSpeed factor[0.3, 1.1]) min (rotorSpeed factor[1.1, 0.3]))";
		};
		class RotorHighIn {
			sound[] = {"Ca\Sounds_E\Air_E\UH1H\UH1H_rotor_high_int_1",3.16228,1.1};
			frequency = "rotorSpeed";
			volume = "(1-camPos)*3*(rotorThrust-0.9)";
		};
	};
	driverInAction = "UH60M_Pilot_EP1";
	driverAction = "UH60M_Pilot_EP1";
	cargoAction[] = {"UH60_Cargo02","UH60_Cargo02","UH60_Cargo02","UH60_Cargo02","UH60_Cargo02","UH60_Cargo02","UH60_Cargo02","UH60_Cargo02","UH60_Cargo02","UH60_Cargo02","UH60_Cargo02","UH60_Cargo02","UH60_Cargo02"};
	class HitPoints: HitPoints {
		class HitGlass1: HitGlass1 {
			armor = 0.25;
		};
		class HitGlass2: HitGlass2 {
			armor = 0.25;
		};
		class HitGlass3: HitGlass3 {
			armor = 0.25;
		};
		class HitGlass4: HitGlass4 {
			armor = 0.25;
		};
		class HitGlass5: HitGlass5 {
			armor = 0.25;
		};
	};
	class AnimationSources: AnimationSources {
	};
	class Damage {
		tex[] = {};
		mat[] = {"ca\Air_E\UH60M\Data\uh60m_dust_filter.rvmat","ca\Air_E\UH60M\Data\uh60m_dust_filter.rvmat","ca\Air_E\UH60M\Data\uh60m_dust_filter_destruct.rvmat","ca\Air_E\UH60M\Data\uh60m_engine.rvmat","ca\Air_E\UH60M\Data\uh60m_engine.rvmat","ca\Air_E\UH60M\Data\uh60m_engine_destruct.rvmat","ca\Air_E\UH60M\Data\uh60m_fuselage.rvmat","ca\Air_E\UH60M\Data\uh60m_fuselage.rvmat","ca\Air_E\UH60M\Data\uh60m_fuselage_destruct.rvmat","ca\Air_E\UH60M\Data\uh60m_interior.rvmat","ca\Air_E\UH60M\Data\uh60m_interior.rvmat","ca\Air_E\UH60M\Data\uh60m_interior_destruct.rvmat","ca\Air_E\UH60M\Data\uh60m_navijak.rvmat","ca\Air_E\UH60M\Data\uh60m_navijak.rvmat","ca\Air_E\UH60M\Data\uh60m_navijak_destruct.rvmat","ca\Air_E\UH60M\Data\uh60m_glass.rvmat","ca\Air_E\UH60M\Data\uh60m_glass_damage.rvmat","ca\Air_E\UH60M\Data\uh60m_glass_damage.rvmat","ca\data\data\default.rvmat","ca\data\data\default.rvmat","ca\Air_E\UH60M\Data\default_destruct.rvmat","ca\Air_E\UH60M\Data\uh60m_engine_MEV.rvmat","ca\Air_E\UH60M\Data\uh60m_engine_MEV.rvmat","ca\Air_E\UH60M\Data\uh60m_engine_MEV_destruct.rvmat","ca\Air_E\UH60M\Data\uh60m_fuselage_MEV.rvmat","ca\Air_E\UH60M\Data\uh60m_fuselage_MEV.rvmat","ca\Air_E\UH60M\Data\uh60m_fuselage_MEV_destruct.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default_destruct.rvmat"};
	};
	weapons[] = {"CMFlareLauncher"};
	magazines[] = {"60Rnd_CMFlareMagazine"};
	lockDetectionSystem = "8 + 4";
	incommingMisslieDetectionSystem = 0;
	hiddenSelections[] = {"camo1","camo2","camo3"};
	hiddenSelectionsTextures[] = {"ca\air_e\uh60m\data\uh60m_fuselage_co.paa","ca\air_e\uh60m\data\uh60m_engine_co.paa","ca\air_e\uh60m\data\default_co.paa"};
};
class UH60M_US_base_EP1: UH60M_base_EP1 {
	side = 1;
	faction = "BIS_US";
};
class UH60M_EP1_DZ: UH60M_US_base_EP1 {
	crew = "";
	typicalCargo[] = {};
	class TransportMagazines{};
	class TransportWeapons{};
	commanderCanSee = 2+16+32;
	gunnerCanSee = 2+16+32;
	driverCanSee = 2+16+32;
	transportMaxWeapons = 10;
	transportMaxMagazines = 100;
	transportmaxbackpacks = 5;
	scope = public;
	accuracy = 1.5;
	displayName = "UH-60M DZ";
	class Turrets: Turrets {
		class MainTurret: MainTurret {
			body = "mainTurret";
			gun = "mainGun";
			minElev = -60;
			maxElev = 30;
			initElev = 0;
			minTurn = -7;
			maxTurn = 183;
			initTurn = 0;
			soundServo[] = {"",0.01,1};
			animationSourceHatch = "";
			stabilizedInAxes = "StabilizedInAxesNone";
			gunBeg = "muzzle_1";
			gunEnd = "chamber_1";
			weapons[] = {"M134"};
			magazines[] = {"2000Rnd_762x51_M134"};
			gunnerName = "crew chief";
			gunnerOpticsModel = "\ca\weapons\optika_empty";
			gunnerOutOpticsShowCursor = 1;
			gunnerOpticsShowCursor = 1;
			gunnerAction = "UH60M_Gunner_EP1";
			gunnerInAction = "UH60M_Gunner_EP1";
			commanding = -2;
			primaryGunner = 1;
			class ViewOptics {
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
		};
		class RightDoorGun: MainTurret {
			body = "Turret_2";
			gun = "Gun_2";
			animationSourceBody = "Turret_2";
			animationSourceGun = "Gun_2";
			weapons[] = {"M134_2"};
			magazines[] = {"2000Rnd_762x51_M134"};
			stabilizedInAxes = "StabilizedInAxesNone";
			selectionFireAnim = "zasleh_1";
			proxyIndex = 2;
			gunnerName = "door gunner";
			commanding = -3;
			minElev = -60;
			maxElev = 30;
			initElev = 0;
			minTurn = -183;
			maxTurn = 7;
			initTurn = 0;
			gunBeg = "muzzle_2";
			gunEnd = "chamber_2";
			primaryGunner = 0;
			memoryPointGun = "machinegun_1";
			memoryPointGunnerOptics = "gunnerview_2";
		};
	};
	class AnimationSources: AnimationSources {
		class Gatling_1 {
			source = "revolving";
			weapon = "M134";
		};
		class Gatling_2 {
			source = "revolving";
			weapon = "M134_2";
		};
	};
};
// AMMO LESS
class MH60S_DZE : MH60S_DZ {
	displayName = "MH-60S AL";
	class Turrets : Turrets {
		class MainTurret : MainTurret {
			magazines[] = {};
		};
		class RightDoorGun : RightDoorGun {
			magazines[] = {};
		};
	};
};
class UH60M_EP1_DZE: UH60M_US_base_EP1 {
	crew = "";
	typicalCargo[] = {};
	class TransportMagazines{};
	class TransportWeapons{};
	commanderCanSee = 2+16+32;
	gunnerCanSee = 2+16+32;
	driverCanSee = 2+16+32;
	transportMaxWeapons = 10;
	transportMaxMagazines = 100;
	transportmaxbackpacks = 5;
	scope = public;
	accuracy = 1.5;
	displayName = "UH-60M AL";
	class Turrets: Turrets {
		class MainTurret: MainTurret {
			body = "mainTurret";
			gun = "mainGun";
			minElev = -60;
			maxElev = 30;
			initElev = 0;
			minTurn = -7;
			maxTurn = 183;
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
			gunnerAction = "UH60M_Gunner_EP1";
			gunnerInAction = "UH60M_Gunner_EP1";
			commanding = -2;
			primaryGunner = 1;
			class ViewOptics {
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
		};
		class RightDoorGun: MainTurret {
			body = "Turret_2";
			gun = "Gun_2";
			animationSourceBody = "Turret_2";
			animationSourceGun = "Gun_2";
			weapons[] = {"M134_2"};
			magazines[] = {};
			stabilizedInAxes = "StabilizedInAxesNone";
			selectionFireAnim = "zasleh_1";
			proxyIndex = 2;
			gunnerName = "door gunner";
			commanding = -3;
			minElev = -60;
			maxElev = 30;
			initElev = 0;
			minTurn = -183;
			maxTurn = 7;
			initTurn = 0;
			gunBeg = "muzzle_2";
			gunEnd = "chamber_2";
			primaryGunner = 0;
			memoryPointGun = "machinegun_1";
			memoryPointGunnerOptics = "gunnerview_2";
		};
	};
	class AnimationSources: AnimationSources {
		class Gatling_1 {
			source = "revolving";
			weapon = "M134";
		};
		class Gatling_2 {
			source = "revolving";
			weapon = "M134_2";
		};
	};
};

// Unarmed medevac
class UH60M_MEV_EP1;
class UH60M_MEV_EP1_DZ : UH60M_MEV_EP1 {
	displayname = "UH-60M MedEvac";
	displaynameshort = "UH-60M MedEvac";
	scope = public; 
	crew = ""; 
	typicalCargo[] = {}; 
	commanderCanSee = 2+16+32;
	gunnerCanSee = 2+16+32;
	driverCanSee = 2+16+32;
	transportMaxWeapons = 10;
	transportMaxMagazines = 100;
	transportMaxBackpacks = 5;
	side = 1;
	faction = "USMC";
	accuracy = 0.5;
	irScanRangeMin = 500;
	irScanRangeMax = 2000;
	irScanToEyeFactor = 2;
	lockDetectionSystem = "8 + 4";
	incommingMisslieDetectionSystem = 0;
	fuelCapacity = 2000;
	class TransportMagazines{};
	class TransportWeapons{};
};
