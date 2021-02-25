class GAZ_Vodnik_HMG;
class GAZ_Vodnik_HMG_DZ : GAZ_Vodnik_HMG {
	scope = 2;
	displayname = "$STR_VEH_NAME_VODNIK_BPPU";
	vehicleClass = "DayZ Epoch Vehicles";
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};
	class Turrets;
	class NewTurret;
	commanderCanSee = 2+16+32;
	gunnerCanSee = 2+16+32;
	driverCanSee = 2+16+32;	
	transportMaxWeapons = 15;
	transportMaxMagazines = 70;
    transportmaxbackpacks = 4;
	enableGPS = 0;
	supplyRadius = 1.8;
	crewVulnerable = 1;
};

class GAZ_Vodnik_HMG_DZE : GAZ_Vodnik_HMG_DZ {
	class Turrets: Turrets {
		class MainTurret: NewTurret
		{
			outGunnerMayFire = 1;
			minElev = -8;
			maxElev = 40;
			minTurn = -180;
			maxTurn = 180;
			initTurn = 0;
			gunBeg = "muzzle_1";
			gunEnd = "chamber_1";
			memoryPointGun = "machinegun";
			weapons[] = {"2A42","PKTBC","SmokeLauncher"};
			magazines[] = {"SmokeLauncherMag","SmokeLauncherMag","SmokeLauncherMag"};
			gunnerOutOpticsShowCursor = 0;
			gunnerOpticsShowCursor = 0;
			gunnerAction = "GAZ_Gunner";
			gunnerInAction = "GAZ_Gunner";
			primaryGunner = 1;
			forceHideGunner = 1;
			gunnerOpticsModel = "\ca\weapons\2Dscope_BMPgun";
			gunnerForceOptics = 1;
			discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500, 1600, 1700, 1800};
			discreteDistanceInitIndex = 5;
			gunnerGetInAction = "GetInLow";
			gunnerGetOutAction = "GetOutLow";
			turretInfoType = "RscWeaponRangeZeroing";			
			class ViewOptics
			{
				initAngleX = 5;
				minAngleX = -30;
				maxAngleX = 30;
				initAngleY = 0;
				minAngleY = 0;
				maxAngleY = 0;
				initFov = 0.2;
				maxFov = 0.2;
				minFov = 0.057999998;
			};
			soundServo[] = {"\ca\wheeled\Data\Sound\servo4",0.0056234132,1.0,15};
			startEngine = 1;
			class HitPoints
			{
				class HitTurret
				{
					armor = 0.8;
					material = -1;
					name = "vez";
					visual = "vez";
					passThrough = 0.5;
				};
				class HitGun
				{
					armor = 0.4;
					material = -1;
					name = "zbran";
					visual = "zbran";
					passThrough = 0.1;
				};
			};
		};
	};
	
	class Upgrades
	{
		ItemORP[] = {"GAZ_Vodnik_HMG_DZE1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",2},{"PartWheel",4},{"ItemScrews",2}}};
	};	
};

class GAZ_Vodnik_HMG_DZE1: GAZ_Vodnik_HMG_DZE
{
	displayName = "$STR_VEH_NAME_VODNIK_BPPU+";
	original = "GAZ_Vodnik_HMG_DZE";
	maxSpeed = 115; // base 100
	turnCoef = 7; // base 5
	terrainCoef = 1; //base 2
	
	class Upgrades
	{
		ItemAVE[] = {"GAZ_Vodnik_HMG_DZE2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"equip_metal_sheet",6},{"ItemScrews",4}}};
	};
};

class GAZ_Vodnik_HMG_DZE2: GAZ_Vodnik_HMG_DZE1
{
	displayName = "$STR_VEH_NAME_VODNIK_BPPU++";
	armor = 120; // base 100
	damageResistance = 0.06; // base 0.02972
	
