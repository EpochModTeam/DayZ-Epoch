class VWGolf : Car {
	class HitPoints : HitPoints {
		class HitLFWheel : HitLFWheel {
		armor = 0.3;
		name = "wheel_1_1_steering";
		};
		class HitLBWheel : HitLBWheel {
		armor = 0.3;
		};
		class HitRFWheel : HitRFWheel {
		armor = 0.3;
		name = "wheel_2_1_steering";
		};
		class HitRBWheel : HitRBWheel {
		armor = 0.3;
		};
	};
	wheelCircumference = 2.02;
	scope = public;
	model = "\ca\wheeled2\VWGOLF\vwgolf.p3d";
	icon = "\ca\wheeled2\data\UI\Icon_VWGolf_CA.paa";
	picture = "\ca\wheeled2\data\UI\Picture_VWGolf_CA.paa";
	displayname = "Hatchback";
	class Library {
		libTextDesc = "The Wolkie is a German-made small family car, sold in US as the Bunny.";
	};
	side = 3;
	faction = "CIV";
	vehicleClass = "Car";
	crew = "";
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};
	maxSpeed = 241;
	terrainCoef = 6;
	turnCoef = 2;
	steerAheadPlan = 0.15;
	transportSoldier = 4;
	weapons[] = {
		"SportCarHorn"
	};
	magazines[] = {
	};
	class Turrets {
	};
	armor = 20;
	damageResistance = 0.01511;
	cost = 5000;
	fuelCapacity = 50;
	memoryPointsGetInCargo[] = {
		"pos cargo 1",
		"pos cargo 2",
		"pos cargo 3",
		"pos cargo 4"
	};
	memoryPointsGetInCargoDir[] = {
		"pos cargo dir 1",
		"pos cargo dir 2",
		"pos cargo dir 3",
		"pos cargo dir 4"
	};
	DriverAction = "Golf_Driver";
	cargoAction[] = {
		"Golf_Cargo01",
		"Golf_Cargo02",
		"Golf_Cargo02",
		"Golf_Cargo03"
	};
	cargoIsCoDriver[] = {
		0
	};
	soundGear[] = {
		"",
		0.000177828,
		1
	};
	insideSoundCoef = 0.9;
	SoundGetIn[] = {
		"ca\sounds\Vehicles\wheeled\GOLF\ext\ext-golf-getout",
		0.562341,
		1
	};
	SoundGetOut[] = {
		"ca\sounds\Vehicles\wheeled\GOLF\ext\ext-golf-getout",
		0.562341,
		1,
		40
	};
	soundEngineOnInt[] = {
		"ca\sounds\Vehicles\Wheeled\GOLF\int\int-golf-start-1",
		0.562341,
		1
	};
	soundEngineOnExt[] = {
		"ca\sounds\Vehicles\Wheeled\GOLF\ext\ext-golf-start-1",
		0.562341,
		1,
		250
	};
	soundEngineOffInt[] = {
		"ca\sounds\vehicles\Wheeled\GOLF\int\int-golf-stop-1",
		0.562341,
		1
	};
	soundEngineOffExt[] = {
		"ca\sounds\vehicles\Wheeled\GOLF\ext\ext-golf-stop-1",
		0.562341,
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
	class SoundEvents {
		class AccelerationIn {
		sound[] = {
			"ca\sounds\Vehicles\Wheeled\GOLF\int\int-golf-acce-1",
			0.891251,
			1
		};
		limit = "0.15";
		expression = "engineOn*(1-camPos)*2*gmeterZ*((speed factor[1.5, 5]) min (speed factor[5, 1.5]))";
		};
		class AccelerationOut {
		sound[] = {
			"ca\sounds\Vehicles\Wheeled\GOLF\ext\ext-golf-acce-1",
			0.562341,
			1,
			250
		};
		limit = "0.15";
		expression = "engineOn*camPos*2*gmeterZ*((speed factor[1.5, 5]) min (speed factor[5, 1.5]))";
		};
	};
	class Sounds {
		class Engine {
		sound[] = {
			"ca\sounds\Vehicles\Wheeled\GOLF\ext\ext-golf-low-1",
			0.398107,
			1,
			300
		};
		frequency = "(randomizer*0.05+1.25)*rpm";
		volume = "camPos*engineOn*((rpm factor[0.25, 0.4]) min (rpm factor[0.6, 0.45]))";
		};
		class EngineHighOut {
		sound[] = {
			"ca\sounds\Vehicles\Wheeled\GOLF\ext\ext-golf-high-1",
			0.398107,
			0.8,
			450
		};
		frequency = "(randomizer*0.05+1.1)*rpm";
		volume = "camPos*engineOn*(rpm factor[0.5, 0.9])";
		};
		class IdleOut {
		sound[] = {
			"ca\sounds\Vehicles\Wheeled\GOLF\ext\ext-golf-idle-1",
			0.316228,
			1,
			100
		};
		frequency = "1";
		volume = "engineOn*camPos*(rpm factor[0.4, 0])";
		};
		class TiresRockOut {
		sound[] = {
			"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-rock2",
			0.0562341,
			1,
			40
		};
		frequency = "1";
		volume = "camPos*rock*(speed factor[4, 20])";
		};
		class TiresSandOut {
		sound[] = {
			"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-sand2",
			0.0562341,
			1,
			40
		};
		frequency = "1";
		volume = "camPos*sand*(speed factor[4, 20])";
		};
		class TiresGrassOut {
		sound[] = {
			"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-grass3",
			0.0562341,
			1,
			40
		};
		frequency = "1";
		volume = "camPos*grass*(speed factor[4, 20])";
		};
		class TiresMudOut {
		sound[] = {
			"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-mud2",
			0.0562341,
			1,
			40
		};
		frequency = "1";
		volume = "camPos*mud*(speed factor[4, 20])";
		};
		class TiresGravelOut {
		sound[] = {
			"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-gravel2",
			0.0562341,
			1,
			40
		};
		frequency = "1";
		volume = "camPos*gravel*(speed factor[4, 20])";
		};
		class TiresAsphaltOut {
		sound[] = {
			"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-asphalt3",
			0.0562341,
			1,
			40
		};
		frequency = "1";
		volume = "camPos*asphalt*(speed factor[4, 20])";
		};
		class NoiseOut {
		sound[] = {
			"ca\sounds\Vehicles\Wheeled\Noises\ext\noise2",
			0.0562341,
			1,
			40
		};
		frequency = "1";
		volume = "camPos*(damper0 max 0.036)*(speed factor[0, 8])";
		};
		class EngineLowIn {
		sound[] = {
			"ca\sounds\Vehicles\Wheeled\GOLF\int\int-golf-low-1",
			0.707946,
			1
		};
		frequency = "(randomizer*0.05+1.3)*rpm";
		volume = "(1-camPos)*engineOn*((rpm factor[0.3, 0.5]) min (rpm factor[0.7, 0.52]))";
		};
		class EngineHighIn {
		sound[] = {
			"ca\sounds\Vehicles\Wheeled\GOLF\int\int-golf-high-1",
			0.707946,
			0.95
		};
		frequency = "(randomizer*0.05+1.2)*rpm";
		volume = "(1-camPos)*engineOn*(rpm factor[0.6, 1.0])";
		};
		class IdleIn {
		sound[] = {
			"ca\sounds\Vehicles\Wheeled\GOLF\int\int-golf-idle-1",
			0.562341,
			1
		};
		frequency = "1";
		volume = "(1-camPos)*engineOn*(rpm factor[0.4, 0])";
		};
		class TiresRockIn {
		sound[] = {
			"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-rock2",
			0.0707946,
			1
		};
		frequency = "1";
		volume = "(1-camPos)*rock*(speed factor[2, 20])";
		};
		class TiresSandIn {
		sound[] = {
			"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-sand2",
			0.0707946,
			1
		};
		frequency = "1";
		volume = "(1-camPos)*sand*(speed factor[2, 20])";
		};
		class TiresGrassIn {
		sound[] = {
			"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-grass3",
			0.0707946,
			1
		};
		frequency = "1";
		volume = "(1-camPos)*grass*(speed factor[2, 20])";
		};
		class TiresMudIn {
		sound[] = {
			"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-mud2",
			0.0707946,
			1
		};
		frequency = "1";
		volume = "(1-camPos)*mud*(speed factor[2, 20])";
		};
		class TiresGravelIn {
		sound[] = {
			"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-gravel2",
			0.0707946,
			1
		};
		frequency = "1";
		volume = "(1-camPos)*gravel*(speed factor[2, 20])";
		};
		class TiresAsphaltIn {
		sound[] = {
			"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-asphalt3",
			0.0562341,
			1
		};
		frequency = "1";
		volume = "(1-camPos)*asphalt*(speed factor[2, 20])";
		};
		class NoiseIn {
		sound[] = {
			"ca\sounds\Vehicles\Wheeled\Noises\int\int-noise2",
			0.1,
			1
		};
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
		tex[] = {
		};
		mat[] = {
		"ca\wheeled2\VWGOLF\Data\VWgolf_body.rvmat",
		"ca\wheeled2\VWGOLF\Data\vwgolf_body_damage.rvmat",
		"ca\wheeled2\VWGOLF\Data\VWgolf_body_destruct.rvmat",
		"ca\wheeled2\VWGOLF\Data\VWGolf_carriage.rvmat",
		"ca\wheeled2\VWGOLF\Data\VWGolf_carriage.rvmat",
		"ca\wheeled2\VWGOLF\Data\VWGolf_carriage_destruct.rvmat",
		"ca\wheeled2\VWGOLF\Data\VWgolf_interier2.rvmat",
		"ca\wheeled2\VWGOLF\Data\VWgolf_interier2.rvmat",
		"ca\wheeled2\VWGOLF\Data\VWgolf_interier2_destruct.rvmat",
		"ca\wheeled2\VWGOLF\Data\VWgolf_interier.rvmat",
		"ca\wheeled2\VWGOLF\Data\VWgolf_interier.rvmat",
		"ca\wheeled2\VWGOLF\Data\VWgolf_interier_destruct.rvmat",
		"ca\wheeled2\VWGOLF\Data\VWgolf_sklo.rvmat",
		"ca\wheeled2\VWGOLF\Data\VWgolf_sklo_damage.rvmat",
		"ca\wheeled2\VWGOLF\Data\VWgolf_sklo_damage.rvmat",
		"ca\wheeled2\VWGOLF\Data\VWgolf_sklo_in.rvmat",
		"ca\wheeled2\VWGOLF\Data\VWgolf_sklo_in_damage.rvmat",
		"ca\wheeled2\VWGOLF\Data\VWgolf_sklo_in_damage.rvmat",
		"ca\wheeled2\VWGOLF\Data\vwgolf_wheels.rvmat",
		"ca\wheeled2\VWGOLF\Data\vwgolf_wheels.rvmat",
		"ca\wheeled2\VWGOLF\Data\vwgolf_wheels_destruct.rvmat"
		};
	};
	hiddenSelections[] = {
		"Camo1",
		"Camo2",
		"Camo3",
		"Camo4"
	};
	hiddenSelectionsTextures[] = {
		"\ca\wheeled2\vwgolf\data\vwgolf_body_co.paa",
		"\ca\wheeled2\vwgolf\data\vwgolf_carriage_co.paa",
		"\ca\wheeled2\vwgolf\data\vwgolf_interier_co.paa",
		"\ca\wheeled2\vwgolf\data\vwgolf_interier2_co.paa"
	};
	dammageHalf[] = {
	};
	dammageFull[] = {
	};
	rarityUrban = 0.9;

	class Upgrades {
		ItemORP[] = {"VWGolf_DZE1",{},{{"ItemORP",1},{"PartEngine",2}}};
	};
};

// Performance 1
class VWGolf_DZE1: VWGolf {
	original = "VWGolf";
	maxSpeed = 260; // VW maxspeed from above =241
	terrainCoef = 2.5;

	class Upgrades {
		ItemAVE[] = {"VWGolf_DZE2",{},{{"ItemAVE",1},{"PartGeneric",4},{"ItemTankTrap",2}}};
	};
};

// Armor 2
class VWGolf_DZE2: VWGolf_DZE1 {
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
		ItemLRK[] = {"VWGolf_DZE3",{},{{"ItemLRK",1},{"PartGeneric",1},{"ItemTent",1}}};
	};
};

// Cargo 3
class VWGolf_DZE3: VWGolf_DZE2 {
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportmaxbackpacks = 4; // car 2

	class Upgrades {
		ItemTNK[] = {"VWGolf_DZE4",{},{{"ItemTNK",1},{"PartFueltank",2}}};
	};
};

// Fuel 4
class VWGolf_DZE4: VWGolf_DZE3 {
	fuelCapacity = 150; // car 100
};
