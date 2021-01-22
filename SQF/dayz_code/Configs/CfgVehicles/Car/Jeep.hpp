class Jeep_base: epoch_car
{
	scope = 0;
	displayname = "Old Jeep";
	model = "\z\addons\dayz_epoch_v\vehicles\jeep\h4_jeep";
	picture = "\dayz_epoch_c\icons\vehicles\jeep.paa";
	armor = 25;
	transportsoldier = 2;
	transportmaxweapons = 15;
	transportmaxmagazines = 50;
	transportmaxbackpacks = 5;
	fuelcapacity = 115;
	maxspeed = 110;
	terraincoef	= 2.0;
	weapons[] = {minicarhorn};
	driveraction = "HMMWV_Driver";
	cargoaction[] = {"Skodovka_Cargo01","suv_cargo02_ep1","Skodovka_Cargo01","suv_cargo02_ep1","Skodovka_Cargo012"};
	//class HitPoints;
	hiddenselectionstextures[]= 
	{
		"\z\addons\dayz_epoch_v\vehicles\jeep\data\jeep_main_co.paa",
		"\z\addons\dayz_epoch_v\vehicles\jeep\data\jeep_parts_co.paa"
	};
	class damage
	{
		tex[]={};
		mat[]=
		{
			"z\addons\dayz_epoch_v\vehicles\jeep\data\jeep_main.rvmat",
			"z\addons\dayz_epoch_v\vehicles\jeep\data\jeep_main_damage.rvmat",
			"z\addons\dayz_epoch_v\vehicles\jeep\data\jeep_main_destruct.rvmat",

			"z\addons\dayz_epoch_v\vehicles\jeep\data\jeep_parts.rvmat",
			"z\addons\dayz_epoch_v\vehicles\jeep\data\jeep_parts_damage.rvmat",
			"z\addons\dayz_epoch_v\vehicles\jeep\data\jeep_parts_destruct.rvmat",

			"z\addons\dayz_epoch_v\vehicles\jeep\data\jeep_dash.rvmat",
			"z\addons\dayz_epoch_v\vehicles\jeep\data\jeep_dash_damage.rvmat",
			"z\addons\dayz_epoch_v\vehicles\jeep\data\jeep_dash_destruct.rvmat",

			"z\addons\dayz_epoch_v\vehicles\jeep\data\jeep_glass.rvmat",
			"Ca\wheeled_E\Data\auta_skla_damage.rvmat",
			"Ca\wheeled_E\Data\auta_skla_damage.rvmat",
							
			"z\addons\dayz_epoch_v\vehicles\jeep\data\jeep_in_glass.rvmat",
			"Ca\wheeled_E\Data\auta_skla_in_damage.rvmat",
			"Ca\wheeled_E\Data\auta_skla_in_damage.rvmat"

		};
	};
	
	class NVGMarkers {};
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
};

class Jeep_DZE: Jeep_base
{
	scope = 2;
	displayname = "$STR_VEH_NAME_OLD_JEEP";
	
	class HitPoints: HitPoints {
		class HitLFWheel;
		class HitLBWheel;
		class HitRFWheel;
		class HitRBWheel;
		class HitFuel;
		class HitEngine;
		class HitGlass1;
		class HitGlass2;
	};	
	
	class Upgrades {
		ItemORP[] = {"Jeep_DZE1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",4},{"ItemScrews",2}}};
	};
};	

// Performance 1
class Jeep_DZE1: Jeep_DZE {
	displayname = "$STR_VEH_NAME_OLD_JEEP+";
	original = "Jeep_DZE";
	maxspeed = 150;
	terrainCoef = 1.0;
	
	class HitPoints: HitPoints {
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
	};	

	class Upgrades {
		ItemAVE[] = {"Jeep_DZE2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"PartGeneric",6},{"ItemScrews",4}}};
	};
};

// Armor 2
class Jeep_DZE2: Jeep_DZE1 {
	displayname = "$STR_VEH_NAME_OLD_JEEP++";
	armor = 65;
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
			armor = 1.3;
		};
		class HitGlass2: HitGlass2 {
			armor = 1.3;
		};
	};

	class Upgrades {
		ItemLRK[] = {"Jeep_DZE3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

// Cargo 3
class Jeep_DZE3: Jeep_DZE2 {
	displayname = "$STR_VEH_NAME_OLD_JEEP+++";
	transportMaxWeapons = 30;
	transportMaxMagazines = 100;
    transportmaxbackpacks = 10;

	class Upgrades {
		ItemTNK[] = {"Jeep_DZE4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",2},{"ItemJerrycan",4},{"ItemScrews",1}}};
	};
};

// Fuel 4
class Jeep_DZE4: Jeep_DZE3 {
	displayname = "$STR_VEH_NAME_OLD_JEEP++++";
	fuelCapacity = 250;
};