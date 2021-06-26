class MTVR_Bird_base: Helicopter
{
	scope = 0;
	displayName = "MTVR Bird";
	destrType = DestructWreck;
	model = "\z\addons\dayz_epoch_v\vehicles\mtvrcopter\scropter";
	picture = "\dayz_epoch_c\icons\vehicles\mtvr_bird.paa";
	icon = "\ca\air_e\data\UI\Icon_ah6j_CA.paa";	
	vehicleClass = "DayZ Epoch Vehicles";
	mapSize = 8;
	maxSpeed = 135;
	nameSound = "chopper";
	side = 1;
	faction = "USMC";
	crew = "";
	accuracy = 0.3;
	armor = 35;
	damageResistance = 0.01039;	
	cost = 100000;
	transportSoldier = 1;
	cargoAction[] = {"UH1Y_Cargo01"};
	transportAmmo = 0;
	supplyRadius = 2.5;	
	driverAction = "AH6j_Pilot_EP1";
	getInAction = "GetInHigh";
	getOutAction = "GetOutHigh";	
	hasGunner = 0;
	threat[] = {0,0,0};
	extCameraPosition[]	= {0,2,-15};
	commanderCanSee = 2+16+32;
	gunnerCanSee = 2+16+32;
	driverCanSee = 2+16+32;	
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};	
	transportMaxWeapons = 12;
	transportMaxMagazines = 45;
	transportMaxBackpacks = 5;
	fuelCapacity = 500;
	weapons[] = {"CMFlareLauncher"};
	magazines[] = {"60Rnd_CMFlareMagazine"};
	LockDetectionSystem = 0;
	IncommingMisslieDetectionSystem = 0;
	radartype = 0;	
	mainRotorSpeed = 1.5;
	backRotorSpeed = 4;
	castCargoShadow	= 1;		
	occludeSoundsWhenIn = db-5;
	obstructSoundsWhenIn = db-10;
	cargoIsCoDriver[] = {0};
	class turrets {};
	irScanRangeMin = 500;
	irScanRangeMax = 1000;
	irScanToEyeFactor = 2;	
	soundGetIn[] = {"\ca\sounds\Air\Mi17\ext\ext-Mi17-getin-01",1,1,50};		
	soundGetOut[] = {"\ca\sounds\Air\Mi17\ext\ext-Mi17-getout-01",1.0,1,50};
	soundDammage[] = {"\ca\sounds\Air\Mi17\int\alarm_loop1",0.001,1};
	soundEngineOnInt[] = {"\ca\sounds\Air\Mi17\int\int-Mi17-start-1a",0.56234133,1.0};
	soundEngineOnExt[] = {"\ca\sounds\Air\Mi17\ext\ext-Mi17-start-01a",0.7943282,1.0,800};
	soundEngineOffInt[] = {"\ca\sounds\Air\Mi17\int\int-Mi17-stop-1a",0.56234133,1.0};
	soundEngineOffExt[] = {"\ca\sounds\Air\Mi17\ext\ext-Mi17-stop-01a",0.7943282,1.0,800};
	class Sounds
	{
		class Engine
		{
			sound[] = {"\ca\sounds\air\Mi17\ext\ext-sovietheli-engine-6",5.623413,1.0,900};
			frequency = "rotorSpeed";
			volume = "camPos*((rotorSpeed-0.72)*4)";
		};
		class RotorLowOut
		{
			sound[] = {"\ca\sounds\air\Mi17\ext\ext-Mi17-rotor-low-2",1.7782794,1.0,1400};
			frequency = "rotorSpeed";
			volume = "camPos*(0 max (rotorSpeed-0.1))";
			cone[] = {1.6,3.14,2.0,0.95};
		};
		class RotorHighOut
		{
			sound[] = {"\ca\sounds\air\Mi17\ext\ext-Mi17-rotor-high-2",3.1622777,1.0,1700};
			frequency = "rotorSpeed";
			volume = "camPos*10*(0 max (rotorThrust-0.9))";
			cone[] = {1.6,3.14,2.0,0.95};
		};
		class EngineIn
		{
			sound[] = {"\ca\sounds\air\Mi17\int\int-sovietheli-engine-3",1.0,1.0};
			frequency = "rotorSpeed";
			volume = "(1-camPos)*((rotorSpeed-0.75)*4)";
		};
		class RotorLowIn
		{
			sound[] = {"\ca\sounds\air\Mi17\int\int-Mi17-rotor-low-2",1.7782794,1.0};
			frequency = "rotorSpeed";
			volume = "(1-camPos)*(0 max (rotorSpeed-0.1))";
		};
		class RotorHighIn
		{
			sound[] = {"\ca\sounds\air\Mi17\int\int-Mi17-rotor-high-2",1.7782794,1.0};
			frequency = "rotorSpeed";
			volume = "(1-camPos)*3*(rotorThrust-0.9)";
		};
	};
	
	class ViewOptics
	{
		initAngleX = 0; 
		minAngleX = -30; 
		maxAngleX = 30;
		initAngleY = 0; 
		minAngleY = -86; 
		maxAngleY = 86;
		initFov = 0.1; 
		minFov = 0.03; 
		maxFov = 1.2;
	};	
	
	class Reflectors
	{
		class Light
		{
			color[] = {0.8, 0.8, 1.0, 1.0};
			ambient[] = {0.07, 0.07, 0.07, 1.0};
			position = "L svetlo";
			direction = "konec l svetla";
			hitpoint = "svetlo L";
			selection = "L svetlo";
			size = 1;
			brightness = 1.0;
		};
	};
	
	class Damage
	{
		tex[]={};
		mat[]={};
	};	
	class Library
	{
		libTextDesc = "Made from scrap 5 tonne MTVR truck.";
	};
	
	class HitPoints: HitPoints
	{
		class HitGlass1: HitGlass1 
		{
			armor = 0.5;
		};
		class HitGlass2: HitGlass2 
		{
			armor = 0.5;
		};
	};
};

class MTVR_Bird_DZE: MTVR_Bird_base
{
	scope = 2;
	displayname = "$STR_VEH_NAME_MTVR_BIRD";
	
	class Upgrades
	{
		ItemHeliAVE[] = {"MTVR_Bird_DZE1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class MTVR_Bird_DZE1: MTVR_Bird_DZE
{
	displayName = "$STR_VEH_NAME_MTVR_BIRD+";
	original = "MTVR_Bird_DZE";
	armor = 70;
	damageResistance = 0.02078;
	
	class Upgrades
	{
		ItemHeliLRK[] = {"MTVR_Bird_DZE2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class MTVR_Bird_DZE2: MTVR_Bird_DZE1
{
	displayName = "$STR_VEH_NAME_MTVR_BIRD++";
	transportMaxWeapons = 24;
	transportMaxMagazines = 90;
	transportmaxbackpacks = 8;
	
	class Upgrades
	{
		ItemHeliTNK[] = {"MTVR_Bird_DZE3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class MTVR_Bird_DZE3: MTVR_Bird_DZE2
{
	displayName = "$STR_VEH_NAME_MTVR_BIRD+++";
	fuelCapacity = 900;
};
