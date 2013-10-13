class LandRover_Base: Car
{
	brakeDistance = 12.5;
	expansion = 1;
	enableManualFire = 0;
	htMin = 60;
	htMax = 1800;
	afMax = 100;
	mfMax = 80;
	mFact = 1;
	tBody = 250;
	scope = 0;
	displayname = "Military Offroad";
	maxSpeed = 150;
	terrainCoef = 3;
	turnCoef = 3;
	armor = 30;
	damageResistance = 0.00719;
	model = "\ca\wheeled_E\LR\LR";
	Picture = "\CA\wheeled_e\Data\UI\Picture_lr_CA.paa";
	Icon = "\CA\wheeled_e\Data\UI\Icon_lr_transport_CA.paa";
	MapSize = 6;
	outsideSoundFilter = 1;
	insideSoundCoef = 0.9;
	soundGear[] = {"",5.62341e-005,1};
	soundGetIn[] = {"\ca\Sounds_E\Wheeled_E\LandRover\LRover_door",1,1};
	soundGetOut[] = {"\ca\Sounds_E\Wheeled_E\LandRover\LRover_door",1,1,30};
	soundEngineOnInt[] = {"\ca\Sounds_E\Wheeled_E\LandRover\LRover_int_start",1,1};
	soundEngineOnExt[] = {"\ca\Sounds_E\Wheeled_E\LandRover\LRover_ext_start",1,1,100};
	soundEngineOffInt[] = {"\ca\Sounds_E\Wheeled_E\LandRover\LRover_int_stop",1,1};
	soundEngineOffExt[] = {"\ca\Sounds_E\Wheeled_E\LandRover\LRover_ext_stop",1,1,100};
	buildCrash0[] = {"Ca\sounds\Vehicles\Crash\tank_building_01",0.707946,1,150};
	buildCrash1[] = {"Ca\sounds\Vehicles\Crash\tank_building_02",0.707946,1,150};
	buildCrash2[] = {"Ca\sounds\Vehicles\Crash\tank_building_03",0.707946,1,150};
	buildCrash3[] = {"Ca\sounds\Vehicles\Crash\tank_building_04",0.707946,1,150};
	soundBuildingCrash[] = {"buildCrash0",0.25,"buildCrash1",0.25,"buildCrash2",0.25,"buildCrash3",0.25};
	WoodCrash0[] = {"Ca\sounds\Vehicles\Crash\tank_wood_01",0.707946,1,150};
	WoodCrash1[] = {"Ca\sounds\Vehicles\Crash\tank_wood_02",0.707946,1,150};
	WoodCrash2[] = {"Ca\sounds\Vehicles\Crash\tank_wood_03",0.707946,1,150};
	WoodCrash3[] = {"Ca\sounds\Vehicles\Crash\tank_wood_04",0.707946,1,150};
	soundWoodCrash[] = {"woodCrash0",0.25,"woodCrash1",0.25,"woodCrash2",0.25,"woodCrash3",0.25};
	ArmorCrash0[] = {"Ca\sounds\Vehicles\Crash\tank_vehicle_01",0.707946,1,150};
	ArmorCrash1[] = {"Ca\sounds\Vehicles\Crash\tank_vehicle_02",0.707946,1,150};
	ArmorCrash2[] = {"Ca\sounds\Vehicles\Crash\tank_vehicle_03",0.707946,1,150};
	ArmorCrash3[] = {"Ca\sounds\Vehicles\Crash\tank_vehicle_04",0.707946,1,150};
	soundArmorCrash[] = {"ArmorCrash0",0.25,"ArmorCrash1",0.25,"ArmorCrash2",0.25,"ArmorCrash3",0.25};
	class SoundEvents
	{
		class AccelerationIn
		{
			sound[] = {"\ca\Sounds_E\Wheeled_E\LandRover\LRover_int_acceleration",0.562341,1};
			limit = "0.15";
			expression = "engineOn*(1-camPos)*2*gmeterZ*((speed factor[1.5, 5]) min (speed factor[5, 1.5]))";
		};
		class AccelerationOut
		{
			sound[] = {"\ca\Sounds_E\Wheeled_E\LandRover\LRover_ext_acceleration",0.562341,1,300};
			limit = "0.15";
			expression = "engineOn*camPos*2*gmeterZ*((speed factor[1.5, 5]) min (speed factor[5, 1.5]))";
		};
	};
	class Sounds
	{
		class Engine
		{
			sound[] = {"\ca\Sounds_E\Wheeled_E\LandRover\LRover_ext_low",1.41254,0.6,200};
			frequency = "(randomizer*0.05+0.95)*rpm";
			volume = "camPos*engineOn*((rpm factor[0.3, 0.4]) min (rpm factor[0.7, 0.5]))";
		};
		class EngineHighOut
		{
			sound[] = {"\ca\Sounds_E\Wheeled_E\LandRover\LRover_ext_high",1.41254,0.6,300};
			frequency = "(randomizer*0.05+0.95)*rpm";
			volume = "camPos*engineOn*(rpm factor[0.5, 0.8])";
		};
		class IdleOut
		{
			sound[] = {"\ca\Sounds_E\Wheeled_E\LandRover\LRover_ext_idle",0.562341,1,100};
			frequency = "1";
			volume = "engineOn*camPos*(rpm factor[0.4, 0])";
		};
		class TiresRockOut
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-rock2",0.1,1,50};
			frequency = "1";
			volume = "camPos*rock*(speed factor[2, 20])";
		};
		class TiresSandOut
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-sand2",0.1,1,50};
			frequency = "1";
			volume = "camPos*sand*(speed factor[2, 20])";
		};
		class TiresGrassOut
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-grass3",0.1,1,50};
			frequency = "1";
			volume = "camPos*grass*(speed factor[2, 20])";
		};
		class TiresMudOut
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-mud2",0.1,1,50};
			frequency = "1";
			volume = "camPos*mud*(speed factor[2, 20])";
		};
		class TiresGravelOut
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-gravel2",0.1,1,50};
			frequency = "1";
			volume = "camPos*gravel*(speed factor[2, 20])";
		};
		class TiresAsphaltOut
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-asphalt3",0.1,1,50};
			frequency = "1";
			volume = "camPos*asphalt*(speed factor[2, 20])";
		};
		class NoiseOut
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Noises\ext\noise3",0.562341,1,50};
			frequency = "1";
			volume = "camPos*(damper0 max 0.04)*(speed factor[0, 8])";
		};
		class EngineLowIn
		{
			sound[] = {"\ca\Sounds_E\Wheeled_E\LandRover\LRover_int_low",1.41254,0.6};
			frequency = "(randomizer*0.05+0.95)*rpm";
			volume = "(1-camPos)*engineOn*((rpm factor[0.3, 0.4]) min (rpm factor[0.7, 0.5]))";
		};
		class EngineHighIn
		{
			sound[] = {"\ca\Sounds_E\Wheeled_E\LandRover\LRover_int_high",1.41254,0.6};
			frequency = "(randomizer*0.05+0.95)*rpm";
			volume = "(1-camPos)*engineOn*(rpm factor[0.5, 0.8])";
		};
		class IdleIn
		{
			sound[] = {"\ca\Sounds_E\Wheeled_E\LandRover\LRover_int_idle",0.794328,1};
			frequency = "1";
			volume = "engineOn*(rpm factor[0.4, 0])*(1-camPos)";
		};
		class TiresRockIn
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-rock2",0.1,1};
			frequency = "1";
			volume = "(1-camPos)*rock*(speed factor[2, 20])";
		};
		class TiresSandIn
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-sand2",0.1,1};
			frequency = "1";
			volume = "(1-camPos)*sand*(speed factor[2, 20])";
		};
		class TiresGrassIn
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-grass3",0.1,1};
			frequency = "1";
			volume = "(1-camPos)*grass*(speed factor[2, 20])";
		};
		class TiresMudIn
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-mud2",0.1,1};
			frequency = "1";
			volume = "(1-camPos)*mud*(speed factor[2, 20])";
		};
		class TiresGravelIn
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-gravel2",0.1,1};
			frequency = "1";
			volume = "(1-camPos)*gravel*(speed factor[2, 20])";
		};
		class TiresAsphaltIn
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-asphalt3",0.1,1};
			frequency = "1";
			volume = "(1-camPos)*asphalt*(speed factor[2, 20])";
		};
		class NoiseIn
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Noises\int\noise4",0.316228,1};
			frequency = "1";
			volume = "(damper0 max 0.04)*(speed factor[0, 8])*(1-camPos)";
		};
		class Movement
		{
			sound = "soundEnviron";
			frequency = "1";
			volume = "0";
		};
	};
	class Library
	{
		libTextDesc = "These offroads where a pioneering civilian all-terrain utility vehicles, which where introduced in 1948; but later, the Landrover was adopted as a general brand for many four-wheel drive all-terrain vehicles.";
	};
	transportSoldier = 7;
	driverAction = "LR_Driver_EP1";
	cargoAction[] = {"LR_Cargo01_EP1","LR_Cargo02_EP1","LR_Cargo03_EP1","LR_Cargo05_EP1","LR_Cargo04_EP1","LR_Cargo02_EP1","LR_Cargo03_EP1"};
	cargoIsCoDriver[] = {1,0};
	class HitPoints: HitPoints
	{
		class HitEngine
		{
			armor = 2;
			material = -1;
			name = "motor";
			passThrough = 0;
		};
		class HitFuel
		{
			armor = 1;
			material = -1;
			name = "palivo";
			passThrough = 0;
		};
		class HitLFWheel: HitLFWheel
		{
			armor = 0.5;
		};
		class HitLBWheel: HitLBWheel
		{
			armor = 0.5;
		};
		class HitRFWheel: HitRFWheel
		{
			armor = 0.5;
		};
		class HitRBWheel: HitRBWheel
		{
			armor = 0.5;
		};
	};
	hiddenSelections[] = {};
	threat[] = {0,0,0};
};

