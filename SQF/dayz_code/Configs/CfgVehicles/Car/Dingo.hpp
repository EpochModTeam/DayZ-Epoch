class Dingo_DZE_Base_ACR: Car
{
	scope = 0;
	displayName = "$STR_ACR_DN_DINGO_MG";
	transportMaxWeapons = 20;
	transportMaxMagazines = 100;
	transportmaxbackpacks = 6;
	crew = "";
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};	
	wheelCircumference = 3.5168;
	model = "\CA\Wheeled_ACR\Dingo\AMT_Dingo2a2_MG";
	Picture = "\Ca\Wheeled_ACR\Data\UI\Picture_Dingo2MG_CA.paa";
	Icon = "\Ca\Wheeled_ACR\Data\UI\Icon_Dingo2_CA.paa";
	memoryPointSupply = "zamerny";
	mapSize = 5;	
	damperSize = 0.2;
	damperForce = 1;
	damperDamping = 1;
	htMin = 60;
	htMax = 1800;
	afMax = 200;
	mfMax = 100;
	mFact = 1;
	tBody = 200;
	armor = 40;
	armorGlass = 0.05;
	armorWheels = 0.1;
	damageResistance = 0.00562;
	turnCoef = 4;
	steerAheadPlan = 0.2;
	steerAheadSimul = 0.4;
	predictTurnPlan = 0.9;
	predictTurnSimul = 0.5;
	brakeDistance = 8.5;
	terrainCoef = 2.0;
	enableGPS = 0;
	supplyRadius = 1.8;
	type = 1;
	soundServo[] = {"\Ca\sounds\Vehicles\Servos\turret-1",0.01,1.0,10};
	soundEnviron[] = {"",0.56234133,1};
	transportSoldier = 4;
	class Library
	{
		libTextDesc = "$STR_ACR_LIB_DINGO";
	};
	driverAction = "HMMWV_Driver_EP1";
	cargoAction[] = {"HMMWV_Cargo_EP1","HMMWV_Cargo02_EP1"};
	cargoIsCoDriver[] = {1,0};
	castDriverShadow = 0;
	radarType = 0;
	unitInfoType = "UnitInfoShip";
	vehicleClass = "DayZ Epoch Vehicles";
	threat[] = {1,0.1,0.4};	
	crewVulnerable = 1;
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			gun = "mainGun";
			body = "mainTurret";
			hasGunner = 1;
			weapons[] = {"M240_veh"};
			magazines[] = {"100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240"};
			minElev = -25;
			maxElev = 60;
			gunnerAction = "HMMWV_Gunner04_EP1";
			viewGunnerInExternal = 0;
			castGunnerShadow = 1;
			stabilizedInAxes = "StabilizedInAxesBoth";
			gunnerOpticsModel = "\ca\Weapons\2Dscope_RWS";
			gunnerForceOptics = 1;
			class ViewOptics
			{
				initAngleX = 0;
				minAngleX = -30;
				maxAngleX = 60;
				initAngleY = 0;
				minAngleY = -100;
				maxAngleY = 100;
				initFov = 0.3;
				minFov = 0.015;
				maxFov = 0.3;
				visionMode[] = {"Normal"};
			};
			soundServo[] = {"\Ca\sounds\Vehicles\Servos\turret-1",0.01,1.0,10};
		};
	};
	class AnimationSources: AnimationSources
	{
		class HitGlass1;
		class HitGlass5: HitGlass1
		{
			hitpoint = "HitGlass5";
		};
	};
	class HitPoints: HitPoints
	{
		class HitEngine
		{
			armor = 0.5;
			material = -1;
			name = "engine";
			visual = "";
			passThrough = 1;
		};
		class HitGlass1: HitGlass1
		{
			armor = 1;
		};
		class HitGlass2: HitGlass2
		{
			armor = 1;
		};
		class HitGlass3: HitGlass3
		{
			armor = 1;
		};
		class HitGlass4: HitGlass4
		{
			armor = 1;
		};
		class HitGlass5: HitGlass4
		{
			name = "glass5";
			visual = "glass5";
		};
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
			name = "fueltank";
			visual = "";
			passThrough = 1;
		};
	};
	class Damage
	{
		tex[] = {};
		mat[] = {"CA\Wheeled_ACR\Dingo\Data\karrosse.rvmat","CA\Wheeled_ACR\Dingo\Data\karrosse_dam.rvmat","CA\Wheeled_ACR\Dingo\Data\karrosse_des.rvmat","CA\Wheeled_ACR\Dingo\Data\karrosse_innen.rvmat","CA\Wheeled_ACR\Dingo\Data\karrosse_innen.rvmat","CA\Wheeled_ACR\Dingo\Data\karrosse_innen_des.rvmat","CA\Wheeled_ACR\Dingo\Data\teile.rvmat","CA\Wheeled_ACR\Dingo\Data\teile_dam.rvmat","CA\Wheeled_ACR\Dingo\Data\teile_des.rvmat","CA\Wheeled_ACR\Dingo\Data\teile_innen.rvmat","CA\Wheeled_ACR\Dingo\Data\teile_innen.rvmat","CA\Wheeled_ACR\Dingo\Data\teile_innen_des.rvmat","CA\Wheeled_ACR\Dingo\Data\FLW200.rvmat","CA\Wheeled_ACR\Dingo\Data\FLW200_dam.rvmat","CA\Wheeled_ACR\Dingo\Data\FLW200_des.rvmat","CA\Wheeled_ACR\Dingo\Data\plane.rvmat","CA\Wheeled_ACR\Dingo\Data\plane_dam.rvmat","CA\Wheeled_ACR\Dingo\Data\FLW200_des.rvmat","CA\Wheeled_ACR\Dingo\Data\alpha_glass.rvmat","CA\Wheeled_ACR\Dingo\Data\alpha_glass_dam.rvmat","CA\Wheeled_ACR\Dingo\Data\alpha_glass_des.rvmat"};
	};
	HiddenSelections[] = {"camo1","camo2","camo5","camo6"};
	HiddenSelectionsTextures[] = {"\ca\wheeled_acr\dingo\data\acr_karosse_wdl_co","\ca\wheeled_acr\dingo\data\a_teile_co","\ca\wheeled_acr\dingo\data\FLW100_co","\ca\wheeled_acr\dingo\data\FLW200_co"};
	soundGear[] = {"",0.00017782794,1};
	insideSoundCoef = 0.8;
	SoundGetIn[] = {"ca\Sounds_ACR\wheeled\Dingo\door",0.56234133,1,40};	
	SoundGetOut[] = {"ca\Sounds_ACR\wheeled\Dingo\door",0.56234133,1,40};
	soundEngineOnInt[] = {"ca\Sounds_ACR\wheeled\Dingo\Dingo_int_start",0.56234133,1.0};
	soundEngineOnExt[] = {"ca\Sounds_ACR\wheeled\Dingo\Dingo_ext_start",0.56234133,1.0,250};
	soundEngineOffInt[] = {"ca\Sounds_ACR\wheeled\Dingo\Dingo_int_stop",0.56234133,1.0};
	soundEngineOffExt[] = {"ca\Sounds_ACR\wheeled\Dingo\Dingo_ext_stop",0.56234133,1.0,250};
	buildCrash0[] = {"Ca\sounds\Vehicles\Crash\crash_building_01",0.70794576,1,200};
	buildCrash1[] = {"Ca\sounds\Vehicles\Crash\crash_building_02",0.70794576,1,200};
	buildCrash2[] = {"Ca\sounds\Vehicles\Crash\crash_building_03",0.70794576,1,200};
	buildCrash3[] = {"Ca\sounds\Vehicles\Crash\crash_building_04",0.70794576,1,200};
	soundBuildingCrash[] = {"buildCrash0",0.25,"buildCrash1",0.25,"buildCrash2",0.25,"buildCrash3",0.25};
	WoodCrash0[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_01",0.70794576,1,200};
	WoodCrash1[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_02",0.70794576,1,200};
	WoodCrash2[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_03",0.70794576,1,200};
	WoodCrash3[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_04",0.70794576,1,200};
	WoodCrash4[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_05",0.70794576,1,200};
	WoodCrash5[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_06",0.70794576,1,200};
	soundWoodCrash[] = {"woodCrash0",0.166,"woodCrash1",0.166,"woodCrash2",0.166,"woodCrash3",0.166,"woodCrash4",0.166,"woodCrash5",0.166};
	ArmorCrash0[] = {"Ca\sounds\Vehicles\Crash\crash_vehicle_01",0.70794576,1,200};
	ArmorCrash1[] = {"Ca\sounds\Vehicles\Crash\crash_vehicle_02",0.70794576,1,200};
	ArmorCrash2[] = {"Ca\sounds\Vehicles\Crash\crash_vehicle_03",0.70794576,1,200};
	ArmorCrash3[] = {"Ca\sounds\Vehicles\Crash\crash_vehicle_04",0.70794576,1,200};
	soundArmorCrash[] = {"ArmorCrash0",0.25,"ArmorCrash1",0.25,"ArmorCrash2",0.25,"ArmorCrash3",0.25};
	class SoundEvents
	{
		class AccelerationIn
		{
			sound[] = {"ca\Sounds_ACR\wheeled\Dingo\Dingo_int_acce",0.1,1.0};
			limit = "0.15";
			expression = "engineOn*(1-camPos)*2*gmeterZ*((speed factor[1.5, 5]) min (speed factor[5, 1.5]))";
		};
		class AccelerationOut
		{
			sound[] = {"ca\Sounds_ACR\wheeled\Dingo\Dingo_ext_acce",0.1,1.0,200};
			limit = "0.15";
			expression = "engineOn*camPos*2*gmeterZ*((speed factor[1.5, 5]) min (speed factor[5, 1.5]))";
		};
	};
	class Sounds
	{
		class Engine
		{
			sound[] = {"ca\Sounds_ACR\wheeled\Dingo\Dingo_ext_mid",1.0,1.5,200};
			frequency = "(1.0+rpm)*0.3";
			volume = "engineOn*camPos*((rpm factor[0.2, 0.4])+ (rpm factor[0.8, 0.5]))";
		};
		class EngineHighOut
		{
			sound[] = {"ca\Sounds_ACR\wheeled\Dingo\Dingo_ext_high",1.0,1.5,250};
			frequency = "(1.0+rpm)*0.3";
			volume = "engineOn*camPos*(rpm factor[0.3, 0.9])";
		};
		class IdleOut
		{
			sound[] = {"ca\Sounds_ACR\wheeled\Dingo\Dingo_ext_idle",1.0,1.0,200};
			frequency = "1";
			volume = "engineOn*camPos*(rpm factor[0.6, 0.05])";
		};
		class TiresRockOut
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-rock2",0.31622776,1.0,30};
			frequency = "1";
			volume = "camPos*rock*(speed factor[2, 20])";
		};
		class TiresSandOut
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-sand2",0.31622776,1.0,30};
			frequency = "1";
			volume = "camPos*sand*(speed factor[2, 20])";
		};
		class TiresGrassOut
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-grass2",0.31622776,1.0,30};
			frequency = "1";
			volume = "camPos*grass*(speed factor[2, 20])";
		};
		class TiresMudOut
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-mud2",0.31622776,1.0,30};
			frequency = "1";
			volume = "camPos*mud*(speed factor[2, 20])";
		};
		class TiresGravelOut
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-gravel2",0.31622776,1.0,30};
			frequency = "1";
			volume = "camPos*gravel*(speed factor[2, 20])";
		};
		class TiresAsphaltOut
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-asphalt3",0.31622776,1.0,30};
			frequency = "1";
			volume = "camPos*asphalt*(speed factor[2, 20])";
		};
		class NoiseOut
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Noises\ext\noise2",0.056234132,1.0,30};
			frequency = "1";
			volume = "camPos*(damper0 max 0.03)*(speed factor[0, 8])";
		};
		class EngineLowIn
		{
			sound[] = {"ca\Sounds_ACR\wheeled\Dingo\Dingo_int_mid",1.0,1.0,200};
			frequency = "(1.0+rpm)*0.3";
			volume = "engineOn*(1-camPos)*((rpm factor[0.4, 0.2])+ (rpm factor[0.8, 0.5]))";
		};
		class EngineHighIn
		{
			sound[] = {"ca\Sounds_ACR\wheeled\Dingo\Dingo_int_high",1.0,1.0,250};
			frequency = "(1.0+rpm)*0.3";
			volume = "engineOn*(1-camPos)*(rpm factor[0.3, 0.9])";
		};
		class IdleIn
		{
			sound[] = {"ca\Sounds_ACR\wheeled\Dingo\Dingo_int_idle",1.0,1.0,200};
			frequency = "1";
			volume = "engineOn*(1-camPos)*(rpm factor[0.3, 0.05])";
		};
		class TiresRockIn
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-rock2",1.0,1.0};
			frequency = "1";
			volume = "(1-camPos)*rock*(speed factor[2, 20])";
		};
		class TiresSandIn
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-sand2",1.0,1.0};
			frequency = "1";
			volume = "(1-camPos)*sand*(speed factor[2, 20])";
		};
		class TiresGrassIn
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-grass2",1.0,1.0};
			frequency = "1";
			volume = "(1-camPos)*grass*(speed factor[2, 20])";
		};
		class TiresMudIn
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-mud2",1.0,1.0};
			frequency = "1";
			volume = "(1-camPos)*mud*(speed factor[2, 20])";
		};
		class TiresGravelIn
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-gravel2",1.0,1.0};
			frequency = "1";
			volume = "(1-camPos)*gravel*(speed factor[2, 20])";
		};
		class TiresAsphaltIn
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-asphalt3",1.0,1.0};
			frequency = "1";
			volume = "(1-camPos)*asphalt*(speed factor[2, 20])";
		};
		class NoiseIn
		{
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Noises\int\noise2",0.0056234132,1.0};
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

class Dingo_WDL_ACR_DZ: Dingo_DZE_Base_ACR
{
	scope = 2;	
	displayname = "$STR_VEH_NAME_DINGO_M240_WOODLAND";
	class AnimationSources: AnimationSources
	{
		class ReloadAnim
		{
			source = "reload";
			weapon = "MG3A1_veh_ACR";
		};
		class ReloadMagazine
		{
			source = "reloadmagazine";
			weapon = "MG3A1_veh_ACR";
		};
		class Revolving
		{
			source = "revolving";
			weapon = "MG3A1_veh_ACR";
		};
	};	
};

class Dingo_WDL_ACR_DZE: Dingo_WDL_ACR_DZ
{
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			magazines[] = {};
		};	
	};	
	
	class Upgrades
	{
		ItemORP[] = {"Dingo_WDL_ACR_DZE1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",2},{"PartWheel",4},{"ItemScrews",2}}};
	};	
};

