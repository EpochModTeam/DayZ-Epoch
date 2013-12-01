class SkodaBase: Car
{
	brakeDistance = 9;
	scope = 0;
	picture = "\Ca\wheeled\data\ico\skodovka_CA.paa";
	Icon = "\Ca\wheeled\data\map_ico\icomap_skoda_CA.paa";
	mapSize = 6;
	faction = "CIV";
	crew = "Citizen2";
	typicalCargo[] = {"Citizen2"};
	wheelCircumference = 1.988;
	maxSpeed = 110;
	turnCoef = 2;
	steerAheadPlan = 0.24;
	side = 3;
	displayName = "Car";
	accuracy = 0.5;
	extCameraPosition[] = {0.5,2,-10};
	armor = 20;
	damageResistance = 0.01821;
	cost = 2000;
	fuelCapacity = 50;
	transportSoldier = 3;
	transportAmmo = 0;
	terrainCoef = 6;
	soundGear[] = {"",5.62341e-005,1};
	soundGetIn[] = {"ca\sounds\vehicles\Wheeled\Car\ext\ext-Car-getout-1",0.316228,1};
	soundGetOut[] = {"ca\sounds\vehicles\Wheeled\Car\ext\ext-Car-getout-1",0.316228,1,30};
	soundEngineOnInt[] = {"ca\sounds\vehicles\Wheeled\Car\int\int-Car-start-1",0.316228,1};
	soundEngineOnExt[] = {"ca\sounds\vehicles\Wheeled\Car\ext\ext-Car-start-1",0.316228,1,200};
	soundEngineOffInt[] = {"ca\sounds\vehicles\Wheeled\Car\int\int-Car-stop-1",0.316228,1};
	soundEngineOffExt[] = {"ca\sounds\vehicles\Wheeled\Car\ext\ext-Car-stop-1",0.316228,1,200};
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
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Car\int\int-Car-acce-2",0.316228,1};
			limit = "0.5";
			expression = "(engineOn*(1-camPos))*gmeterZ";
		};
		class AccelerationOut
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Car\ext\ext-Car-acce-2",0.316228,1,200};
			limit = "0.5";
			expression = "(engineOn*camPos)*gmeterZ";
		};
	};
	class Sounds
	{
		class Engine
		{
			sound[] = {"\ca\sounds\Vehicles\Wheeled\Car\ext\ext-car-low-4",0.562341,1,250};
			frequency = "(randomizer*0.05+0.95)*rpm";
			volume = "engineOn*camPos*(rpm factor[0.7, 0.2])";
		};
		class EngineHighOut
		{
			sound[] = {"\ca\sounds\Vehicles\Wheeled\Car\ext\ext-car-high-4",0.562341,1.1,350};
			frequency = "(randomizer*0.05+0.95)*rpm";
			volume = "engineOn*camPos*(rpm factor[0.5, 0.9])";
		};
		class IdleOut
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Car\ext\ext-car-idle-2",0.316228,1,150};
			frequency = "1";
			volume = "engineOn*camPos*(rpm factor[0.3, 0])";
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
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-gravel2",0.1,1,30};
			frequency = "1";
			volume = "camPos*gravel*(speed factor[2, 20])";
		};
		class TiresAsphaltOut
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-asphalt3",0.1,1,30};
			frequency = "1";
			volume = "camPos*asphalt*(speed factor[2, 20])";
		};
		class NoiseOut
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Noises\ext\int-noise3",0.1,1,30};
			frequency = "1";
			volume = "camPos*(damper0 max 0.04)*(speed factor[0, 8])";
		};
		class EngineLowIn
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Car\int\int-car-low-4",0.707946,0.8};
			frequency = "(randomizer*0.05+0.95)*rpm";
			volume = "((engineOn*thrust) factor[0.65, 0.2])*(1-camPos)";
		};
		class EngineHighIn
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Car\int\int-car-high-4",0.707946,0.8};
			frequency = "(randomizer*0.05+0.95)*rpm";
			volume = "((engineOn*thrust) factor[0.55, 0.95])*(1-camPos)";
		};
		class IdleIn
		{
			sound[] = {"\ca\sounds\Vehicles\Wheeled\Car\int\int-car-idle-1",0.398107,1};
			frequency = "1";
			volume = "engineOn*(rpm factor[0.3, 0])*(1-camPos)";
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
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\BUS\int\noise3",0.1,1};
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
	weapons[] = {"SportCarHorn"};
	magazines[] = {};
	driverAction = "Skodovka_Driver";
	cargoAction[] = {"Skodovka_Cargo01"};
	cargoIsCoDriver[] = {1,0};
	hasGunner = 0;
	class Turrets
	{
	};
	class Library
	{
		libTextDesc = "A Czech-made civilian car, very popular during the Soviet era. This car was designed for the rugged roads of Central and Eastern Europe and displays good off-road performance in comparison to other vehicles in its class.";
	};
	rarityUrban = 0.5;
};
class Skoda: SkodaBase
{
	scope = 2;
	accuracy = 1000;
	crew = "Citizen1";
	faction = "CIV";
	typicalCargo[] = {"Citizen1"};
	model = "\ca\wheeled\skodovka";
	picture = "\Ca\wheeled\data\ico\skodovka_CA.paa";
	Icon = "\Ca\wheeled\data\map_ico\icomap_skoda_CA.paa";
	mapSize = 6;
	displayName = "Car (white)";
	displayNameShort = "Car";
	hiddenSelections[] = {"Camo1","Camo2"};
	hiddenSelectionsTextures[] = {"\ca\wheeled\data\skodovka_bila_co.paa","\ca\wheeled\data\skodovka_int_co.paa"};
	class Damage
	{
		tex[] = {};
		mat[] = {"ca\wheeled\data\skodovka.rvmat","ca\wheeled\data\skodovka.rvmat","ca\wheeled\data\skodovka_destruct.rvmat","ca\wheeled\data\detailmapy\auta_skla.rvmat","ca\wheeled\data\detailmapy\auta_skla_damage.rvmat","ca\wheeled\data\detailmapy\auta_skla_damage.rvmat","ca\wheeled\data\detailmapy\auta_skla_in.rvmat","ca\wheeled\data\detailmapy\auta_skla_in_damage.rvmat","ca\wheeled\data\detailmapy\auta_skla_in_damage.rvmat"};
	};
	rarityUrban = 0.25;
	upgradeVehicle[] = {"Skoda_DZE1",{{"ItemORP",1},{"PartEngine",2}}};
};
class SkodaBlue: SkodaBase
{
	scope = 2;
	accuracy = 1000;
	crew = "Villager2";
	faction = "CIV";
	typicalCargo[] = {"Villager2"};
	model = "\ca\wheeled\skodovka_blue";
	picture = "\Ca\wheeled\data\ico\skodovka_CA.paa";
	Icon = "\Ca\wheeled\data\map_ico\icomap_skoda_CA.paa";
	mapSize = 6;
	displayName = "Car (blue)";
	displayNameShort = "Car";
	class Damage
	{
		tex[] = {};
		mat[] = {"ca\wheeled\data\skodovka_modra.rvmat","ca\wheeled\data\skodovka_modra.rvmat","ca\wheeled\data\skodovka_destruct.rvmat","ca\wheeled\data\detailmapy\auta_skla.rvmat","ca\wheeled\data\detailmapy\auta_skla_damage.rvmat","ca\wheeled\data\detailmapy\auta_skla_damage.rvmat","ca\wheeled\data\detailmapy\auta_skla_in.rvmat","ca\wheeled\data\detailmapy\auta_skla_in_damage.rvmat","ca\wheeled\data\detailmapy\auta_skla_in_damage.rvmat"};
	};
	rarityUrban = 0.25;
	upgradeVehicle[] = {"SkodaBlue_DZE1",{{"ItemORP",1},{"PartEngine",2}}};
};
class SkodaRed: SkodaBase
{
	scope = 2;
	faction = "CIV";
	accuracy = 1000;
	model = "\ca\wheeled\skodovka_red";
	picture = "\Ca\wheeled\data\ico\skodovka_CA.paa";
	Icon = "\Ca\wheeled\data\map_ico\icomap_skoda_CA.paa";
	mapSize = 6;
	crew = "Villager1";
	typicalCargo[] = {"Villager1"};
	displayName = "Car (red)";
	displayNameShort = "Car";
	class Damage
	{
		tex[] = {};
		mat[] = {"ca\wheeled\data\skodovka.rvmat","ca\wheeled\data\skodovka.rvmat","ca\wheeled\data\skodovka_destruct.rvmat","ca\wheeled\data\detailmapy\auta_skla.rvmat","ca\wheeled\data\detailmapy\auta_skla_damage.rvmat","ca\wheeled\data\detailmapy\auta_skla_damage.rvmat","ca\wheeled\data\detailmapy\auta_skla_in.rvmat","ca\wheeled\data\detailmapy\auta_skla_in_damage.rvmat","ca\wheeled\data\detailmapy\auta_skla_in_damage.rvmat"};
	};
	upgradeVehicle[] = {"SkodaRed_DZE1",{{"ItemORP",1},{"PartEngine",2}}};
};
class SkodaGreen: SkodaBase
{
	scope = 2;
	faction = "CIV";
	accuracy = 1000;
	model = "\ca\wheeled\skodovka_green";
	picture = "\Ca\wheeled\data\ico\skodovka_CA.paa";
	Icon = "\Ca\wheeled\data\map_ico\icomap_skoda_CA.paa";
	mapSize = 6;
	crew = "Villager3";
	typicalCargo[] = {"Villager3"};
	displayName = "Car (green)";
	displayNameShort = "Car";
	class Damage
	{
		tex[] = {};
		mat[] = {"ca\wheeled\data\skodovka_zelena.rvmat","ca\wheeled\data\skodovka_zelena.rvmat","ca\wheeled\data\skodovka_destruct.rvmat","ca\wheeled\data\detailmapy\auta_skla.rvmat","ca\wheeled\data\detailmapy\auta_skla_damage.rvmat","ca\wheeled\data\detailmapy\auta_skla_damage.rvmat","ca\wheeled\data\detailmapy\auta_skla_in.rvmat","ca\wheeled\data\detailmapy\auta_skla_in_damage.rvmat","ca\wheeled\data\detailmapy\auta_skla_in_damage.rvmat"};
	};
	upgradeVehicle[] = {"SkodaGreen_DZE1",{{"ItemORP",1},{"PartEngine",2}}};
};

