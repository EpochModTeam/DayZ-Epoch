class HMMWV_DZE_Base: Car
{
	scope = 0;
	vehicleClass = "DayZ Epoch Vehicles";
	accuracy = 0.3;
	side = 1;
	faction = "USMC";
	wheelCircumference = 2.834;
	Model = "\ca\wheeled\HMMWV50";
	Picture = "\Ca\wheeled\data\ico\HMMWV50_CA.paa";
	Icon = "\Ca\wheeled\data\map_ico\icomap_hmwv50_CA.paa";
	mapSize = 5;
	displayName = "HMMWV";
	crew = "";
	typicalCargo[] = {};
	damperSize = 0.2;
	damperForce = 1;
	damperDamping = 1;
	armor = 40;
	damageResistance = 0.00562;
	turnCoef = 2;
	steerAheadPlan = 0.2;
	steerAheadSimul = 0.4;
	predictTurnPlan = 0.9;
	predictTurnSimul = 0.5;
	terrainCoef = 2;
	enableGPS = 0;
	supplyRadius = 1.5;
	type = 1;
	cost = 100000;
	armorGlass = 0.5;
	armorWheels = 0.1;
	soundServo[] = {"\Ca\sounds\Vehicles\Servos\turret-1",0.01,1,10};
	soundEnviron[] = {"",0.562341,1};
	transportSoldier = 3;
	class Library
	{
		libTextDesc = "The High Mobility Multi-purpose Wheeled Vehicle (HMMWV) has replaced the M151 �Willys� jeep in US Army service.  The HMMWV was designed to fill myriad roles, including that of light tactical commander's vehicle, special purpose shelter carrier, and mobile weapons platform. The HMMWV is equipped with a high performance diesel engine and four-wheel drive, giving it access to very difficult terrain. It can be armed with an M2 machinegun, a Mk 19 grenade launcher or a TOW Anti-Tank Guided Missile.";
	};
	castDriverShadow = 0;
	driverAction = "HMMWV_Driver";
	cargoAction[] = {"HMMWV_Cargo01","HMMWV_Cargo01","UAZ_Cargo01"};
	unitInfoType = "UnitInfoShip";
	threat[] = {1,0.1,0.4};
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			body = "mainTurret";
			gun = "mainGun";
			hasGunner = 1;
			weapons[] = {"M2"};
			magazines[] = {"100Rnd_127x99_M2","100Rnd_127x99_M2","100Rnd_127x99_M2","100Rnd_127x99_M2","100Rnd_127x99_M2","100Rnd_127x99_M2"};
			soundServo[] = {"\Ca\sounds\Vehicles\Servos\turret-1",0.01,1,10};
			minElev = -25;
			maxElev = 60;
			gunnerAction = "HMMWV_Gunner01";
			viewGunnerInExternal = 1;
			castGunnerShadow = 1;
			stabilizedInAxes = "StabilizedInAxesNone";
		};
	};
	class HitPoints: HitPoints
	{
		class HitGlass1: HitGlass1
		{
			armor = 1;
		};
		class HitGlass2: HitGlass2
		{
			armor = 1;
		};
		class HitGlass3: HitGlass3
		{
			armor = 1;
		};
		class HitGlass4: HitGlass4
		{
			armor = 1;
		};
		class HitLFWheel: HitLFWheel
		{
			armor = 0.15;
		};
		class HitLBWheel: HitLBWheel
		{
			armor = 0.15;
		};
		class HitRFWheel: HitRFWheel
		{
			armor = 0.15;
		};
		class HitRBWheel: HitRBWheel
		{
			armor = 0.15;
		};
		class HitFuel
		{
			armor = 0.14;
			material = -1;
			name = "fueltank";
			visual = "";
			passThrough = 1;
		};
		class HitEngine
		{
			armor = 0.5;
			material = -1;
			name = "engine";
			visual = "";
			passThrough = 1;
		};
	};
	class Damage
	{
		tex[] = {};
		mat[] = {"ca\wheeled\hmmwv\data\hmmwv_details.rvmat","Ca\wheeled\HMMWV\data\hmmwv_details_damage.rvmat","Ca\wheeled\HMMWV\data\hmmwv_details_destruct.rvmat","ca\wheeled\hmmwv\data\hmmwv_body.rvmat","Ca\wheeled\HMMWV\data\hmmwv_body_damage.rvmat","Ca\wheeled\HMMWV\data\hmmwv_body_destruct.rvmat","ca\wheeled\hmmwv\data\hmmwv_clocks.rvmat","ca\wheeled\hmmwv\data\hmmwv_clocks.rvmat","ca\wheeled\data\hmmwv_clocks_destruct.rvmat","ca\weapons\data\m2.rvmat","ca\weapons\data\m2.rvmat","ca\weapons\data\m2_destruct.rvmat","ca\tracked\data\detailmapy\m1abrams_mg_mount.rvmat","ca\tracked\data\detailmapy\m1abrams_mg_mount.rvmat","ca\tracked\data\detailmapy\m1abrams_mg_mount_destruct.rvmat","ca\wheeled\HMMWV\data\hmmwv_glass.rvmat","ca\wheeled\HMMWV\data\hmmwv_glass_Half_D.rvmat","ca\wheeled\HMMWV\data\hmmwv_glass_Half_D.rvmat","ca\wheeled\HMMWV\data\hmmwv_glass_in.rvmat","ca\wheeled\HMMWV\data\hmmwv_glass_in_Half_D.rvmat","ca\wheeled\HMMWV\data\hmmwv_glass_in_Half_D.rvmat"};
	};
	insideSoundCoef = 0.9;
	soundGear[] = {"",5.62341e-005,1};
	soundGetIn[] = {"ca\SOUNDS\Vehicles\Wheeled\HMMWV\ext\get_in2",0.562341,1};
	soundGetOut[] = {"ca\SOUNDS\Vehicles\Wheeled\HMMWV\int\get_in2",0.562341,1,20};
	soundEngineOnInt[] = {"ca\sounds\Vehicles\Wheeled\HMMWV\int\int-engine_start1",0.177828,1};
	soundEngineOnExt[] = {"ca\SOUNDS\Vehicles\Wheeled\HMMWV\ext\engine_ON1",0.177828,1,100};
	soundEngineOffInt[] = {"ca\sounds\vehicles\Wheeled\HMMWV\int\int-engine_off2",0.177828,1};
	soundEngineOffExt[] = {"ca\sounds\vehicles\Wheeled\HMMWV\ext\engine_OFF2",0.177828,1,100};
	buildCrash0[] = {"Ca\sounds\Vehicles\Crash\crash_building_01",0.707946,1,200};
	buildCrash1[] = {"Ca\sounds\Vehicles\Crash\crash_building_02",0.707946,1,200};
	buildCrash2[] = {"Ca\sounds\Vehicles\Crash\crash_building_03",0.707946,1,200};
	buildCrash3[] = {"Ca\sounds\Vehicles\Crash\crash_building_04",0.707946,1,200};
	soundBuildingCrash[] = {"buildCrash0",0.25,"buildCrash1",0.25,"buildCrash2",0.25,"buildCrash3",0.25};
	WoodCrash0[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_01",0.707946,1,200};
	WoodCrash1[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_02",0.707946,1,200};
	WoodCrash2[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_03",0.707946,1,200};
	WoodCrash3[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_04",0.707946,1,200};
	WoodCrash4[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_05",0.707946,1,200};
	WoodCrash5[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_06",0.707946,1,200};
	soundWoodCrash[] = {"woodCrash0",0.166,"woodCrash1",0.166,"woodCrash2",0.166,"woodCrash3",0.166,"woodCrash4",0.166,"woodCrash5",0.166};
	ArmorCrash0[] = {"Ca\sounds\Vehicles\Crash\crash_vehicle_01",0.707946,1,200};
	ArmorCrash1[] = {"Ca\sounds\Vehicles\Crash\crash_vehicle_02",0.707946,1,200};
	ArmorCrash2[] = {"Ca\sounds\Vehicles\Crash\crash_vehicle_03",0.707946,1,200};
	ArmorCrash3[] = {"Ca\sounds\Vehicles\Crash\crash_vehicle_04",0.707946,1,200};
	soundArmorCrash[] = {"ArmorCrash0",0.25,"ArmorCrash1",0.25,"ArmorCrash2",0.25,"ArmorCrash3",0.25};
	class SoundEvents
	{
		class AccelerationIn
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\HMMWV\int\int-acceleration1",0.1,1};
			limit = "0.8";
			expression = "(engineOn*(1-camPos))*gmeterZ";
		};
		class AccelerationOut
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\HMMWV\ext\turspecial1",0.1,1,200};
			limit = "0.8";
			expression = "(engineOn*camPos)*gmeterZ";
		};
	};
	class Sounds: Sounds
	{
		class Engine: Engine
		{
			sound[] = {"\ca\sounds\Vehicles\Wheeled\HMMWV\ext\Engine_Loop_Low_1b",1,1,300};
			frequency = "(randomizer*0.05+0.95)*rpm";
			volume = "camPos*engineOn*((rpm factor[0.15, 0.4]) min (rpm factor[0.7, 0.5]))";
		};
		class EngineHighOut
		{
			sound[] = {"\ca\sounds\Vehicles\Wheeled\HMMWV\ext\Engine_Loop_High_1b",1,1,400};
			frequency = "(randomizer*0.05+0.95)*rpm";
			volume = "camPos*engineOn*(rpm factor[0.5, 0.8])";
		};
		class IdleOut
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\HMMWV\ext\idle_2",0.562341,1,100};
			frequency = "1";
			volume = "engineOn*camPos*(rpm factor[0.3, 0])";
		};
		class TiresRockOut
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-rock2",0.316228,1,30};
			frequency = "1";
			volume = "camPos*rock*(speed factor[2, 20])";
		};
		class TiresSandOut
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-sand2",0.316228,1,30};
			frequency = "1";
			volume = "camPos*sand*(speed factor[2, 20])";
		};
		class TiresGrassOut
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-grass2",0.316228,1,30};
			frequency = "1";
			volume = "camPos*grass*(speed factor[2, 20])";
		};
		class TiresMudOut
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-mud2",0.316228,1,30};
			frequency = "1";
			volume = "camPos*mud*(speed factor[2, 20])";
		};
		class TiresGravelOut
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-gravel2",0.316228,1,30};
			frequency = "1";
			volume = "camPos*gravel*(speed factor[2, 20])";
		};
		class TiresAsphaltOut
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-asphalt3",0.316228,1,30};
			frequency = "1";
			volume = "camPos*asphalt*(speed factor[2, 20])";
		};
		class NoiseOut
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Noises\ext\noise2",0.177828,1,30};
			frequency = "1";
			volume = "camPos*(damper0 max 0.03)*(speed factor[0, 8])";
		};
		class EngineLowIn
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\HMMWV\int\int-engine_low1",1,1};
			frequency = "(randomizer*0.05+0.95)*rpm";
			volume = "(1-camPos)*engineOn*((rpm factor[0.2, 0.4]) min (rpm factor[0.8, 0.6]))";
		};
		class EngineHighIn
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\HMMWV\int\int-engine_high2",1,1};
			frequency = "(randomizer*0.05+0.95)*rpm";
			volume = "(1-camPos)*engineOn*(rpm factor[0.5, 1.0])";
		};
		class IdleIn
		{
			sound[] = {"\ca\sounds\Vehicles\Wheeled\HMMWV\int\int-engine_idle2",0.316228,1};
			frequency = "1";
			volume = "engineOn*(rpm factor[0.4, 0])*(1-camPos)";
		};
		class TiresRockIn
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-rock2",1,1};
			frequency = "1";
			volume = "(1-camPos)*rock*(speed factor[2, 20])";
		};
		class TiresSandIn
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-sand2",1,1};
			frequency = "1";
			volume = "(1-camPos)*sand*(speed factor[2, 20])";
		};
		class TiresGrassIn
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-grass2",1,1};
			frequency = "1";
			volume = "(1-camPos)*grass*(speed factor[2, 20])";
		};
		class TiresMudIn
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-mud2",1,1};
			frequency = "1";
			volume = "(1-camPos)*mud*(speed factor[2, 20])";
		};
		class TiresGravelIn
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-gravel2",1,1};
			frequency = "1";
			volume = "(1-camPos)*gravel*(speed factor[2, 20])";
		};
		class TiresAsphaltIn
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-asphalt3",1,1};
			frequency = "1";
			volume = "(1-camPos)*asphalt*(speed factor[2, 20])";
		};
		class NoiseIn
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Noises\int\noise2",0.446684,1};
			frequency = "1";
			volume = "(damper0 max 0.03)*(speed factor[0, 8])*(1-camPos)";
		};
		class Movement: Movement
		{
			sound = "soundEnviron";
			frequency = "1";
			volume = "0";
		};
	};
	brakeDistance = 8.5;
	htMin = 60;
	htMax = 1800;
	afMax = 200;
	mfMax = 100;
	mFact = 1;
	tBody = 200;
	transportMaxBackpacks = 5;
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
	class AnimationSources;
};