class Dingo_WDL_ACR_DZE1: Dingo_WDL_ACR_DZE
{
	displayName = "$STR_VEH_NAME_DINGO_M240_WOODLAND+";
	original = "Dingo_WDL_ACR_DZE";
	maxSpeed = 115; // base 100
	turnCoef = 5;  // base 4
	terrainCoef = 1; //base 2
	
	class Upgrades
	{
		ItemAVE[] = {"Dingo_WDL_ACR_DZE2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"equip_metal_sheet",6},{"ItemScrews",4}}};
	};
};

class Dingo_WDL_ACR_DZE2: Dingo_WDL_ACR_DZE1
{
	displayName = "$STR_VEH_NAME_DINGO_M240_WOODLAND++";
	armor = 75; // base 40
	damageResistance = 0.013; // base 0.00562
	
	class Upgrades
	{
		ItemLRK[] = {"Dingo_WDL_ACR_DZE3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class Dingo_WDL_ACR_DZE3: Dingo_WDL_ACR_DZE2
{
	displayName = "$STR_VEH_NAME_DINGO_M240_WOODLAND+++";
	transportMaxWeapons = 40; 
	transportMaxMagazines = 400; 
	transportmaxbackpacks = 12;
	
	class Upgrades
	{
		ItemTNK[] = {"Dingo_WDL_ACR_DZE4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",4},{"PartFueltank",2},{"ItemFuelBarrel",1}}};
	};
};

class Dingo_WDL_ACR_DZE4: Dingo_WDL_ACR_DZE3
{
	displayName = "$STR_VEH_NAME_DINGO_M240_WOODLAND++++";
	fuelCapacity = 180; // base 100
};

class Dingo_DST_ACR_DZ: Dingo_WDL_ACR_DZ
{
	displayName = "$STR_VEH_NAME_DINGO_M240_DESERT";
	HiddenSelectionsTextures[] = {"\ca\wheeled_acr\dingo\data\ACR_karosse_des_co","\ca\wheeled_acr\dingo\data\ACR_DES_a_teile_co","\ca\wheeled_acr\dingo\data\FLW100_DES_co","\ca\wheeled_acr\dingo\data\FLW200_DES_co"};
};

class Dingo_DST_ACR_DZE: Dingo_WDL_ACR_DZE
{
	displayName = "$STR_VEH_NAME_DINGO_M240_DESERT";
	HiddenSelectionsTextures[] = {"\ca\wheeled_acr\dingo\data\ACR_karosse_des_co","\ca\wheeled_acr\dingo\data\ACR_DES_a_teile_co","\ca\wheeled_acr\dingo\data\FLW100_DES_co","\ca\wheeled_acr\dingo\data\FLW200_DES_co"};

