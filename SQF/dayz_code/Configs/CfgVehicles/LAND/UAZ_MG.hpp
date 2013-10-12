class UAZ_Base: Car
{
	displayName = "UAZ";
	vehicleClass = "Car";
	picture = "\Ca\wheeled\data\ico\uaz_mg_CA.paa";
	Icon = "\Ca\wheeled\data\map_ico\icomap_Uaz_mg_CA.paa";
	mapSize = 4;
	magazines[] = {};
	accuracy = 0.25;
	terrainCoef = 2.5;
	wheelCircumference = 2.51;
	turnCoef = 1.5;
	steerAheadPlan = 0.26;
	unitInfoType = "UnitInfoShip";
	driverAction = "UAZ_Driver";
	cargoAction[] = {"UAZ_Cargo01","UAZ_Cargo01","UAZ_Cargo01","UAZ_Cargo02","UAZ_Cargo01","UAZ_Cargo02"};
	gunnerOpticsShowCursor = 1;
	transportSoldier = 1;
	threat[] = {0.5,0.5,0.1};
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			body = "mainTurret";
			gun = "mainGun";
			outGunnerMayFire = 1;
			forceHideGunner = 0;
			castGunnerShadow = 1;
			viewGunnerInExternal = 1;
			gunnerOpticsModel = "\ca\Weapons\optika_empty";
			gunnerForceOptics = 0;
			weapons[] = {"DShKM"};
			soundServo[] = {"\ca\sounds\vehicles\servos\turret-1",0.1,1,15};
			magazines[] = {"50Rnd_127x107_DSHKM","50Rnd_127x107_DSHKM","50Rnd_127x107_DSHKM","50Rnd_127x107_DSHKM","50Rnd_127x107_DSHKM","50Rnd_127x107_DSHKM"};
			gunnerAction = "UAZ_Gunner01";
			gunnerInAction = "UAZ_Gunner01";
			ejectDeadGunner = 1;
			minElev = -25;
			maxElev = 60;
			stabilizedInAxes = "StabilizedInAxesNone";
		};
	};
	class HitPoints: HitPoints
	{
		class HitLFWheel: HitLFWheel
		{
			armor = 0.38;
		};
		class HitLBWheel: HitLBWheel
		{
			armor = 0.38;
		};
		class HitRFWheel: HitRFWheel
		{
			armor = 0.38;
		};
		class HitRBWheel: HitRBWheel
		{
			armor = 0.38;
		};
	};
	class Damage
	{
		tex[] = {};
		mat[] = {"ca\wheeled\data\detailmapy\uaz_main_metal.rvmat","ca\wheeled\data\detailmapy\uaz_main_metal_damage.rvmat","ca\wheeled\data\detailmapy\uaz_main_metal_destruct.rvmat","ca\wheeled\data\detailmapy\uaz_other_metal.rvmat","ca\wheeled\data\detailmapy\uaz_other_metal_damage.rvmat","ca\wheeled\data\detailmapy\uaz_other_metal_destruct.rvmat","ca\wheeled\data\detailmapy\uaz_skla.rvmat","ca\wheeled\data\detailmapy\uaz_skla_damage.rvmat","ca\wheeled\data\detailmapy\uaz_skla_destruct.rvmat","ca\weapons\data\dshk.rvmat","ca\weapons\data\dshk_damage.rvmat","ca\weapons\data\dshk_destruct.rvmat"};
	};
	hiddenSelections[] = {"Camo1","Camo2"};
	hiddenSelectionsTextures[] = {"\ca\wheeled\data\Uaz_main_002_CO.paa","\ca\wheeled\data\uaz_mount_002_co.paa"};
	soundGear[] = {"",5.62341e-005,1};
	soundGetIn[] = {"ca\Sounds_E\Wheeled_E\SUV\SUV_ext_door",0.562341,1};
	soundGetOut[] = {"ca\Sounds_E\Wheeled_E\SUV\SUV_ext_door",0.562341,1,20};
	soundEngineOnInt[] = {"ca\Sounds_E\Wheeled_E\UAZ\uaz_int_start1",0.177828,1};
	soundEngineOnExt[] = {"ca\Sounds_E\Wheeled_E\UAZ\uaz_ext_start1",0.177828,1,100};
	soundEngineOffInt[] = {"ca\Sounds_E\Wheeled_E\UAZ\uaz_int_stop1",0.177828,1};
	soundEngineOffExt[] = {"ca\Sounds_E\Wheeled_E\UAZ\uaz_ext_stop1",0.177828,1,100};
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
			sound[] = {"ca\Sounds_E\Wheeled_E\UAZ\uaz_int_acceleration",0.562341,1};
			limit = "0.4";
			expression = "(engineOn*(1-camPos))*gmeterZ";
		};
		class AccelerationOut
		{
			sound[] = {"ca\Sounds_E\Wheeled_E\UAZ\uaz_ext_acceleration",0.562341,1,200};
			limit = "0.4";
			expression = "(engineOn*camPos)*gmeterZ";
		};
	};
	class Sounds: Sounds
	{
		class Engine: Engine
		{
			sound[] = {"ca\Sounds_E\Wheeled_E\UAZ\uaz_ext_low1",0.177828,0.9,100};
			frequency = "(randomizer*0.05+0.95)*rpm";
			volume = "camPos*engineOn*((rpm factor[0.3, 0.5]) min (rpm factor[0.7, 0.55]))";
		};
		class EngineHighOut
		{
			sound[] = {"ca\Sounds_E\Wheeled_E\UAZ\uaz_ext_high1",1,0.8,300};
			frequency = "(randomizer*0.05+0.95)*rpm";
			volume = "camPos*engineOn*(rpm factor[0.6, 1.0])";
		};
		class IdleOut
		{
			sound[] = {"ca\Sounds_E\Wheeled_E\UAZ\uaz_ext_idle",0.562341,1,100};
			frequency = "1";
			volume = "engineOn*camPos*(rpm factor[0.5, 0])";
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
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Noises\ext\noise2",0.316228,1,30};
			frequency = "1";
			volume = "camPos*(damper0 max 0.03)*(speed factor[0, 8])";
		};
		class EngineLowIn
		{
			sound[] = {"ca\Sounds_E\Wheeled_E\UAZ\uaz_int_low1",0.316228,0.7};
			frequency = "(randomizer*0.05+0.95)*rpm";
			volume = "(1-camPos)*engineOn*((rpm factor[0.3, 0.5]) min (rpm factor[0.7, 0.55]))";
		};
		class EngineHighIn
		{
			sound[] = {"ca\Sounds_E\Wheeled_E\UAZ\uaz_int_high1",1,0.8};
			frequency = "(randomizer*0.05+0.95)*rpm";
			volume = "(1-camPos)*engineOn*(rpm factor[0.6, 1.0])";
		};
		class IdleIn
		{
			sound[] = {"ca\Sounds_E\Wheeled_E\UAZ\uaz_int_idle",0.316228,1};
			frequency = "1";
			volume = "engineOn*(rpm factor[0.5, 0])*(1-camPos)";
		};
		class TiresRockIn
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-rock2",0.316228,1};
			frequency = "1";
			volume = "(1-camPos)*rock*(speed factor[2, 20])";
		};
		class TiresSandIn
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-sand2",0.316228,1};
			frequency = "1";
			volume = "(1-camPos)*sand*(speed factor[2, 20])";
		};
		class TiresGrassIn
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-grass2",0.316228,1};
			frequency = "1";
			volume = "(1-camPos)*grass*(speed factor[2, 20])";
		};
		class TiresMudIn
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-mud2",0.316228,1};
			frequency = "1";
			volume = "(1-camPos)*mud*(speed factor[2, 20])";
		};
		class TiresGravelIn
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-gravel2",0.316228,1};
			frequency = "1";
			volume = "(1-camPos)*gravel*(speed factor[2, 20])";
		};
		class TiresAsphaltIn
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-asphalt3",0.316228,1};
			frequency = "1";
			volume = "(1-camPos)*asphalt*(speed factor[2, 20])";
		};
		class NoiseIn
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Noises\int\noise2",0.562341,1};
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
	class Library
	{
		libTextDesc = "The UAZ-469 is a very reliable and affordable offroad vehicle, widely used in Soviet and post-Soviet countries. The weapons platform version can be fitted with a variety of heavy weapons including a 12.7mm DShKM heavy machine gun, an AGS-30 grenade launcher or an anti-tank recoilless rifle on a 360 degree cage mount.";
	};
	brakeDistance = 8.5;
	model = "\ca\wheeled_E\UAZ\uaz_mg";
	transportMaxBackpacks = 3;
	outsideSoundFilter = 1;
	insideSoundCoef = 0.8;
};