class HMMWV_M998A2_SOV_DES_EP1_DZ: HMMWV_DZE_Base
{
	expansion = 1;
	scope = 2;
	transportSoldier = 4;
	transportMaxWeapons = 15;
	transportMaxMagazines = 70;
	transportmaxbackpacks = 4;
	model = "\ca\wheeled_e\HMMWV\M998A2_sov";
	displayname = "$STR_VEH_NAME_HMMWV_SOV";
	damageResistance = 0.00581;
	threat[] = {1,0.3,0.3};
	Picture = "\CA\wheeled_e\Data\UI\Picture_hmmwv_sov_CA.paa";
	Icon = "\CA\wheeled_e\Data\UI\Icon_hmmwv_sov_CA.paa";
	driverAction = "HMMWV_Driver_EP1";
	cargoAction[] = {"HMMWV_Cargo01_EP1","HMMWV_Cargo02_EP1","HMMWV_Cargo03_EP1","HMMWV_Cargo04_EP1"};
	outsideSoundFilter = 0;
	insideSoundCoef = 1;
	soundGear[] = {"",5.62341e-005,1};
	soundGetIn[] = {"ca\SOUNDS\Vehicles\Wheeled\HMMWV\ext\get_in2",0.56234133,1,20};	
	soundGetOut[] = {"ca\SOUNDS\Vehicles\Wheeled\HMMWV\int\get_in2",0.562341,1,20};
	soundEngineOnInt[] = {"ca\sounds\Vehicles\Wheeled\HMMWV\int\int-engine_start1",0.177828,1};
	soundEngineOnExt[] = {"ca\SOUNDS\Vehicles\Wheeled\HMMWV\ext\engine_ON1",0.177828,1,100};
	soundEngineOffInt[] = {"ca\sounds\vehicles\Wheeled\HMMWV\int\int-engine_off2",0.177828,1};
	soundEngineOffExt[] = {"ca\sounds\vehicles\Wheeled\HMMWV\ext\engine_OFF2",0.177828,1,100};
	buildCrash0[] = {"Ca\sounds\Vehicles\Crash\crash_building_01",0.707946,1,200};
	buildCrash1[] = {"Ca\sounds\Vehicles\Crash\crash_building_02",0.707946,1,200};
	buildCrash2[] = {"Ca\sounds\Vehicles\Crash\crash_building_03",0.707946,1,200};
	buildCrash3[] = {"Ca\sounds\Vehicles\Crash\crash_building_04",0.707946,1,200};
	soundBuildingCrash[] = {"buildCrash0",0.25,"buildCrash1",0.25,"buildCrash2",0.25,"buildCrash3",0.25};
	WoodCrash0[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_01",0.707946,1,200};
	WoodCrash1[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_02",0.707946,1,200};
	WoodCrash2[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_03",0.707946,1,200};
	WoodCrash3[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_04",0.707946,1,200};
	WoodCrash4[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_05",0.707946,1,200};
	WoodCrash5[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_06",0.707946,1,200};
	soundWoodCrash[] = {"woodCrash0",0.166,"woodCrash1",0.166,"woodCrash2",0.166,"woodCrash3",0.166,"woodCrash4",0.166,"woodCrash5",0.166};
	ArmorCrash0[] = {"Ca\sounds\Vehicles\Crash\crash_vehicle_01",0.707946,1,200};
	ArmorCrash1[] = {"Ca\sounds\Vehicles\Crash\crash_vehicle_02",0.707946,1,200};
	ArmorCrash2[] = {"Ca\sounds\Vehicles\Crash\crash_vehicle_03",0.707946,1,200};
	ArmorCrash3[] = {"Ca\sounds\Vehicles\Crash\crash_vehicle_04",0.707946,1,200};
	soundArmorCrash[] = {"ArmorCrash0",0.25,"ArmorCrash1",0.25,"ArmorCrash2",0.25,"ArmorCrash3",0.25};
	class SoundEvents
	{
		class AccelerationIn
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\HMMWV\int\int-acceleration1",0.1,1};
			limit = "0.8";
			expression = "(engineOn*(1-camPos))*gmeterZ";
		};
		class AccelerationOut
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\HMMWV\ext\turspecial1",0.1,1,200};
			limit = "0.8";
			expression = "(engineOn*camPos)*gmeterZ";
		};
	};
	class Sounds
	{
		class Engine
		{
			sound[] = {"\ca\sounds\Vehicles\Wheeled\HMMWV\ext\Engine_Loop_Low_1b",1,1,300};
			frequency = "(randomizer*0.05+0.95)*rpm";
			volume = "camPos*engineOn*((rpm factor[0.15, 0.4]) min (rpm factor[0.7, 0.5]))";
		};
		class EngineHighOut
		{
			sound[] = {"\ca\sounds\Vehicles\Wheeled\HMMWV\ext\Engine_Loop_High_1b",1,1,400};
			frequency = "(randomizer*0.05+0.95)*rpm";
			volume = "camPos*engineOn*(rpm factor[0.5, 0.8])";
		};
		class IdleOut
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\HMMWV\ext\idle_2",0.562341,1,100};
			frequency = "1";
			volume = "engineOn*camPos*(rpm factor[0.3, 0])";
		};
		class TiresRockOut
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-rock2",0.316228,1,30};
			frequency = "1";
			volume = "camPos*rock*(speed factor[2, 20])";
		};
		class TiresSandOut
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-sand2",0.316228,1,30};
			frequency = "1";
			volume = "camPos*sand*(speed factor[2, 20])";
		};
		class TiresGrassOut
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-grass2",0.316228,1,30};
			frequency = "1";
			volume = "camPos*grass*(speed factor[2, 20])";
		};
		class TiresMudOut
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-mud2",0.316228,1,30};
			frequency = "1";
			volume = "camPos*mud*(speed factor[2, 20])";
		};
		class TiresGravelOut
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-gravel2",0.316228,1,30};
			frequency = "1";
			volume = "camPos*gravel*(speed factor[2, 20])";
		};
		class TiresAsphaltOut
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-asphalt3",0.316228,1,30};
			frequency = "1";
			volume = "camPos*asphalt*(speed factor[2, 20])";
		};
		class NoiseOut
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Noises\ext\noise2",0.177828,1,30};
			frequency = "1";
			volume = "camPos*(damper0 max 0.03)*(speed factor[0, 8])";
		};
		class EngineLowIn
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\HMMWV\ext\Engine_Loop_Low_1b",1,1};
			frequency = "(randomizer*0.05+0.95)*rpm";
			volume = "(1-camPos)*engineOn*((rpm factor[0.2, 0.4]) min (rpm factor[0.8, 0.6]))";
		};
		class EngineHighIn
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\HMMWV\ext\Engine_Loop_High_1b",1,1};
			frequency = "(randomizer*0.05+0.95)*rpm";
			volume = "(1-camPos)*engineOn*(rpm factor[0.5, 1.0])";
		};
		class IdleIn
		{
			sound[] = {"\ca\sounds\Vehicles\Wheeled\HMMWV\ext\idle_2",0.316228,1};
			frequency = "1";
			volume = "engineOn*(rpm factor[0.4, 0])*(1-camPos)";
		};
		class TiresRockIn
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-rock2",1,1};
			frequency = "1";
			volume = "(1-camPos)*rock*(speed factor[2, 20])";
		};
		class TiresSandIn
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-sand2",1,1};
			frequency = "1";
			volume = "(1-camPos)*sand*(speed factor[2, 20])";
		};
		class TiresGrassIn
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-grass2",1,1};
			frequency = "1";
			volume = "(1-camPos)*grass*(speed factor[2, 20])";
		};
		class TiresMudIn
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-mud2",1,1};
			frequency = "1";
			volume = "(1-camPos)*mud*(speed factor[2, 20])";
		};
		class TiresGravelIn
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-gravel2",1,1};
			frequency = "1";
			volume = "(1-camPos)*gravel*(speed factor[2, 20])";
		};
		class TiresAsphaltIn
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-asphalt3",1,1};
			frequency = "1";
			volume = "(1-camPos)*asphalt*(speed factor[2, 20])";
		};
		class NoiseIn
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Noises\int\noise2",0.446684,1};
			frequency = "1";
			volume = "(damper0 max 0.03)*(speed factor[0, 8])*(1-camPos)";
		};
		class Movement
		{
			sound = "soundEnviron";
			frequency = "1";
			volume = "0";
		};
	};
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			weapons[] = {"MK19"};
			magazines[] = {"48Rnd_40mm_MK19"};
			soundServo[] = {"\Ca\sounds\Vehicles\Servos\turret-1",0.01,1,10};
			gunnerAction = "HMMWV_Gunner03_EP1";
			class GunFire: WeaponCloudsMGun
			{
				interval = 0.01;
			};
			commanding = 0;
			primaryGunner = 0;
			primaryObserver = 0;
			LODTurnedOut = 1000;
			LODTurnedIn = 1000;
		};
		class SideTurret: MainTurret
		{
			gunnerName = "$STR_POSITION_FRONTGUNNER";
			weapons[] = {"M240_veh"};
			magazines[] = {"100Rnd_762x51_M240"};
			soundServo[] = {"\ca\wheeled\Data\Sound\servo3",0.0001,1.1};
			gunnerAction = "HMMWV_Gunner02_EP1";
			commanding = 1;
			primaryGunner = 1;
			primaryObserver = 1;
			proxyIndex = 2;
			minElev = -18;
			maxElev = 20;
			minTurn = -65;
			maxTurn = 35;
			gunBeg = "usti hlavne_2";
			gunEnd = "konec hlavne_2";
			body = "SideTurret";
			gun = "SideGun";
			memoryPointGunnerOptics = "gunnerview_2";
			animationSourceBody = "SideTurret";
			animationSourceGun = "SideGun";
			LODTurnedOut = 1200;
			LODTurnedIn = 1200;
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
	};
	crew = "";
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};
	class Damage
	{
		tex[] = {};
		mat[] = {"Ca\wheeled_E\HMMWV\data\hmmwv_body_1.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_body_1_damage.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_body_1_destruct.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_glass.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_glass_damage.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_glass_destruct.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_hood.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_hood_damage.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_hood_destruct.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_parts_1.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_parts_1_damage.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_parts_1_destruct.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_regular_1.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_regular_1_damage.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_regular_1_destruct.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default_destruct.rvmat"};
	};
	HiddenSelections[] = {"camo","camo1","camo2"};
	HiddenSelectionsTextures[] = {"ca\wheeled_e\hmmwv\data\hmmwv_body_canvas_co.paa","ca\wheeled_e\hmmwv\data\hmmwv_hood_canvas_co.paa","ca\wheeled_e\hmmwv\data\hmmwv_regular_1_co.paa"};
};

class HMMWV_M998A2_SOV_DES_EP1_DZE: HMMWV_M998A2_SOV_DES_EP1_DZ
{
	scope = 2;
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			weapons[] = {"MK19"};
			magazines[] = {};
			soundServo[] = {"\Ca\sounds\Vehicles\Servos\turret-1",0.01,1,10};
			gunnerAction = "HMMWV_Gunner03_EP1";
			class GunFire: WeaponCloudsMGun
			{
				interval = 0.01;
			};
			commanding = 0;
			primaryGunner = 0;
			primaryObserver = 0;
			LODTurnedOut = 1000;
			LODTurnedIn = 1000;
		};
		class SideTurret: MainTurret
		{
			gunnerName = "$STR_POSITION_FRONTGUNNER";
			weapons[] = {"M240_veh"};
			magazines[] = {};
			soundServo[] = {"\ca\wheeled\Data\Sound\servo3",0.0001,1.1};
			gunnerAction = "HMMWV_Gunner02_EP1";
			commanding = 1;
			primaryGunner = 1;
			primaryObserver = 1;
			proxyIndex = 2;
			minElev = -18;
			maxElev = 20;
			minTurn = -65;
			maxTurn = 35;
			gunBeg = "usti hlavne_2";
			gunEnd = "konec hlavne_2";
			body = "SideTurret";
			gun = "SideGun";
			memoryPointGunnerOptics = "gunnerview_2";
			animationSourceBody = "SideTurret";
			animationSourceGun = "SideGun";
			LODTurnedOut = 1200;
			LODTurnedIn = 1200;
		};
	};
	
	class Upgrades
	{
		ItemORP[] = {"HMMWV_M998A2_SOV_DES_EP1_DZE1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",2},{"PartWheel",4},{"ItemScrews",2}}};
	};	
};

class HMMWV_M998A2_SOV_DES_EP1_DZE1: HMMWV_M998A2_SOV_DES_EP1_DZE 
{
	displayName = "$STR_VEH_NAME_HMMWV_SOV+";
	original = "HMMWV_M998A2_SOV_DES_EP1_DZE";
	maxSpeed = 115; // base 100
	turnCoef = 3; // base 2
	terrainCoef = 1; //base 2
	
	class Upgrades
	{
		ItemAVE[] = {"HMMWV_M998A2_SOV_DES_EP1_DZE2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"equip_metal_sheet",6},{"ItemScrews",4}}};
	};
};

class HMMWV_M998A2_SOV_DES_EP1_DZE2: HMMWV_M998A2_SOV_DES_EP1_DZE1
{
	displayName = "$STR_VEH_NAME_HMMWV_SOV++";
	armor = 75; // base 40
	damageResistance = 0.015; // base 0.00581
	
	class HitPoints: HitPoints
	{
		class HitGlass1: HitGlass1
		{
			armor = 1.5;
		};
		class HitGlass2: HitGlass2
		{
			armor = 1.5;
		};
		class HitGlass3: HitGlass3
		{
			armor = 1.5;
		};
		class HitGlass4: HitGlass4
		{
			armor = 1.5;
		};
		class HitLFWheel: HitLFWheel
		{
			armor = 0.25;
		};
		class HitLBWheel: HitLBWheel
		{
			armor = 0.25;
		};
		class HitRFWheel: HitRFWheel
		{
			armor = 0.25;
		};
		class HitRBWheel: HitRBWheel
		{
			armor = 0.25;
		};
		class HitFuel: HitFuel
		{
			armor = 0.5;
		};
		class HitEngine: HitEngine
		{
			armor = 1;
		};
	};	
	
	class Upgrades
	{
		ItemLRK[] = {"HMMWV_M998A2_SOV_DES_EP1_DZE3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class HMMWV_M998A2_SOV_DES_EP1_DZE3: HMMWV_M998A2_SOV_DES_EP1_DZE2
{
	displayName = "$STR_VEH_NAME_HMMWV_SOV+++";
	transportMaxWeapons = 30; 
	transportMaxMagazines = 140; 
	transportmaxbackpacks = 8;
	
	class Upgrades
	{
		ItemTNK[] = {"HMMWV_M998A2_SOV_DES_EP1_DZE4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",4},{"PartFueltank",2},{"ItemFuelBarrel",1}}};
	};
};

class HMMWV_M998A2_SOV_DES_EP1_DZE4: HMMWV_M998A2_SOV_DES_EP1_DZE3
{
	displayName = "$STR_VEH_NAME_HMMWV_SOV++++";
	fuelCapacity = 180; // base 100
};

class HMMWV_M1151_M2_CZ_DES_EP1_DZ: HMMWV_DZE_Base 
{
	expansion = 1;
	scope = 2;
	model = "\ca\wheeled_e\HMMWV\m1151_m2_gpk";
	displayname = "$STR_VEH_NAME_HMMWV_GPK";
	transportMaxWeapons = 15;
	transportMaxMagazines = 70;
	transportmaxbackpacks = 4;
	threat[] = {1,0.6,0.6};
	transportSoldier = 3;
	armor = 80;
	damageResistance = 0.03099;
	Picture = "\CA\wheeled_e\Data\UI\Picture_hmmwv_m2gpk_CA.paa";
	Icon = "\CA\wheeled_e\Data\UI\Icon_hmmwv_m2gpk_CA.paa";
	class Library
	{
		libTextDesc = "The High Mobility Multipurpose Wheeled Vehicle (HMMWV) replaced the M151 �Willys� jeep in US Army service. The HMMWV was designed to fill myriad roles, including that of light tactical commander's vehicle, special purpose shelter carrier, and mobile weapons platform. The HMMWV is equipped with a high-performance diesel engine and four-wheel drive, making it capable of negotiating very difficult terrain. <br/>This one is equipped with an M2 heavy machine gun which is effective against infantry or unarmored vehicles. It is also supplemented with the GPK (Gunner Protection Kit).";
	};
	driverAction = "HMMWV_Driver_EP1";
	cargoAction[] = {"HMMWV_Cargo_EP1","HMMWV_Cargo01_EP1","HMMWV_Cargo02_EP1"};
	crew = "";
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			body = "mainTurret";
			gun = "mainGun";
			weapons[] = {"M2"};
			magazines[] = {"100Rnd_127x99_M2","100Rnd_127x99_M2","100Rnd_127x99_M2","100Rnd_127x99_M2","100Rnd_127x99_M2","100Rnd_127x99_M2"};
			soundServo[] = {"\Ca\sounds\Vehicles\Servos\turret-1",0.01,1,10};
			minElev = -25;
			maxElev = 60;
			gunnerAction = "HMMWV_Gunner_EP1";
			viewGunnerInExternal = 1;
			castGunnerShadow = 1;
			stabilizedInAxes = "StabilizedInAxesBoth";
			class ViewOptics
			{
				initAngleX = 0;
				minAngleX = -30;
				maxAngleX = 30;
				initAngleY = 0;
				minAngleY = -100;
				maxAngleY = 100;
				initFov = 0.455;
				minFov = 0.25;
				maxFov = 0.7;
			};
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
	class Damage
	{
		tex[] = {};
		mat[] = {"Ca\wheeled_E\HMMWV\data\hmmwv_body_1.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_body_1_damage.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_body_1_destruct.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_hood.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_hood_damage.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_hood_destruct.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_parts_1.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_parts_1_damage.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_parts_1_destruct.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_regular_1.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_regular_1_damage.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_regular_1_destruct.rvmat","Ca\wheeled_E\HMMWV\Data\hmmwv_gpk_tower.rvmat","Ca\wheeled_E\HMMWV\Data\hmmwv_gpk_tower_damage.rvmat","Ca\wheeled_E\HMMWV\Data\hmmwv_gpk_tower_destruct.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default_destruct.rvmat"};
	};	
	HiddenSelections[] = {"camo","camo1","camo2","camo3"};
	HiddenSelectionsTextures[] = {"ca\wheeled_e\hmmwv\data\hmmwv_body_canvas_1_co.paa","ca\wheeled_e\hmmwv\data\hmmwv_hood_canvas_co.paa","ca\wheeled_e\hmmwv\data\hmmwv_regular_1_co.paa","ca\wheeled_e\hmmwv\data\hmmwv_gpk_tower_co.paa"};
};

class HMMWV_M1151_M2_CZ_DES_EP1_DZE: HMMWV_M1151_M2_CZ_DES_EP1_DZ {
	scope = 2;
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			magazines[] = {};
		};	
	};
	