	class Upgrades
	{
		ItemORP[] = {"Dingo_DST_ACR_DZE1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",2},{"PartWheel",4},{"ItemScrews",2}}};
	};	
};

class Dingo_DST_ACR_DZE1: Dingo_DST_ACR_DZE
{
	displayName = "$STR_VEH_NAME_DINGO_M240_DESERT+";
	original = "Dingo_DST_ACR_DZE";
	maxSpeed = 115; // base 100
	turnCoef = 5;  // base 4
	terrainCoef = 1; //base 2
	
	class Upgrades
	{
		ItemAVE[] = {"Dingo_DST_ACR_DZE2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"equip_metal_sheet",6},{"ItemScrews",4}}};
	};
};

class Dingo_DST_ACR_DZE2: Dingo_DST_ACR_DZE1
{
	displayName = "$STR_VEH_NAME_DINGO_M240_DESERT++";
	armor = 75; // base 40
	damageResistance = 0.013; // base 0.00562
	
	class Upgrades
	{
		ItemLRK[] = {"Dingo_DST_ACR_DZE3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class Dingo_DST_ACR_DZE3: Dingo_DST_ACR_DZE2
{
	displayName = "$STR_VEH_NAME_DINGO_M240_DESERT+++";
	transportMaxWeapons = 40; 
	transportMaxMagazines = 400; 
	transportmaxbackpacks = 12;
	
	class Upgrades
	{
		ItemTNK[] = {"Dingo_DST_ACR_DZE4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",4},{"PartFueltank",2},{"ItemFuelBarrel",1}}};
	};
};

class Dingo_DST_ACR_DZE4: Dingo_DST_ACR_DZE3
{
	displayName = "$STR_VEH_NAME_DINGO_M240_DESERT++++";
	fuelCapacity = 180; // base 100
};

class Dingo_GL_Wdl_ACR_DZ: Dingo_DZE_Base_ACR
{
	scope = 2;	
	displayname = "$STR_VEH_NAME_DINGO_MK19_WOODLAND";
	model = "\CA\Wheeled_ACR\Dingo\AMT_Dingo2a2";
	Picture = "\Ca\Wheeled_ACR\Data\UI\Picture_Dingo2_CA.paa";

	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			gun = "mainGun";
			body = "mainTurret";
			hasGunner = 1;
			weapons[] = {"MK19"};
			magazines[] = {"48Rnd_40mm_MK19","48Rnd_40mm_MK19","48Rnd_40mm_MK19","48Rnd_40mm_MK19"};
			minElev = -25;
			maxElev = 60;
			gunnerAction = "HMMWV_Gunner04_EP1";
			viewGunnerInExternal = 0;
			castGunnerShadow = 1;
			stabilizedInAxes = "StabilizedInAxesBoth";
			gunnerOpticsModel = "\ca\Weapons\2Dscope_RWS";
			gunnerForceOptics = 1;
			class ViewOptics
			{
				initAngleX = 0;
				minAngleX = -30;
				maxAngleX = 60;
				initAngleY = 0;
				minAngleY = -100;
				maxAngleY = 100;
				initFov = 0.3;
				minFov = 0.015;
				maxFov = 0.3;
				visionMode[] = {"Normal"};
			};
			soundServo[] = {"\Ca\sounds\Vehicles\Servos\turret-1",0.01,1.0,10};
			class GunFire : WeaponCloudsMGun
			{
				interval = 0.0099999998;
			};
		};
	};
	class AnimationSources: AnimationSources
	{
		class ReloadAnim
		{
			source = "reload";
			weapon = "GMG_veh_ACR";
		};
		class ReloadMagazine
		{
			source = "reloadmagazine";
			weapon = "GMG_veh_ACR";
		};
		class Revolving
		{
			source = "revolving";
			weapon = "GMG_veh_ACR";
		};
	};
};