// Performance 1
class Skoda_DZE1: Skoda
{
	maxspeed = 150; // max engine limit 125-130
	terrainCoef = 2.5;
	upgradeVehicle[] = {"Skoda_DZE2",{{"ItemAVE",1},{"PartGeneric",1},{"ItemTankTrap",1}}};
};

class SkodaBlue_DZE1: SkodaBlue
{
	maxspeed = 150; // car 100
	terrainCoef = 2.5;
	upgradeVehicle[] = {"SkodaBlue_DZE2",{{"ItemAVE",1},{"PartGeneric",1},{"ItemTankTrap",1}}};
};
class SkodaRed_DZE1: SkodaRed
{
	maxspeed = 150; // car 100
	terrainCoef = 2.5;
	upgradeVehicle[] = {"SkodaRed_DZE2",{{"ItemAVE",1},{"PartGeneric",1},{"ItemTankTrap",1}}};
};
class SkodaGreen_DZE1: SkodaGreen
{
	maxspeed = 150; // car 100
	terrainCoef = 2.5;
	upgradeVehicle[] = {"SkodaGreen_DZE2",{{"ItemAVE",1},{"PartGeneric",1},{"ItemTankTrap",1}}};
};

// Armor 2
class Skoda_DZE2: Skoda_DZE1
{
	armor = 50; // car 20
	upgradeVehicle[] = {"Skoda_DZE3",{{"ItemLRK",1},{"ItemTent",1}}};
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
class SkodaBlue_DZE2: SkodaBlue_DZE1
{
	armor = 50; // car 20
	upgradeVehicle[] = {"SkodaBlue_DZE3",{{"ItemLRK",1},{"ItemTent",1}}};
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
class SkodaRed_DZE2: SkodaRed_DZE1
{
	armor = 50; // car 20
	upgradeVehicle[] = {"SkodaRed_DZE3",{{"ItemLRK",1},{"ItemTent",1}}};
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
class SkodaGreen_DZE2: SkodaGreen_DZE1
{
	armor = 50; // car 20
	upgradeVehicle[] = {"SkodaGreen_DZE3",{{"ItemLRK",1},{"ItemTent",1}}};
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
class Skoda_DZE3: Skoda_DZE2
{
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50 
    transportmaxbackpacks = 4; // car 2
	upgradeVehicle[] = {"Skoda_DZE4",{{"ItemTNK",1},{"PartFueltank",2}}};
};
class SkodaBlue_DZE3: SkodaBlue_DZE2
{
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50 
    transportmaxbackpacks = 4; // car 2
	upgradeVehicle[] = {"SkodaBlue_DZE4",{{"ItemTNK",1},{"PartFueltank",2}}};
};
class SkodaRed_DZE3: SkodaRed_DZE2
{
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50 
    transportmaxbackpacks = 4; // car 2
	upgradeVehicle[] = {"SkodaRed_DZE4",{{"ItemTNK",1},{"PartFueltank",2}}};
};
class SkodaGreen_DZE3: SkodaGreen_DZE2
{
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50 
    transportmaxbackpacks = 4; // car 2
	upgradeVehicle[] = {"SkodaGreen_DZE4",{{"ItemTNK",1},{"PartFueltank",2}}};
};

// Fuel 4
class Skoda_DZE4: Skoda_DZE3
{
	fuelCapacity = 210; // car 100
};
class SkodaBlue_DZE4: SkodaBlue_DZE3
{
	fuelCapacity = 210; // car 100
};
class SkodaRed_DZE4: SkodaRed_DZE3
{
	fuelCapacity = 210; // car 100
};
class SkodaGreen_DZE4: SkodaGreen_DZE3
{
	fuelCapacity = 210; // car 100
};

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
	displayname = "Old hatchback";
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

// Performance 1
class car_hatchback_DZE1: car_hatchback
{
	maxspeed = 150; // max engine limit 125-130
	terrainCoef = 2.5;
	upgradeVehicle[] = {"car_hatchback_DZE2",{{"ItemAVE",1},{"PartGeneric",1},{"ItemTankTrap",1}}};
};
// Armor 2
class car_hatchback_DZE2: car_hatchback_DZE1
{
	armor = 50; // car 20
	upgradeVehicle[] = {"car_hatchback_DZE3",{{"ItemLRK",1},{"ItemTent",1}}};
	
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
class car_hatchback_DZE3: car_hatchback_DZE2
{
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50 
    transportmaxbackpacks = 4; // car 2
	upgradeVehicle[] = {"car_hatchback_DZE4",{{"ItemTNK",1},{"PartFueltank",2}}};
};
// Fuel 4
class car_hatchback_DZE4: car_hatchback_DZE3
{
	fuelCapacity = 210; // car 100
};


class car_sedan : SkodaBase
  {
    scope = 2;
    faction = "CIV";
    maxSpeed = 125;
    model = "\ca\Wheeled\car_sedan";
    picture = "\Ca\wheeled\data\ico\car_sedan_CA.paa";
    Icon = "\Ca\wheeled\data\map_ico\icomap_skoda_CA.paa";
    mapSize = 6;
    typicalCargo[] = {
      "Citizen4"
    };
    crew = "Citizen4";
    displayName = "Sedan";
    driverAction = "Sedan_Driver";
    wheelCircumference = 1.947;
    soundGear[] = {
      "",
      5.62341e-005,
      1
    };
    soundGetIn[] = {
      "ca\sounds\vehicles\Wheeled\sedan\ext\ext-sedan-getout-1",
      0.316228,
      1
    };
    soundGetOut[] = {
      "ca\sounds\vehicles\Wheeled\sedan\ext\ext-sedan-getout-1",
      0.316228,
      1,
      30
    };
    soundEngineOnInt[] = {
      "ca\sounds\vehicles\Wheeled\sedan\int\int-sedan-start-1",
      0.398107,
      1
    };
    soundEngineOnExt[] = {
      "ca\sounds\vehicles\Wheeled\sedan\ext\ext-sedan-start-1",
      0.398107,
      1,
      250
    };
    soundEngineOffInt[] = {
      "ca\sounds\vehicles\Wheeled\sedan\int\int-sedan-stop-1",
      0.398107,
      1
    };
    soundEngineOffExt[] = {
      "ca\sounds\vehicles\Wheeled\sedan\ext\ext-sedan-stop-1",
      0.398107,
      1,
      250
    };
    buildCrash0[] = {
      "Ca\sounds\Vehicles\Crash\crash_building_01",
      0.707946,
      1,
      200
    };
    buildCrash1[] = {
      "Ca\sounds\Vehicles\Crash\crash_building_02",
      0.707946,
      1,
      200
    };
    buildCrash2[] = {
      "Ca\sounds\Vehicles\Crash\crash_building_03",
      0.707946,
      1,
      200
    };
    buildCrash3[] = {
      "Ca\sounds\Vehicles\Crash\crash_building_04",
      0.707946,
      1,
      200
    };
    soundBuildingCrash[] = {
      "buildCrash0",
      0.25,
      "buildCrash1",
      0.25,
      "buildCrash2",
      0.25,
      "buildCrash3",
      0.25
    };
    WoodCrash0[] = {
      "Ca\sounds\Vehicles\Crash\crash_mix_wood_01",
      0.707946,
      1,
      200
    };
    WoodCrash1[] = {
      "Ca\sounds\Vehicles\Crash\crash_mix_wood_02",
      0.707946,
      1,
      200
    };
    WoodCrash2[] = {
      "Ca\sounds\Vehicles\Crash\crash_mix_wood_03",
      0.707946,
      1,
      200
    };
    WoodCrash3[] = {
      "Ca\sounds\Vehicles\Crash\crash_mix_wood_04",
      0.707946,
      1,
      200
    };
    WoodCrash4[] = {
      "Ca\sounds\Vehicles\Crash\crash_mix_wood_05",
      0.707946,
      1,
      200
    };
    WoodCrash5[] = {
      "Ca\sounds\Vehicles\Crash\crash_mix_wood_06",
      0.707946,
      1,
      200
    };
    soundWoodCrash[] = {
      "woodCrash0",
      0.166,
      "woodCrash1",
      0.166,
      "woodCrash2",
      0.166,
      "woodCrash3",
      0.166,
      "woodCrash4",
      0.166,
      "woodCrash5",
      0.166
    };
    ArmorCrash0[] = {
      "Ca\sounds\Vehicles\Crash\crash_vehicle_01",
      0.707946,
      1,
      200
    };
    ArmorCrash1[] = {
      "Ca\sounds\Vehicles\Crash\crash_vehicle_02",
      0.707946,
      1,
      200
    };
    ArmorCrash2[] = {
      "Ca\sounds\Vehicles\Crash\crash_vehicle_03",
      0.707946,
      1,
      200
    };
    ArmorCrash3[] = {
      "Ca\sounds\Vehicles\Crash\crash_vehicle_04",
      0.707946,
      1,
      200
    };
    soundArmorCrash[] = {
      "ArmorCrash0",
      0.25,
      "ArmorCrash1",
      0.25,
      "ArmorCrash2",
      0.25,
      "ArmorCrash3",
      0.25
    };
    class SoundEvents
    {
      class AccelerationIn
      {
        sound[] = {
          "\ca\SOUNDS\Vehicles\Wheeled\sedan\int\int-sedan-acce-2",
          0.398107,
          1
        };
        limit = "0.5";
        expression = "(engineOn*(1-camPos))*gmeterZ";
      };
      class AccelerationOut
      {
        sound[] = {
          "\ca\SOUNDS\Vehicles\Wheeled\sedan\ext\ext-sedan-acce-2",
          0.398107,
          1,
          250
        };
        limit = "0.5";
        expression = "(engineOn*camPos)*gmeterZ";
      };
    };
    class Sounds
    {
      class Engine
      {
        sound[] = {
          "\ca\sounds\Vehicles\Wheeled\sedan\ext\ext-sedan-low-1",
          0.562341,
          0.95,
          300
        };
        frequency = "(randomizer*0.05+0.95)*rpm";
        volume = "engineOn*camPos*(rpm factor[0.6, 0.2])";
      };
      class EngineHighOut
      {
        sound[] = {
          "\ca\sounds\Vehicles\Wheeled\sedan\ext\ext-sedan-high-1",
          0.562341,
          0.95,
          399
        };
        frequency = "(randomizer*0.05+0.98)*rpm";
        volume = "engineOn*camPos*(rpm factor[0.45, 0.9])";
      };
      class IdleOut
      {
        sound[] = {
          "\ca\SOUNDS\Vehicles\Wheeled\sedan\ext\ext-sedan-idle-1",
          0.354813,
          1,
          200
        };
        frequency = "1";
        volume = "engineOn*camPos*(rpm factor[0.3, 0])";
      };
      class TiresRockOut
      {
        sound[] = {
          "\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-rock2",
          0.1,
          1,
          30
        };
        frequency = "1";
        volume = "camPos*rock*(speed factor[2, 20])";
      };
      class TiresSandOut
      {
        sound[] = {
          "\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-sand2",
          0.1,
          1,
          30
        };
        frequency = "1";
        volume = "camPos*sand*(speed factor[2, 20])";
      };
      class TiresGrassOut
      {
        sound[] = {
          "\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-grass3",
          0.1,
          1,
          30
        };
        frequency = "1";
        volume = "camPos*grass*(speed factor[2, 20])";
      };
      class TiresMudOut
      {
        sound[] = {
          "\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-mud2",
          0.1,
          1,
          30
        };
        frequency = "1";
        volume = "camPos*mud*(speed factor[2, 20])";
      };
      class TiresGravelOut
      {
        sound[] = {
          "\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-gravel2",
          0.1,
          1,
          30
        };
        frequency = "1";
        volume = "camPos*gravel*(speed factor[2, 20])";
      };
      class TiresAsphaltOut
      {
        sound[] = {
          "\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-asphalt3",
          0.1,
          1,
          30
        };
        frequency = "1";
        volume = "camPos*asphalt*(speed factor[2, 20])";
      };
      class NoiseOut
      {
        sound[] = {
          "\ca\SOUNDS\Vehicles\Wheeled\Noises\ext\int-noise3",
          0.1,
          1,
          30
        };
        frequency = "1";
        volume = "camPos*(damper0 max 0.04)*(speed factor[0, 8])";
      };
      class EngineLowIn
      {
        sound[] = {
          "\ca\SOUNDS\Vehicles\Wheeled\sedan\int\int-sedan-low-1",
          0.562341,
          0.95
        };
        frequency = "(randomizer*0.05+0.95)*rpm";
        volume = "((engineOn*thrust) factor[0.65, 0.2])*(1-camPos)";
      };
      class EngineHighIn
      {
        sound[] = {
          "\ca\SOUNDS\Vehicles\Wheeled\sedan\int\int-sedan-high-1",
          0.562341,
          0.95
        };
        frequency = "(randomizer*0.05+0.95)*rpm";
        volume = "((engineOn*thrust) factor[0.55, 0.95])*(1-camPos)";
      };
      class IdleIn
      {
        sound[] = {
          "\ca\sounds\Vehicles\Wheeled\sedan\int\int-sedan-idle-1",
          0.354813,
          1
        };
        frequency = "1";
        volume = "engineOn*(rpm factor[0.3, 0])*(1-camPos)";
      };
      class TiresRockIn
      {
        sound[] = {
          "\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-rock2",
          0.1,
          1
        };
        frequency = "1";
        volume = "(1-camPos)*rock*(speed factor[2, 20])";
      };
      class TiresSandIn
      {
        sound[] = {
          "\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-sand2",
          0.1,
          1
        };
        frequency = "1";
        volume = "(1-camPos)*sand*(speed factor[2, 20])";
      };
      class TiresGrassIn
      {
        sound[] = {
          "\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-grass3",
          0.1,
          1
        };
        frequency = "1";
        volume = "(1-camPos)*grass*(speed factor[2, 20])";
      };
      class TiresMudIn
      {
        sound[] = {
          "\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-mud2",
          0.1,
          1
        };
        frequency = "1";
        volume = "(1-camPos)*mud*(speed factor[2, 20])";
      };
      class TiresGravelIn
      {
        sound[] = {
          "\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-gravel2",
          0.1,
          1
        };
        frequency = "1";
        volume = "(1-camPos)*gravel*(speed factor[2, 20])";
      };
      class TiresAsphaltIn
      {
        sound[] = {
          "\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-asphalt3",
          0.1,
          1
        };
        frequency = "1";
        volume = "(1-camPos)*asphalt*(speed factor[2, 20])";
      };
      class NoiseIn
      {
        sound[] = {
          "\ca\SOUNDS\Vehicles\Wheeled\BUS\int\noise3",
          0.177828,
          1
        };
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
      libTextDesc = "Civilian Car";
    };
    class Damage
    {
      tex[] = {
      };
      mat[] = {
        "ca\wheeled\data\sedan_ext.rvmat",
        "ca\wheeled\data\sedan_ext.rvmat",
        "ca\wheeled\data\sedan_ext_destruct.rvmat",
        "ca\wheeled\data\sedan_int.rvmat",
        "ca\wheeled\data\sedan_int.rvmat",
        "ca\wheeled\data\sedan_int_destruct.rvmat",
        "ca\wheeled\data\detailmapy\auta_skla.rvmat",
        "ca\wheeled\data\detailmapy\auta_skla_damage.rvmat",
        "ca\wheeled\data\detailmapy\auta_skla_damage.rvmat",
        "ca\wheeled\data\detailmapy\auta_skla_in.rvmat",
        "ca\wheeled\data\detailmapy\auta_skla_in_damage.rvmat",
        "ca\wheeled\data\detailmapy\auta_skla_in_damage.rvmat"
      };
    };
    hiddenSelections[] = {
      "Camo1"
    };
    hiddenSelectionsTextures[] = {
      "\ca\wheeled\data\sedan_ext_co.paa"
    };
    rarityUrban = 0.6;
  };


  // Performance 1
class car_sedan_DZE1: car_sedan
{
	maxspeed = 150; // max engine limit 125-130
	terrainCoef = 2.5;
	upgradeVehicle[] = {"car_sedan_DZE2",{{"ItemAVE",1},{"PartGeneric",1},{"ItemTankTrap",1}}};
};
// Armor 2
class car_sedan_DZE2: car_sedan_DZE1
{
	armor = 50; // car 20
	upgradeVehicle[] = {"car_sedan_DZE3",{{"ItemLRK",1},{"ItemTent",1}}};
	
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
class car_sedan_DZE3: car_sedan_DZE2
{
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50 
    transportmaxbackpacks = 4; // car 2
	upgradeVehicle[] = {"car_sedan_DZE4",{{"ItemTNK",1},{"PartFueltank",2}}};
};
// Fuel 4
class car_sedan_DZE4: car_sedan_DZE3
{
	fuelCapacity = 210; // car 100
};