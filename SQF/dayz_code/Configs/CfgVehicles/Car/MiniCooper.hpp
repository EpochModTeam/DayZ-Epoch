class Mini_Cooper_base: epoch_car
{
	scope = 0;
	displayname = "Mini Cooper";
	model = "\z\addons\dayz_epoch_v\vehicles\mini\dze_cooper_s";
	picture = "\dayz_epoch_c\icons\vehicles\minicooper.paa";
	transportsoldier = 1;
	fuelCapacity = 100;
	class HitPoints;
	class HitLFWheel;
	class HitLBWheel;
	class HitRFWheel;
	class HitRBWheel;
	class HitFuel;
	class HitEngine;
	class HitGlass1;
	class HitGlass2;
	class HitGlass3;
	class HitGlass4;
	maxspeed = 110;
	weapons[] = {"SportCarHorn"};
	driverAction = "Golf_Driver";
	cargoaction[] = {"Hatchback_Cargo01","suv_cargo02_ep1","Hatchback_Cargo01","suv_cargo02_ep1","Hatchback_Cargo01"};
	typicalcargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};	
	crew = "";
	hiddenselections[] = {"camo1"};
	hiddenselectionstextures[]= {"\z\addons\dayz_epoch_v\vehicles\mini\data\dze_mini_co.paa"};
	
	class damage
	{
		tex[]={};
		mat[]=
		{
			"z\addons\dayz_epoch_v\vehicles\mini\data\dze_mini.rvmat",
			"z\addons\dayz_epoch_v\vehicles\mini\data\dze_mini_damage.rvmat",
			"z\addons\dayz_epoch_v\vehicles\mini\data\dze_mini_destruct.rvmat",

			"z\addons\dayz_epoch_v\vehicles\mini\data\dze_mini_glass.rvmat",
			"Ca\wheeled_E\Data\auta_skla_damage.rvmat",
			"Ca\wheeled_E\Data\auta_skla_damage.rvmat"
		};
	};
	
	class NVGMarkers {};
	soundGear[]={,db-75,1};
	insideSoundCoef = 0.9;
	SoundGetIn[]={"ca\sounds\Vehicles\wheeled\GOLF\ext\ext-golf-getout",db-5,1};
	SoundGetOut[]={"ca\sounds\Vehicles\wheeled\GOLF\ext\ext-golf-getout",db-5,1, 40};
	soundEngineOnInt[] = {"ca\sounds\Vehicles\Wheeled\GOLF\int\int-golf-start-1", db-5, 1.0};
	soundEngineOnExt[] = {"ca\sounds\Vehicles\Wheeled\GOLF\ext\ext-golf-start-1", db-5, 1.0, 250};
	soundEngineOffInt[] ={"ca\sounds\vehicles\Wheeled\GOLF\int\int-golf-stop-1", db-5, 1.0};
	soundEngineOffExt[] ={"ca\sounds\vehicles\Wheeled\GOLF\ext\ext-golf-stop-1", db-5, 1.0, 250};

	buildCrash0[]={"Ca\sounds\Vehicles\Crash\crash_building_01", db-3, 1, 200};
	buildCrash1[]={"Ca\sounds\Vehicles\Crash\crash_building_02", db-3, 1, 200};
	buildCrash2[]={"Ca\sounds\Vehicles\Crash\crash_building_03", db-3, 1, 200};
	buildCrash3[]={"Ca\sounds\Vehicles\Crash\crash_building_04", db-3, 1, 200};
	soundBuildingCrash[]={buildCrash0, 0.25, buildCrash1, 0.25, buildCrash2, 0.25, buildCrash3, 0.25};

	WoodCrash0[]={"Ca\sounds\Vehicles\Crash\crash_mix_wood_01", db-3, 1, 200};
	WoodCrash1[]={"Ca\sounds\Vehicles\Crash\crash_mix_wood_02", db-3, 1, 200};
	WoodCrash2[]={"Ca\sounds\Vehicles\Crash\crash_mix_wood_03", db-3, 1, 200};
	WoodCrash3[]={"Ca\sounds\Vehicles\Crash\crash_mix_wood_04", db-3, 1, 200};
	WoodCrash4[]={"Ca\sounds\Vehicles\Crash\crash_mix_wood_05", db-3, 1, 200};
	WoodCrash5[]={"Ca\sounds\Vehicles\Crash\crash_mix_wood_06", db-3, 1, 200};
	soundWoodCrash[]={woodCrash0, 0.166, woodCrash1, 0.166, woodCrash2, 0.166, woodCrash3, 0.166,woodCrash4, 0.166,woodCrash5, 0.166};

	ArmorCrash0[]={"Ca\sounds\Vehicles\Crash\crash_vehicle_01", db-3, 1, 200};
	ArmorCrash1[]={"Ca\sounds\Vehicles\Crash\crash_vehicle_02", db-3, 1, 200};
	ArmorCrash2[]={"Ca\sounds\Vehicles\Crash\crash_vehicle_03", db-3, 1, 200};
	ArmorCrash3[]={"Ca\sounds\Vehicles\Crash\crash_vehicle_04", db-3, 1, 200};
	soundArmorCrash[]={ArmorCrash0, 0.25, ArmorCrash1, 0.25, ArmorCrash2, 0.25, ArmorCrash3, 0.25};

	class SoundEvents
	{
		class AccelerationIn
		{
			sound[] = {"ca\sounds\Vehicles\Wheeled\GOLF\int\int-golf-acce-1", db-1, 1.0};
			limit = "0.15";
			expression = "engineOn*(1-camPos)*2*gmeterZ*((speed factor[1.5, 5]) min (speed factor[5, 1.5]))";
		};
		class AccelerationOut
		{
			sound[] = {"ca\sounds\Vehicles\Wheeled\GOLF\ext\ext-golf-acce-1", db-5, 1.0, 250};
			limit = "0.15";
			expression = "engineOn*camPos*2*gmeterZ*((speed factor[1.5, 5]) min (speed factor[5, 1.5]))";
		};
	};
	class Sounds
	{
		class Engine
		{
			sound[] =  {"ca\sounds\Vehicles\Wheeled\GOLF\ext\ext-golf-low-1", db-8, 1.0, 300};
			frequency = "(randomizer*0.05+1.25)*rpm";
			volume = "camPos*engineOn*((rpm factor[0.25, 0.4]) min (rpm factor[0.6, 0.45]))";
		};
		class EngineHighOut
		{
			sound[] = {"ca\sounds\Vehicles\Wheeled\GOLF\ext\ext-golf-high-1", db-8, 0.8, 450};
			frequency = "(randomizer*0.05+1.1)*rpm";
			volume = "camPos*engineOn*(rpm factor[0.5, 0.9])";
		};
		class IdleOut
		{
			sound[] = {"ca\sounds\Vehicles\Wheeled\GOLF\ext\ext-golf-idle-1", db-10, 1.0, 100};
			frequency = "1";
			volume = "engineOn*camPos*(rpm factor[0.4, 0])";
		};
		class TiresRockOut
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-rock2", db-25, 1.0, 40};
			frequency = "1";
			volume = "camPos*rock*(speed factor[4, 20])";
		};
		class TiresSandOut
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-sand2", db-25, 1.0, 40};
			frequency = "1";
			volume = "camPos*sand*(speed factor[4, 20])";
		};
		class TiresGrassOut
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-grass3", db-25, 1.0, 40};
			frequency = "1";
			volume = "camPos*grass*(speed factor[4, 20])";
		};
		class TiresMudOut
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-mud2", db-25, 1.0, 40};
			frequency = "1";
			volume = "camPos*mud*(speed factor[4, 20])";
		};
		class TiresGravelOut
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-gravel2", db-25, 1.0, 40};
			frequency = "1";
			volume = "camPos*gravel*(speed factor[4, 20])";
		};
		class TiresAsphaltOut
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-asphalt3", db-25, 1.0, 40};
			frequency = "1";
			volume = "camPos*asphalt*(speed factor[4, 20])";
		};
		class NoiseOut
		{
			sound[] = {"ca\sounds\Vehicles\Wheeled\Noises\ext\noise2", db-25, 1.0, 40};
			frequency = "1";
			volume = "camPos*(damper0 max 0.036)*(speed factor[0, 8])";
		};
	/* --------------------------------- */
	//			 INTERNAL SOUNDS GOLF				 //
	/* --------------------------------- */
		class EngineLowIn
		{
			sound[] = {"ca\sounds\Vehicles\Wheeled\GOLF\int\int-golf-low-1", db-3, 1.0};
			frequency = "(randomizer*0.05+1.3)*rpm";
			volume = "(1-camPos)*engineOn*((rpm factor[0.3, 0.5]) min (rpm factor[0.7, 0.52]))";
		};
		class EngineHighIn
		{
			sound[] = {"ca\sounds\Vehicles\Wheeled\GOLF\int\int-golf-high-1", db-3, 0.95};
			frequency = "(randomizer*0.05+1.2)*rpm";
			volume = "(1-camPos)*engineOn*(rpm factor[0.6, 1.0])";
		};
		class IdleIn
		{
			sound[] = {"ca\sounds\Vehicles\Wheeled\GOLF\int\int-golf-idle-1", db-5, 1.0};
			frequency = "1";
			volume = "(1-camPos)*engineOn*(rpm factor[0.4, 0])";
		};

		class TiresRockIn
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-rock2", db-23, 1.0};
			frequency = "1";
			volume = "(1-camPos)*rock*(speed factor[2, 20])";
		};
		class TiresSandIn
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-sand2", db-23, 1.0};
			frequency = "1";
			volume = "(1-camPos)*sand*(speed factor[2, 20])";
		};
		class TiresGrassIn
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-grass3", db-23, 1.0};
			frequency = "1";
			volume = "(1-camPos)*grass*(speed factor[2, 20])";
		};
		class TiresMudIn
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-mud2", db-23, 1.0};
			frequency = "1";
			volume = "(1-camPos)*mud*(speed factor[2, 20])";
		};
		class TiresGravelIn
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-gravel2", db-23, 1.0};
			frequency = "1";
			volume = "(1-camPos)*gravel*(speed factor[2, 20])";
		};
		class TiresAsphaltIn
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-asphalt3", db-25, 1.0};
			frequency = "1";
			volume = "(1-camPos)*asphalt*(speed factor[2, 20])";
		};
		class NoiseIn
		{
			sound[] = {"ca\sounds\Vehicles\Wheeled\Noises\int\int-noise2", db-20, 1.0};
			frequency = "1";
			volume = "(damper0 max 0.03)*(speed factor[0, 8])*(1-camPos)"; //definice INSIDE zvuku
		};
		// original environment sound, suppressed now
		class Movement
		{
			sound = "soundEnviron";
			frequency = "1";
			volume = "0";
		};
	};	
};