class UAZ_MG_Base: UAZ_Base
{
	displayName = "UAZ (DShKM)";
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
	soundGear[] = {"",5.62341e-005,1};
	soundGetIn[] = {"ca\Sounds_E\Wheeled_E\SUV\SUV_ext_door",0.562341,1};
	soundGetOut[] = {"ca\Sounds_E\Wheeled_E\SUV\SUV_ext_door",0.562341,1,20};
	soundEngineOnInt[] = {"ca\Sounds_E\Wheeled_E\UAZ\uaz_int_start1",0.177828,1};
	soundEngineOnExt[] = {"ca\Sounds_E\Wheeled_E\UAZ\uaz_ext_start1",0.177828,1,100};
	soundEngineOffInt[] = {"ca\Sounds_E\Wheeled_E\UAZ\uaz_int_stop1",0.177828,1};
	soundEngineOffExt[] = {"ca\Sounds_E\Wheeled_E\UAZ\uaz_ext_stop1",0.177828,1,100};
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
			sound[] = {"ca\Sounds_E\Wheeled_E\UAZ\uaz_ext_acceleration",0.562341,1};
			limit = "0.4";
			expression = "(engineOn*(1-camPos))*gmeterZ";
		};
		class AccelerationOut
		{
			sound[] = {"ca\Sounds_E\Wheeled_E\UAZ\uaz_ext_acceleration",0.562341,1,200};
			limit = "0.4";
			expression = "(engineOn*camPos)*gmeterZ";
		};
	};
	class Sounds: Sounds
	{
		class Engine: Engine
		{
			sound[] = {"ca\Sounds_E\Wheeled_E\UAZ\uaz_ext_low1",0.177828,0.9,100};
			frequency = "(randomizer*0.05+0.95)*rpm";
			volume = "camPos*engineOn*((rpm factor[0.3, 0.5]) min (rpm factor[0.7, 0.55]))";
		};
		class EngineHighOut
		{
			sound[] = {"ca\Sounds_E\Wheeled_E\UAZ\uaz_ext_high1",1,0.8,300};
			frequency = "(randomizer*0.05+0.95)*rpm";
			volume = "camPos*engineOn*(rpm factor[0.6, 1.0])";
		};
		class IdleOut
		{
			sound[] = {"ca\Sounds_E\Wheeled_E\UAZ\uaz_ext_idle",0.562341,1,100};
			frequency = "1";
			volume = "engineOn*camPos*(rpm factor[0.5, 0])";
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
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Noises\ext\noise2",0.316228,1,30};
			frequency = "1";
			volume = "camPos*(damper0 max 0.03)*(speed factor[0, 8])";
		};
		class EngineLowIn
		{
			sound[] = {"ca\Sounds_E\Wheeled_E\UAZ\uaz_ext_low1",0.316228,0.7};
			frequency = "(randomizer*0.05+0.95)*rpm";
			volume = "(1-camPos)*engineOn*((rpm factor[0.3, 0.5]) min (rpm factor[0.7, 0.55]))";
		};
		class EngineHighIn
		{
			sound[] = {"ca\Sounds_E\Wheeled_E\UAZ\uaz_ext_high1",1,0.8};
			frequency = "(randomizer*0.05+0.95)*rpm";
			volume = "(1-camPos)*engineOn*(rpm factor[0.6, 1.0])";
		};
		class IdleIn
		{
			sound[] = {"ca\Sounds_E\Wheeled_E\UAZ\uaz_ext_idle",0.316228,1};
			frequency = "1";
			volume = "engineOn*(rpm factor[0.5, 0])*(1-camPos)";
		};
		class TiresRockIn
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-rock2",0.316228,1};
			frequency = "1";
			volume = "(1-camPos)*rock*(speed factor[2, 20])";
		};
		class TiresSandIn
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-sand2",0.316228,1};
			frequency = "1";
			volume = "(1-camPos)*sand*(speed factor[2, 20])";
		};
		class TiresGrassIn
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-grass2",0.316228,1};
			frequency = "1";
			volume = "(1-camPos)*grass*(speed factor[2, 20])";
		};
		class TiresMudIn
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-mud2",0.316228,1};
			frequency = "1";
			volume = "(1-camPos)*mud*(speed factor[2, 20])";
		};
		class TiresGravelIn
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-gravel2",0.316228,1};
			frequency = "1";
			volume = "(1-camPos)*gravel*(speed factor[2, 20])";
		};
		class TiresAsphaltIn
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-asphalt3",0.316228,1};
			frequency = "1";
			volume = "(1-camPos)*asphalt*(speed factor[2, 20])";
		};
		class NoiseIn
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Noises\ext\noise2",0.562341,1};
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
	model = "\ca\wheeled_E\UAZ\uaz_mg";
	outsideSoundFilter = 1;
	insideSoundCoef = 0.8;
};