	class Upgrades
	{
		ItemORP[] = {"HMMWV_M1151_M2_CZ_DES_EP1_DZE1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",2},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class HMMWV_M1151_M2_CZ_DES_EP1_DZE1: HMMWV_M1151_M2_CZ_DES_EP1_DZE 
{
	displayName = "$STR_VEH_NAME_HMMWV_GPK+";
	original = "HMMWV_M1151_M2_CZ_DES_EP1_DZE";
	maxSpeed = 115; // base 100
	turnCoef = 3; // base 2
	terrainCoef = 1; //base 2
	
	class Upgrades
	{
		ItemAVE[] = {"HMMWV_M1151_M2_CZ_DES_EP1_DZE2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"equip_metal_sheet",6},{"ItemScrews",4}}};
	};
};

class HMMWV_M1151_M2_CZ_DES_EP1_DZE2: HMMWV_M1151_M2_CZ_DES_EP1_DZE1
{
	displayName = "$STR_VEH_NAME_HMMWV_GPK++";
	armor = 110; // base 80
	damageResistance = 0.06; // base 0.03099
	
	class HitPoints: HitPoints
	{
		class HitGlass1: HitGlass1
		{
			armor = 1.5;
		};
		class HitGlass2: HitGlass2
		{
			armor = 1.5;
		};
		class HitGlass3: HitGlass3
		{
			armor = 1.5;
		};
		class HitGlass4: HitGlass4
		{
			armor = 1.5;
		};
		class HitLFWheel: HitLFWheel
		{
			armor = 0.25;
		};
		class HitLBWheel: HitLBWheel
		{
			armor = 0.25;
		};
		class HitRFWheel: HitRFWheel
		{
			armor = 0.25;
		};
		class HitRBWheel: HitRBWheel
		{
			armor = 0.25;
		};
		class HitFuel: HitFuel
		{
			armor = 0.5;
		};
		class HitEngine: HitEngine
		{
			armor = 1;
		};
	};	
	
	class Upgrades
	{
		ItemLRK[] = {"HMMWV_M1151_M2_CZ_DES_EP1_DZE3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class HMMWV_M1151_M2_CZ_DES_EP1_DZE3: HMMWV_M1151_M2_CZ_DES_EP1_DZE2
{
	displayName = "$STR_VEH_NAME_HMMWV_GPK+++";
	transportMaxWeapons = 30; 
	transportMaxMagazines = 140; 
	transportmaxbackpacks = 8;
	
	class Upgrades
	{
		ItemTNK[] = {"HMMWV_M1151_M2_CZ_DES_EP1_DZE4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",4},{"PartFueltank",2},{"ItemFuelBarrel",1}}};
	};
};

class HMMWV_M1151_M2_CZ_DES_EP1_DZE4: HMMWV_M1151_M2_CZ_DES_EP1_DZE3
{
	displayName = "$STR_VEH_NAME_HMMWV_GPK++++";
	fuelCapacity = 180; // base 100
};

class HMMWV_GPK_M2_WINTER_DZ: HMMWV_M1151_M2_CZ_DES_EP1_DZ
{
	displayname = "$STR_VEH_NAME_HMMWV_GPK_WINTER";
	HiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\hmmwv\hmmwv_body_canvas_1_winter_co.paa","\dayz_epoch_c\skins\hmmwv\hmmwv_hood_canvas_winter_co.paa","\dayz_epoch_c\skins\hmmwv\hmmwv_regular_1_winter_co.paa","\dayz_epoch_c\skins\hmmwv\hmmwv_gpk_tower_winter_co.paa"};
};

class HMMWV_GPK_M2_WINTER_DZE: HMMWV_M1151_M2_CZ_DES_EP1_DZE {
	displayname = "$STR_VEH_NAME_HMMWV_GPK_WINTER";
	HiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\hmmwv\hmmwv_body_canvas_1_winter_co.paa","\dayz_epoch_c\skins\hmmwv\hmmwv_hood_canvas_winter_co.paa","\dayz_epoch_c\skins\hmmwv\hmmwv_regular_1_winter_co.paa","\dayz_epoch_c\skins\hmmwv\hmmwv_gpk_tower_winter_co.paa"};
	
	class Upgrades
	{
		ItemORP[] = {"HMMWV_GPK_M2_WINTER_DZE1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",2},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class HMMWV_GPK_M2_WINTER_DZE1: HMMWV_GPK_M2_WINTER_DZE 
{
	displayName = "$STR_VEH_NAME_HMMWV_GPK_WINTER+";
	original = "HMMWV_GPK_M2_WINTER_DZE";
	maxSpeed = 115; // base 100
	turnCoef = 3; // base 2
	terrainCoef = 1; //base 2
	
	class Upgrades
	{
		ItemAVE[] = {"HMMWV_GPK_M2_WINTER_DZE2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"equip_metal_sheet",6},{"ItemScrews",4}}};
	};
};

class HMMWV_GPK_M2_WINTER_DZE2: HMMWV_GPK_M2_WINTER_DZE1
{
	displayName = "$STR_VEH_NAME_HMMWV_GPK_WINTER++";
	armor = 110; // base 80
	damageResistance = 0.06; // base 0.03099
	
	class HitPoints: HitPoints
	{
		class HitGlass1: HitGlass1
		{
			armor = 1.5;
		};
		class HitGlass2: HitGlass2
		{
			armor = 1.5;
		};
		class HitGlass3: HitGlass3
		{
			armor = 1.5;
		};
		class HitGlass4: HitGlass4
		{
			armor = 1.5;
		};
		class HitLFWheel: HitLFWheel
		{
			armor = 0.25;
		};
		class HitLBWheel: HitLBWheel
		{
			armor = 0.25;
		};
		class HitRFWheel: HitRFWheel
		{
			armor = 0.25;
		};
		class HitRBWheel: HitRBWheel
		{
			armor = 0.25;
		};
		class HitFuel: HitFuel
		{
			armor = 0.5;
		};
		class HitEngine: HitEngine
		{
			armor = 1;
		};
	};	
	
	class Upgrades
	{
		ItemLRK[] = {"HMMWV_GPK_M2_WINTER_DZE3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class HMMWV_GPK_M2_WINTER_DZE3: HMMWV_GPK_M2_WINTER_DZE2
{
	displayName = "$STR_VEH_NAME_HMMWV_GPK_WINTER+++";
	transportMaxWeapons = 30; 
	transportMaxMagazines = 140; 
	transportmaxbackpacks = 8;
	
	class Upgrades
	{
		ItemTNK[] = {"HMMWV_GPK_M2_WINTER_DZE4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",4},{"PartFueltank",2},{"ItemFuelBarrel",1}}};
	};
};

class HMMWV_GPK_M2_WINTER_DZE4: HMMWV_GPK_M2_WINTER_DZE3
{
	displayName = "$STR_VEH_NAME_HMMWV_GPK_WINTER++++";
	fuelCapacity = 180; // base 100
};

class HMMWV_M1114_AGS_ACR_DZ: HMMWV_M1151_M2_CZ_DES_EP1_DZ {
	displayName = "$STR_VEH_NAME_HMMWV_AGS30";
	model = "\Ca\Wheeled_ACR\HMMWV\M1114_AGS_ACR.p3d";	
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			weapons[] = {"AGS30"};
			magazines[] = {"29Rnd_30mm_AGS30","29Rnd_30mm_AGS30","29Rnd_30mm_AGS30","29Rnd_30mm_AGS30","29Rnd_30mm_AGS30","29Rnd_30mm_AGS30"};
			gunnerAction = "LR_Gunner01_EP1";
			gunnerOpticsModel = "\ca\weapons\optika_AGS30.p3d";
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
	};	
};

class HMMWV_M1114_AGS_ACR_DZE: HMMWV_M1114_AGS_ACR_DZ {
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			magazines[] = {};
		};
	};	
	
	class Upgrades
	{
		ItemORP[] = {"HMMWV_M1114_AGS_ACR_DZE1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",2},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class HMMWV_M1114_AGS_ACR_DZE1: HMMWV_M1114_AGS_ACR_DZE 
{
	displayName = "$STR_VEH_NAME_HMMWV_AGS30+";
	original = "HMMWV_M1114_AGS_ACR_DZE";
	maxSpeed = 115; // base 100
	turnCoef = 3; // base 2
	terrainCoef = 1; //base 2
	
	class Upgrades
	{
		ItemAVE[] = {"HMMWV_M1114_AGS_ACR_DZE2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"equip_metal_sheet",6},{"ItemScrews",4}}};
	};
};

class HMMWV_M1114_AGS_ACR_DZE2: HMMWV_M1114_AGS_ACR_DZE1
{
	displayName = "$STR_VEH_NAME_HMMWV_AGS30++";
	armor = 110; // base 80
	damageResistance = 0.06; // base 0.03099
	
	class HitPoints: HitPoints
	{
		class HitGlass1: HitGlass1
		{
			armor = 1.5;
		};
		class HitGlass2: HitGlass2
		{
			armor = 1.5;
		};
		class HitGlass3: HitGlass3
		{
			armor = 1.5;
		};
		class HitGlass4: HitGlass4
		{
			armor = 1.5;
		};
		class HitLFWheel: HitLFWheel
		{
			armor = 0.25;
		};
		class HitLBWheel: HitLBWheel
		{
			armor = 0.25;
		};
		class HitRFWheel: HitRFWheel
		{
			armor = 0.25;
		};
		class HitRBWheel: HitRBWheel
		{
			armor = 0.25;
		};
		class HitFuel: HitFuel
		{
			armor = 0.5;
		};
		class HitEngine: HitEngine
		{
			armor = 1;
		};
	};	
	
	class Upgrades
	{
		ItemLRK[] = {"HMMWV_M1114_AGS_ACR_DZE3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class HMMWV_M1114_AGS_ACR_DZE3: HMMWV_M1114_AGS_ACR_DZE2
{
	displayName = "$STR_VEH_NAME_HMMWV_AGS30+++";
	transportMaxWeapons = 30; 
	transportMaxMagazines = 140; 
	transportmaxbackpacks = 8;
	
	class Upgrades
	{
		ItemTNK[] = {"HMMWV_M1114_AGS_ACR_DZE4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",4},{"PartFueltank",2},{"ItemFuelBarrel",1}}};
	};
};

class HMMWV_M1114_AGS_ACR_DZE4: HMMWV_M1114_AGS_ACR_DZE3
{
	displayName = "$STR_VEH_NAME_HMMWV_AGS30++++";
	fuelCapacity = 180; // base 100
};

class HMMWV_M1114_DSHKM_ACR_DZ: HMMWV_M1151_M2_CZ_DES_EP1_DZ {
	displayName = "$STR_VEH_NAME_HMMWV_DSHKM";
	model = "\Ca\Wheeled_ACR\HMMWV\M1114_DSK_ACR.p3d";
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			gunnerOpticsModel = "\ca\Weapons\optika_empty.p3d";
			weapons[] = {"DShKM"};
			magazines[] = {"50Rnd_127x107_DSHKM","50Rnd_127x107_DSHKM","50Rnd_127x107_DSHKM","50Rnd_127x107_DSHKM","50Rnd_127x107_DSHKM","50Rnd_127x107_DSHKM"};
		};
	};	
	class AnimationSources: AnimationSources
	{
		class ReloadAnim
		{
			source = "reload";
			weapon = "DShKM";
		};
		class ReloadMagazine
		{
			source = "reloadmagazine";
			weapon = "DShKM";
		};
		class Revolving
		{
			source = "revolving";
			weapon = "DShKM";
		};
	};	
};

class HMMWV_M1114_DSHKM_ACR_DZE: HMMWV_M1114_DSHKM_ACR_DZ {
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			magazines[] = {};
		};
	};	

	class Upgrades
	{
		ItemORP[] = {"HMMWV_M1114_DSHKM_ACR_DZE1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",2},{"PartWheel",4},{"ItemScrews",2}}};
	};	
};

class HMMWV_M1114_DSHKM_ACR_DZE1: HMMWV_M1114_DSHKM_ACR_DZE 
{
	displayName = "$STR_VEH_NAME_HMMWV_DSHKM+";
	original = "HMMWV_M1114_DSHKM_ACR_DZE";
	maxSpeed = 115; // base 100
	turnCoef = 3; // base 2
	terrainCoef = 1; //base 2
	
	class Upgrades
	{
		ItemAVE[] = {"HMMWV_M1114_DSHKM_ACR_DZE2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"equip_metal_sheet",6},{"ItemScrews",4}}};
	};
};

class HMMWV_M1114_DSHKM_ACR_DZE2: HMMWV_M1114_DSHKM_ACR_DZE1
{
	displayName = "$STR_VEH_NAME_HMMWV_DSHKM++";
	armor = 110; // base 80
	damageResistance = 0.06; // base 0.03099
	
	class HitPoints: HitPoints
	{
		class HitGlass1: HitGlass1
		{
			armor = 1.5;
		};
		class HitGlass2: HitGlass2
		{
			armor = 1.5;
		};
		class HitGlass3: HitGlass3
		{
			armor = 1.5;
		};
		class HitGlass4: HitGlass4
		{
			armor = 1.5;
		};
		class HitLFWheel: HitLFWheel
		{
			armor = 0.25;
		};
		class HitLBWheel: HitLBWheel
		{
			armor = 0.25;
		};
		class HitRFWheel: HitRFWheel
		{
			armor = 0.25;
		};
		class HitRBWheel: HitRBWheel
		{
			armor = 0.25;
		};
		class HitFuel: HitFuel
		{
			armor = 0.5;
		};
		class HitEngine: HitEngine
		{
			armor = 1;
		};
	};	
	
	class Upgrades
	{
		ItemLRK[] = {"HMMWV_M1114_DSHKM_ACR_DZE3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class HMMWV_M1114_DSHKM_ACR_DZE3: HMMWV_M1114_DSHKM_ACR_DZE2
{
	displayName = "$STR_VEH_NAME_HMMWV_DSHKM+++";
	transportMaxWeapons = 30; 
	transportMaxMagazines = 140; 
	transportmaxbackpacks = 8;
	
	class Upgrades
	{
		ItemTNK[] = {"HMMWV_M1114_DSHKM_ACR_DZE4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",4},{"PartFueltank",2},{"ItemFuelBarrel",1}}};
	};
};

class HMMWV_M1114_DSHKM_ACR_DZE4: HMMWV_M1114_DSHKM_ACR_DZE3
{
	displayName = "$STR_VEH_NAME_HMMWV_DSHKM++++";
	fuelCapacity = 180; // base 100
};

class HMMWV_Armored_DZ: HMMWV_DZE_Base {
	displayname = $STR_VEH_NAME_HMMWV_ARMORED;
	model = "\ca\wheeled2\HMMWV\M1114_Armored\M1114_Armored.p3d";
	accuracy = 0.32;
	picture = "\Ca\wheeled\data\ico\HMMWVmk19_CA.paa";
	Icon = "\Ca\wheeled\data\map_ico\icomap_hmwvmk19_CA.paa";	
	scope = 2;
	crew = "";
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};
	transportMaxWeapons = 15;
	transportMaxMagazines = 70;
	transportmaxbackpacks = 4;
	armor = 80;
	damageResistance = 0.03099;
	mapSize = 5;
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
	};
	class HitPoints: HitPoints
	{
		class HitGlass1: HitGlass1
		{
			armor = 1.2;
		};
		class HitGlass2: HitGlass2
		{
			armor = 1.2;
		};
		class HitGlass3: HitGlass3
		{
			armor = 1.2;
		};
		class HitGlass4: HitGlass4
		{
			armor = 1.2;
		};
	};
	class Damage
	{
		tex[] = {};
		mat[] = {"ca\wheeled\hmmwv\data\hmmwv_body.rvmat","ca\wheeled\hmmwv\data\hmmwv_body_Half_D.rvmat","ca\wheeled\hmmwv\data\hmmwv_body_Full_D.rvmat","ca\wheeled\hmmwv\data\hmmwv_details.rvmat","ca\wheeled\hmmwv\data\hmmwv_details_Half_D.rvmat","ca\wheeled\hmmwv\data\hmmwv_details_Full_D.rvmat","ca\wheeled\hmmwv\data\hmmwv_parts_1.rvmat","ca\wheeled\hmmwv\data\hmmwv_parts_1_Half_D.rvmat","ca\wheeled\hmmwv\data\hmmwv_parts_1_Full_D.rvmat","ca\wheeled\hmmwv\data\hmmwv_clocks.rvmat","ca\wheeled\hmmwv\data\hmmwv_clocks.rvmat","ca\wheeled\data\hmmwv_clocks_destruct.rvmat","ca\weapons\data\m240.rvmat","ca\weapons\data\m240.rvmat","ca\weapons\data\m240_destruct.rvmat","ca\wheeled\hmmwv\data\hmmwv_glass.rvmat","ca\wheeled\hmmwv\data\hmmwv_glass_Half_D.rvmat","ca\wheeled\hmmwv\data\hmmwv_glass_Half_D.rvmat","ca\wheeled\hmmwv\data\hmmwv_glass_in.rvmat","ca\wheeled\hmmwv\data\hmmwv_glass_in_Half_D.rvmat","ca\wheeled\hmmwv\data\hmmwv_glass_in_Half_D.rvmat"};
	};
	hiddenSelections[] = {"Camo1","Camo2"};
	hiddenSelectionsTextures[] = {"\ca\wheeled\hmmwv\data\hmmwv_body_co.paa","\ca\wheeled\hmmwv\data\hmmwv_parts_1_ca.paa"};
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			weapons[] = {"M240_veh"};
			magazines[] = {"100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240"};
			soundServo[] = {"\ca\wheeled\Data\Sound\servo3",0.0001,1.1};
			gunnerAction = "HMMWV_Gunner04";
			castGunnerShadow = 1;
			class HitPoints: HitPoints
			{
				class HitTurret
				{
					armor = 1;
					material = -1;
					name = "vez";
					visual = "vez";
					passThrough = 0.3;
				};
			};
		};
	};
	class Library
	{
		libTextDesc = "$STR_LIB_HMMWV_Armored";
	};
};

class HMMWV_Armored_DZE: HMMWV_Armored_DZ {
	class Turrets: Turrets {		
		class MainTurret: MainTurret {
			magazines[] = {};
		};
	};
	
