class Lada_base: Car {
	wheelCircumference = 1.866;
	scope = protected;
	model = "\CA\wheeled2\Lada\Lada.p3d";
	picture = "\Ca\wheeled2\data\UI\Picture_lada_ca.paa";
	displayname = "UAZ";
	class Library {
		libTextDesc = "The Lada Riva 1500 is a medium-size Russian-made family car.";
	};
	side = 3;
	faction = "CIV";
	vehicleClass = "Car";
	crew = "";
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};
	maxSpeed = 120;
	terrainCoef = 6;
	turnCoef = 2;
	steerAheadPlan = 0.15;
	transportSoldier = 3;
	weapons[] = {"CarHorn"};
	magazines[] = {};
	class Turrets {
	};
	armor = 20;
	damageResistance = 0.01511;
	cost = 3000;
	fuelCapacity = 50;
	memoryPointsGetInCargo[] = {"pos cargo 1","pos cargo 2","pos cargo 3","pos cargo 4"};
	memoryPointsGetInCargoDir[] = {"pos cargo dir 1","pos cargo dir 2","pos cargo dir 3","pos cargo dir 4"};
	DriverAction = "Golf_Driver";
	cargoAction[] = {"Golf_Cargo01","Golf_Cargo02","Golf_Cargo02"};
	cargoIsCoDriver[] = {0};
	soundGear[] = {"",0.000562341,1};
	SoundGetIn[] = {"\ca\sounds\vehicles\wheeled\offroad\ext\ext-offroad-getout-1",0.251189,1};
	SoundGetOut[] = {"\ca\sounds\vehicles\wheeled\offroad\ext\ext-offroad-getout-1",0.251189,1,30};
	soundEngineOnInt[] = {"ca\sounds\Vehicles\Wheeled\offroad\int\int-offroad-start-1",0.316228,1};
	soundEngineOnExt[] = {"ca\sounds\Vehicles\Wheeled\offroad\ext\ext-offroad-start-1",0.316228,1,250};
	soundEngineOffInt[] = {"ca\sounds\Vehicles\Wheeled\offroad\int\int-offroad-stop-1",0.316228,1};
	soundEngineOffExt[] = {"ca\sounds\Vehicles\Wheeled\offroad\ext\ext-offroad-stop-1",0.316228,1,250};
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
	class SoundEvents {
		class AccelerationIn {
			sound[] = {"ca\sounds\Vehicles\Wheeled\offroad\int\int-offroad-acce-1",0.316228,1};
			limit = "0.7";
			expression = "(engineOn*(1-camPos))*gmeterZ*(speed factor[2.5, 4])";
		};
		class AccelerationOut {
			sound[] = {"ca\sounds\Vehicles\Wheeled\offroad\ext\ext-offroad-acce-1",0.316228,1,280};
			limit = "0.7";
			expression = "(engineOn*camPos)*gmeterZ*(speed factor[2.5, 4])";
		};
	};
	class Sounds {
		class Engine {
			sound[] = {"ca\sounds\Vehicles\Wheeled\offroad\ext\ext-offroad-low-1",0.562341,1.2,300};
			frequency = "(randomizer*0.05+0.95)*rpm";
			volume = "camPos*engineOn*((rpm factor[0.21, 0.5]) min (rpm factor[0.7, 0.3]))";
		};
		class EngineHighOut {
			sound[] = {"ca\sounds\Vehicles\Wheeled\offroad\ext\ext-offroad-high-2",0.562341,1,400};
			frequency = "(randomizer*0.05+0.95)*rpm";
			volume = "camPos*engineOn*(rpm factor[0.5, 0.99])";
		};
		class IdleOut {
			sound[] = {"ca\sounds\Vehicles\Wheeled\offroad\ext\ext-offroad-idle-5",0.177828,1,200};
			frequency = "1";
			volume = "camPos*engineOn*(rpm factor[0.4, 0])";
		};
		class TiresRockOut {
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-rock2",0.177828,1,30};
			frequency = "1";
			volume = "camPos*rock*(speed factor[2, 20])";
		};
		class TiresSandOut {
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-sand2",0.177828,1,30};
			frequency = "1";
			volume = "camPos*sand*(speed factor[2, 20])";
		};
		class TiresGrassOut {
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-grass3",0.177828,1,30};
			frequency = "1";
			volume = "camPos*grass*(speed factor[2, 20])";
		};
		class TiresMudOut {
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-mud2",0.177828,1,30};
			frequency = "1";
			volume = "camPos*mud*(speed factor[2, 20])";
		};
		class TiresGravelOut {
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-gravel2",0.177828,1,30};
			frequency = "1";
			volume = "camPos*gravel*(speed factor[2, 20])";
		};
		class TiresAsphaltOut {
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-asphalt3",0.316228,1,30};
			frequency = "1";
			volume = "camPos*asphalt*(speed factor[2, 20])";
		};
		class NoiseOut {
			sound[] = {"ca\sounds\Vehicles\Wheeled\UAZ\ext\ext-noise",0.316228,1,30};
			frequency = "1";
			volume = "camPos*(damper0 max 0.02)*(speed factor[0, 8])";
		};
		class EngineLowIn {
			sound[] = {"ca\sounds\Vehicles\Wheeled\offroad\int\int-offroad-low-1",0.562341,1.2};
			frequency = "(randomizer*0.05+0.95)*rpm";
			volume = "(1-camPos)*engineOn*((rpm factor[0.2, 0.4]) min (rpm factor[0.7, 0.3]))";
		};
		class EngineHighIn {
			sound[] = {"ca\sounds\Vehicles\Wheeled\offroad\int\int-offroad-high-2",0.562341,1};
			frequency = "(randomizer*0.05+0.95)*rpm";
			volume = "(1-camPos)*engineOn*(rpm factor[0.56, 0.9])";
		};
		class IdleIn {
			sound[] = {"ca\sounds\Vehicles\Wheeled\offroad\int\int-offroad-idle-5",0.251189,1};
			frequency = "1";
			volume = "(1-camPos)*engineOn*(rpm factor[0.4, 0])";
		};
		class TiresRockIn {
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-rock2",0.177828,1};
			frequency = "1";
			volume = "(1-camPos)*rock*(speed factor[2, 20])";
		};
		class TiresSandIn {
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-sand2",0.177828,1};
			frequency = "1";
			volume = "(1-camPos)*sand*(speed factor[2, 20])";
		};
		class TiresGrassIn {
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-grass3",0.177828,1};
			frequency = "1";
			volume = "(1-camPos)*grass*(speed factor[2, 20])";
		};
		class TiresMudIn {
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-mud2",0.177828,1};
			frequency = "1";
			volume = "(1-camPos)*mud*(speed factor[2, 20])";
		};
		class TiresGravelIn {
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-gravel2",0.177828,1};
			frequency = "1";
			volume = "(1-camPos)*gravel*(speed factor[2, 20])";
		};
		class TiresAsphaltIn {
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-asphalt3",0.177828,1};
			frequency = "1";
			volume = "(1-camPos)*asphalt*(speed factor[2, 20])";
		};
		class NoiseIn {
			sound[] = {"ca\sounds\Vehicles\Wheeled\offroad\int\int-offroad-noise-1",0.177828,1};
			frequency = "1";
			volume = "(damper0 max 0.03)*(speed factor[0, 8])*(1-camPos)";
		};
		class Movement {
			sound = "soundEnviron";
			frequency = "1";
			volume = "0";
		};
	};
	class Damage {
		tex[] = {};
		mat[] = {"ca\wheeled2\Lada\Data\Lada_chrome.rvmat","ca\wheeled2\Lada\Data\Lada_chrome_damage.rvmat","ca\wheeled2\Lada\Data\Lada_chrome_destruct.rvmat","ca\wheeled2\Lada\Data\Lada_glass.rvmat","ca\wheeled2\Lada\Data\Lada_glass_damage.rvmat","ca\wheeled2\Lada\Data\Lada_glass_damage.rvmat","ca\wheeled2\Lada\Data\Lada_glass_in.rvmat","ca\wheeled2\Lada\Data\Lada_glass_in_damage.rvmat","ca\wheeled2\Lada\Data\Lada_glass_in_damage.rvmat","ca\wheeled2\Lada\Data\Lada_mat.rvmat","ca\wheeled2\Lada\Data\Lada_mat_damage.rvmat","ca\wheeled2\Lada\Data\Lada_mat_destruct.rvmat"};
	};
	rarityUrban = 0.5;
};