class UAZ_MG_TK_EP1_DZ: UAZ_MG_Base
{
	htMin = 60;
	htMax = 1800;
	afMax = 200;
	mfMax = 100;
	mFact = 1;
	tBody = 250;
	expansion = 1;
	scope = 2;
	side = 0;
	faction = "BIS_TK";
	displayName = "UAZ (DShKM) DZ";
	accuracy = 0.3;
	crew = "";
	typicalCargo[] = {};
	hiddenSelectionsTextures[] = {"\CA\wheeled_E\UAZ\Data\Uaz_main_IND_CO.paa","\ca\wheeled\data\uaz_mount_001_co.paa"};
	class TransportMagazines {};
	class TransportWeapons{};
	class Damage
	{
		tex[] = {};
		mat[] = {"Ca\wheeled_E\UAZ\Data\uaz_main_metal.rvmat","Ca\wheeled_E\UAZ\Data\uaz_main_metal_damage.rvmat","Ca\wheeled_E\UAZ\Data\uaz_main_metal_destruct.rvmat","Ca\wheeled_E\UAZ\Data\uaz_other_metal.rvmat","Ca\wheeled_E\UAZ\Data\uaz_other_metal_damage.rvmat","Ca\wheeled_E\UAZ\Data\uaz_other_metal_destruct.rvmat","Ca\wheeled_E\UAZ\Data\uaz_mount.rvmat","Ca\wheeled_E\UAZ\Data\uaz_mount_damage.rvmat","Ca\wheeled_E\UAZ\Data\uaz_mount_destruct.rvmat","Ca\wheeled_E\UAZ\Data\uaz_skla.rvmat","Ca\wheeled_E\Data\auta_skla_damage.rvmat","Ca\wheeled_E\Data\auta_skla_damage.rvmat","Ca\wheeled_E\UAZ\Data\uaz_skla_in.rvmat","Ca\wheeled_E\Data\auta_skla_in_damage.rvmat","Ca\wheeled_E\Data\auta_skla_in_damage.rvmat","ca\weapons\data\dshk.rvmat","ca\weapons\data\dshk_damage.rvmat","ca\weapons\data\dshk_destruct.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default_destruct.rvmat"};
	};
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			body = "mainTurret";
			gun = "mainGun";
			outGunnerMayFire = 1;
			forceHideGunner = 0;
			castGunnerShadow = 1;
			viewGunnerInExternal = 1;
			gunnerOpticsModel = "\ca\Weapons\optika_empty";
			gunnerForceOptics = 0;
			weapons[] = {"DShKM"};
			soundServo[] = {"\ca\sounds\vehicles\servos\turret-1",0.1,1,15};
			magazines[] = {"50Rnd_127x107_DSHKM"};
			gunnerAction = "UAZ_Gunner01";
			gunnerInAction = "UAZ_Gunner01";
			ejectDeadGunner = 1;
			minElev = -25;
			maxElev = 60;
			stabilizedInAxes = "StabilizedInAxesNone";
		};
	};
};


