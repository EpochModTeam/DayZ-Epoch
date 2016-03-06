 class car_hatchback: SkodaBase {
	armorcrash0[] = {"Ca\sounds\Vehicles\Crash\crash_vehicle_01", 0.707946, 1, 200};
	armorcrash1[] = {"Ca\sounds\Vehicles\Crash\crash_vehicle_02", 0.707946, 1, 200};
	armorcrash2[] = {"Ca\sounds\Vehicles\Crash\crash_vehicle_03", 0.707946, 1, 200};
	armorcrash3[] = {"Ca\sounds\Vehicles\Crash\crash_vehicle_04", 0.707946, 1, 200};
	brakedistance = 10;
	buildcrash0[] = {"Ca\sounds\Vehicles\Crash\crash_building_01", 0.707946, 1, 200};
	buildcrash1[] = {"Ca\sounds\Vehicles\Crash\crash_building_02", 0.707946, 1, 200};
	buildcrash2[] = {"Ca\sounds\Vehicles\Crash\crash_building_03", 0.707946, 1, 200};
	buildcrash3[] = {"Ca\sounds\Vehicles\Crash\crash_building_04", 0.707946, 1, 200};
	cargoaction[] = {"Hatchback_Cargo01"};
	cargoiscodriver[] = {1, 0};
	crew = "";
	displayname = $STR_VEH_NAME_OLD_HATCHBACK;
	driveraction = "Hatchback_Driver";
	faction = "CIV";
	hiddenselections[] = {"Camo1"};
	hiddenselectionstextures[] = {"\ca\wheeled\data\hatchback_co.paa"};
	icon = "\Ca\wheeled\data\map_ico\icomap_skoda_CA.paa";
	mapsize = 6;
	maxspeed = 125;
	model = "\ca\Wheeled\car_hatchback";
	picture = "\Ca\wheeled\data\ico\car_hatchback_CA.paa";
	rarityurban = 0.6;
	scope = public;
	soundarmorcrash[] = {"ArmorCrash0", 0.25, "ArmorCrash1", 0.25, "ArmorCrash2", 0.25, "ArmorCrash3", 0.25};
	soundbuildingcrash[] = {"buildCrash0", 0.25, "buildCrash1", 0.25, "buildCrash2", 0.25, "buildCrash3", 0.25};
	soundengineoffext[] = {"ca\sounds\vehicles\Wheeled\sedan\ext\ext-sedan-stop-1", 0.398107, 1, 250};
	soundengineoffint[] = {"ca\sounds\vehicles\Wheeled\sedan\int\int-sedan-stop-1", 0.398107, 1};
	soundengineonext[] = {"ca\sounds\vehicles\Wheeled\sedan\ext\ext-sedan-start-1", 0.398107, 1, 250};
	soundengineonint[] = {"ca\sounds\vehicles\Wheeled\sedan\int\int-sedan-start-1", 0.398107, 1};
	soundgear[] = {"", "5.62341e-005", 1};
	soundgetin[] = {"ca\sounds\vehicles\Wheeled\sedan\ext\ext-sedan-getout-1", 0.316228, 1};
	soundgetout[] = {"ca\sounds\vehicles\Wheeled\sedan\ext\ext-sedan-getout-1", 0.316228, 1, 30};
	soundwoodcrash[] = {"woodCrash0", 0.166, "woodCrash1", 0.166, "woodCrash2", 0.166, "woodCrash3", 0.166, "woodCrash4", 0.166, "woodCrash5", 0.166};
	typicalcargo[] = {};
	wheelcircumference = 2.148;
	woodcrash0[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_01", 0.707946, 1, 200};
	woodcrash1[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_02", 0.707946, 1, 200};
	woodcrash2[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_03", 0.707946, 1, 200};
	woodcrash3[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_04", 0.707946, 1, 200};
	woodcrash4[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_05", 0.707946, 1, 200};
	woodcrash5[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_06", 0.707946, 1, 200};
	class SoundEvents {
		class AccelerationIn {
			expression = "(engineOn*(1-camPos))*gmeterZ";
			limit = 0.5;
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\sedan\int\int-sedan-acce-1", 0.398107, 1};
		};
		class AccelerationOut {
			expression = "(engineOn*camPos)*gmeterZ";
			limit = 0.5;
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\sedan\ext\ext-sedan-acce-1", 0.398107, 1, 250};
		};
	};
	class Sounds {
		class Engine {
			frequency = "(randomizer*0.05+0.95)*rpm";
			sound[] = {"\ca\sounds\Vehicles\Wheeled\sedan\ext\ext-sedan-low-1", 0.398107, 0.9, 300};
			volume = "engineOn*camPos*(rpm factor[0.6, 0.2])";
		};
		class EngineHighOut {
			frequency = "(randomizer*0.05+0.95)*rpm";
			sound[] = {"\ca\sounds\Vehicles\Wheeled\sedan\ext\ext-sedan-high-1", 0.398107, 0.8, 380};
			volume = "engineOn*camPos*(rpm factor[0.45, 0.9])";
		};
		class IdleOut {
			frequency = 1;
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\sedan\ext\ext-sedan-idle-1", 0.281838, 1, 200};
			volume = "engineOn*camPos*(rpm factor[0.3, 0])";
		};
		class TiresRockOut {
			frequency = 1;
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-rock2", 0.316228, 1, 30};
			volume = "camPos*rock*(speed factor[2, 20])";
		};
		class TiresSandOut {
			frequency = 1;
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-sand2", 0.316228, 1, 30};
			volume = "camPos*sand*(speed factor[2, 20])";
		};
		class TiresGrassOut {
			frequency = 1;
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-grass3", 0.316228, 1, 30};
			volume = "camPos*grass*(speed factor[2, 20])";
		};
		class TiresMudOut {
			frequency = 1;
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-mud2", 0.316228, 1, 30};
			volume = "camPos*mud*(speed factor[2, 20])";
		};
		class TiresGravelOut {
			frequency = 1;
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-gravel2", 0.316228, 1, 30};
			volume = "camPos*gravel*(speed factor[2, 20])";
		};
		class TiresAsphaltOut {
			frequency = 1;
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-asphalt3", 0.316228, 1, 30};
			volume = "camPos*asphalt*(speed factor[2, 20])";
		};
		class NoiseOut {
			frequency = 1;
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Noises\ext\int-noise3", 0.316228, 1, 30};
			volume = "camPos*(damper0 max 0.04)*(speed factor[0, 8])";
		};
		class EngineLowIn {
			frequency = "(randomizer*0.05+0.95)*rpm";
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\sedan\int\int-sedan-low-1", 0.562341, 0.8};
			volume = "((engineOn*thrust) factor[0.65, 0.2])*(1-camPos)";
		};
		class EngineHighIn {
			frequency = "(randomizer*0.05+0.95)*rpm";
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\sedan\int\int-sedan-high-1", 0.562341, 0.8};
			volume = "((engineOn*thrust) factor[0.55, 0.95])*(1-camPos)";
		};
		class IdleIn {
			frequency = 1;
			sound[] = {"\ca\sounds\Vehicles\Wheeled\sedan\int\int-sedan-idle-1", 0.316228, 1};
			volume = "engineOn*(rpm factor[0.3, 0])*(1-camPos)";
		};
		class TiresRockIn {
			frequency = 1;
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-rock2", 0.177828, 1};
			volume = "(1-camPos)*rock*(speed factor[2, 20])";
		};
		class TiresSandIn {
			frequency = 1;
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-sand2", 0.177828, 1};
			volume = "(1-camPos)*sand*(speed factor[2, 20])";
		};
		class TiresGrassIn {
			frequency = 1;
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-grass3", 0.177828, 1};
			volume = "(1-camPos)*grass*(speed factor[2, 20])";
		};
		class TiresMudIn {
			frequency = 1;
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-mud2", 0.177828, 1};
			volume = "(1-camPos)*mud*(speed factor[2, 20])";
		};
		class TiresGravelIn {
			frequency = 1;
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-gravel2", 0.177828, 1};
			volume = "(1-camPos)*gravel*(speed factor[2, 20])";
		};
		class TiresAsphaltIn {
			frequency = 1;
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-asphalt3", 0.177828, 1};
			volume = "(1-camPos)*asphalt*(speed factor[2, 20])";
		};
		class NoiseIn {
			frequency = 1;
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\BUS\int\noise3", 0.177828, 1};
			volume = "(damper0 max 0.04)*(speed factor[0, 8])*(1-camPos)";
		};
		class Movement {
			frequency = 1;
			sound = "soundEnviron";
			volume = 0;
		};
	};
	class Damage {
		mat[] = {"ca\wheeled\data\hatchback.rvmat", "ca\wheeled\data\hatchback.rvmat", "ca\wheeled\data\hatchback_destruct.rvmat", "ca\wheeled\data\hatchback.rvmat", "ca\wheeled\data\hatchback.rvmat", "ca\wheeled\data\hatchback_destruct.rvmat", "ca\wheeled\data\detailmapy\auta_skla.rvmat", "ca\wheeled\data\detailmapy\auta_skla_damage.rvmat", "ca\wheeled\data\detailmapy\auta_skla_damage.rvmat", "ca\wheeled\data\detailmapy\auta_skla_in.rvmat", "ca\wheeled\data\detailmapy\auta_skla_in_damage.rvmat", "ca\wheeled\data\detailmapy\auta_skla_in_damage.rvmat"};
		tex[] = {};
	};
	class Library {
		libtextdesc = "Civilian Car";
	};

	class Upgrades {
		ItemORP[] = {"car_hatchback_DZE1",{},{{"ItemORP",1},{"PartEngine",2}}};
	};
};

// Performance 1
class car_hatchback_DZE1: car_hatchback {
	maxspeed = 150; // max engine limit 125-130
	terrainCoef = 2.5;

	class Upgrades {
		ItemAVE[] = {"car_hatchback_DZE2",{},{{"ItemAVE",1},{"PartGeneric",4},{"ItemTankTrap",2}}};
	};
};

// Armor 2
class car_hatchback_DZE2: car_hatchback_DZE1 {
	armor = 50; // car 20
	class HitPoints: HitPoints {
		class HitLFWheel: HitLFWheel {
			armor = 0.3;
		};
		class HitLBWheel: HitLBWheel {
			armor = 0.3;
		};
		class HitRFWheel: HitRFWheel {
			armor = 0.3;
		};
		class HitRBWheel: HitRBWheel {
			armor = 0.3;
		};
		class HitFuel {
			armor = 0.28;
			material = -1;
			name = "palivo";
			visual = "";
			passThrough = 1;
		};
		class HitEngine {
			armor = 1;
			material = -1;
			name = "motor";
			visual = "";
			passThrough = 1;
		};
		class HitGlass1: HitGlass1 {
			armor = 0.1;
		};
		class HitGlass2: HitGlass2 {
			armor = 0.1;
		};
		class HitGlass3: HitGlass3 {
			armor = 0.1;
		};
		class HitGlass4: HitGlass4 {
			armor = 0.1;
		};
	};

	class Upgrades {
		ItemLRK[] = {"car_hatchback_DZE3",{},{{"ItemLRK",1},{"PartGeneric",1},{"ItemTent",1}}};
	};
};

// Cargo 3
class car_hatchback_DZE3: car_hatchback_DZE2 {
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportmaxbackpacks = 4; // car 2

	class Upgrades {
		ItemTNK[] = {"car_hatchback_DZE4",{},{{"ItemTNK",1},{"PartFueltank",2}}};
	};
};

// Fuel 4
class car_hatchback_DZE4: car_hatchback_DZE3 {
	fuelCapacity = 210; // car 100
};