class Volha_TK_CIV_Base_EP1: Car
{
	brakeDistance = 12;
	htMin = 60;
	htMax = 1800;
	afMax = 200;
	mfMax = 100;
	mFact = 0;
	tBody = 0;
	scope = 0;
	expansion = 1;
	model = "\ca\wheeled_E\Volha\Volha";
	side = 3;
	displayname = "GAZ";
	Icon = "\CA\wheeled_e\Data\UI\Icon_volha_CA.paa";
	Picture = "\CA\wheeled_e\Data\UI\Picture_volha_CA.paa";
	faction = "BIS_TK_CIV";
	crew = "TK_CIV_Takistani01_EP1";
	typicalCargo[] = {"TK_CIV_Takistani01_EP1","TK_CIV_Takistani01_EP1"};
	maxSpeed = 150;
	terrainCoef = 5;
	turnCoef = 2;
	armor = 20;
	damageResistance = 0.01413;
	transportSoldier = 3;
	weapons[] = {"SportCarHorn"};
	magazines[] = {};
	driverAction = "Volha_Driver_EP1";
	cargoAction[] = {"Volha_Cargo_EP1","Volha_Cargo02_EP1","Volha_Cargo01_EP1"};
	cargoIsCoDriver[] = {1,0};
	class Damage
	{
		tex[] = {};
		mat[] = {"Ca\wheeled_E\Volha\Data\Volha_ECIV.rvmat","Ca\wheeled_E\Volha\Data\Volha_ECIV_damage.rvmat","Ca\wheeled_E\Volha\Data\Volha_ECIV_destruct.rvmat","Ca\wheeled_E\Volha\Data\Volha_Glass_ECIV.rvmat","Ca\wheeled_E\Volha\Data\Volha_Glass_ECIV_damage.rvmat","Ca\wheeled_E\Volha\Data\Volha_Glass_ECIV_destruct.rvmat","Ca\wheeled_E\Volha\Data\Volha_Chrome_ECIV.rvmat","Ca\wheeled_E\Volha\Data\Volha_Chrome_ECIV_damage.rvmat","Ca\wheeled_E\Volha\Data\Volha_Chrome_ECIV_destruct.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default_destruct.rvmat"};
	};
	class HitPoints: HitPoints
	{
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
			name = "palivo";
			visual = "";
			passThrough = 1;
		};
		class HitEngine
		{
			armor = 0.5;
			material = -1;
			name = "motor";
			visual = "";
			passThrough = 1;
		};
		class HitGlass1: HitGlass1
		{
			armor = 0.05;
		};
		class HitGlass2: HitGlass2
		{
			armor = 0.05;
		};
		class HitGlass3: HitGlass3
		{
			armor = 0.05;
		};
		class HitGlass4: HitGlass4
		{
			armor = 0.05;
		};
	};
	outsideSoundFilter = 1;
	insideSoundCoef = 0.8;
	soundGear[] = {"",5.62341e-005,1};
	soundGetIn[] = {"\ca\Sounds_E\Wheeled_E\lada\lada_door",1,1};
	soundGetOut[] = {"\ca\Sounds_E\Wheeled_E\lada\lada_door",1,1,30};
	soundEngineOnInt[] = {"\ca\Sounds_E\Wheeled_E\lada\lada_int_start",1,1};
	soundEngineOnExt[] = {"\ca\Sounds_E\Wheeled_E\lada\lada_ext_start",1,1,100};
	soundEngineOffInt[] = {"\ca\Sounds_E\Wheeled_E\lada\lada_int_stop",1,1};
	soundEngineOffExt[] = {"\ca\Sounds_E\Wheeled_E\lada\lada_ext_stop",1,1,100};
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
			sound[] = {"\ca\Sounds_E\Wheeled_E\lada\lada_int_acceleration",0.562341,1};
			limit = "0.15";
			expression = "engineOn*(1-camPos)*2*gmeterZ*((speed factor[1.5, 5]) min (speed factor[5, 1.5]))";
		};
		class AccelerationOut
		{
			sound[] = {"\ca\Sounds_E\Wheeled_E\lada\lada_ext_acceleration",0.562341,1,300};
			limit = "0.15";
			expression = "engineOn*camPos*2*gmeterZ*((speed factor[1.5, 5]) min (speed factor[5, 1.5]))";
		};
	};
	class Sounds
	{
		class Engine
		{
			sound[] = {"\ca\Sounds_E\Wheeled_E\lada\lada_ext_low",1.41254,0.6,200};
			frequency = "(randomizer*0.05+0.95)*rpm";
			volume = "camPos*engineOn*((rpm factor[0.3, 0.4]) min (rpm factor[0.7, 0.5]))";
		};
		class EngineHighOut
		{
			sound[] = {"\ca\Sounds_E\Wheeled_E\lada\lada_ext_mid",1.41254,0.6,300};
			frequency = "(randomizer*0.05+0.95)*rpm";
			volume = "camPos*engineOn*(rpm factor[0.5, 0.8])";
		};
		class IdleOut
		{
			sound[] = {"\ca\Sounds_E\Wheeled_E\lada\lada_ext_idle",0.562341,1,100};
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
			sound[] = {"\ca\Sounds_E\Wheeled_E\lada\lada_int_low",1.41254,0.6};
			frequency = "(randomizer*0.05+0.95)*rpm";
			volume = "(1-camPos)*engineOn*((rpm factor[0.3, 0.4]) min (rpm factor[0.7, 0.5]))";
		};
		class EngineHighIn
		{
			sound[] = {"\ca\Sounds_E\Wheeled_E\lada\lada_int_mid",1.41254,0.6};
			frequency = "(randomizer*0.05+0.95)*rpm";
			volume = "(1-camPos)*engineOn*(rpm factor[0.5, 0.8])";
		};
		class IdleIn
		{
			sound[] = {"\ca\Sounds_E\Wheeled_E\lada\lada_int_idle",0.794328,1};
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
		libTextDesc = "The Vloha GAZ-24 is a Russia automobile produced since 1968 to 1977. It is still famous for fantastic roadworthiness and durability. Many of this cars have more that 1.000.000 km on their odometer while still functional.";
	};
	class Turrets
	{
	};
};
class Volha_1_TK_CIV_EP1: Volha_TK_CIV_Base_EP1
{
	scope = 2;
	accuracy = 1000;
	displayname = "GAZ (blue)";
};
class Volha_2_TK_CIV_EP1: Volha_TK_CIV_Base_EP1
{
	scope = 2;
	accuracy = 1000;
	displayname = "GAZ (grey)";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"ca\wheeled_E\Volha\Data\Volha_Gray_ECIV_CO"};
};
class VolhaLimo_TK_CIV_EP1: Volha_TK_CIV_Base_EP1
{
	scope = 2;
	accuracy = 1000;
	displayname = "GAZ Limo";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"ca\wheeled_E\Volha\Data\Volha_Black_ECIV_CO"};
};

