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
	scope = 2;
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
};