	class Upgrades
	{
		ItemORP[] = {"HMMWV_Armored_DZE1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",2},{"PartWheel",4},{"ItemScrews",2}}};
	};	
};

class HMMWV_Armored_DZE1: HMMWV_Armored_DZE 
{
	displayName = "$STR_VEH_NAME_HMMWV_ARMORED+";
	original = "HMMWV_Armored_DZE";
	maxSpeed = 115; // base 100
	turnCoef = 3; // base 2
	terrainCoef = 1; //base 2
	
	class Upgrades
	{
		ItemAVE[] = {"HMMWV_Armored_DZE2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"equip_metal_sheet",6},{"ItemScrews",4}}};
	};
};

class HMMWV_Armored_DZE2: HMMWV_Armored_DZE1
{
	displayName = "$STR_VEH_NAME_HMMWV_ARMORED++";
	armor = 110; // base 80
	damageResistance = 0.06; // base 0.03099
	
	class HitPoints: HitPoints
	{
		class HitGlass1: HitGlass1
		{
			armor = 1.8;
		};
		class HitGlass2: HitGlass2
		{
			armor = 1.8;
		};
		class HitGlass3: HitGlass3
		{
			armor = 1.8;
		};
		class HitGlass4: HitGlass4
		{
			armor = 1.8;
		};
		class HitLFWheel: HitLFWheel
		{
			armor = 0.25;
		};
		class HitLBWheel: HitLBWheel
		{
			armor = 0.25;
		};
		class HitRFWheel: HitRFWheel
		{
			armor = 0.25;
		};
		class HitRBWheel: HitRBWheel
		{
			armor = 0.25;
		};
		class HitFuel: HitFuel
		{
			armor = 0.5;
		};
		class HitEngine: HitEngine
		{
			armor = 1;
		};
	};	
	
	class Upgrades
	{
		ItemLRK[] = {"HMMWV_Armored_DZE3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class HMMWV_Armored_DZE3: HMMWV_Armored_DZE2
{
	displayName = "$STR_VEH_NAME_HMMWV_ARMORED+++";
	transportMaxWeapons = 30; 
	transportMaxMagazines = 140; 
	transportmaxbackpacks = 8;
	
	class Upgrades
	{
		ItemTNK[] = {"HMMWV_Armored_DZE4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",4},{"PartFueltank",2},{"ItemFuelBarrel",1}}};
	};
};

class HMMWV_Armored_DZE4: HMMWV_Armored_DZE3
{
	displayName = "$STR_VEH_NAME_HMMWV_ARMORED++++";
	fuelCapacity = 180; // base 100
};

class HMMWV_Winter_Armored_DZ: HMMWV_Armored_DZ 
{
	displayname = $STR_VEH_NAME_HMMWV_ARMORED_WINTER;
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\hmmwv\hmmwv_body_winter_co.paa","\dayz_epoch_c\skins\hmmwv\hmmwv_parts_1_winter_ca.paa"};
};

class HMMWV_Winter_Armored_DZE: HMMWV_Armored_DZE {
	displayname = $STR_VEH_NAME_HMMWV_ARMORED_WINTER;
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\hmmwv\hmmwv_body_winter_co.paa","\dayz_epoch_c\skins\hmmwv\hmmwv_parts_1_winter_ca.paa"};
	
	class Upgrades
	{
		ItemORP[] = {"HMMWV_Winter_Armored_DZE1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",2},{"PartWheel",4},{"ItemScrews",2}}};
	};	
};

class HMMWV_Winter_Armored_DZE1: HMMWV_Winter_Armored_DZE 
{
	displayName = "$STR_VEH_NAME_HMMWV_ARMORED_WINTER+";
	original = "HMMWV_Winter_Armored_DZE";
	maxSpeed = 115; // base 100
	turnCoef = 3; // base 2
	terrainCoef = 1; //base 2
	
	class Upgrades
	{
		ItemAVE[] = {"HMMWV_Winter_Armored_DZE2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"equip_metal_sheet",6},{"ItemScrews",4}}};
	};
};

class HMMWV_Winter_Armored_DZE2: HMMWV_Winter_Armored_DZE1
{
	displayName = "$STR_VEH_NAME_HMMWV_ARMORED_WINTER++";
	armor = 110; // base 80
	damageResistance = 0.06; // base 0.03099
	
	class HitPoints: HitPoints
	{
		class HitGlass1: HitGlass1
		{
			armor = 1.8;
		};
		class HitGlass2: HitGlass2
		{
			armor = 1.8;
		};
		class HitGlass3: HitGlass3
		{
			armor = 1.8;
		};
		class HitGlass4: HitGlass4
		{
			armor = 1.8;
		};
		class HitLFWheel: HitLFWheel
		{
			armor = 0.25;
		};
		class HitLBWheel: HitLBWheel
		{
			armor = 0.25;
		};
		class HitRFWheel: HitRFWheel
		{
			armor = 0.25;
		};
		class HitRBWheel: HitRBWheel
		{
			armor = 0.25;
		};
		class HitFuel: HitFuel
		{
			armor = 0.5;
		};
		class HitEngine: HitEngine
		{
			armor = 1;
		};
	};	
	
	class Upgrades
	{
		ItemLRK[] = {"HMMWV_Winter_Armored_DZE3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class HMMWV_Winter_Armored_DZE3: HMMWV_Winter_Armored_DZE2
{
	displayName = "$STR_VEH_NAME_HMMWV_ARMORED_WINTER+++";
	transportMaxWeapons = 30; 
	transportMaxMagazines = 140; 
	transportmaxbackpacks = 8;
	
	class Upgrades
	{
		ItemTNK[] = {"HMMWV_Winter_Armored_DZE4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",4},{"PartFueltank",2},{"ItemFuelBarrel",1}}};
	};
};

class HMMWV_Winter_Armored_DZE4: HMMWV_Winter_Armored_DZE3
{
	displayName = "$STR_VEH_NAME_HMMWV_ARMORED_WINTER++++";
	fuelCapacity = 180; // base 100
};

class HMMWV_M2_DZ: HMMWV_DZE_Base {
	displayname = "$STR_VEH_NAME_HMMWV_M2";
	scope = 2;
	crew = "";
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};
	transportMaxWeapons = 15;
	transportMaxMagazines = 70;
	transportmaxbackpacks = 4;
	damageResistance = 0.00581;
	class Turrets; // External class reference
	class MainTurret; // External class reference	
	accuracy = 0.32;
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
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"\ca\wheeled\hmmwv\data\hmmwv_body_co.paa"};	
};

class HMMWV_M2_DZE: HMMWV_M2_DZ {
	class Turrets: Turrets {		
		class MainTurret: MainTurret {
			magazines[] = {};
		};
	};
	
	class Upgrades
	{
		ItemORP[] = {"HMMWV_M2_DZE1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",2},{"PartWheel",4},{"ItemScrews",2}}};
	};		
};

class HMMWV_M2_DZE1: HMMWV_M2_DZE 
{
	displayName = "$STR_VEH_NAME_HMMWV_M2+";
	original = "HMMWV_M2_DZE";
	maxSpeed = 115; // base 100
	turnCoef = 3; // base 2
	terrainCoef = 1; //base 2
	
	class Upgrades
	{
		ItemAVE[] = {"HMMWV_M2_DZE2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"equip_metal_sheet",6},{"ItemScrews",4}}};
	};
};

class HMMWV_M2_DZE2: HMMWV_M2_DZE1
{
	displayName = "$STR_VEH_NAME_HMMWV_M2++";
	armor = 75; // base 40
	damageResistance = 0.015; // base 0.00581
	
	class HitPoints: HitPoints
	{
		class HitGlass1: HitGlass1
		{
			armor = 1.5;
		};
		class HitGlass2: HitGlass2
		{
			armor = 1.5;
		};
		class HitGlass3: HitGlass3
		{
			armor = 1.5;
		};
		class HitGlass4: HitGlass4
		{
			armor = 1.5;
		};
		class HitLFWheel: HitLFWheel
		{
			armor = 0.25;
		};
		class HitLBWheel: HitLBWheel
		{
			armor = 0.25;
		};
		class HitRFWheel: HitRFWheel
		{
			armor = 0.25;
		};
		class HitRBWheel: HitRBWheel
		{
			armor = 0.25;
		};
		class HitFuel: HitFuel
		{
			armor = 0.5;
		};
		class HitEngine: HitEngine
		{
			armor = 1;
		};
	};	
	
	class Upgrades
	{
		ItemLRK[] = {"HMMWV_M2_DZE3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class HMMWV_M2_DZE3: HMMWV_M2_DZE2
{
	displayName = "$STR_VEH_NAME_HMMWV_M2+++";
	transportMaxWeapons = 30; 
	transportMaxMagazines = 140; 
	transportmaxbackpacks = 8;
	
	class Upgrades
	{
		ItemTNK[] = {"HMMWV_M2_DZE4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",4},{"PartFueltank",2},{"ItemFuelBarrel",1}}};
	};
};

class HMMWV_M2_DZE4: HMMWV_M2_DZE3
{
	displayName = "$STR_VEH_NAME_HMMWV_M2++++";
	fuelCapacity = 180; // base 100
};

class HMMWV_MK19_DZ: HMMWV_DZE_Base {
	displayname = "$STR_VEH_NAME_HMMWV_MK19";
	scope = 2;
	model = "\ca\Wheeled\HMMWVmk19";
	picture = "\Ca\wheeled\data\ico\HMMWVmk19_CA.paa";
	Icon = "\Ca\wheeled\data\map_ico\icomap_hmwvmk19_CA.paa";
	crew = "";
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};
	transportMaxWeapons = 15;
	transportMaxMagazines = 70;
	transportmaxbackpacks = 4;
	damageResistance = 0.00581;
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			turretInfoType = "RscWeaponRangeZeroing";
			discreteDistanceInitIndex = 4;
			discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500};
			weapons[]=
			{
				"MK19BC"
			};
			magazines[]=
			{
				"48Rnd_40mm_MK19",
				"48Rnd_40mm_MK19",
				"48Rnd_40mm_MK19",
				"48Rnd_40mm_MK19"
			};
			soundServo[]=
			{
				"\Ca\sounds\Vehicles\Servos\turret-1",
				0.0099999998,
				1,
				10
			};
			gunnerAction="HMMWV_Gunner02";
			class GunFire: WeaponCloudsMGun
			{
				interval=0.0099999998;
			};
		};
	};
	accuracy = 0.32;
	class AnimationSources: AnimationSources
	{
		class ReloadAnim
		{
			weapon = "MK19BC";
		};
		class ReloadMagazine
		{
			weapon = "MK19BC";
		};
		class Revolving
		{
			weapon = "MK19BC";
		};
		class belt_rotation
		{
			source="reload";
			weapon = "MK19BC";
		};
	};
	class Damage
	{
		tex[]={};
		mat[]=
		{
			"ca\wheeled\hmmwv\data\hmmwv_details.rvmat",
			"Ca\wheeled\HMMWV\data\hmmwv_details_damage.rvmat",
			"Ca\wheeled\HMMWV\data\hmmwv_details_destruct.rvmat",
			"ca\wheeled\hmmwv\data\hmmwv_body.rvmat",
			"Ca\wheeled\HMMWV\data\hmmwv_body_damage.rvmat",
			"Ca\wheeled\HMMWV\data\hmmwv_body_destruct.rvmat",
			"ca\wheeled\hmmwv\data\hmmwv_clocks.rvmat",
			"ca\wheeled\hmmwv\data\hmmwv_clocks.rvmat",
			"ca\wheeled\data\hmmwv_clocks_destruct.rvmat",
			"ca\weapons\data\mk19.rvmat",
			"ca\weapons\data\mk19.rvmat",
			"ca\weapons\data\mk19_destruct.rvmat",
			"ca\wheeled\HMMWV\data\hmmwv_glass.rvmat",
			"ca\wheeled\HMMWV\data\hmmwv_glass_Half_D.rvmat",
			"ca\wheeled\HMMWV\data\hmmwv_glass_Half_D.rvmat",
			"ca\wheeled\HMMWV\data\hmmwv_glass_in.rvmat",
			"ca\wheeled\HMMWV\data\hmmwv_glass_in_Half_D.rvmat",
			"ca\wheeled\HMMWV\data\hmmwv_glass_in_Half_D.rvmat"
		};
	};
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"\ca\wheeled\hmmwv\data\hmmwv_body_co.paa"};
};

class HMMWV_MK19_DZE: HMMWV_MK19_DZ {
	class Turrets: Turrets {
		class MainTurret: MainTurret {
			magazines[] = {};
		};
	};