class UAZ_MG_TK_EP1_DZE: UAZ_MG_Base
{
	htMin = 60;
	htMax = 1800;
	afMax = 200;
	mfMax = 100;
	mFact = 1;
	tBody = 250;
	expansion = 1;
	scope = 2;
	side = 0;
	faction = "BIS_TK";
	accuracy = 0.3;
	crew = "";
	displayName = "UAZ (DShKM) AL";
	typicalCargo[] = {};
	hiddenSelectionsTextures[] = {"\CA\wheeled_E\UAZ\Data\Uaz_main_IND_CO.paa","\ca\wheeled\data\uaz_mount_001_co.paa"};
	class TransportMagazines {};
	class TransportWeapons{};
	class Damage
	{
		tex[] = {};
		mat[] = {"Ca\wheeled_E\UAZ\Data\uaz_main_metal.rvmat","Ca\wheeled_E\UAZ\Data\uaz_main_metal_damage.rvmat","Ca\wheeled_E\UAZ\Data\uaz_main_metal_destruct.rvmat","Ca\wheeled_E\UAZ\Data\uaz_other_metal.rvmat","Ca\wheeled_E\UAZ\Data\uaz_other_metal_damage.rvmat","Ca\wheeled_E\UAZ\Data\uaz_other_metal_destruct.rvmat","Ca\wheeled_E\UAZ\Data\uaz_mount.rvmat","Ca\wheeled_E\UAZ\Data\uaz_mount_damage.rvmat","Ca\wheeled_E\UAZ\Data\uaz_mount_destruct.rvmat","Ca\wheeled_E\UAZ\Data\uaz_skla.rvmat","Ca\wheeled_E\Data\auta_skla_damage.rvmat","Ca\wheeled_E\Data\auta_skla_damage.rvmat","Ca\wheeled_E\UAZ\Data\uaz_skla_in.rvmat","Ca\wheeled_E\Data\auta_skla_in_damage.rvmat","Ca\wheeled_E\Data\auta_skla_in_damage.rvmat","ca\weapons\data\dshk.rvmat","ca\weapons\data\dshk_damage.rvmat","ca\weapons\data\dshk_destruct.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default_destruct.rvmat"};
	};
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			body = "mainTurret";
			gun = "mainGun";
			outGunnerMayFire = 1;
			forceHideGunner = 0;
			castGunnerShadow = 1;
			viewGunnerInExternal = 1;
			gunnerOpticsModel = "\ca\Weapons\optika_empty";
			gunnerForceOptics = 0;
			weapons[] = {"DShKM"};
			soundServo[] = {"\ca\sounds\vehicles\servos\turret-1",0.1,1,15};
			magazines[] = {};
			gunnerAction = "UAZ_Gunner01";
			gunnerInAction = "UAZ_Gunner01";
			ejectDeadGunner = 1;
			minElev = -25;
			maxElev = 60;
			stabilizedInAxes = "StabilizedInAxesNone";
		};
	};
};