// Performance 1
class VolhaLimo_TK_CIV_EP1_DZE1: VolhaLimo_TK_CIV_EP1
{
	maxspeed = 150; // max engine limit 125-130
	terrainCoef = 2.5;
};
class Volha_1_TK_CIV_EP1_DZE1: Volha_1_TK_CIV_EP1
{
	maxspeed = 150; // car 100
	terrainCoef = 2.5;
};
class Volha_2_TK_CIV_EP1_DZE1: Volha_2_TK_CIV_EP1
{
	maxspeed = 150; // car 100
	terrainCoef = 2.5;
};
// Armmor 2
class VolhaLimo_TK_CIV_EP1_DZE2: VolhaLimo_TK_CIV_EP1_DZE1
{
	armor = 50; // car 20

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
class Volha_1_TK_CIV_EP1_DZE2: Volha_1_TK_CIV_EP1_DZE1
{
	armor = 50; // car 20

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
class Volha_2_TK_CIV_EP1_DZE2: Volha_2_TK_CIV_EP1_DZE1
{
	armor = 50; // car 20

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
class VolhaLimo_TK_CIV_EP1_DZE3: VolhaLimo_TK_CIV_EP1_DZE2
{
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50 
    transportmaxbackpacks = 4; // car 2
};
class Volha_1_TK_CIV_EP1_DZE3: Volha_1_TK_CIV_EP1_DZE2
{
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50 
    transportmaxbackpacks = 4; // car 2
};
class Volha_2_TK_CIV_EP1_DZE3: Volha_2_TK_CIV_EP1_DZE2
{
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50 
    transportmaxbackpacks = 4; // car 2
};
// Fuel 4
class VolhaLimo_TK_CIV_EP1_DZE4: VolhaLimo_TK_CIV_EP1_DZE3
{
	fuelCapacity = 210; // car 100
};
class Volha_1_TK_CIV_EP1_DZE4: Volha_1_TK_CIV_EP1_DZE3
{
	fuelCapacity = 210; // car 100
};
class Volha_2_TK_CIV_EP1_DZE4: Volha_2_TK_CIV_EP1_DZE3
{
	fuelCapacity = 210; // car 100
};