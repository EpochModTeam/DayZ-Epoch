class hilux1_civil_1_open: Car
{
	scope = 2;
	faction = "CIV";
	maxSpeed = 125;
	side = 3;
	model = "\ca\Wheeled\hilux1_civil_1_open";
	picture = "\Ca\wheeled\data\ico\hilux1_civil_1_open_CA.paa";
	Icon = "\Ca\wheeled\data\map_ico\icomap_hilux_CA.paa";
	mapSize = 7;
	typicalCargo[] = {};
	crew = "";
	displayName = "Off-road (tan)";
	transportSoldier = 1;
	driverAction = "Hilux_Driver";
	terrainCoef = 2.5;
	wheelCircumference = 2.532;
	steerAheadPlan = 0.2;
	cargoIsCoDriver[] = {1};
	insideSoundCoef = 0.9;
	soundGear[] = {"",0.000562341,1};
	SoundGetIn[] = {"\ca\sounds\vehicles\wheeled\offroad\ext\ext-offroad-getout-1",0.562341,1};
	SoundGetOut[] = {"\ca\sounds\vehicles\wheeled\offroad\ext\ext-offroad-getout-1",0.562341,1,30};
	soundEngineOnInt[] = {"ca\sounds\Vehicles\Wheeled\offroad\int\int-offroad-start-1",0.398107,1};
	soundEngineOnExt[] = {"ca\sounds\Vehicles\Wheeled\offroad\ext\ext-offroad-start-1",0.398107,1,250};
	soundEngineOffInt[] = {"ca\sounds\Vehicles\Wheeled\offroad\int\int-offroad-stop-1",0.398107,1};
	soundEngineOffExt[] = {"ca\sounds\Vehicles\Wheeled\offroad\ext\ext-offroad-stop-1",0.398107,1,250};
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
			sound[] = {"ca\sounds\Vehicles\Wheeled\offroad\int\int-offroad-acce-1",0.177828,1};
			limit = "0.7";
			expression = "(engineOn*(1-camPos))*gmeterZ*(speed factor[2.5, 4])";
		};
		class AccelerationOut
		{
			sound[] = {"ca\sounds\Vehicles\Wheeled\offroad\ext\ext-offroad-acce-1",0.177828,1,250};
			limit = "0.7";
			expression = "(engineOn*camPos)*gmeterZ*(speed factor[2.5, 4])";
		};
	};
	class Sounds: Sounds
	{
		class Engine: Engine
		{
			sound[] = {"ca\sounds\Vehicles\Wheeled\offroad\ext\ext-offroad-low-1",0.562341,1,300};
			frequency = "(randomizer*0.05+0.95)*rpm";
			volume = "camPos*engineOn*((rpm factor[0.21, 0.5]) min (rpm factor[0.7, 0.5]))";
		};
		class EngineHighOut
		{
			sound[] = {"ca\sounds\Vehicles\Wheeled\offroad\ext\ext-offroad-high-2",0.562341,1,350};
			frequency = "(randomizer*0.05+0.95)*rpm";
			volume = "camPos*engineOn*(rpm factor[0.5, 0.85])";
		};
		class IdleOut
		{
			sound[] = {"ca\sounds\Vehicles\Wheeled\offroad\ext\ext-offroad-idle-5",0.354813,1,150};
			frequency = "1";
			volume = "camPos*engineOn*(rpm factor[0.4, 0])";
		};
		class TiresRockOut
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-rock2",0.1,1,30};
			frequency = "1";
			volume = "camPos*rock*(speed factor[2, 20])";
		};
		class TiresSandOut
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-sand2",0.1,1,30};
			frequency = "1";
			volume = "camPos*sand*(speed factor[2, 20])";
		};
		class TiresGrassOut
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-grass3",0.1,1,30};
			frequency = "1";
			volume = "camPos*grass*(speed factor[2, 20])";
		};
		class TiresMudOut
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-mud2",0.1,1,30};
			frequency = "1";
			volume = "camPos*mud*(speed factor[2, 20])";
		};
		class TiresGravelOut
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-gravel2",0.125893,1,30};
			frequency = "1";
			volume = "camPos*gravel*(speed factor[2, 20])";
		};
		class TiresAsphaltOut
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-asphalt3",0.0891251,1,30};
			frequency = "1";
			volume = "camPos*asphalt*(speed factor[2, 20])";
		};
		class NoiseOut
		{
			sound[] = {"ca\sounds\Vehicles\Wheeled\offroad\ext\ext-offroad-acce-2",0.1,1,30};
			frequency = "1";
			volume = "camPos*(damper0 max 0.02)*(speed factor[0, 8])";
		};
		class EngineLowIn
		{
			sound[] = {"ca\sounds\Vehicles\Wheeled\offroad\int\int-offroad-low-1",0.562341,1};
			frequency = "(randomizer*0.05+0.95)*rpm";
			volume = "(1-camPos)*engineOn*((rpm factor[0.2, 0.4]) min (rpm factor[0.7, 0.5]))";
		};
		class EngineHighIn
		{
			sound[] = {"ca\sounds\Vehicles\Wheeled\offroad\int\int-offroad-high-2",0.562341,1};
			frequency = "(randomizer*0.05+0.95)*rpm";
			volume = "(1-camPos)*engineOn*(rpm factor[0.56, 0.8])";
		};
		class IdleIn
		{
			sound[] = {"ca\sounds\Vehicles\Wheeled\offroad\int\int-offroad-idle-5",0.354813,1};
			frequency = "1";
			volume = "(1-camPos)*engineOn*(rpm factor[0.35, 0])";
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
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-gravel2",0.141254,1};
			frequency = "1";
			volume = "(1-camPos)*gravel*(speed factor[2, 20])";
		};
		class TiresAsphaltIn
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-asphalt3",0.177828,1};
			frequency = "1";
			volume = "(1-camPos)*asphalt*(speed factor[2, 20])";
		};
		class NoiseIn
		{
			sound[] = {"ca\sounds\Vehicles\Wheeled\offroad\int\int-offroad-noise-1",0.316228,1};
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
	cargoAction[] = {"Hilux_Cargo01"};
	hasGunner = 0;
	class Turrets
	{
	};
	class Damage
	{
		tex[] = {};
		mat[] = {"ca\wheeled\data\detailmapy\coyota_trup1.rvmat","ca\wheeled\data\detailmapy\coyota_trup1.rvmat","ca\wheeled\data\detailmapy\coyota_trup1_destruct.rvmat","ca\wheeled\data\detailmapy\coyota_kola.rvmat","ca\wheeled\data\detailmapy\coyota_kola.rvmat","ca\wheeled\data\detailmapy\coyota_kola_destruct.rvmat","ca\wheeled\data\detailmapy\coyota_interier.rvmat","ca\wheeled\data\detailmapy\coyota_interier.rvmat","ca\wheeled\data\detailmapy\coyota_interier_destruct.rvmat","ca\wheeled\data\detailmapy\auta_skla.rvmat","ca\wheeled\data\detailmapy\auta_skla_damage.rvmat","ca\wheeled\data\detailmapy\auta_skla_damage.rvmat","ca\wheeled\data\detailmapy\auta_skla_in.rvmat","ca\wheeled\data\detailmapy\auta_skla_in_damage.rvmat","ca\wheeled\data\detailmapy\auta_skla_in_damage.rvmat"};
	};
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"\ca\wheeled\data\coyota_trup1.paa"};
	class Library
	{
		libTextDesc = "Civil Car.";
	};
	rarityUrban = 0.8;
	brakeDistance = 11;
	upgradeVehicle[] = {"hilux1_civil_1_open_DZE1",{{"ItemORP",1},{"PartEngine",2}}};
};
class hilux1_civil_2_covered: hilux1_civil_1_open
{
	model = "\ca\Wheeled\hilux1_civil_2_covered";
	faction = "CIV";
	picture = "\Ca\wheeled\data\ico\hilux1_civil_2_covered_CA.paa";
	Icon = "\Ca\wheeled\data\map_ico\icomap_hilux_CA.paa";
	mapSize = 7;
	typicalCargo[] = {};
	crew = "";
	class Damage
	{
		tex[] = {};
		mat[] = {"ca\wheeled\data\detailmapy\coyota_trup1.rvmat","ca\wheeled\data\detailmapy\coyota_trup1.rvmat","ca\wheeled\data\detailmapy\coyota_trup1_destruct.rvmat","ca\wheeled\data\detailmapy\coyota_addons.rvmat","ca\wheeled\data\detailmapy\coyota_addons.rvmat","ca\wheeled\data\detailmapy\coyota_addons_destruct.rvmat","ca\wheeled\data\detailmapy\coyota_kola.rvmat","ca\wheeled\data\detailmapy\coyota_kola.rvmat","ca\wheeled\data\detailmapy\coyota_kola_destruct.rvmat","ca\wheeled\data\detailmapy\coyota_interier.rvmat","ca\wheeled\data\detailmapy\coyota_interier.rvmat","ca\wheeled\data\detailmapy\coyota_interier_destruct.rvmat","ca\wheeled\data\detailmapy\auta_skla.rvmat","ca\wheeled\data\detailmapy\auta_skla_damage.rvmat","ca\wheeled\data\detailmapy\auta_skla_damage.rvmat","ca\wheeled\data\detailmapy\auta_skla_in.rvmat","ca\wheeled\data\detailmapy\auta_skla_in_damage.rvmat","ca\wheeled\data\detailmapy\auta_skla_in_damage.rvmat"};
	};
	hiddenSelections[] = {};
	hiddenSelectionsTextures[] = {};
	displayName = "Off-road (red)";
	rarityUrban = 0.35;
	upgradeVehicle[] = {"hilux1_civil_2_covered_DZE1",{{"ItemORP",1},{"PartEngine",2}}};
};
class hilux1_civil_3_open: hilux1_civil_1_open
{
	model = "\ca\Wheeled\hilux1_civil_3_open";
	picture = "\Ca\wheeled\data\ico\hilux1_civil_3_open_CA.paa";
	Icon = "\Ca\wheeled\data\map_ico\icomap_hilux_CA.paa";
	mapSize = 7;
	faction = "CIV";
	typicalCargo[] = {};
	crew = "";
	displayName = "Off-road (white)";
	class Damage
	{
		tex[] = {};
		mat[] = {"ca\wheeled\data\detailmapy\coyota_trup1.rvmat","ca\wheeled\data\detailmapy\coyota_trup1.rvmat","ca\wheeled\data\detailmapy\coyota_trup1_destruct.rvmat","ca\wheeled\data\detailmapy\coyota_kola.rvmat","ca\wheeled\data\detailmapy\coyota_kola.rvmat","ca\wheeled\data\detailmapy\coyota_kola_destruct.rvmat","ca\wheeled\data\detailmapy\coyota_interier.rvmat","ca\wheeled\data\detailmapy\coyota_interier.rvmat","ca\wheeled\data\detailmapy\coyota_interier_destruct.rvmat","ca\wheeled\data\detailmapy\auta_skla.rvmat","ca\wheeled\data\detailmapy\auta_skla_damage.rvmat","ca\wheeled\data\detailmapy\auta_skla_damage.rvmat","ca\wheeled\data\detailmapy\auta_skla_in.rvmat","ca\wheeled\data\detailmapy\auta_skla_in_damage.rvmat","ca\wheeled\data\detailmapy\auta_skla_in_damage.rvmat"};
	};
	hiddenSelections[] = {};
	hiddenSelectionsTextures[] = {};
	upgradeVehicle[] = {"hilux1_civil_3_open_DZE1",{{"ItemORP",1},{"PartEngine",2}}};
};