class LandRover_Special_CZ_EP1_DZ: LandRover_Base
{
	scope = 2;
	side = 2;
	faction = "BIS_CZ";
	crew = "";
	typicalCargo[] = {};
	model = "\ca\wheeled_E\LR\LR_Special";
	displayname = "Military Offroad Special DZ";
	Picture = "\CA\wheeled_e\Data\UI\Picture_lr_special_CA.paa";
	Icon = "\CA\wheeled_e\Data\UI\Icon_lr_special_CA.paa";
	transportSoldier = 2;
	cargoIsCoDriver[] = {0};
	cargoAction[] = {"LR_Cargo03_EP1","LR_Cargo02_EP1"};
	threat[] = {1,0.2,0.3};
	class Damage
	{
		tex[] = {};
		mat[] = {"ca\wheeled_E\LR\Data\LR_base.rvmat","ca\wheeled_E\LR\Data\LR_base_damage.rvmat","ca\wheeled_E\LR\Data\LR_base_destruct.rvmat","ca\wheeled_E\LR\Data\LR_glass.rvmat","ca\wheeled_E\LR\Data\LR_glass_damage.rvmat","ca\wheeled_E\LR\Data\LR_glass_destruct.rvmat","ca\wheeled_E\LR\Data\LR_Special.rvmat","ca\wheeled_E\LR\Data\LR_Special_damage.rvmat","ca\wheeled_E\LR\Data\LR_Special_destruct.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default_destruct.rvmat"};
	};
	class Turrets: Turrets
	{
		class AGS30_Turret: MainTurret
		{
			body = "mainTurret";
			gun = "mainGun";
			gunnerForceOptics = 0;
			gunnerOutOpticsShowCursor = 0;
			weapons[] = {"AGS30"};
			magazines[] = {"29Rnd_30mm_AGS30"};
			soundServo[] = {"\ca\sounds\vehicles\servos\turret-1",0.0316228,1,15};
			gunnerAction = "LR_Gunner01_EP1";
			gunnerInAction = "LR_Gunner01_EP1";
			ejectDeadGunner = 1;
			gunnerOpticsModel = "\ca\weapons\optika_AGS30";
			class GunFire: WeaponCloudsMGun
			{
				interval = 0.01;
			};
			class ViewOptics: ViewOptics
			{
				initFov = 0.2;
				minFov = 0.058;
				maxFov = 0.2;
			};
			stabilizedInAxes = "StabilizedInAxesNone";
			minElev = -18;
		};
		class PK_Turret: MainTurret
		{
			gunnerName = "commander";
			primaryGunner = 0;
			primaryObserver = 1;
			commanding = 2;
			body = "mainTurret_2";
			gun = "mainGun_2";
			animationSourceBody = "mainTurret_2";
			animationSourceGun = "mainGun_2";
			proxyIndex = 2;
			gunBeg = "usti hlavne_2";
			gunEnd = "konec hlavne_2";
			memoryPointGunnerOptics = "gunnerview_2";
			minElev = -18;
			maxElev = 40;
			minTurn = -45;
			maxTurn = 45;
			initTurn = 0;
			gunnerOpticsModel = "\ca\Weapons\optika_empty";
			gunnerForceOptics = 0;
			weapons[] = {"PKT"};
			magazines[] = {"100Rnd_762x54_PK"};
			soundServo[] = {};
			gunnerAction = "LR_Gunner02_EP1";
			gunnerInAction = "LR_Gunner02_EP1";
			ejectDeadGunner = 1;
			stabilizedInAxes = "StabilizedInAxesNone";
			memoryPointsGetInGunner = "pos codriver";
			memoryPointsGetInGunnerDir = "pos codriver dir";
		};
	};
	class AnimationSources: AnimationSources
	{
		class ReloadAnim
		{
			source = "reload";
			weapon = "AGS30";
		};
		class ReloadMagazine
		{
			source = "reloadmagazine";
			weapon = "AGS30";
		};
		class Revolving
		{
			source = "revolving";
			weapon = "AGS30";
		};
		class ReloadAnim_2
		{
			source = "reload";
			weapon = "PKT";
		};
		class ReloadMagazine_2
		{
			source = "reloadmagazine";
			weapon = "PKT";
		};
		class Revolving_2
		{
			source = "revolving";
			weapon = "PKT";
		};
	};
	class Library
	{
		libTextDesc = "These offroads, introduced in 1948, pioneered the civilian all-terrain utility vehicle. Later, the Land Rover was adopted as a general brand for many four-wheel-drive all-terrain vehicles.";
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class NVGMarkers
	{
		class NVGMarker01
		{
			name = "nvg_marker";
			color[] = {0.03,0.003,0.003,1};
			ambient[] = {0.003,0.0003,0.0003,1};
			brightness = 0.001;
			blinking = 1;
		};
	};
};


class LandRover_Special_CZ_EP1_DZE: LandRover_Base
{
	scope = 2;
	side = 2;
	faction = "BIS_CZ";
	crew = "";
	typicalCargo[] = {};
	model = "\ca\wheeled_E\LR\LR_Special";
	displayname = "Military Offroad Special DZ";
	Picture = "\CA\wheeled_e\Data\UI\Picture_lr_special_CA.paa";
	Icon = "\CA\wheeled_e\Data\UI\Icon_lr_special_CA.paa";
	transportSoldier = 2;
	cargoIsCoDriver[] = {0};
	cargoAction[] = {"LR_Cargo03_EP1","LR_Cargo02_EP1"};
	threat[] = {1,0.2,0.3};
	class Damage
	{
		tex[] = {};
		mat[] = {"ca\wheeled_E\LR\Data\LR_base.rvmat","ca\wheeled_E\LR\Data\LR_base_damage.rvmat","ca\wheeled_E\LR\Data\LR_base_destruct.rvmat","ca\wheeled_E\LR\Data\LR_glass.rvmat","ca\wheeled_E\LR\Data\LR_glass_damage.rvmat","ca\wheeled_E\LR\Data\LR_glass_destruct.rvmat","ca\wheeled_E\LR\Data\LR_Special.rvmat","ca\wheeled_E\LR\Data\LR_Special_damage.rvmat","ca\wheeled_E\LR\Data\LR_Special_destruct.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default_destruct.rvmat"};
	};
	class Turrets: Turrets
	{
		class AGS30_Turret: MainTurret
		{
			body = "mainTurret";
			gun = "mainGun";
			gunnerForceOptics = 0;
			gunnerOutOpticsShowCursor = 0;
			weapons[] = {"AGS30"};
			magazines[] = {};
			soundServo[] = {"\ca\sounds\vehicles\servos\turret-1",0.0316228,1,15};
			gunnerAction = "LR_Gunner01_EP1";
			gunnerInAction = "LR_Gunner01_EP1";
			ejectDeadGunner = 1;
			gunnerOpticsModel = "\ca\weapons\optika_AGS30";
			class GunFire: WeaponCloudsMGun
			{
				interval = 0.01;
			};
			class ViewOptics: ViewOptics
			{
				initFov = 0.2;
				minFov = 0.058;
				maxFov = 0.2;
			};
			stabilizedInAxes = "StabilizedInAxesNone";
			minElev = -18;
		};
		class PK_Turret: MainTurret
		{
			gunnerName = "commander";
			primaryGunner = 0;
			primaryObserver = 1;
			commanding = 2;
			body = "mainTurret_2";
			gun = "mainGun_2";
			animationSourceBody = "mainTurret_2";
			animationSourceGun = "mainGun_2";
			proxyIndex = 2;
			gunBeg = "usti hlavne_2";
			gunEnd = "konec hlavne_2";
			memoryPointGunnerOptics = "gunnerview_2";
			minElev = -18;
			maxElev = 40;
			minTurn = -45;
			maxTurn = 45;
			initTurn = 0;
			gunnerOpticsModel = "\ca\Weapons\optika_empty";
			gunnerForceOptics = 0;
			weapons[] = {"PKT"};
			magazines[] = {};
			soundServo[] = {};
			gunnerAction = "LR_Gunner02_EP1";
			gunnerInAction = "LR_Gunner02_EP1";
			ejectDeadGunner = 1;
			stabilizedInAxes = "StabilizedInAxesNone";
			memoryPointsGetInGunner = "pos codriver";
			memoryPointsGetInGunnerDir = "pos codriver dir";
		};
	};
	class AnimationSources: AnimationSources
	{
		class ReloadAnim
		{
			source = "reload";
			weapon = "AGS30";
		};
		class ReloadMagazine
		{
			source = "reloadmagazine";
			weapon = "AGS30";
		};
		class Revolving
		{
			source = "revolving";
			weapon = "AGS30";
		};
		class ReloadAnim_2
		{
			source = "reload";
			weapon = "PKT";
		};
		class ReloadMagazine_2
		{
			source = "reloadmagazine";
			weapon = "PKT";
		};
		class Revolving_2
		{
			source = "revolving";
			weapon = "PKT";
		};
	};
	class Library
	{
		libTextDesc = "These offroads, introduced in 1948, pioneered the civilian all-terrain utility vehicle. Later, the Land Rover was adopted as a general brand for many four-wheel-drive all-terrain vehicles.";
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class NVGMarkers
	{
		class NVGMarker01
		{
			name = "nvg_marker";
			color[] = {0.03,0.003,0.003,1};
			ambient[] = {0.003,0.0003,0.0003,1};
			brightness = 0.001;
			blinking = 1;
		};
	};
};



class LandRover_MG_TK_EP1_DZ: LandRover_Base
{
	scope = 2;
	side = 2;
	faction = "BIS_TK";
	crew = "";
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};
	