	class Upgrades
	{
		ItemORP[] = {"HMMWV_MK19_DZE1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",2},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class HMMWV_MK19_DZE1: HMMWV_MK19_DZE 
{
	displayName = "$STR_VEH_NAME_HMMWV_MK19+";
	original = "HMMWV_MK19_DZE";
	maxSpeed = 115; // base 100
	turnCoef = 3; // base 2
	terrainCoef = 1; //base 2
	
	class Upgrades
	{
		ItemAVE[] = {"HMMWV_MK19_DZE2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"equip_metal_sheet",6},{"ItemScrews",4}}};
	};
};

class HMMWV_MK19_DZE2: HMMWV_MK19_DZE1
{
	displayName = "$STR_VEH_NAME_HMMWV_MK19++";
	armor = 75; // base 40
	damageResistance = 0.015; // base 0.00581
	
	class HitPoints: HitPoints
	{
		class HitGlass1: HitGlass1
		{
			armor = 1.5;
		};
		class HitGlass2: HitGlass2
		{
			armor = 1.5;
		};
		class HitGlass3: HitGlass3
		{
			armor = 1.5;
		};
		class HitGlass4: HitGlass4
		{
			armor = 1.5;
		};
		class HitLFWheel: HitLFWheel
		{
			armor = 0.25;
		};
		class HitLBWheel: HitLBWheel
		{
			armor = 0.25;
		};
		class HitRFWheel: HitRFWheel
		{
			armor = 0.25;
		};
		class HitRBWheel: HitRBWheel
		{
			armor = 0.25;
		};
		class HitFuel: HitFuel
		{
			armor = 0.5;
		};
		class HitEngine: HitEngine
		{
			armor = 1;
		};
	};	
	
	class Upgrades
	{
		ItemLRK[] = {"HMMWV_MK19_DZE3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class HMMWV_MK19_DZE3: HMMWV_MK19_DZE2
{
	displayName = "$STR_VEH_NAME_HMMWV_MK19+++";
	transportMaxWeapons = 30; 
	transportMaxMagazines = 140; 
	transportmaxbackpacks = 8;
	
	class Upgrades
	{
		ItemTNK[] = {"HMMWV_MK19_DZE4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",4},{"PartFueltank",2},{"ItemFuelBarrel",1}}};
	};
};

class HMMWV_MK19_DZE4: HMMWV_MK19_DZE3
{
	displayName = "$STR_VEH_NAME_HMMWV_MK19++++";
	fuelCapacity = 180; // base 100
};

class HMMWV_DES_MK19_DZ: HMMWV_MK19_DZ {
	displayname = "$STR_VEH_NAME_HMMWV_DES_MK19";
	hiddenSelectionsTextures[] = {"\CA\wheeled_E\HMMWV\Data\HMMWV_body_US_CO.paa"};
	
	class Damage
	{
		tex[] = {};
		mat[] = {"Ca\wheeled_E\HMMWV\data\hmmwv_body_2.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_body_2_damage.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_body_2_destruct.rvmat","Ca\wheeled_E\HMMWV\Data\hmmwv_details.rvmat","Ca\wheeled_E\HMMWV\Data\hmmwv_details_damage.rvmat","Ca\wheeled_E\HMMWV\Data\hmmwv_details_destruct.rvmat","Ca\wheeled_E\HMMWV\Data\hmmwv_glass.rvmat","Ca\wheeled_E\HMMWV\Data\hmmwv_glass_damage.rvmat","Ca\wheeled_E\HMMWV\Data\hmmwv_glass_destruct.rvmat","Ca\wheeled_E\HMMWV\Data\hmmwv_glass_in_BASE.rvmat","Ca\wheeled_E\HMMWV\Data\hmmwv_glass_damage.rvmat","Ca\wheeled_E\HMMWV\Data\hmmwv_glass_destruct.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default_destruct.rvmat"};
	};
};

class HMMWV_DES_MK19_DZE: HMMWV_MK19_DZE {
	displayname = "$STR_VEH_NAME_HMMWV_DES_MK19";
	hiddenSelectionsTextures[] = {"\CA\wheeled_E\HMMWV\Data\HMMWV_body_US_CO.paa"};
	
	class Damage
	{
		tex[] = {};
		mat[] = {"Ca\wheeled_E\HMMWV\data\hmmwv_body_2.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_body_2_damage.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_body_2_destruct.rvmat","Ca\wheeled_E\HMMWV\Data\hmmwv_details.rvmat","Ca\wheeled_E\HMMWV\Data\hmmwv_details_damage.rvmat","Ca\wheeled_E\HMMWV\Data\hmmwv_details_destruct.rvmat","Ca\wheeled_E\HMMWV\Data\hmmwv_glass.rvmat","Ca\wheeled_E\HMMWV\Data\hmmwv_glass_damage.rvmat","Ca\wheeled_E\HMMWV\Data\hmmwv_glass_destruct.rvmat","Ca\wheeled_E\HMMWV\Data\hmmwv_glass_in_BASE.rvmat","Ca\wheeled_E\HMMWV\Data\hmmwv_glass_damage.rvmat","Ca\wheeled_E\HMMWV\Data\hmmwv_glass_destruct.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default_destruct.rvmat"};
	};	
	class Upgrades
	{
		ItemORP[] = {"HMMWV_DES_MK19_DZE1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",2},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class HMMWV_DES_MK19_DZE1: HMMWV_DES_MK19_DZE 
{
	displayName = "$STR_VEH_NAME_HMMWV_DES_MK19+";
	original = "HMMWV_DES_MK19_DZE";
	maxSpeed = 115; // base 100
	turnCoef = 3; // base 2
	terrainCoef = 1; //base 2
	
	class Upgrades
	{
		ItemAVE[] = {"HMMWV_DES_MK19_DZE2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"equip_metal_sheet",6},{"ItemScrews",4}}};
	};
};

class HMMWV_DES_MK19_DZE2: HMMWV_DES_MK19_DZE1
{
	displayName = "$STR_VEH_NAME_HMMWV_DES_MK19++";
	armor = 75; // base 40
	damageResistance = 0.015; // base 0.00581
	
	class HitPoints: HitPoints
	{
		class HitGlass1: HitGlass1
		{
			armor = 1.5;
		};
		class HitGlass2: HitGlass2
		{
			armor = 1.5;
		};
		class HitGlass3: HitGlass3
		{
			armor = 1.5;
		};
		class HitGlass4: HitGlass4
		{
			armor = 1.5;
		};
		class HitLFWheel: HitLFWheel
		{
			armor = 0.25;
		};
		class HitLBWheel: HitLBWheel
		{
			armor = 0.25;
		};
		class HitRFWheel: HitRFWheel
		{
			armor = 0.25;
		};
		class HitRBWheel: HitRBWheel
		{
			armor = 0.25;
		};
		class HitFuel: HitFuel
		{
			armor = 0.5;
		};
		class HitEngine: HitEngine
		{
			armor = 1;
		};
	};	
	
	class Upgrades
	{
		ItemLRK[] = {"HMMWV_DES_MK19_DZE3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class HMMWV_DES_MK19_DZE3: HMMWV_DES_MK19_DZE2
{
	displayName = "$STR_VEH_NAME_HMMWV_DES_MK19+++";
	transportMaxWeapons = 30; 
	transportMaxMagazines = 140; 
	transportmaxbackpacks = 8;
	
	class Upgrades
	{
		ItemTNK[] = {"HMMWV_DES_MK19_DZE4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",4},{"PartFueltank",2},{"ItemFuelBarrel",1}}};
	};
};

class HMMWV_DES_MK19_DZE4: HMMWV_DES_MK19_DZE3
{
	displayName = "$STR_VEH_NAME_HMMWV_DES_MK19++++";
	fuelCapacity = 180; // base 100
};

class HMMWV_M1035_DES_EP1_DZE : HMMWV_DZE_Base {
	scope = 2;
	model = "\ca\wheeled_e\HMMWV\M1035_transport";
	displayname = "$STR_VEH_NAME_HMMWV_DES";
	transportSoldier = 3;
	Picture = "\CA\wheeled_e\Data\UI\Picture_hmmwv_transport_CA.paa";
	Icon = "\CA\wheeled_e\Data\UI\Icon_hmmwv_transport_CA.paa";
	class Turrets{};
	class Library
	{
		libTextDesc = "$STR_EP1_LIB_HMMWV_M1035_DES";
	};
	driverAction = "HMMWV_Driver_EP1";
	cargoAction[] = {"HMMWV_Cargo_EP1","HMMWV_Cargo01_EP1","HMMWV_Cargo02_EP1"};
	crew = "";
	typicalCargo[] = {};
	threat[] = {0.0,0.0,0.0};
	class TransportMagazines{};
	class TransportWeapons{};
	transportMaxWeapons = 15;
	transportMaxMagazines = 70;
	transportmaxbackpacks = 4;	
	class Damage
	{
		tex[] = {};
		mat[] = {"Ca\wheeled_E\HMMWV\data\hmmwv_body_1.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_body_1_damage.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_body_1_destruct.rvmat","Ca\wheeled_E\HMMWV\data\HMMWV_Canvas.rvmat","Ca\wheeled_E\HMMWV\data\HMMWV_Canvas_damage.rvmat","Ca\wheeled_E\HMMWV\data\HMMWV_Canvas_destruct.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_hood.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_hood_damage.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_hood_destruct.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_parts_1.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_parts_1_damage.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_parts_1_destruct.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_regular_1.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_regular_1_damage.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_regular_1_destruct.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default_destruct.rvmat"};
	};
	HiddenSelections[] = {"camo","camo1","camo2","camo3"};
	HiddenSelectionsTextures[] = {"ca\wheeled_e\hmmwv\data\hmmwv_body_canvas_co.paa","ca\wheeled_e\hmmwv\data\hmmwv_hood_canvas_co.paa","ca\wheeled_e\hmmwv\data\hmmwv_canvas_1_co.paa","ca\wheeled_e\hmmwv\data\hmmwv_canvas_1_co.paa"};

	class Upgrades
	{
		ItemORP[] = {"HMMWV_M1035_DES_EP1_DZE1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",2},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class HMMWV_M1035_DES_EP1_DZE1: HMMWV_M1035_DES_EP1_DZE 
{
	displayName = "$STR_VEH_NAME_HMMWV_DES+";
	original = "HMMWV_M1035_DES_EP1_DZE";
	maxSpeed = 115; // base 100
	turnCoef = 3; // base 2
	terrainCoef = 1; //base 2
	
	class Upgrades
	{
		ItemAVE[] = {"HMMWV_M1035_DES_EP1_DZE2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"equip_metal_sheet",6},{"ItemScrews",4}}};
	};
};

class HMMWV_M1035_DES_EP1_DZE2: HMMWV_M1035_DES_EP1_DZE1
{
	displayName = "$STR_VEH_NAME_HMMWV_DES++";
	armor = 75; // base 40
	damageResistance = 0.015; // base 0.00581
	
	class HitPoints: HitPoints
	{
		class HitGlass1: HitGlass1
		{
			armor = 1.5;
		};
		class HitGlass2: HitGlass2
		{
			armor = 1.5;
		};
		class HitGlass3: HitGlass3
		{
			armor = 1.5;
		};
		class HitGlass4: HitGlass4
		{
			armor = 1.5;
		};
		class HitLFWheel: HitLFWheel
		{
			armor = 0.25;
		};
		class HitLBWheel: HitLBWheel
		{
			armor = 0.25;
		};
		class HitRFWheel: HitRFWheel
		{
			armor = 0.25;
		};
		class HitRBWheel: HitRBWheel
		{
			armor = 0.25;
		};
		class HitFuel: HitFuel
		{
			armor = 0.5;
		};
		class HitEngine: HitEngine
		{
			armor = 1;
		};
	};	
	
	class Upgrades
	{
		ItemLRK[] = {"HMMWV_M1035_DES_EP1_DZE3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class HMMWV_M1035_DES_EP1_DZE3: HMMWV_M1035_DES_EP1_DZE2
{
	displayName = "$STR_VEH_NAME_HMMWV_DES+++";
	transportMaxWeapons = 30; 
	transportMaxMagazines = 140; 
	transportmaxbackpacks = 8;
	
	class Upgrades
	{
		ItemTNK[] = {"HMMWV_M1035_DES_EP1_DZE4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",4},{"PartFueltank",2},{"ItemFuelBarrel",1}}};
	};
};

class HMMWV_M1035_DES_EP1_DZE4: HMMWV_M1035_DES_EP1_DZE3
{
	displayName = "$STR_VEH_NAME_HMMWV_DES++++";
	fuelCapacity = 180; // base 100
};

class HMMWV_DZ: HMMWV_DZE_Base {	
	accuracy = 0.32;
	displayname = "$STR_VEH_NAME_HMMWV";
	hasgunner = 0;
	hiddenselections[] = {"Camo1"};
	hiddenselectionstextures[] = {"\ca\wheeled\hmmwv\data\hmmwv_body_co.paa"};
	icon = "\Ca\wheeled\data\map_ico\icomap_hmwv_CA.paa";
	mapsize = 5;
	model = "ca\wheeled_E\HMMWV\HMMWV";
	picture = "\Ca\wheeled\data\ico\HMMWV_CA.paa";	
	scope = 2;
	crew = "";
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};
	transportMaxWeapons = 15;
	transportMaxMagazines = 70;
	transportmaxbackpacks = 4;
	class Turrets {};
	class Damage {
		mat[] = {"ca\wheeled\hmmwv\data\hmmwv_details.rvmat", "Ca\wheeled\HMMWV\data\hmmwv_details_damage.rvmat", "Ca\wheeled\HMMWV\data\hmmwv_details_destruct.rvmat", "ca\wheeled\hmmwv\data\hmmwv_body.rvmat", "Ca\wheeled\HMMWV\data\hmmwv_body_damage.rvmat", "Ca\wheeled\HMMWV\data\hmmwv_body_destruct.rvmat", "ca\wheeled\hmmwv\data\hmmwv_clocks.rvmat", "ca\wheeled\hmmwv\data\hmmwv_clocks.rvmat", "ca\wheeled\data\hmmwv_clocks_destruct.rvmat", "ca\wheeled\HMMWV\data\hmmwv_glass.rvmat", "ca\wheeled\HMMWV\data\hmmwv_glass_Half_D.rvmat", "ca\wheeled\HMMWV\data\hmmwv_glass_Half_D.rvmat", "ca\wheeled\HMMWV\data\hmmwv_glass_in.rvmat", "ca\wheeled\HMMWV\data\hmmwv_glass_in_Half_D.rvmat", "ca\wheeled\HMMWV\data\hmmwv_glass_in_Half_D.rvmat"};
		tex[] = {};
	};
	
	class Upgrades
	{
		ItemORP[] = {"HMMWV_DZE1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",2},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class HMMWV_DZE1: HMMWV_DZ 
{
	displayName = "$STR_VEH_NAME_HMMWV+";
	original = "HMMWV_DZ";
	maxSpeed = 115; // base 100
	turnCoef = 3; // base 2
	terrainCoef = 1; //base 2
	
	class Upgrades
	{
		ItemAVE[] = {"HMMWV_DZE2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"equip_metal_sheet",6},{"ItemScrews",4}}};
	};
};

class HMMWV_DZE2: HMMWV_DZE1
{
	displayName = "$STR_VEH_NAME_HMMWV++";
	armor = 75; // base 40
	damageResistance = 0.015; // base 0.00581
	
	class HitPoints: HitPoints
	{
		class HitGlass1: HitGlass1
		{
			armor = 1.5;
		};
		class HitGlass2: HitGlass2
		{
			armor = 1.5;
		};
		class HitGlass3: HitGlass3
		{
			armor = 1.5;
		};
		class HitGlass4: HitGlass4
		{
			armor = 1.5;
		};
		class HitLFWheel: HitLFWheel
		{
			armor = 0.25;
		};
		class HitLBWheel: HitLBWheel
		{
			armor = 0.25;
		};
		class HitRFWheel: HitRFWheel
		{
			armor = 0.25;
		};
		class HitRBWheel: HitRBWheel
		{
			armor = 0.25;
		};
		class HitFuel: HitFuel
		{
			armor = 0.5;
		};
		class HitEngine: HitEngine
		{
			armor = 1;
		};
	};	
	
	class Upgrades
	{
		ItemLRK[] = {"HMMWV_DZE3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class HMMWV_DZE3: HMMWV_DZE2
{
	displayName = "$STR_VEH_NAME_HMMWV+++";
	transportMaxWeapons = 30; 
	transportMaxMagazines = 140; 
	transportmaxbackpacks = 8;
	
	class Upgrades
	{
		ItemTNK[] = {"HMMWV_DZE4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",4},{"PartFueltank",2},{"ItemFuelBarrel",1}}};
	};
};

class HMMWV_DZE4: HMMWV_DZE3
{
	displayName = "$STR_VEH_NAME_HMMWV++++";
	fuelCapacity = 180; // base 100
};

class HMMWV_DES_EP1_DZE : HMMWV_DZ {
	displayname = "$STR_VEH_NAME_HMMWV_DES";
	hiddenSelections[] = {"Camo1"};
	hiddenselectionstextures[] = {"\CA\wheeled_E\HMMWV\Data\HMMWV_body_US_CO.paa"};
	
	class Upgrades
	{
		ItemORP[] = {"HMMWV_DES_EP1_DZE1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",2},{"PartWheel",4},{"ItemScrews",2}}};
	};	
};

class HMMWV_DES_EP1_DZE1: HMMWV_DES_EP1_DZE 
{
	displayName = "$STR_VEH_NAME_HMMWV_DES+";
	original = "HMMWV_DES_EP1_DZE";
	maxSpeed = 115; // base 100
	turnCoef = 3; // base 2
	terrainCoef = 1; //base 2
	
	class Upgrades
	{
		ItemAVE[] = {"HMMWV_DES_EP1_DZE2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"equip_metal_sheet",6},{"ItemScrews",4}}};
	};
};

class HMMWV_DES_EP1_DZE2: HMMWV_DES_EP1_DZE1
{
	displayName = "$STR_VEH_NAME_HMMWV_DES++";
	armor = 75; // base 40
	damageResistance = 0.015; // base 0.00581
	
	class HitPoints: HitPoints
	{
		class HitGlass1: HitGlass1
		{
			armor = 1.5;
		};
		class HitGlass2: HitGlass2
		{
			armor = 1.5;
		};
		class HitGlass3: HitGlass3
		{
			armor = 1.5;
		};
		class HitGlass4: HitGlass4
		{
			armor = 1.5;
		};
		class HitLFWheel: HitLFWheel
		{
			armor = 0.25;
		};
		class HitLBWheel: HitLBWheel
		{
			armor = 0.25;
		};
		class HitRFWheel: HitRFWheel
		{
			armor = 0.25;
		};
		class HitRBWheel: HitRBWheel
		{
			armor = 0.25;
		};
		class HitFuel: HitFuel
		{
			armor = 0.5;
		};
		class HitEngine: HitEngine
		{
			armor = 1;
		};
	};	
	
	class Upgrades
	{
		ItemLRK[] = {"HMMWV_DES_EP1_DZE3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class HMMWV_DES_EP1_DZE3: HMMWV_DES_EP1_DZE2
{
	displayName = "$STR_VEH_NAME_HMMWV_DES+++";
	transportMaxWeapons = 30; 
	transportMaxMagazines = 140; 
	transportmaxbackpacks = 8;
	
	class Upgrades
	{
		ItemTNK[] = {"HMMWV_DES_EP1_DZE4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",4},{"PartFueltank",2},{"ItemFuelBarrel",1}}};
	};
};

class HMMWV_DES_EP1_DZE4: HMMWV_DES_EP1_DZE3
{
	displayName = "$STR_VEH_NAME_HMMWV_DES++++";
	fuelCapacity = 180; // base 100
};

class HMMWV_WINTER_DZ: HMMWV_DZ {	
	displayname = "$STR_VEH_NAME_HMMWV_WINTER";
	hiddenselectionstextures[] = {"\dayz_epoch_c\skins\hmmwv\hmmwv_body_winter_co.paa"};
	
	class Upgrades
	{
		ItemORP[] = {"HMMWV_WINTER_DZE1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",2},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class HMMWV_WINTER_DZE1: HMMWV_WINTER_DZ 
{
	displayName = "$STR_VEH_NAME_HMMWV_WINTER+";
	original = "HMMWV_WINTER_DZ";
	maxSpeed = 115; // base 100
	turnCoef = 3; // base 2
	terrainCoef = 1; //base 2
	
	class Upgrades
	{
		ItemAVE[] = {"HMMWV_WINTER_DZE2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"equip_metal_sheet",6},{"ItemScrews",4}}};
	};
};

class HMMWV_WINTER_DZE2: HMMWV_WINTER_DZE1
{
	displayName = "$STR_VEH_NAME_HMMWV_WINTER++";
	armor = 75; // base 40
	damageResistance = 0.015; // base 0.00581
	
	class HitPoints: HitPoints
	{
		class HitGlass1: HitGlass1
		{
			armor = 1.5;
		};
		class HitGlass2: HitGlass2
		{
			armor = 1.5;
		};
		class HitGlass3: HitGlass3
		{
			armor = 1.5;
		};
		class HitGlass4: HitGlass4
		{
			armor = 1.5;
		};
		class HitLFWheel: HitLFWheel
		{
			armor = 0.25;
		};
		class HitLBWheel: HitLBWheel
		{
			armor = 0.25;
		};
		class HitRFWheel: HitRFWheel
		{
			armor = 0.25;
		};
		class HitRBWheel: HitRBWheel
		{
			armor = 0.25;
		};
		class HitFuel: HitFuel
		{
			armor = 0.5;
		};
		class HitEngine: HitEngine
		{
			armor = 1;
		};
	};	
	
	class Upgrades
	{
		ItemLRK[] = {"HMMWV_WINTER_DZE3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class HMMWV_WINTER_DZE3: HMMWV_WINTER_DZE2
{
	displayName = "$STR_VEH_NAME_HMMWV_WINTER+++";
	transportMaxWeapons = 30; 
	transportMaxMagazines = 140; 
	transportmaxbackpacks = 8;
	
	class Upgrades
	{
		ItemTNK[] = {"HMMWV_WINTER_DZE4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",4},{"PartFueltank",2},{"ItemFuelBarrel",1}}};
	};
};

class HMMWV_WINTER_DZE4: HMMWV_WINTER_DZE3
{
	displayName = "$STR_VEH_NAME_HMMWV_WINTER++++";
	fuelCapacity = 180; // base 100
};

class Hummer_DZE: HMMWV_DZ {	
	displayname = "$STR_VEH_NAME_HUMMER";
	hiddenSelections[] = {"camo1","camo2","camo3"};
	hiddenSelectionsTextures[] = {"\sra_civilian\wheeled\hmmwv\hmmwv_body_co.paa","\sra_civilian\wheeled\hmmwv\hmmwv_hood_co.paa","\sra_civilian\wheeled\hmmwv\hmmwv_regular_co.paa"};
	model = "\SRA_civilian\Wheeled\HMMWV\hmmwv";
	
	class HitPoints: HitPoints
	{
		class HitBody
		{
			armor = 2;
			material = -1;
			name = "karoserie";
			passThrough = 0;
			visual = "karoserie";
		};
		class HitEngine: HitBody
		{
			name = "motor";
			visual = "motor";
		};
		class HitFuel: HitBody
		{
			armor = 1;
			name = "palivo";
			visual = "palivo";
		};
		class HitGlass1: HitGlass1
		{
			armor = 1;
			name = "glass1";
			visual = "glass1";
			passThrough = 0;
		};
		class HitGlass2: HitGlass1
		{
			name = "glass2";
			visual = "glass2";
		};
		class HitGlass3: HitGlass1
		{
			name = "glass3";
			visual = "glass3";
		};
		class HitGlass4: HitGlass1
		{
			name = "glass4";
			visual = "glass4";
		};
		class HitGlass5: HitGlass1
		{
			name = "glass5";
			visual = "glass5";
		};
		class HitLFWheel
		{
			armor = 0.35;
			material = -1;
			name = "levy predni tlumic";
			passThrough = 0.3;
			visual = "";
		};
		class HitLBWheel: HitLFWheel
		{
			name = "levy zadni tlumic";
		};
		class HitRFWheel: HitLFWheel
		{
			name = "pravy predni tlumic";
		};
		class HitRBWheel: HitLFWheel
		{
			name = "pravy zadni tlumic";
		};
	};	

	class Damage
	{
		tex[] = {};
		mat[] = {"sra_civilian\wheeled\hmmwv\hmmwv_body.rvmat","sra_civilian\wheeled\hmmwv\hmmwv_body_damage.rvmat","sra_civilian\wheeled\hmmwv\hmmwv_body_destruct.rvmat","sra_civilian\wheeled\hmmwv\hmmwv_clocks.rvmat","sra_civilian\wheeled\hmmwv\hmmwv_clocks.rvmat","sra_civilian\wheeled\hmmwv\hmmwv_clocks_destruct.rvmat","sra_civilian\wheeled\hmmwv\hmmwv_glass.rvmat","sra_civilian\wheeled\hmmwv\hmmwv_glass_damage.rvmat","sra_civilian\wheeled\hmmwv\hmmwv_glass_destruct.rvmat","sra_civilian\wheeled\hmmwv\hmmwv_glass_in.rvmat","sra_civilian\wheeled\hmmwv\hmmwv_glass_in.rvmat","sra_civilian\wheeled\hmmwv\hmmwv_glass_in_half_d.rvmat","sra_civilian\wheeled\hmmwv\hmmwv_hood.rvmat","sra_civilian\wheeled\hmmwv\hmmwv_hood_damage.rvmat","sra_civilian\wheeled\hmmwv\hmmwv_hood_destruct.rvmat","sra_civilian\wheeled\hmmwv\hmmwv_regular.rvmat","sra_civilian\wheeled\hmmwv\hmmwv_regular_damage.rvmat","sra_civilian\wheeled\hmmwv\hmmwv_regular_destruct.rvmat"};
	};
	
	class Upgrades
	{
		ItemORP[] = {"Hummer_DZE1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",2},{"PartWheel",4},{"ItemScrews",2}}};
	};		
};

class Hummer_DZE1: Hummer_DZE 
{
	displayName = "$STR_VEH_NAME_HUMMER+";
	original = "Hummer_DZE";
	maxSpeed = 115; // base 100
	turnCoef = 3; // base 2
	terrainCoef = 1; //base 2
	
	class Upgrades
	{
		ItemAVE[] = {"Hummer_DZE2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"equip_metal_sheet",6},{"ItemScrews",4}}};
	};
};

class Hummer_DZE2: Hummer_DZE1
{
	displayName = "$STR_VEH_NAME_HUMMER++";
	armor = 75; // base 40
	damageResistance = 0.015; // base 0.00581
	
	class HitPoints: HitPoints
	{
		class HitGlass1: HitGlass1
		{
			armor = 1.5;
		};
		class HitGlass2: HitGlass2
		{
			armor = 1.5;
		};
		class HitGlass3: HitGlass3
		{
			armor = 1.5;
		};
		class HitGlass4: HitGlass4
		{
			armor = 1.5;
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
		class HitFuel: HitFuel
		{
			armor = 2;
		};
		class HitEngine: HitEngine
		{
			armor = 3;
		};
	};	
	
	class Upgrades
	{
		ItemLRK[] = {"Hummer_DZE3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class Hummer_DZE3: Hummer_DZE2
{
	displayName = "$STR_VEH_NAME_HUMMER+++";
	transportMaxWeapons = 30; 
	transportMaxMagazines = 140; 
	transportmaxbackpacks = 8;
	
	class Upgrades
	{
		ItemTNK[] = {"Hummer_DZE4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",4},{"PartFueltank",2},{"ItemFuelBarrel",1}}};
	};
};

class Hummer_DZE4: Hummer_DZE3
{
	displayName = "$STR_VEH_NAME_HUMMER++++";
	fuelCapacity = 180; // base 100
};

class HMMWV_Ambulance_DZE : HMMWV_DZE_Base {
	scope = 2;
	displayname = "$STR_VEH_NAME_HMMWV_AMBULANCE";
	model = "\ca\wheeled2\HMMWV\M997A2_Ambulance\M997A2_Ambulance";
	vehicleClass = "Support";
	mapSize = 5;
	transportSoldier = 5;
	cargoAction[] = {"HMMWV_Cargo01","BMP2_Cargo04"};	
	crew = "";
	typicalCargo[] = {};
	hasGunner = 0;
	class TransportMagazines {};
	class TransportWeapons {};
	transportMaxWeapons = 15;
	transportMaxMagazines = 70;
	transportmaxbackpacks = 4;	
	class Turrets{};
	class Damage
	{
		tex[] = {};
		mat[] = {"ca\wheeled\hmmwv\data\hmmwv_body.rvmat","ca\wheeled\hmmwv\data\hmmwv_body_Half_D.rvmat","ca\wheeled\hmmwv\data\hmmwv_body_Full_D.rvmat","ca\wheeled\hmmwv\data\hmmwv_details.rvmat","ca\wheeled\hmmwv\data\hmmwv_details_Half_D.rvmat","ca\wheeled\hmmwv\data\hmmwv_details_Full_D.rvmat","ca\wheeled\hmmwv\data\hmmwv_parts_1.rvmat","ca\wheeled\hmmwv\data\hmmwv_parts_1_Half_D.rvmat","ca\wheeled\hmmwv\data\hmmwv_parts_1_Full_D.rvmat","ca\wheeled\hmmwv\data\hmmwv_clocks.rvmat","ca\wheeled\hmmwv\data\hmmwv_clocks.rvmat","ca\wheeled\data\hmmwv_clocks_destruct.rvmat","ca\wheeled2\hmmwv\M997A2_Ambulance\Data\M997A2_Ambulance_3.rvmat","ca\wheeled2\hmmwv\M997A2_Ambulance\Data\M997A2_Ambulance_3_Half_D.rvmat","ca\wheeled2\hmmwv\M997A2_Ambulance\Data\M997A2_Ambulance_3_Full_D.rvmat","ca\wheeled\hmmwv\data\hmmwv_glass.rvmat","ca\wheeled\hmmwv\data\hmmwv_glass_Half_D.rvmat","ca\wheeled\hmmwv\data\hmmwv_glass_Half_D.rvmat","ca\wheeled\hmmwv\data\hmmwv_glass_in.rvmat","ca\wheeled\hmmwv\data\hmmwv_glass_in_Half_D.rvmat","ca\wheeled\hmmwv\data\hmmwv_glass_in_Half_D.rvmat"};
	};
	hiddenSelections[] = {"Camo1","Camo2"};
	hiddenSelectionsTextures[] = {"\ca\wheeled\hmmwv\data\hmmwv_body_co.paa","\ca\wheeled\hmmwv\data\hmmwv_parts_1_ca.paa"};
	class Library
	{
		libTextDesc = "$STR_LIB_HMMWV_Ambulance";
	};	
	attendant = 0;
	
	class Upgrades
	{
		ItemORP[] = {"HMMWV_Ambulance_DZE1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",2},{"PartWheel",4},{"ItemScrews",2}}};
	};		
};

class HMMWV_Ambulance_DZE1: HMMWV_Ambulance_DZE 
{
	displayName = "$STR_VEH_NAME_HMMWV_AMBULANCE+";
	original = "HMMWV_Ambulance_DZE";
	maxSpeed = 115; // base 100
	turnCoef = 3; // base 2
	terrainCoef = 1; //base 2
	
	class Upgrades
	{
		ItemAVE[] = {"HMMWV_Ambulance_DZE2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"equip_metal_sheet",6},{"ItemScrews",4}}};
	};
};

class HMMWV_Ambulance_DZE2: HMMWV_Ambulance_DZE1
{
	displayName = "$STR_VEH_NAME_HMMWV_AMBULANCE++";
	armor = 75; // base 40
	damageResistance = 0.015; // base 0.00581
	
	class HitPoints: HitPoints
	{
		class HitGlass1: HitGlass1
		{
			armor = 1.5;
		};
		class HitGlass2: HitGlass2
		{
			armor = 1.5;
		};
		class HitGlass3: HitGlass3
		{
			armor = 1.5;
		};
		class HitGlass4: HitGlass4
		{
			armor = 1.5;
		};
		class HitLFWheel: HitLFWheel
		{
			armor = 0.25;
		};
		class HitLBWheel: HitLBWheel
		{
			armor = 0.25;
		};
		class HitRFWheel: HitRFWheel
		{
			armor = 0.25;
		};
		class HitRBWheel: HitRBWheel
		{
			armor = 0.25;
		};
		class HitFuel: HitFuel
		{
			armor = 0.5;
		};
		class HitEngine: HitEngine
		{
			armor = 1;
		};
	};	
	
	class Upgrades
	{
		ItemLRK[] = {"HMMWV_Ambulance_DZE3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class HMMWV_Ambulance_DZE3: HMMWV_Ambulance_DZE2
{
	displayName = "$STR_VEH_NAME_HMMWV_AMBULANCE+++";
	transportMaxWeapons = 30; 
	transportMaxMagazines = 140; 
	transportmaxbackpacks = 8;
	
	class Upgrades
	{
		ItemTNK[] = {"HMMWV_Ambulance_DZE4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",4},{"PartFueltank",2},{"ItemFuelBarrel",1}}};
	};
};

class HMMWV_Ambulance_DZE4: HMMWV_Ambulance_DZE3
{
	displayName = "$STR_VEH_NAME_HMMWV_AMBULANCE++++";
	fuelCapacity = 180; // base 100
};

class HMMWV_Ambulance_CZ_DES_EP1_DZE : HMMWV_Ambulance_DZE {
	displayname = "$STR_VEH_NAME_HMMWV_AMBULANCE_DES";
	hiddenSelections[] = {"Camo1","Camo2"};
	hiddenselectionstextures[] = {"\CA\wheeled_E\HMMWV\Data\HMMWV_body_US_CO.paa","\ca\wheeled\hmmwv\data\hmmwv_parts_1_ca.paa"};
	attendant = 0;
	
	class Upgrades
	{
		ItemORP[] = {"HMMWV_Ambulance_CZ_DES_EP1_DZE1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",2},{"PartWheel",4},{"ItemScrews",2}}};
	};	
};

class HMMWV_Ambulance_CZ_DES_EP1_DZE1: HMMWV_Ambulance_CZ_DES_EP1_DZE 
{
	displayName = "$STR_VEH_NAME_HMMWV_AMBULANCE_DES+";
	original = "HMMWV_Ambulance_CZ_DES_EP1_DZE";
	maxSpeed = 115; // base 100
	turnCoef = 3; // base 2
	terrainCoef = 1; //base 2
	
	class Upgrades
	{
		ItemAVE[] = {"HMMWV_Ambulance_CZ_DES_EP1_DZE2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"equip_metal_sheet",6},{"ItemScrews",4}}};
	};
};

class HMMWV_Ambulance_CZ_DES_EP1_DZE2: HMMWV_Ambulance_CZ_DES_EP1_DZE1
{
	displayName = "$STR_VEH_NAME_HMMWV_AMBULANCE_DES++";
	armor = 75; // base 40
	damageResistance = 0.015; // base 0.00581
	
	class HitPoints: HitPoints
	{
		class HitGlass1: HitGlass1
		{
			armor = 1.5;
		};
		class HitGlass2: HitGlass2
		{
			armor = 1.5;
		};
		class HitGlass3: HitGlass3
		{
			armor = 1.5;
		};
		class HitGlass4: HitGlass4
		{
			armor = 1.5;
		};
		class HitLFWheel: HitLFWheel
		{
			armor = 0.25;
		};
		class HitLBWheel: HitLBWheel
		{
			armor = 0.25;
		};
		class HitRFWheel: HitRFWheel
		{
			armor = 0.25;
		};
		class HitRBWheel: HitRBWheel
		{
			armor = 0.25;
		};
		class HitFuel: HitFuel
		{
			armor = 0.5;
		};
		class HitEngine: HitEngine
		{
			armor = 1;
		};
	};	
	
	class Upgrades
	{
		ItemLRK[] = {"HMMWV_Ambulance_CZ_DES_EP1_DZE3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class HMMWV_Ambulance_CZ_DES_EP1_DZE3: HMMWV_Ambulance_CZ_DES_EP1_DZE2
{
	displayName = "$STR_VEH_NAME_HMMWV_AMBULANCE_DES+++";
	transportMaxWeapons = 30; 
	transportMaxMagazines = 140; 
	transportmaxbackpacks = 8;
	
	class Upgrades
	{
		ItemTNK[] = {"HMMWV_Ambulance_CZ_DES_EP1_DZE4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",4},{"PartFueltank",2},{"ItemFuelBarrel",1}}};
	};
};

class HMMWV_Ambulance_CZ_DES_EP1_DZE4: HMMWV_Ambulance_CZ_DES_EP1_DZE3
{
	displayName = "$STR_VEH_NAME_HMMWV_AMBULANCE_DES++++";
	fuelCapacity = 180; // base 100
};

class HMMWV_Crows_MK19_DZ: HMMWV_DZE_Base {
	displayname = "$STR_VEH_NAME_HMMWV_CROWS_MK19";
	scope = 2;
	model = "\ca\wheeled_e\HMMWV\M998_crows_Mk19";
    picture = "\CA\wheeled_e\Data\UI\Picture_hmmwv_crows_CA.paa";
    icon = "\CA\wheeled_e\Data\UI\Icon_hmmwv_crows_CA.paa";
	driverAction = "HMMWV_Driver_EP1";
    cargoAction[] = {"HMMWV_Cargo_EP1", "HMMWV_Cargo02_EP1"};
	cargoIsCoDriver[] = {1, 0};
	crew = "";
	typicalCargo[] = {};
	transportSoldier = 2;
	class TransportMagazines {};
	class TransportWeapons {};
	transportMaxWeapons = 15;
	transportMaxMagazines = 70;
	transportmaxbackpacks = 4;
	damageResistance = 0.00581;
	
	class Turrets : Turrets {
		class MainTurret : MainTurret {
			body = "mainTurret";
			gun = "mainGun";
			weapons[] = {"MK19BC", "SmokeLauncher"};
			magazines[] = {"48Rnd_40mm_MK19", "48Rnd_40mm_MK19", "48Rnd_40mm_MK19", "48Rnd_40mm_MK19", "SmokeLauncherMag", "SmokeLauncherMag", "SmokeLauncherMag", "SmokeLauncherMag"};
			soundServo[] = {"\Ca\sounds\Vehicles\Servos\turret-1", 0.01, 1, 10};
			viewGunnerInExternal = 0;
			turretInfoType = "RscWeaponRangeZeroing";
			discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500};
			discreteDistanceInitIndex = 2;
			class ViewOptics {
				initAngleX = 0;
				minAngleX = -30;
				maxAngleX = 60;
				initAngleY = 0;
				minAngleY = 0;
				maxAngleY = 0;
				initFov = 0.3;
				minFov = 0.015;
				maxFov = 0.3;
				visionMode[] = {"Normal", "Ti", "NVG"};
				thermalMode[] = {2, 3};
			};
			gunnerAction = "HMMWV_Gunner04_EP1";
			gunnerOpticsModel = "\ca\Weapons\2Dscope_RWS";
			gunnerForceOptics = 1;
			class GunFire : WeaponCloudsMGun {
				interval = 0.01;
			};
			stabilizedInAxes = "StabilizedInAxesBoth";
		};
	};
	class Damage {
		tex[] = {};
		mat[] = {"Ca\wheeled_E\HMMWV\data\hmmwv_body_1.rvmat", "Ca\wheeled_E\HMMWV\data\hmmwv_body_1_damage.rvmat", "Ca\wheeled_E\HMMWV\data\hmmwv_body_1_destruct.rvmat", "Ca\wheeled_E\HMMWV\data\hmmwv_hood.rvmat", "Ca\wheeled_E\HMMWV\data\hmmwv_hood_damage.rvmat", "Ca\wheeled_E\HMMWV\data\hmmwv_hood_destruct.rvmat", "Ca\wheeled_E\HMMWV\data\hmmwv_parts_1.rvmat", "Ca\wheeled_E\HMMWV\data\hmmwv_parts_1_damage.rvmat", "Ca\wheeled_E\HMMWV\data\hmmwv_parts_1_destruct.rvmat", "Ca\wheeled_E\HMMWV\data\hmmwv_regular_2.rvmat", "Ca\wheeled_E\HMMWV\data\hmmwv_regular_2_damage.rvmat", "Ca\wheeled_E\HMMWV\data\hmmwv_regular_2_destruct.rvmat", "Ca\Ca_E\data\default.rvmat", "Ca\Ca_E\data\default.rvmat", "Ca\Ca_E\data\default_destruct.rvmat"};
	};
	HiddenSelections[] = {"camo", "camo1", "camo2"};
	HiddenSelectionsTextures[] = {"ca\wheeled_e\hmmwv\data\hmmwv_body_canvas_1_co.paa", "ca\wheeled_e\hmmwv\data\hmmwv_hood_canvas_co.paa", "ca\wheeled_e\hmmwv\data\hmmwv_regular_2_co.paa"};
	smokeLauncherGrenadeCount = 4;
	smokeLauncherVelocity = 8;
	smokeLauncherOnTurret = 1;
	smokeLauncherAngle = 120;
};

class HMMWV_Crows_MK19_DZE: HMMWV_Crows_MK19_DZ {
	class Turrets: Turrets {
		class MainTurret: MainTurret {
			magazines[] = {"SmokeLauncherMag", "SmokeLauncherMag", "SmokeLauncherMag", "SmokeLauncherMag"};
		};
	};

	class Upgrades
	{
		ItemORP[] = {"HMMWV_Crows_MK19_DZE1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",2},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class HMMWV_Crows_MK19_DZE1: HMMWV_Crows_MK19_DZE 
{
	displayName = "$STR_VEH_NAME_HMMWV_CROWS_MK19+";
	original = "HMMWV_Crows_MK19_DZE";
	maxSpeed = 115; // base 100
	turnCoef = 3; // base 2
	terrainCoef = 1; //base 2
	
	class Upgrades
	{
		ItemAVE[] = {"HMMWV_Crows_MK19_DZE2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"equip_metal_sheet",6},{"ItemScrews",4}}};
	};
};

class HMMWV_Crows_MK19_DZE2: HMMWV_Crows_MK19_DZE1
{
	displayName = "$STR_VEH_NAME_HMMWV_CROWS_MK19++";
	armor = 75; // base 40
	damageResistance = 0.015; // base 0.00581
	
	class HitPoints: HitPoints
	{
		class HitGlass1: HitGlass1
		{
			armor = 1.5;
		};
		class HitGlass2: HitGlass2
		{
			armor = 1.5;
		};
		class HitGlass3: HitGlass3
		{
			armor = 1.5;
		};
		class HitGlass4: HitGlass4
		{
			armor = 1.5;
		};
		class HitLFWheel: HitLFWheel
		{
			armor = 0.25;
		};
		class HitLBWheel: HitLBWheel
		{
			armor = 0.25;
		};
		class HitRFWheel: HitRFWheel
		{
			armor = 0.25;
		};
		class HitRBWheel: HitRBWheel
		{
			armor = 0.25;
		};
		class HitFuel: HitFuel
		{
			armor = 0.5;
		};
		class HitEngine: HitEngine
		{
			armor = 1;
		};
	};	
	
	class Upgrades
	{
		ItemLRK[] = {"HMMWV_Crows_MK19_DZE3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class HMMWV_Crows_MK19_DZE3: HMMWV_Crows_MK19_DZE2
{
	displayName = "$STR_VEH_NAME_HMMWV_CROWS_MK19+++";
	transportMaxWeapons = 30; 
	transportMaxMagazines = 140; 
	transportmaxbackpacks = 8;
	
	class Upgrades
	{
		ItemTNK[] = {"HMMWV_Crows_MK19_DZE4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",4},{"PartFueltank",2},{"ItemFuelBarrel",1}}};
	};
};

class HMMWV_Crows_MK19_DZE4: HMMWV_Crows_MK19_DZE3
{
	displayName = "$STR_VEH_NAME_HMMWV_CROWS_MK19++++";
	fuelCapacity = 180; // base 100
};

class HMMWV_Crows_M2_DZ: HMMWV_DZE_Base {
	displayname = "$STR_VEH_NAME_HMMWV_CROWS_M2";
	scope = 2;
	model = "\ca\wheeled_e\HMMWV\M998_crows";
    picture = "\CA\wheeled_e\Data\UI\Picture_hmmwv_crows_CA.paa";
    icon = "\CA\wheeled_e\Data\UI\Icon_hmmwv_crows_CA.paa";
	driverAction = "HMMWV_Driver_EP1";
    cargoAction[] = {"HMMWV_Cargo_EP1", "HMMWV_Cargo02_EP1"};
	cargoIsCoDriver[] = {1, 0};
	crew = "";
	typicalCargo[] = {};
	transportSoldier = 2;
	class TransportMagazines {};
	class TransportWeapons {};
	transportMaxWeapons = 15;
	transportMaxMagazines = 70;
	transportmaxbackpacks = 4;
	damageResistance = 0.00581;
	class Turrets : Turrets {
		class MainTurret : MainTurret {
			body = "mainTurret";
			gun = "mainGun";
			weapons[] = {"M2BC", "SmokeLauncher"};
			turretInfoType = "RscWeaponRangeZeroing";
			discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500, 1600, 1700, 1800, 1900, 2000};
			magazines[] = {"100Rnd_127x99_M2", "100Rnd_127x99_M2", "100Rnd_127x99_M2", "100Rnd_127x99_M2", "100Rnd_127x99_M2", "100Rnd_127x99_M2", "SmokeLauncherMag", "SmokeLauncherMag", "SmokeLauncherMag", "SmokeLauncherMag"};
			minElev = -25;
			maxElev = 60;
			viewGunnerInExternal = 0;
			class ViewOptics {
				initAngleX = 0;
				minAngleX = -30;
				maxAngleX = 60;
				initAngleY = 0;
				minAngleY = 0;
				maxAngleY = 0;
				initFov = 0.3;
				minFov = 0.015;
				maxFov = 0.3;
				visionMode[] = {"Normal", "NVG", "Ti"};
				thermalMode[] = {2, 3};
			};
			gunnerAction = "HMMWV_Gunner04_EP1";
			gunnerOpticsModel = "\ca\Weapons\2Dscope_RWS";
			gunnerForceOptics = 1;
			stabilizedInAxes = "StabilizedInAxesBoth";
			discreteDistanceInitIndex = 2;
		};
	};
	class AnimationSources : AnimationSources {
		class ReloadAnim {
			source = "reload";
			weapon = "M2BC";
		};
		class ReloadMagazine {
			source = "reloadmagazine";
			weapon = "M2BC";
		};
		class Revolving {
			source = "revolving";
			weapon = "M2BC";
		};
	};
	class Damage {
		tex[] = {};
		mat[] = {"Ca\wheeled_E\HMMWV\data\hmmwv_body_1.rvmat", "Ca\wheeled_E\HMMWV\data\hmmwv_body_1_damage.rvmat", "Ca\wheeled_E\HMMWV\data\hmmwv_body_1_destruct.rvmat", "Ca\wheeled_E\HMMWV\data\hmmwv_hood.rvmat", "Ca\wheeled_E\HMMWV\data\hmmwv_hood_damage.rvmat", "Ca\wheeled_E\HMMWV\data\hmmwv_hood_destruct.rvmat", "Ca\wheeled_E\HMMWV\data\hmmwv_parts_1.rvmat", "Ca\wheeled_E\HMMWV\data\hmmwv_parts_1_damage.rvmat", "Ca\wheeled_E\HMMWV\data\hmmwv_parts_1_destruct.rvmat", "Ca\wheeled_E\HMMWV\data\hmmwv_regular_2.rvmat", "Ca\wheeled_E\HMMWV\data\hmmwv_regular_2_damage.rvmat", "Ca\wheeled_E\HMMWV\data\hmmwv_regular_2_destruct.rvmat", "Ca\Ca_E\data\default.rvmat", "Ca\Ca_E\data\default.rvmat", "Ca\Ca_E\data\default_destruct.rvmat"};
	};
	HiddenSelections[] = {"camo", "camo1", "camo2"};
	HiddenSelectionsTextures[] = {"ca\wheeled_e\hmmwv\data\hmmwv_body_canvas_1_co.paa", "ca\wheeled_e\hmmwv\data\hmmwv_hood_canvas_co.paa", "ca\wheeled_e\hmmwv\data\hmmwv_regular_2_co.paa"};
	smokeLauncherGrenadeCount = 4;
	smokeLauncherVelocity = 8;
	smokeLauncherOnTurret = 1;
	smokeLauncherAngle = 120;
};

class HMMWV_Crows_M2_DZE: HMMWV_Crows_M2_DZ {
	class Turrets: Turrets {
		class MainTurret: MainTurret {
			magazines[] = {"SmokeLauncherMag", "SmokeLauncherMag", "SmokeLauncherMag", "SmokeLauncherMag"};
		};
	};

	class Upgrades
	{
		ItemORP[] = {"HMMWV_Crows_M2_DZE1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",2},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class HMMWV_Crows_M2_DZE1: HMMWV_Crows_M2_DZE 
{
	displayName = "$STR_VEH_NAME_HMMWV_CROWS_M2+";
	original = "HMMWV_Crows_M2_DZE";
	maxSpeed = 115; // base 100
	turnCoef = 3; // base 2
	terrainCoef = 1; //base 2
	
	class Upgrades
	{
		ItemAVE[] = {"HMMWV_Crows_M2_DZE2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"equip_metal_sheet",6},{"ItemScrews",4}}};
	};
};

class HMMWV_Crows_M2_DZE2: HMMWV_Crows_M2_DZE1
{
	displayName = "$STR_VEH_NAME_HMMWV_CROWS_M2++";
	armor = 75; // base 40
	damageResistance = 0.015; // base 0.00581
	
	class HitPoints: HitPoints
	{
		class HitGlass1: HitGlass1
		{
			armor = 1.5;
		};
		class HitGlass2: HitGlass2
		{
			armor = 1.5;
		};
		class HitGlass3: HitGlass3
		{
			armor = 1.5;
		};
		class HitGlass4: HitGlass4
		{
			armor = 1.5;
		};
		class HitLFWheel: HitLFWheel
		{
			armor = 0.25;
		};
		class HitLBWheel: HitLBWheel
		{
			armor = 0.25;
		};
		class HitRFWheel: HitRFWheel
		{
			armor = 0.25;
		};
		class HitRBWheel: HitRBWheel
		{
			armor = 0.25;
		};
		class HitFuel: HitFuel
		{
			armor = 0.5;
		};
		class HitEngine: HitEngine
		{
			armor = 1;
		};
	};	
	
	class Upgrades
	{
		ItemLRK[] = {"HMMWV_Crows_M2_DZE3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class HMMWV_Crows_M2_DZE3: HMMWV_Crows_M2_DZE2
{
	displayName = "$STR_VEH_NAME_HMMWV_CROWS_M2+++";
	transportMaxWeapons = 30; 
	transportMaxMagazines = 140; 
	transportmaxbackpacks = 8;
	
	class Upgrades
	{
		ItemTNK[] = {"HMMWV_Crows_M2_DZE4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",4},{"PartFueltank",2},{"ItemFuelBarrel",1}}};
	};
};

class HMMWV_Crows_M2_DZE4: HMMWV_Crows_M2_DZE3
{
	displayName = "$STR_VEH_NAME_HMMWV_CROWS_M2++++";
	fuelCapacity = 180; // base 100
};

class HMMWV_Avenger_WDL_DZ: HMMWV_DZE_Base {
	displayname = "$STR_VEH_NAME_HMMWV_AVENGER_WDL";
	scope = 2;
	model = "\ca\wheeled2\HMMWV\M998A2_Avenger\M998A2_Avenger.p3d";
    picture = "\Ca\wheeled2\data\ui\Picture_M998A2_CA.paa";
    Icon = "\Ca\wheeled2\data\ui\Icon_M998A2_CA.paa";
	driverAction = "HMMWV_Driver_EP1";
    cargoAction[] = {"HMMWV_Cargo01"};
	crew = "";
	typicalCargo[] = {};
	transportSoldier = 1;
	class TransportMagazines {};
	class TransportWeapons {};
	transportMaxWeapons = 15;
	transportMaxMagazines = 70;
	transportmaxbackpacks = 4;
	damageResistance = 0.00581;
	irScanRangeMin = 0;
	irScanRangeMax = 1500;
	irScanToEyeFactor = 3;
	irScanGround = "false";
	class HitPoints : HitPoints {
		class HitGlass5 : HitGlass1 {
			name = "glass5";
			visual = "glass5";
		};
	};
	class Turrets : Turrets {
		class MainTurret : MainTurret {
			gunnerAction = "AH1Z_Gunner";
			gunnerInAction = "AH1Z_Gunner";
			gunnerGetInAction = "GetInMedium";
			gunnerGetOutAction = "GetOutMedium";
			memoryPointGun = "machinegun";
			weapons[] = {"StingerLaucher", "M3P"};
			magazines[] = {"8Rnd_Stinger", "250Rnd_127x99_M3P", "250Rnd_127x99_M3P"};
			minElev = -10;
			maxElev = 70;
			initElev = 0;
			minTurn = -180;
			maxTurn = 180;
			initTurn = 0;
			gunnerOpticsModel = "\ca\weapons\2Dscope_Avenger";
			class ViewOptics {
				initAngleX = 0;
				minAngleX = -30;
				maxAngleX = 30;
				initAngleY = 0;
				minAngleY = -100;
				maxAngleY = 100;
				initFov = 0.155;
				minFov = 0.047;
				maxFov = 0.155;
				thermalMode[] = {2, 3};
				visionMode[] = {"Normal", "Ti"};
			};
			class HitPoints : HitPoints {
				class HitTurret {
					armor = 0.8;
					material = -1;
					name = "vez";
					visual = "vez";
					passThrough = 1;
				};
			};
			gunnerCompartments = "Compartment2";
			stabilizedInAxes = "StabilizedInAxesBoth";
			turretInfoType = "RscWeaponRangeZeroing";
			viewGunnerInExternal = 0;
		};
	};
	class Damage {
		tex[] = {};
		mat[] = {"ca\wheeled\hmmwv\data\hmmwv_body.rvmat", "ca\wheeled\hmmwv\data\hmmwv_body_Half_D.rvmat", "ca\wheeled\hmmwv\data\hmmwv_body_Full_D.rvmat", "ca\wheeled\hmmwv\data\hmmwv_details.rvmat", "ca\wheeled\hmmwv\data\hmmwv_details_Half_D.rvmat", "ca\wheeled\hmmwv\data\hmmwv_details_Full_D.rvmat", "ca\wheeled\hmmwv\data\hmmwv_parts_1.rvmat", "ca\wheeled\hmmwv\data\hmmwv_parts_1_Half_D.rvmat", "ca\wheeled\hmmwv\data\hmmwv_parts_1_Full_D.rvmat", "ca\wheeled\hmmwv\data\hmmwv_clocks.rvmat", "ca\wheeled\hmmwv\data\hmmwv_clocks.rvmat", "ca\wheeled\data\hmmwv_clocks_destruct.rvmat", "ca\wheeled\hmmwv\data\hmmwv_glass.rvmat", "ca\wheeled\hmmwv\data\hmmwv_glass_Half_D.rvmat", "ca\wheeled\hmmwv\data\hmmwv_glass_Half_D.rvmat", "ca\wheeled\hmmwv\data\hmmwv_glass_in.rvmat", "ca\wheeled\hmmwv\data\hmmwv_glass_in_Half_D.rvmat", "ca\wheeled\hmmwv\data\hmmwv_glass_in_Half_D.rvmat", "ca\wheeled2\hmmwv\m998a2_avenger\data\m998a2_avenger_2.rvmat", "ca\wheeled2\hmmwv\m998a2_avenger\data\m998a2_avenger_2_damage.rvmat", "ca\wheeled2\hmmwv\m998a2_avenger\data\m998a2_avenger_2_destruct.rvmat", "ca\wheeled2\hmmwv\m998a2_avenger\data\m998a2_avenger_2_in.rvmat", "ca\wheeled2\hmmwv\m998a2_avenger\data\m998a2_avenger_2_in_damage.rvmat", "ca\wheeled2\hmmwv\m998a2_avenger\data\m998a2_avenger_2_in_damage.rvmat", "ca\wheeled2\hmmwv\m998a2_avenger\data\m998a2_avenger_3.rvmat", "ca\wheeled2\hmmwv\m998a2_avenger\data\m998a2_avenger_3_damage.rvmat", "ca\wheeled2\hmmwv\m998a2_avenger\data\m998a2_avenger_3_destruct.rvmat"};
	};
	class AnimationSources : AnimationSources {
		class HitGlass5 {
			source = "Hit";
			hitpoint = "HitGlass5";
			raw = 1;
		};
	};
	hiddenSelections[] = {"Camo1", "Camo2", "Camo3"};
	hiddenSelectionsTextures[] = {"\ca\wheeled\hmmwv\data\hmmwv_body_co.paa", "\ca\wheeled2\hmmwv\m998a2_avenger\data\m998a2_avenger_1_co.paa", "\ca\wheeled2\hmmwv\m998a2_avenger\data\m998a2_avenger_3_co.paa"};

};

class HMMWV_Avenger_WDL_DZE: HMMWV_Avenger_WDL_DZ {
	class Turrets: Turrets {
		class MainTurret: MainTurret {
			magazines[] = {};
		};
	};

	class Upgrades
	{
		ItemORP[] = {"HMMWV_Avenger_WDL_DZE1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",2},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class HMMWV_Avenger_WDL_DZE1: HMMWV_Avenger_WDL_DZE 
{
	displayName = "$STR_VEH_NAME_HMMWV_AVENGER_WDL+";
	original = "HMMWV_Avenger_WDL_DZE";
	maxSpeed = 115; // base 100
	turnCoef = 3; // base 2
	terrainCoef = 1; //base 2
	
	class Upgrades
	{
		ItemAVE[] = {"HMMWV_Avenger_WDL_DZE2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"equip_metal_sheet",6},{"ItemScrews",4}}};
	};
};

class HMMWV_Avenger_WDL_DZE2: HMMWV_Avenger_WDL_DZE1
{
	displayName = "$STR_VEH_NAME_HMMWV_AVENGER_WDL++";
	armor = 75; // base 40
	damageResistance = 0.015; // base 0.00581
	
	class HitPoints: HitPoints
	{
		class HitGlass1: HitGlass1
		{
			armor = 1.5;
		};
		class HitGlass2: HitGlass2
		{
			armor = 1.5;
		};
		class HitGlass3: HitGlass3
		{
			armor = 1.5;
		};
		class HitGlass4: HitGlass4
		{
			armor = 1.5;
		};
		class HitLFWheel: HitLFWheel
		{
			armor = 0.25;
		};
		class HitLBWheel: HitLBWheel
		{
			armor = 0.25;
		};
		class HitRFWheel: HitRFWheel
		{
			armor = 0.25;
		};
		class HitRBWheel: HitRBWheel
		{
			armor = 0.25;
		};
		class HitFuel: HitFuel
		{
			armor = 0.5;
		};
		class HitEngine: HitEngine
		{
			armor = 1;
		};
	};	
	
	class Upgrades
	{
		ItemLRK[] = {"HMMWV_Avenger_WDL_DZE3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class HMMWV_Avenger_WDL_DZE3: HMMWV_Avenger_WDL_DZE2
{
	displayName = "$STR_VEH_NAME_HMMWV_AVENGER_WDL+++";
	transportMaxWeapons = 30; 
	transportMaxMagazines = 140; 
	transportmaxbackpacks = 8;
	
	class Upgrades
	{
		ItemTNK[] = {"HMMWV_Avenger_WDL_DZE4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",4},{"PartFueltank",2},{"ItemFuelBarrel",1}}};
	};
};

class HMMWV_Avenger_WDL_DZE4: HMMWV_Avenger_WDL_DZE3
{
	displayName = "$STR_VEH_NAME_HMMWV_AVENGER_WDL++++";
	fuelCapacity = 180; // base 100
};

class HMMWV_Avenger_DES_DZ: HMMWV_DZE_Base {
	displayname = "$STR_VEH_NAME_HMMWV_AVENGER_DES";
	scope = 2;
	model = "\ca\wheeled_e\HMMWV\M998A2_Avenger.p3d";
    picture = "\Ca\wheeled2\data\ui\Picture_M998A2_CA.paa";
    Icon = "\Ca\wheeled2\data\ui\Icon_M998A2_CA.paa";
	driverAction = "HMMWV_Driver_EP1";
    cargoAction[] = {"HMMWV_Cargo01"};
	crew = "";
	typicalCargo[] = {};
	transportSoldier = 1;
	class TransportMagazines {};
	class TransportWeapons {};
	transportMaxWeapons = 15;
	transportMaxMagazines = 70;
	transportmaxbackpacks = 4;
	damageResistance = 0.00581;
	irScanRangeMin = 0;
	irScanRangeMax = 1500;
	irScanToEyeFactor = 3;
	irScanGround = "false";
	class HitPoints : HitPoints {
		class HitGlass5 : HitGlass1 {
			name = "glass5";
			visual = "glass5";
		};
	};
	class Turrets : Turrets {
		class MainTurret : MainTurret {
			gunnerAction = "AH1Z_Gunner";
			gunnerInAction = "AH1Z_Gunner";
			gunnerGetInAction = "GetInMedium";
			gunnerGetOutAction = "GetOutMedium";
			memoryPointGun = "machinegun";
			weapons[] = {"StingerLaucher", "M3P"};
			magazines[] = {"8Rnd_Stinger", "250Rnd_127x99_M3P", "250Rnd_127x99_M3P"};
			minElev = -10;
			maxElev = 70;
			initElev = 0;
			minTurn = -180;
			maxTurn = 180;
			initTurn = 0;
			gunnerOpticsModel = "\ca\weapons\2Dscope_Avenger";
			class ViewOptics {
				initAngleX = 0;
				minAngleX = -30;
				maxAngleX = 30;
				initAngleY = 0;
				minAngleY = -100;
				maxAngleY = 100;
				initFov = 0.155;
				minFov = 0.047;
				maxFov = 0.155;
				thermalMode[] = {2, 3};
				visionMode[] = {"Normal", "Ti"};
			};
			class HitPoints : HitPoints {
				class HitTurret {
					armor = 0.8;
					material = -1;
					name = "vez";
					visual = "vez";
					passThrough = 1;
				};
			};
			gunnerCompartments = "Compartment2";
			stabilizedInAxes = "StabilizedInAxesBoth";
			turretInfoType = "RscWeaponRangeZeroing";
			viewGunnerInExternal = 0;
		};
	};
	class Damage {
		tex[] = {};
		mat[] = {"Ca\wheeled_E\HMMWV\data\hmmwv_body_2.rvmat", "Ca\wheeled_E\HMMWV\data\hmmwv_body_2_damage.rvmat", "Ca\wheeled_E\HMMWV\data\hmmwv_body_2_destruct.rvmat", "Ca\wheeled_E\HMMWV\Data\hmmwv_details.rvmat", "Ca\wheeled_E\HMMWV\Data\hmmwv_details_damage.rvmat", "Ca\wheeled_E\HMMWV\Data\hmmwv_details_destruct.rvmat", "Ca\wheeled_E\HMMWV\Data\hmmwv_glass.rvmat", "Ca\wheeled_E\HMMWV\Data\hmmwv_glass_damage.rvmat", "Ca\wheeled_E\HMMWV\Data\hmmwv_glass_destruct.rvmat", "Ca\wheeled_E\HMMWV\Data\m998a2_avenger_1.rvmat", "Ca\wheeled_E\HMMWV\Data\m998a2_avenger_1_damage.rvmat", "Ca\wheeled_E\HMMWV\Data\m998a2_avenger_1_destruct.rvmat", "Ca\wheeled_E\HMMWV\Data\m998a2_avenger_2.rvmat", "Ca\wheeled_E\HMMWV\Data\m998a2_avenger_2_damage.rvmat", "Ca\wheeled_E\HMMWV\Data\m998a2_avenger_2_destruct.rvmat", "Ca\wheeled_E\HMMWV\Data\m998a2_avenger_2_in.rvmat", "Ca\wheeled_E\HMMWV\Data\m998a2_avenger_2_in_damage.rvmat", "Ca\wheeled_E\HMMWV\Data\m998a2_avenger_2_in_damage.rvmat", "Ca\wheeled_E\HMMWV\Data\m998a2_avenger_3.rvmat", "Ca\wheeled_E\HMMWV\Data\m998a2_avenger_3_damage.rvmat", "Ca\wheeled_E\HMMWV\Data\m998a2_avenger_3_destruct.rvmat", "Ca\Ca_E\data\default.rvmat", "Ca\Ca_E\data\default.rvmat", "Ca\Ca_E\data\default_destruct.rvmat"};
	};
	class AnimationSources : AnimationSources {
		class HitGlass5 {
			source = "Hit";
			hitpoint = "HitGlass5";
			raw = 1;
		};
	};
	hiddenSelections[] = {"Camo1", "Camo2", "Camo3"};
	hiddenSelectionsTextures[] = {"\CA\wheeled_E\HMMWV\Data\HMMWV_body_US_CO.paa", "\CA\wheeled_E\HMMWV\Data\M998A2_Avenger_1_US_CO.paa", "\CA\wheeled_E\HMMWV\Data\M998A2_Avenger_3_US_CO.paa"};

};

class HMMWV_Avenger_DES_DZE: HMMWV_Avenger_DES_DZ {
	class Turrets: Turrets {
		class MainTurret: MainTurret {
			magazines[] = {};
		};
	};

	class Upgrades
	{
		ItemORP[] = {"HMMWV_Avenger_DES_DZE1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",2},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class HMMWV_Avenger_DES_DZE1: HMMWV_Avenger_DES_DZE 
{
	displayName = "$STR_VEH_NAME_HMMWV_AVENGER_DES+";
	original = "HMMWV_Avenger_DES_DZE";
	maxSpeed = 115; // base 100
	turnCoef = 3; // base 2
	terrainCoef = 1; //base 2
	
	class Upgrades
	{
		ItemAVE[] = {"HMMWV_Avenger_DES_DZE2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"equip_metal_sheet",6},{"ItemScrews",4}}};
	};
};

class HMMWV_Avenger_DES_DZE2: HMMWV_Avenger_DES_DZE1
{
	displayName = "$STR_VEH_NAME_HMMWV_AVENGER_DES++";
	armor = 75; // base 40
	damageResistance = 0.015; // base 0.00581
	
	class HitPoints: HitPoints
	{
		class HitGlass1: HitGlass1
		{
			armor = 1.5;
		};
		class HitGlass2: HitGlass2
		{
			armor = 1.5;
		};
		class HitGlass3: HitGlass3
		{
			armor = 1.5;
		};
		class HitGlass4: HitGlass4
		{
			armor = 1.5;
		};
		class HitLFWheel: HitLFWheel
		{
			armor = 0.25;
		};
		class HitLBWheel: HitLBWheel
		{
			armor = 0.25;
		};
		class HitRFWheel: HitRFWheel
		{
			armor = 0.25;
		};
		class HitRBWheel: HitRBWheel
		{
			armor = 0.25;
		};
		class HitFuel: HitFuel
		{
			armor = 0.5;
		};
		class HitEngine: HitEngine
		{
			armor = 1;
		};
	};	
	
	class Upgrades
	{
		ItemLRK[] = {"HMMWV_Avenger_DES_DZE3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class HMMWV_Avenger_DES_DZE3: HMMWV_Avenger_DES_DZE2
{
	displayName = "$STR_VEH_NAME_HMMWV_AVENGER_DES+++";
	transportMaxWeapons = 30; 
	transportMaxMagazines = 140; 
	transportmaxbackpacks = 8;
	
	class Upgrades
	{
		ItemTNK[] = {"HMMWV_Avenger_DES_DZE4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",4},{"PartFueltank",2},{"ItemFuelBarrel",1}}};
	};
};

class HMMWV_Avenger_DES_DZE4: HMMWV_Avenger_DES_DZE3
{
	displayName = "$STR_VEH_NAME_HMMWV_AVENGER_DES++++";
	fuelCapacity = 180; // base 100
};