class Lada1: Lada_base {
	scope = public;
	displayname = "UAZ (White)";
	accuracy = 1000;
	hiddenSelections[] = {};
	rarityUrban = 0.6;

	class Upgrades {
		ItemORP[] = {"Lada1_DZE1",{},{{"ItemORP",1},{"PartEngine",2}}};
	};
};
class Lada2: Lada_base {
	scope = public;
	hiddenSelections[] = {"Camo1"};
	displayname = "UAZ (Red)";
	accuracy = 1000;
	hiddenSelectionsTextures[] = {"\ca\wheeled2\Lada\Data\Lada_red_CO.paa"};
	rarityUrban = 0.4;

	class Upgrades {
		ItemORP[] = {"Lada2_DZE1",{},{{"ItemORP",1},{"PartEngine",2}}};
	};
};
class LadaLM: Lada_base {
	scope = public;
	model = "\CA\wheeled2\Lada\Lada_LM.p3d";
	displayname = "UAZ (Militia)";
	class Reflectors: Reflectors {
		class Left: Left {
		};
		class Right: Right {
		};
		class Majak1 {
			color[] = {0.1,0.2,0.8,1};
			ambient[] = {0.01,0.01,0.1,1};
			position = "majak ligth 1 start";
			direction = "majak ligth 1 end";
			hitpoint = "";
			selection = "";
			size = 0.5;
			brightness = 0.5;
		};
		class Majak2: Majak1 {
			position = "majak ligth 2 start";
			direction = "majak ligth 2 end";
			hitpoint = "";
			selection = "";
		};
	};
	rarityUrban = 0.666;
	class Library {
		libTextDesc = "The Lada Riva 1500 is a medium-size Russian-made family car that also (as in this case) saw service with Soviet militia forces.";
	};