	class Upgrades
	{
		ItemLRK[] = {"GAZ_Vodnik_HMG_DZE3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class GAZ_Vodnik_HMG_DZE3: GAZ_Vodnik_HMG_DZE2
{
	displayName = "$STR_VEH_NAME_VODNIK_BPPU+++";
	transportMaxWeapons = 30; 
	transportMaxMagazines = 140; 
	transportmaxbackpacks = 8;
	
	class Upgrades
	{
		ItemTNK[] = {"GAZ_Vodnik_HMG_DZE4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",4},{"PartFueltank",2},{"ItemFuelBarrel",1}}};
	};
};

class GAZ_Vodnik_HMG_DZE4: GAZ_Vodnik_HMG_DZE3
{
	displayName = "$STR_VEH_NAME_VODNIK_BPPU++++";
	fuelCapacity = 340; // base 220
};

class GAZ_Vodnik;
class GAZ_Vodnik_DZ : GAZ_Vodnik {
	scope = 2;
	displayname = "$STR_VEH_NAME_VODNIK_PKT";
	vehicleClass = "DayZ Epoch Vehicles";
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};	
	class Turrets;
	class MainTurret;
	class BackTurret;
	transportMaxWeapons = 15;
	transportMaxMagazines = 70;
    transportmaxbackpacks = 4;	
	enableGPS = 0;
	supplyRadius = 1.8;
	crewVulnerable = 1;
};

class GAZ_Vodnik_DZE : GAZ_Vodnik_DZ
{
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			minElev = -25;
			maxElev = 60;
			minTurn = -90;
			maxTurn = 90;
			gunnerName = "$STR_POSITION_FRONTGUNNER";
			weapons[] = {"PKTBC"};	
			magazines[] = {};
			soundServo[] = {};
			viewGunnerInExternal = 1;
			castGunnerShadow = 1;
			gunnerForceOptics = 0;
			gunnerOpticsModel = "\ca\weapons\optika_empty";
			LODTurnedOut = 1000;
			LODTurnedIn = 1000;
			forceHideGunner = 0;
			primaryGunner = 0;
			discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500};
			discreteDistanceInitIndex = 2;
			initElev = 0;			
			stabilizedInAxes = "StabilizedInAxesNone";
			primaryObserver = 1;
			turretInfoType = "RscWeaponZeroing";					
			class ViewOptics
			{
				initAngleX = 0;
				minAngleX = -30;
				maxAngleX = 30;
				initAngleY = 0;
				minAngleY = -100;
				maxAngleY = 100;
				initFov = 0.7;
				minFov = 0.25;
				maxFov = 1.1;
			};
			class ViewGunner
			{
				initAngleX = 5;
				minAngleX = -65;
				maxAngleX = 85;
				initAngleY = 0;
				minAngleY = -150;
				maxAngleY = 150;
				initFov = 0.7;
				minFov = 0.25;
				maxFov = 1.1;
			};
			startEngine = 0;
		};
		class BackTurret: MainTurret
		{
			body = "turret_2";
			gun = "gun_2";
			weapons[] = {"PKTBC_2"};
			animationSourceBody = "turret_2";
			animationSourceGun = "gun_2";
			selectionFireAnim = "zasleh2";
			proxyIndex = 2;
			gunnerName = "$STR_POSITION_REARGUNNER";
			forceHideGunner = 0;
			commanding = 2;
			primaryGunner = 1;
			primaryObserver = 0;
			minTurn = 90;
			maxTurn = 270;
			initTurn = 180;
			stabilizedInAxes = "StabilizedInAxesNone";
			gunBeg = "muzzle_2";
			gunEnd = "chamber_2";
			memoryPointGun = "machinegun2";
			memoryPointGunnerOptics = "gunnerview2";
			startEngine = 0;
		};
	};
	
	class Upgrades
	{
		ItemORP[] = {"GAZ_Vodnik_DZE1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",2},{"PartWheel",4},{"ItemScrews",2}}};
	};	
};