	model = "\ca\wheeled_E\LR\LR_MG";
	displayname = "Military Offroad (M2) DZ";
	Picture = "\CA\wheeled_e\Data\UI\Picture_lr_mg_CA.paa";
	Icon = "\CA\wheeled_e\Data\UI\Icon_lr_mg_CA.paa";
	transportSoldier = 1;
	cargoAction[] = {"LR_Cargo01_EP1"};
	threat[] = {1,0.1,0.3};
	class HitPoints: HitPoints
	{
		class HitGlass1: HitGlass1
		{
			armor = 0.51;
		};
	};
	class Damage
	{
		tex[] = {};
		mat[] = {"ca\wheeled_E\LR\Data\LR_base.rvmat","ca\wheeled_E\LR\Data\LR_base_damage.rvmat","ca\wheeled_E\LR\Data\LR_base_destruct.rvmat","ca\wheeled_E\LR\Data\LR_glass.rvmat","ca\wheeled_E\LR\Data\LR_glass_damage.rvmat","ca\wheeled_E\LR\Data\LR_glass_destruct.rvmat","ca\wheeled_E\LR\Data\LR_MG-SPG9.rvmat","ca\wheeled_E\LR\Data\LR_MG-SPG9_damage.rvmat","ca\wheeled_E\LR\Data\LR_MG-SPG9_destruct.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default_destruct.rvmat"};
	};
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			body = "mainTurret";
			gun = "mainGun";
			hasGunner = 1;
			weapons[] = {"M2"};
			minElev = -25;
			maxElev = 60;
			soundServo[] = {"\ca\wheeled\Data\Sound\servo3",1e-006,1};
			magazines[] = {"100Rnd_127x99_M2"};
			gunnerAction = "LR_Gunner_EP1";
			ejectDeadGunner = 1;
			castGunnerShadow = 1;
			stabilizedInAxes = "StabilizedInAxesNone";
		};
	};
	class AnimationSources: AnimationSources
	{
		class ReloadAnim
		{
			source = "reload";
			weapon = "M2";
		};
		class ReloadMagazine
		{
			source = "reloadmagazine";
			weapon = "M2";
		};
		class Revolving
		{
			source = "revolving";
			weapon = "M2";
		};
	};
	class Library
	{
		libTextDesc = "These offroads, introduced in 1948, pioneered the civilian all-terrain utility vehicle. Later, the Land Rover was adopted as a general brand for many four-wheel-drive all-terrain vehicles.<br/>This one carries the M2 .50 machine gun.";
	};
};