class Dingo_GL_Wdl_ACR_DZE: Dingo_GL_Wdl_ACR_DZ
{
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			magazines[] = {};
		};
	};
	
	class Upgrades
	{
		ItemORP[] = {"Dingo_GL_Wdl_ACR_DZE1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",2},{"PartWheel",4},{"ItemScrews",2}}};
	};		
};

class Dingo_GL_Wdl_ACR_DZE1: Dingo_GL_Wdl_ACR_DZE
{
	displayName = "$STR_VEH_NAME_DINGO_MK19_WOODLAND+";
	original = "Dingo_GL_Wdl_ACR_DZE";
	maxSpeed = 115; // base 100
	turnCoef = 5;  // base 4
	terrainCoef = 1; //base 2
	
	class Upgrades
	{
		ItemAVE[] = {"Dingo_GL_Wdl_ACR_DZE2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"equip_metal_sheet",6},{"ItemScrews",4}}};
	};
};

class Dingo_GL_Wdl_ACR_DZE2: Dingo_GL_Wdl_ACR_DZE1
{
	displayName = "$STR_VEH_NAME_DINGO_MK19_WOODLAND++";
	armor = 75; // base 40
	damageResistance = 0.013; // base 0.00562
	
	class Upgrades
	{
		ItemLRK[] = {"Dingo_GL_Wdl_ACR_DZE3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class Dingo_GL_Wdl_ACR_DZE3: Dingo_GL_Wdl_ACR_DZE2
{
	displayName = "$STR_VEH_NAME_DINGO_MK19_WOODLAND+++";
	transportMaxWeapons = 40; 
	transportMaxMagazines = 400; 
	transportmaxbackpacks = 12;
	
	class Upgrades
	{
		ItemTNK[] = {"Dingo_GL_Wdl_ACR_DZE4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",4},{"PartFueltank",2},{"ItemFuelBarrel",1}}};
	};
};

class Dingo_GL_Wdl_ACR_DZE4: Dingo_GL_Wdl_ACR_DZE3
{
	displayName = "$STR_VEH_NAME_DINGO_MK19_WOODLAND++++";
	fuelCapacity = 180; // base 100
};

class Dingo_GL_DST_ACR_DZ: Dingo_GL_Wdl_ACR_DZ
{
	displayname = "$STR_VEH_NAME_DINGO_MK19_DESERT";
	HiddenSelectionsTextures[] = {"\ca\wheeled_acr\dingo\data\ACR_karosse_des_co","\ca\wheeled_acr\dingo\data\ACR_DES_a_teile_co","\ca\wheeled_acr\dingo\data\FLW100_DES_co","\ca\wheeled_acr\dingo\data\FLW200_DES_co"};
};

class Dingo_GL_DST_ACR_DZE: Dingo_GL_Wdl_ACR_DZE
{
	displayname = "$STR_VEH_NAME_DINGO_MK19_DESERT";
	HiddenSelectionsTextures[] = {"\ca\wheeled_acr\dingo\data\ACR_karosse_des_co","\ca\wheeled_acr\dingo\data\ACR_DES_a_teile_co","\ca\wheeled_acr\dingo\data\FLW100_DES_co","\ca\wheeled_acr\dingo\data\FLW200_DES_co"};

