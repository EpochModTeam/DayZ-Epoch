class ScrapAPC_base: epoch_car
{
	scope = 0;
	displayname = "Scrap APC";	
	model = "\z\addons\dayz_epoch_v\vehicles\scrap_apc\scrap_apc";
	picture = "\dayz_epoch_c\icons\vehicles\ScrapAPC.paa";
	armor = 80;
	damageResistance = 0.032;
	transportsoldier = 4;
	transportmaxweapons = 12;
	transportmaxmagazines = 60;
	transportmaxbackpacks = 5;	
	fuelcapacity = 350;
	maxspeed = 60;
	terraincoef	= 2.8;
	turnCoef = 1;
	driveraction = suv_driver_ep1;
	cargoAction[] = {BTR40_Cargo_EP1,UAZ_Cargo01};
	hiddenselections[] = {"camo1","camo2"};
	hiddenselectionstextures[]= 
	{
		"\z\addons\dayz_epoch_v\vehicles\scrap_apc\data\apc_main_co.paa",
		"\z\addons\dayz_epoch_v\vehicles\scrap_apc\data\apc_details_co.paa"			
	};
	class damage
	{
		tex[]={};
		mat[]=
		{
			"z\addons\dayz_epoch_v\vehicles\scrap_apc\data\apc_main.rvmat",
			"z\addons\dayz_epoch_v\vehicles\scrap_apc\data\apc_main_damage.rvmat",
			"z\addons\dayz_epoch_v\vehicles\scrap_apc\data\apc_main_destruct.rvmat",

			"z\addons\dayz_epoch_v\vehicles\scrap_apc\data\apc_details.rvmat",
			"z\addons\dayz_epoch_v\vehicles\scrap_apc\data\apc_details_damage.rvmat",
			"z\addons\dayz_epoch_v\vehicles\scrap_apc\data\apc_details_destruct.rvmat"
		};
	};
	
	class nvgmarkers {};
	insideSoundCoef = 0.99;
	soundGear[]={"",db-85,1};
	soundGetIn[]={"\ca\Sounds_E\Wheeled_E\BTR60\btr_door",db0,1};
	soundGetOut[]={"\ca\Sounds_E\Wheeled_E\BTR60\btr_door",db0,1, 30};
	soundEngineOnInt[] = {"\ca\Sounds_E\Wheeled_E\BTR60\btr60_ext_on", db0, 1.0};
	soundEngineOnExt[] = {"\ca\Sounds_E\Wheeled_E\BTR60\btr60_ext_on", db0, 1.0, 100};
	soundEngineOffInt[] ={"\ca\Sounds_E\Wheeled_E\BTR60\btr60_ext_off", db0, 1.0};
	soundEngineOffExt[] ={"\ca\Sounds_E\Wheeled_E\BTR60\btr60_ext_off", db0, 1.0, 100};

	buildCrash0[]={"Ca\sounds\Vehicles\Crash\tank_building_01", db-3, 1,150};
	buildCrash1[]={"Ca\sounds\Vehicles\Crash\tank_building_02", db-3, 1,150};
	buildCrash2[]={"Ca\sounds\Vehicles\Crash\tank_building_03", db-3, 1,150};
	buildCrash3[]={"Ca\sounds\Vehicles\Crash\tank_building_04", db-3, 1,150};
	soundBuildingCrash[]={buildCrash0, 0.25, buildCrash1, 0.25, buildCrash2, 0.25, buildCrash3, 0.25};

	WoodCrash0[]={"Ca\sounds\Vehicles\Crash\tank_wood_01", db-3, 1,150};
	WoodCrash1[]={"Ca\sounds\Vehicles\Crash\tank_wood_02", db-3, 1,150};
	WoodCrash2[]={"Ca\sounds\Vehicles\Crash\tank_wood_03", db-3, 1,150};
	WoodCrash3[]={"Ca\sounds\Vehicles\Crash\tank_wood_04", db-3, 1,150};
	soundWoodCrash[]={woodCrash0, 0.25, woodCrash1, 0.25, woodCrash2, 0.25, woodCrash3, 0.25};

	ArmorCrash0[]={"Ca\sounds\Vehicles\Crash\tank_vehicle_01", db-3, 1,150};
	ArmorCrash1[]={"Ca\sounds\Vehicles\Crash\tank_vehicle_02", db-3, 1,150};
	ArmorCrash2[]={"Ca\sounds\Vehicles\Crash\tank_vehicle_03", db-3, 1,150};
	ArmorCrash3[]={"Ca\sounds\Vehicles\Crash\tank_vehicle_04", db-3, 1,150};
	soundArmorCrash[]={ArmorCrash0, 0.25, ArmorCrash1, 0.25, ArmorCrash2, 0.25, ArmorCrash3, 0.25};

	class SoundEvents
	{
		class AccelerationIn
		{
			sound[] = {"\ca\Sounds_E\Wheeled_E\BTR60\btr60_ext_acceleration", db-5, 1.0};
			limit = "0.15";
			expression = "engineOn*(1-camPos)*2*gmeterZ*((speed factor[1.5, 5]) min (speed factor[5, 1.5]))";
		};
		class AccelerationOut
		{
			sound[] = {"\ca\Sounds_E\Wheeled_E\BTR60\btr60_ext_acceleration", db0, 1.0, 300};
			limit = "0.15";
			expression = "engineOn*camPos*2*gmeterZ*((speed factor[1.5, 5]) min (speed factor[5, 1.5]))";
		};
	};

	class Sounds
	{
	/*EXTERNAL SOUNDS BTR*/
		class Engine
		{
			sound[] =  {"\ca\Sounds_E\Wheeled_E\BTR60\btr60_ext_mid", db3, 0.7, 250};
			frequency = "(randomizer*0.05+0.95)*rpm";
			//volume = "engineOn*camPos*(thrust factor[0.7, 0.2])";
			volume = "camPos*engineOn*((rpm factor[0.3, 0.4]) min (rpm factor[0.7, 0.5]))";
		};
		class EngineHighOut
		{
			sound[] = {"\ca\Sounds_E\Wheeled_E\BTR60\btr60_ext_high", db3, 0.8, 350};
			frequency = "(randomizer*0.05+0.95)*rpm";
			//volume = "engineOn*camPos*(thrust factor[0.5, 0.9])";
			volume = "camPos*engineOn*(rpm factor[0.5, 0.8])";
		};
		class IdleOut
		{
			sound[] = {"\ca\Sounds_E\Wheeled_E\BTR60\btr60_ext_idle", db0, 1.0, 200};
			frequency = "1";
			//volume = "engineOn*camPos*(rpm factor[0.4, 0])";
			volume = "engineOn*camPos*(rpm factor[0.4, 0])";
		};
		class TiresRockOut
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-rock2", db-10, 1.0, 80};
			frequency = "1";
			volume = "camPos*rock*(speed factor[2, 20])";
		};
		class TiresSandOut
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-sand2", db-10, 1.0, 80};
			frequency = "1";
			volume = "camPos*sand*(speed factor[2, 20])";
		};
		class TiresGrassOut
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-grass3", db-10, 1.0, 80};
			frequency = "1";
			volume = "camPos*grass*(speed factor[2, 20])";
		};
		class TiresMudOut
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-mud2", db-10, 1.0, 80};
			frequency = "1";
			volume = "camPos*mud*(speed factor[2, 20])";
		};
		class TiresGravelOut
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-gravel2", db-10, 1.0, 80};
			frequency = "1";
			volume = "camPos*gravel*(speed factor[2, 20])";
		};
		class TiresAsphaltOut
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-asphalt3", db-10, 1.0, 50};
			frequency = "1";
			volume = "camPos*asphalt*(speed factor[2, 20])";
		};
		class NoiseOut
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Noises\ext\noise3", db-5, 1.0, 50};
			frequency = "1";
			volume = "camPos*(damper0 max 0.04)*(speed factor[0, 8])";
		};
	/*INTERNAL SOUNDS BTR*/
		class EngineLowIn
		{
			sound[] = {"\ca\Sounds_E\Wheeled_E\BTR60\btr60_ext_mid", db3, 0.7};
			frequency = "(randomizer*0.05+0.95)*rpm";
			volume = "(1-camPos)*engineOn*((rpm factor[0.3, 0.4]) min (rpm factor[0.7, 0.5]))";				//volume = "((engineOn*thrust) factor[0.65, 0.2])*(1-camPos)";
		};
		class EngineHighIn
		{
			sound[] = {"\ca\Sounds_E\Wheeled_E\BTR60\btr60_ext_high", db3, 0.8};
			frequency = "(randomizer*0.05+0.95)*rpm";
			volume = "(1-camPos)*engineOn*(rpm factor[0.5, 0.8])";	    //volume = "((engineOn*thrust) factor[0.55, 1.0])*(1-camPos)";
		};
		class IdleIn
		{
			sound[] = {"\ca\Sounds_E\Wheeled_E\BTR60\btr60_ext_idle", db0, 1.0};
			frequency = "1";
			volume = "engineOn*(rpm factor[0.4, 0])*(1-camPos)";//				volume = "engineOn*(rpm factor[0.4, 0])*(1-camPos)";
		};
		class TiresRockIn
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-rock2", db-15, 1.0};
			frequency = "1";
			volume = "(1-camPos)*rock*(speed factor[2, 20])";
		};
		class TiresSandIn
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-sand2", db-15, 1.0};
			frequency = "1";
			volume = "(1-camPos)*sand*(speed factor[2, 20])";
		};
		class TiresGrassIn
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-grass3", db-15, 1.0};
			frequency = "1";
			volume = "(1-camPos)*grass*(speed factor[2, 20])";
		};
		class TiresMudIn
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-mud2", db-15, 1.0};
			frequency = "1";
			volume = "(1-camPos)*mud*(speed factor[2, 20])";
		};
		class TiresGravelIn
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-gravel2", db-15, 1.0};
			frequency = "1";
			volume = "(1-camPos)*gravel*(speed factor[2, 20])";
		};
		class TiresAsphaltIn
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-asphalt3", db-15, 1.0};
			frequency = "1";
			volume = "(1-camPos)*asphalt*(speed factor[2, 20])";
		};
		class NoiseIn
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Noises\ext\noise4", db-5, 1.0};
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
};