// Performance 1
class hilux1_civil_1_open_DZE1: hilux1_civil_1_open
{
	maxspeed = 150; // max engine limit 125-130
	terrainCoef = 2.5;
	upgradeVehicle[] = {"hilux1_civil_1_open_DZE2",{{"ItemAVE",1},{"PartGeneric",1},{"ItemTankTrap",1}}};
};
class hilux1_civil_2_covered_DZE1: hilux1_civil_2_covered
{
	maxspeed = 150; // car 100
	terrainCoef = 2.5;
	upgradeVehicle[] = {"hilux1_civil_2_covered_DZE2",{{"ItemAVE",1},{"PartGeneric",1},{"ItemTankTrap",1}}};
};
class hilux1_civil_3_open_DZE1: hilux1_civil_3_open
{
	maxspeed = 150; // car 100
	terrainCoef = 2.5;
	upgradeVehicle[] = {"hilux1_civil_3_open_DZE2",{{"ItemAVE",1},{"PartGeneric",1},{"ItemTankTrap",1}}};
};
// Armor 2
class hilux1_civil_1_open_DZE2: hilux1_civil_1_open_DZE1
{
	armor = 50; // car 20
	upgradeVehicle[] = {"hilux1_civil_1_open_DZE3",{{"ItemLRK",1},{"ItemTent",1}}};
	class HitPoints: HitPoints
	{
		class HitLFWheel: HitLFWheel
		{
			armor = 0.3;
		};
		class HitLBWheel: HitLBWheel
		{
			armor = 0.3;
		};
		class HitRFWheel: HitRFWheel
		{
			armor = 0.3;
		};
		class HitRBWheel: HitRBWheel
		{
			armor = 0.3;
		};
		class HitFuel
		{
			armor = 0.28;
			material = -1;
			name = "palivo";
			visual = "";
			passThrough = 1;
		};
		class HitEngine
		{
			armor = 1;
			material = -1;
			name = "motor";
			visual = "";
			passThrough = 1;
		};
		class HitGlass1: HitGlass1
		{
			armor = 0.1;
		};
		class HitGlass2: HitGlass2
		{
			armor = 0.1;
		};
		class HitGlass3: HitGlass3
		{
			armor = 0.1;
		};
		class HitGlass4: HitGlass4
		{
			armor = 0.1;
		};
	};
};
class hilux1_civil_2_covered_DZE2: hilux1_civil_2_covered_DZE1
{
	armor = 50; // car 20
	upgradeVehicle[] = {"hilux1_civil_2_covered_DZE3",{{"ItemLRK",1},{"ItemTent",1}}};
	class HitPoints: HitPoints
	{
		class HitLFWheel: HitLFWheel
		{
			armor = 0.3;
		};
		class HitLBWheel: HitLBWheel
		{
			armor = 0.3;
		};
		class HitRFWheel: HitRFWheel
		{
			armor = 0.3;
		};
		class HitRBWheel: HitRBWheel
		{
			armor = 0.3;
		};
		class HitFuel
		{
			armor = 0.28;
			material = -1;
			name = "palivo";
			visual = "";
			passThrough = 1;
		};
		class HitEngine
		{
			armor = 1;
			material = -1;
			name = "motor";
			visual = "";
			passThrough = 1;
		};
		class HitGlass1: HitGlass1
		{
			armor = 0.1;
		};
		class HitGlass2: HitGlass2
		{
			armor = 0.1;
		};
		class HitGlass3: HitGlass3
		{
			armor = 0.1;
		};
		class HitGlass4: HitGlass4
		{
			armor = 0.1;
		};
	};
};
class hilux1_civil_3_open_DZE2: hilux1_civil_3_open_DZE1
{
	armor = 50; // car 20
	upgradeVehicle[] = {"hilux1_civil_3_open_DZE3",{{"ItemLRK",1},{"ItemTent",1}}};
	class HitPoints: HitPoints
	{
		class HitLFWheel: HitLFWheel
		{
			armor = 0.3;
		};
		class HitLBWheel: HitLBWheel
		{
			armor = 0.3;
		};
		class HitRFWheel: HitRFWheel
		{
			armor = 0.3;
		};
		class HitRBWheel: HitRBWheel
		{
			armor = 0.3;
		};
		class HitFuel
		{
			armor = 0.28;
			material = -1;
			name = "palivo";
			visual = "";
			passThrough = 1;
		};
		class HitEngine
		{
			armor = 1;
			material = -1;
			name = "motor";
			visual = "";
			passThrough = 1;
		};
		class HitGlass1: HitGlass1
		{
			armor = 0.1;
		};
		class HitGlass2: HitGlass2
		{
			armor = 0.1;
		};
		class HitGlass3: HitGlass3
		{
			armor = 0.1;
		};
		class HitGlass4: HitGlass4
		{
			armor = 0.1;
		};
	};
};
// Cargo 3
class hilux1_civil_1_open_DZE3: hilux1_civil_1_open_DZE2
{
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50 
    transportmaxbackpacks = 4; // car 2
	upgradeVehicle[] = {"hilux1_civil_1_open_DZE4",{{"ItemTNK",1},{"PartFueltank",2}}};
};
class hilux1_civil_2_covered_DZE3: hilux1_civil_2_covered_DZE2
{
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50 
    transportmaxbackpacks = 4; // car 2
	upgradeVehicle[] = {"hilux1_civil_2_covered_DZE4",{{"ItemTNK",1},{"PartFueltank",2}}};
};
class hilux1_civil_3_open_DZE3: hilux1_civil_3_open_DZE2
{
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50 
    transportmaxbackpacks = 4; // car 2
	upgradeVehicle[] = {"hilux1_civil_3_open_DZE4",{{"ItemTNK",1},{"PartFueltank",2}}};
};
// Fuel 4
class hilux1_civil_1_open_DZE4: hilux1_civil_1_open_DZE3
{
	fuelCapacity = 210; // car 100
};
class hilux1_civil_2_covered_DZE4: hilux1_civil_2_covered_DZE3
{
	fuelCapacity = 210; // car 100
};
class hilux1_civil_3_open_DZE4: hilux1_civil_3_open_DZE3
{
	fuelCapacity = 210; // car 100
};