	class Upgrades {
		ItemORP[] = {"LadaLM_DZE1",{},{{"ItemORP",1},{"PartEngine",2}}};
	};
};
class Lada1_TK_CIV_EP1: Lada_base {
	expansion = 1;
	scope = public;
	side = 3;
	faction = "BIS_TK_CIV";
	hiddenSelections[] = {"Camo1","Camo2"};
	hiddenSelectionsTextures[] = {"\CA\wheeled_E\Lada\Data\Lada_ECIV1_CO.paa","\Ca\wheeled_E\Lada\Data\Lada_glass_ECIV1_CA.paa"};
	displayname = "Lada";
	accuracy = 1000;
	rarityUrban = 0.4;
	crew = "";
	typicalCargo[] = {};

	class Upgrades {
		ItemORP[] = {"Lada1_TK_CIV_EP1_DZE1",{},{{"ItemORP",1},{"PartEngine",2}}};
	};
};
class Lada2_TK_CIV_EP1: Lada_base {
	expansion = 1;
	scope = public;
	side = 3;
	faction = "BIS_TK_CIV";
	hiddenSelections[] = {"Camo1","Camo2"};
	hiddenSelectionsTextures[] = {"\CA\wheeled_E\Lada\Data\Lada_ECIV2_CO.paa","\Ca\wheeled_E\Lada\Data\Lada_glass_ECIV2_CA.paa"};
	displayname = "Lada (decorated)";
	accuracy = 1000;
	rarityUrban = 0.4;
	crew = "";
	typicalCargo[] = {};

	class Upgrades {
		ItemORP[] = {"Lada2_TK_CIV_EP1_DZE1",{},{{"ItemORP",1},{"PartEngine",2}}};
	};
};

// Performance 1
class Lada1_DZE1: Lada1 {
	original = "Lada1";
	maxspeed = 150; // max engine limit 125-130
	terrainCoef = 2.5;

	class Upgrades {
		ItemAVE[] = {"Lada1_DZE2",{},{{"ItemAVE",1},{"PartGeneric",4},{"ItemTankTrap",2}}};
	};
};
class Lada2_DZE1: Lada2 {
	original = "Lada2";
	maxspeed = 150; // car 100
	terrainCoef = 2.5;

	class Upgrades {
		ItemAVE[] = {"Lada2_DZE2",{},{{"ItemAVE",1},{"PartGeneric",4},{"ItemTankTrap",2}}};
	};
};
class LadaLM_DZE1: LadaLM {
	original = "LadaLM";
	maxspeed = 150; // car 100
	terrainCoef = 2.5;

	class Upgrades {
		ItemAVE[] = {"LadaLM_DZE2",{},{{"ItemAVE",1},{"PartGeneric",4},{"ItemTankTrap",2}}};
	};
};
class Lada1_TK_CIV_EP1_DZE1: Lada1_TK_CIV_EP1 {
	original = "Lada1_TK_CIV_EP1";
	maxspeed = 150; // car 100
	terrainCoef = 2.5;