class ScrapAPC_DZE: ScrapAPC_base {
	scope = 2;
	displayName = "$STR_VEH_NAME_SCRAP_APC";
	
	class Upgrades {
		ItemTankORP[] = {"ScrapAPC_DZE1",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankORP",1},{"PartEngine",6},{"PartGeneric",2},{"ItemScrews",2}}};
	};
};

class ScrapAPC_DZE1: ScrapAPC_DZE {
	displayName = "$STR_VEH_NAME_SCRAP_APC+";
	original = "ScrapAPC_DZE";
	maxspeed = 95; // base 60
	turnCoef = 0.5;  // base 1
	terraincoef	= 1.2; // base 2.8
	
	class Upgrades {
		ItemTankAVE[] = {"ScrapAPC_DZE2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankAVE",1},{"equip_metal_sheet",8},{"ItemScrews",2}}};
	};
};

class ScrapAPC_DZE2: ScrapAPC_DZE1 {
	displayName = "$STR_VEH_NAME_SCRAP_APC++";
	armor = 160;
	damageResistance = 0.064;
	
	class Upgrades {
		ItemTankLRK[] = {"ScrapAPC_DZE3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class ScrapAPC_DZE3: ScrapAPC_DZE2 {
	displayName = "$STR_VEH_NAME_SCRAP_APC+++";
	transportMaxWeapons = 24;
	transportMaxMagazines = 120;
	transportmaxbackpacks = 10;
	
	class Upgrades {
		ItemTankTNK[] = {"ScrapAPC_DZE4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankTNK",1},{"PartFueltank",6},{"ItemFuelBarrel",4}}};
	};
};

class ScrapAPC_DZE4: ScrapAPC_DZE3 {
	displayName = "$STR_VEH_NAME_SCRAP_APC++++";
	fuelCapacity = 800;	
};