class GAZ_Vodnik_DZE1: GAZ_Vodnik_DZE
{
	displayName = "$STR_VEH_NAME_VODNIK_PKT+";
	original = "GAZ_Vodnik_DZE";
	maxSpeed = 115; // base 100
	turnCoef = 7; // base 5
	terrainCoef = 1; //base 2
	
	class Upgrades
	{
		ItemAVE[] = {"GAZ_Vodnik_DZE2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"equip_metal_sheet",6},{"ItemScrews",4}}};
	};
};

class GAZ_Vodnik_DZE2: GAZ_Vodnik_DZE1
{
	displayName = "$STR_VEH_NAME_VODNIK_PKT++";
	armor = 105; // base 85
	damageResistance = 0.065; // base 0.032
	
	class Upgrades
	{
		ItemLRK[] = {"GAZ_Vodnik_DZE3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class GAZ_Vodnik_DZE3: GAZ_Vodnik_DZE2
{
	displayName = "$STR_VEH_NAME_VODNIK_PKT+++";
	transportMaxWeapons = 30; 
	transportMaxMagazines = 140; 
	transportmaxbackpacks = 8;
	
	class Upgrades
	{
		ItemTNK[] = {"GAZ_Vodnik_DZE4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",4},{"PartFueltank",2},{"ItemFuelBarrel",1}}};
	};
};

class GAZ_Vodnik_DZE4: GAZ_Vodnik_DZE3
{
	displayName = "$STR_VEH_NAME_VODNIK_PKT++++";
	fuelCapacity = 340; // base 220
};

class GAZ_Vodnik_MedEvac;
class GAZ_Vodnik_MedEvac_DZE : GAZ_Vodnik_MedEvac {
	crewVulnerable = 1;
	displayname = "$STR_VEH_NAME_VODNIK_MEDEVAC";
	vehicleClass = "DayZ Epoch Vehicles";
	crew = "";
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};
	transportMaxWeapons = 15;
	transportMaxMagazines = 70;
    transportmaxbackpacks = 4;	
	attendant = 0;
	enableGPS = 0;
	supplyRadius = 1.8;
	
	class Upgrades
	{
		ItemORP[] = {"GAZ_Vodnik_MedEvac_DZE1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",2},{"PartWheel",4},{"ItemScrews",2}}};
	};	
};

class GAZ_Vodnik_MedEvac_DZE1: GAZ_Vodnik_MedEvac_DZE
{
	displayName = "$STR_VEH_NAME_VODNIK_MEDEVAC+";
	original = "GAZ_Vodnik_MedEvac_DZE";
	maxSpeed = 115; // base 100
	turnCoef = 7; // base 5
	terrainCoef = 1; //base 2
	
	class Upgrades
	{
		ItemAVE[] = {"GAZ_Vodnik_MedEvac_DZE2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"equip_metal_sheet",6},{"ItemScrews",4}}};
	};
};

class GAZ_Vodnik_MedEvac_DZE2: GAZ_Vodnik_MedEvac_DZE1
{
	displayName = "$STR_VEH_NAME_VODNIK_MEDEVAC++";
	armor = 105; // base 85
	damageResistance = 0.065; // base 0.032
	
	class Upgrades
	{
		ItemLRK[] = {"GAZ_Vodnik_MedEvac_DZE3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class GAZ_Vodnik_MedEvac_DZE3: GAZ_Vodnik_MedEvac_DZE2
{
	displayName = "$STR_VEH_NAME_VODNIK_MEDEVAC+++";
	transportMaxWeapons = 30; 
	transportMaxMagazines = 140; 
	transportmaxbackpacks = 8;
	
	class Upgrades
	{
		ItemTNK[] = {"GAZ_Vodnik_MedEvac_DZE4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",4},{"PartFueltank",2},{"ItemFuelBarrel",1}}};
	};
};

class GAZ_Vodnik_MedEvac_DZE4: GAZ_Vodnik_MedEvac_DZE3
{
	displayName = "$STR_VEH_NAME_VODNIK_MEDEVAC++++";
	fuelCapacity = 340; // base 220
};