class LandRover_MG_TK_EP1_DZE: LandRover_Base
{
	scope = 2;
	side = 2;
	faction = "BIS_TK";
	crew = "";
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};
	
	model = "\ca\wheeled_E\LR\LR_MG";
	displayname = "Military Offroad (M2) AL";
	Picture = "\CA\wheeled_e\Data\UI\Picture_lr_mg_CA.paa";
	Icon = "\CA\wheeled_e\Data\UI\Icon_lr_mg_CA.paa";
	transportSoldier = 1;
	cargoAction[] = {"LR_Cargo01_EP1"};
	threat[] = {1,0.1,0.3};
	class HitPoints: HitPoints
	{
		class HitGlass1: HitGlass1
		{
			armor = 0.51;
		};
	};
	class Damage
	{
		tex[] = {};
		mat[] = {"ca\wheeled_E\LR\Data\LR_base.rvmat","ca\wheeled_E\LR\Data\LR_base_damage.rvmat","ca\wheeled_E\LR\Data\LR_base_destruct.rvmat","ca\wheeled_E\LR\Data\LR_glass.rvmat","ca\wheeled_E\LR\Data\LR_glass_damage.rvmat","ca\wheeled_E\LR\Data\LR_glass_destruct.rvmat","ca\wheeled_E\LR\Data\LR_MG-SPG9.rvmat","ca\wheeled_E\LR\Data\LR_MG-SPG9_damage.rvmat","ca\wheeled_E\LR\Data\LR_MG-SPG9_destruct.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default_destruct.rvmat"};
	};
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			body = "mainTurret";
			gun = "mainGun";
			hasGunner = 1;
			weapons[] = {"M2"};
			minElev = -25;
			maxElev = 60;
			soundServo[] = {"\ca\wheeled\Data\Sound\servo3",1e-006,1};
			magazines[] = {};
			gunnerAction = "LR_Gunner_EP1";
			ejectDeadGunner = 1;
			castGunnerShadow = 1;
			stabilizedInAxes = "StabilizedInAxesNone";
		};
	};
	class AnimationSources: AnimationSources
	{
		class ReloadAnim
		{
			source = "reload";
			weapon = "M2";
		};
		class ReloadMagazine
		{
			source = "reloadmagazine";
			weapon = "M2";
		};
		class Revolving
		{
			source = "revolving";
			weapon = "M2";
		};
	};
	class Library
	{
		libTextDesc = "These offroads, introduced in 1948, pioneered the civilian all-terrain utility vehicle. Later, the Land Rover was adopted as a general brand for many four-wheel-drive all-terrain vehicles.<br/>This one carries the M2 .50 machine gun.";
	};
};