	class Upgrades {
		ItemAVE[] = {"Lada1_TK_CIV_EP1_DZE2",{},{{"ItemAVE",1},{"PartGeneric",4},{"ItemTankTrap",2}}};
	};
};
class Lada2_TK_CIV_EP1_DZE1: Lada2_TK_CIV_EP1 {
	original = "Lada2_TK_CIV_EP1";
	maxspeed = 150; // car 100
	terrainCoef = 2.5;

	class Upgrades {
		ItemAVE[] = {"Lada2_TK_CIV_EP1_DZE2",{},{{"ItemAVE",1},{"PartGeneric",4},{"ItemTankTrap",2}}};
	};
};

// Armor 2
class Lada1_DZE2: Lada1_DZE1 {
	armor = 55; // car 20
	damageResistance = 0.02099;
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
		ItemLRK[] = {"Lada1_DZE3",{},{{"ItemLRK",1},{"PartGeneric",1},{"ItemTent",1}}};
	};
};
class Lada2_DZE2: Lada2_DZE1 {
	armor = 55; // car 20
	damageResistance = 0.02099;
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
		ItemLRK[] = {"Lada2_DZE3",{},{{"ItemLRK",1},{"PartGeneric",1},{"ItemTent",1}}};
	};
};
class LadaLM_DZE2: LadaLM_DZE1 {
	armor = 55; // car 20
	damageResistance = 0.02099;
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
		ItemLRK[] = {"LadaLM_DZE3",{},{{"ItemLRK",1},{"PartGeneric",1},{"ItemTent",1}}};
	};
};
class Lada1_TK_CIV_EP1_DZE2: Lada1_TK_CIV_EP1_DZE1 {
	armor = 55; // car 20
	damageResistance = 0.02099;
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
		ItemLRK[] = {"Lada1_TK_CIV_EP1_DZE3",{},{{"ItemLRK",1},{"PartGeneric",1},{"ItemTent",1}}};
	};
};
class Lada2_TK_CIV_EP1_DZE2: Lada2_TK_CIV_EP1_DZE1 {
	armor = 55; // car 20
	damageResistance = 0.02099;
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
		ItemLRK[] = {"Lada2_TK_CIV_EP1_DZE3",{},{{"ItemLRK",1},{"PartGeneric",1},{"ItemTent",1}}};
	};
};

// Cargo 3
class Lada1_DZE3: Lada1_DZE2 {
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportmaxbackpacks = 4; // car 2

	class Upgrades {
		ItemTNK[] = {"Lada1_DZE4",{},{{"ItemTNK",1},{"PartFueltank",2}}};
	};
};
class Lada2_DZE3: Lada2_DZE2 {
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportmaxbackpacks = 4; // car 2

	class Upgrades {
		ItemTNK[] = {"Lada2_DZE4",{},{{"ItemTNK",1},{"PartFueltank",2}}};
	};
};
class LadaLM_DZE3: LadaLM_DZE2 {
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportmaxbackpacks = 4; // car 2

	class Upgrades {
		ItemTNK[] = {"LadaLM_DZE4",{},{{"ItemTNK",1},{"PartFueltank",2}}};
	};
};
class Lada1_TK_CIV_EP1_DZE3: Lada1_TK_CIV_EP1_DZE2 {
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportmaxbackpacks = 4; // car 2

	class Upgrades {
		ItemTNK[] = {"Lada1_TK_CIV_EP1_DZE4",{},{{"ItemTNK",1},{"PartFueltank",2}}};
	};
};
class Lada2_TK_CIV_EP1_DZE3: Lada2_TK_CIV_EP1_DZE2 {
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportmaxbackpacks = 4; // car 2

	class Upgrades {
		ItemTNK[] = {"Lada2_TK_CIV_EP1_DZE4",{},{{"ItemTNK",1},{"PartFueltank",2}}};
	};
};

// Fuel 4
class Lada1_DZE4: Lada1_DZE3 {
	fuelCapacity = 150; // car 50
};
class Lada2_DZE4: Lada2_DZE3 {
	fuelCapacity = 150; // car 50
};
class LadaLM_DZE4: LadaLM_DZE3 {
	fuelCapacity = 150; // car 50
};
class Lada1_TK_CIV_EP1_DZE4: Lada1_TK_CIV_EP1_DZE3 {
	fuelCapacity = 150; // car 50
};
class Lada2_TK_CIV_EP1_DZE4: Lada2_TK_CIV_EP1_DZE3 {
	fuelCapacity = 150; // car 50
};

class GLT_M300_LT : Lada_base {};