	class Upgrades
	{
		ItemORP[] = {"Dingo_GL_DST_ACR_DZE1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",2},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class Dingo_GL_DST_ACR_DZE1: Dingo_GL_DST_ACR_DZE
{
	displayName = "$STR_VEH_NAME_DINGO_MK19_DESERT+";
	original = "Dingo_GL_DST_ACR_DZE";
	maxSpeed = 115; // base 100
	turnCoef = 5;  // base 4
	terrainCoef = 1; //base 2
	
	class Upgrades
	{
		ItemAVE[] = {"Dingo_GL_DST_ACR_DZE2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"equip_metal_sheet",6},{"ItemScrews",4}}};
	};
};

class Dingo_GL_DST_ACR_DZE2: Dingo_GL_DST_ACR_DZE1
{
	displayName = "$STR_VEH_NAME_DINGO_MK19_DESERT++";
	armor = 75; // base 40
	damageResistance = 0.013; // base 0.00562
	
	class Upgrades
	{
		ItemLRK[] = {"Dingo_GL_DST_ACR_DZE3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class Dingo_GL_DST_ACR_DZE3: Dingo_GL_DST_ACR_DZE2
{
	displayName = "$STR_VEH_NAME_DINGO_MK19_DESERT+++";
	transportMaxWeapons = 40; 
	transportMaxMagazines = 400; 
	transportmaxbackpacks = 12;
	
	class Upgrades
	{
		ItemTNK[] = {"Dingo_GL_DST_ACR_DZE4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",4},{"PartFueltank",2},{"ItemFuelBarrel",1}}};
	};
};

class Dingo_GL_DST_ACR_DZE4: Dingo_GL_DST_ACR_DZE3
{
	displayName = "$STR_VEH_NAME_DINGO_MK19_DESERT++++";
	fuelCapacity = 180; // base 100
};