class Mini_Cooper_DZE: Mini_Cooper_base
{
	scope = 2;
	displayname = "$STR_VEH_NAME_MINI_COOPER";	
	
	class Upgrades {
		ItemORP[] = {"Mini_Cooper_DZE1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",4},{"ItemScrews",2}}};
	};	
};

// Performance 1
class Mini_Cooper_DZE1: Mini_Cooper_DZE {
	displayname = "$STR_VEH_NAME_MINI_COOPER+";
	original = "Mini_Cooper_DZE";
	maxSpeed = 260;
	terrainCoef = 2.5;

	class Upgrades {
		ItemAVE[] = {"Mini_Cooper_DZE2",{"ItemToolbox"},{},{{"ItemAVE",1},{"PartGeneric",6},{"ItemScrews",4}}};
	};
};

// Armor 2
class Mini_Cooper_DZE2: Mini_Cooper_DZE1 {
	displayname = "$STR_VEH_NAME_MINI_COOPER++";
	armor = 55;
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
		class HitFuel: HitFuel {
			armor = 0.5;
		};
		class HitEngine: HitEngine {
			armor = 1;
		};
		class HitGlass1: HitGlass1 {
			armor = 0.3;
		};
		class HitGlass2: HitGlass2 {
			armor = 0.3;
		};
		class HitGlass3: HitGlass3 {
			armor = 0.3;
		};
		class HitGlass4: HitGlass4 {
			armor = 0.3;
		};
	};

	class Upgrades {
		ItemLRK[] = {"Mini_Cooper_DZE3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

// Cargo 3
class Mini_Cooper_DZE3: Mini_Cooper_DZE2 {
	displayname = "$STR_VEH_NAME_MINI_COOPER+++";
	transportMaxWeapons = 20;
	transportMaxMagazines = 100;
    transportmaxbackpacks = 4;

	class Upgrades {
		ItemTNK[] = {"Mini_Cooper_DZE4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
	};
};

// Fuel 4
class Mini_Cooper_DZE4: Mini_Cooper_DZE3 {
	displayname = "$STR_VEH_NAME_MINI_COOPER++++";
	fuelCapacity = 150;
};