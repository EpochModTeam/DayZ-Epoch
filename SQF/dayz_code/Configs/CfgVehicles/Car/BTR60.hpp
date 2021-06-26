class BTR60_TK_EP1: BRDM2_Base {
	class Turrets; // External class reference
	class MainTurret; // External class reference
};

class BTR60_TK_EP1_DZ: BTR60_TK_EP1 {
	side = 1;
	faction = "USMC";
	displayName = "$STR_VEH_NAME_BTR60_WOOD";
	vehicleClass = "DayZ Epoch Vehicles";

	commanderCanSee = 2+16+32;
	gunnerCanSee = 2+16+32;
	driverCanSee = 2+16+32;

	crew = "";
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};

	transportMaxMagazines = 100;
	transportMaxWeapons = 20;
	transportmaxbackpacks = 6;
	enableGPS = 0;
	supplyRadius = 1.8;
	crewVulnerable = 1;

	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			body = "mainTurret";
			gun = "mainGun";
			weapons[] = {"PKT"};
			soundServo[] = {"\ca\sounds\vehicles\servos\turret-1",0.1,1.0,15};
			magazines[] = {"100Rnd_762x54_PK","100Rnd_762x54_PK","100Rnd_762x54_PK","100Rnd_762x54_PK"};
			gunnerOpticsEffect[] = {"TankGunnerOptics1","OpticsBlur2","OpticsCHAbera2"};
			class ViewOptics
			{
				initAngleX = 0;
				minAngleX = -30;
				maxAngleX = 30;
				initAngleY = 0;
				minAngleY = -100;
				maxAngleY = 100;
				initFov = 0.2;
				minFov = 0.058;
				maxFov = 0.2;
				visionMode[] = {"Normal"};
			};
			gunnerAction = "BTR60_Gunner_EP1";
			gunnerInAction = "BTR60_Gunner_EP1";
			gunnerGetInAction = "GetInHigh";
			gunnerGetOutAction = "GetOutHigh";
			gunnerOpticsModel = "\ca\weapons\2Dscope_BMPgun";
			gunnerForceOptics = 1;
			startEngine = 0;
			stabilizedInAxes = "StabilizedInAxesNone";
			commanding = 2;
			primaryGunner = 1;
			primaryObserver = 0;
			class HitPoints
			{
				class HitTurret
				{
					armor = 0.8;
					material = -1;
					name = "vez";
					visual = "vez";
					passThrough = 1;
				};
			};
		};
		class CommanderTurret: MainTurret
		{
			body = "ObsTurret";
			gun = "ObsGun";
			proxyType = "CPCommander";
			proxyIndex = 1;
			gunnerName = "$STR_POSITION_COMMANDER";
			primaryGunner = 0;
			primaryObserver = 1;
			gunnerOpticsShowCursor = 0;
			LODTurnedIn = 1200;
			LODTurnedOut = 0.0;
			animationSourceBody = "obsTurret";
			animationSourceGun = "obsGun";
			animationSourceHatch = "hatchCommander";
			minElev = -10;
			maxElev = 20;
			initElev = 0;
			minTurn = -90;
			maxTurn = 90;
			initTurn = 0;
			weapons[] = {};
			magazines[] = {};
			gunnerOpticsEffect[] = {"TankGunnerOptics1","OpticsBlur2","OpticsCHAbera2"};
			class ViewOptics
			{
				initAngleX = 0;
				minAngleX = -30;
				maxAngleX = 30;
				initAngleY = 0;
				minAngleY = -100;
				maxAngleY = 100;
				initFov = 0.3;
				minFov = 0.093;
				maxFov = 0.466;
				visionMode[] = {"Normal"};
			};
			gunnerAction = "BTR60_Commander_EP1";
			gunnerInAction = "BTR60_Commander_EP1";
			discreteDistance[] = {};
			discreteDistanceInitIndex = 0;
			gunnerOpticsModel = "\CorePatch\CorePatch_Vehicles\models\optika_T72_commander";
			turretInfoType = "RscWeaponEmpty";
			gunnerOutOpticsModel = "";
			gunnerOutOpticsColor[] = {0,0,0,1};
			gunnerForceOptics = 0;
			gunnerOutForceOptics = 0;
			gunnerOutOpticsShowCursor = 0;
			startEngine = 0;
			stabilizedInAxes = "StabilizedInAxesNone";
			commanding = 1;
			memoryPointGunnerOutOptics = "commander_weapon_view";
			memoryPointGunnerOptics = "commanderview";
			memoryPointsGetInGunner = "pos commander";
			memoryPointsGetInGunnerDir = "pos commander dir";
		};
	};	
};

class BTR60_TK_EP1_DZE: BTR60_TK_EP1_DZ {
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			body = "mainTurret";
			gun = "mainGun";
			weapons[] = {"PKT"};
			soundServo[] = {"\ca\sounds\vehicles\servos\turret-1",0.1,1.0,15};
			magazines[] = {};
			gunnerOpticsEffect[] = {"TankGunnerOptics1","OpticsBlur2","OpticsCHAbera2"};
			class ViewOptics
			{
				initAngleX = 0;
				minAngleX = -30;
				maxAngleX = 30;
				initAngleY = 0;
				minAngleY = -100;
				maxAngleY = 100;
				initFov = 0.2;
				minFov = 0.058;
				maxFov = 0.2;
				visionMode[] = {"Normal"};
			};
			gunnerAction = "BTR60_Gunner_EP1";
			gunnerInAction = "BTR60_Gunner_EP1";
			gunnerGetInAction = "GetInHigh";
			gunnerGetOutAction = "GetOutHigh";
			gunnerOpticsModel = "\ca\weapons\2Dscope_BMPgun";
			gunnerForceOptics = 1;
			startEngine = 0;
			stabilizedInAxes = "StabilizedInAxesNone";
			commanding = 2;
			primaryGunner = 1;
			primaryObserver = 0;
			class HitPoints
			{
				class HitTurret
				{
					armor = 0.8;
					material = -1;
					name = "vez";
					visual = "vez";
					passThrough = 1;
				};
			};
		};
		class CommanderTurret: MainTurret
		{
			body = "ObsTurret";
			gun = "ObsGun";
			proxyType = "CPCommander";
			proxyIndex = 1;
			gunnerName = "$STR_POSITION_COMMANDER";
			primaryGunner = 0;
			primaryObserver = 1;
			gunnerOpticsShowCursor = 0;
			LODTurnedIn = 1200;
			LODTurnedOut = 0.0;
			animationSourceBody = "obsTurret";
			animationSourceGun = "obsGun";
			animationSourceHatch = "hatchCommander";
			minElev = -10;
			maxElev = 20;
			initElev = 0;
			minTurn = -90;
			maxTurn = 90;
			initTurn = 0;
			weapons[] = {};
			magazines[] = {};
			gunnerOpticsEffect[] = {"TankGunnerOptics1","OpticsBlur2","OpticsCHAbera2"};
			class ViewOptics
			{
				initAngleX = 0;
				minAngleX = -30;
				maxAngleX = 30;
				initAngleY = 0;
				minAngleY = -100;
				maxAngleY = 100;
				initFov = 0.3;
				minFov = 0.093;
				maxFov = 0.466;
				visionMode[] = {"Normal"};
			};
			gunnerAction = "BTR60_Commander_EP1";
			gunnerInAction = "BTR60_Commander_EP1";
			discreteDistance[] = {};
			discreteDistanceInitIndex = 0;
			gunnerOpticsModel = "\CorePatch\CorePatch_Vehicles\models\optika_T72_commander";
			turretInfoType = "RscWeaponEmpty";
			gunnerOutOpticsModel = "";
			gunnerOutOpticsColor[] = {0,0,0,1};
			gunnerForceOptics = 0;
			gunnerOutForceOptics = 0;
			gunnerOutOpticsShowCursor = 0;
			startEngine = 0;
			stabilizedInAxes = "StabilizedInAxesNone";
			commanding = 1;
			memoryPointGunnerOutOptics = "commander_weapon_view";
			memoryPointGunnerOptics = "commanderview";
			memoryPointsGetInGunner = "pos commander";
			memoryPointsGetInGunnerDir = "pos commander dir";
		};
	};	
	
	class Upgrades {
		ItemTankORP[] = {"BTR60_TK_EP1_DZE1",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankORP",1},{"PartEngine",6},{"PartGeneric",2},{"ItemScrews",2}}};
	};
};

class BTR60_TK_EP1_DZE1: BTR60_TK_EP1_DZE {
	displayName = "$STR_VEH_NAME_BTR60_WOOD+";
	original = "BTR60_TK_EP1_DZE";
	maxspeed = 120; // base 100
	terrainCoef = 1; // base 2
	turnCoef = 6;  // base 4
	
	class Upgrades {
		ItemTankAVE[] = {"BTR60_TK_EP1_DZE2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankAVE",1},{"equip_metal_sheet",8},{"ItemScrews",2}}};
	};
};

class BTR60_TK_EP1_DZE2: BTR60_TK_EP1_DZE1 {
	displayName = "$STR_VEH_NAME_BTR60_WOOD++";
	armor = 200; // base 120
	damageResistance = 0.037; // base 0.01849
	
	class Upgrades {
		ItemTankLRK[] = {"BTR60_TK_EP1_DZE3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class BTR60_TK_EP1_DZE3: BTR60_TK_EP1_DZE2 {
	displayName = "$STR_VEH_NAME_BTR60_WOOD+++";
	transportMaxWeapons = 40;
	transportMaxMagazines = 200;
	transportmaxbackpacks = 12;
	
	class Upgrades {
		ItemTankTNK[] = {"BTR60_TK_EP1_DZE4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankTNK",1},{"PartFueltank",6},{"ItemFuelBarrel",4}}};
	};
};

class BTR60_TK_EP1_DZE4: BTR60_TK_EP1_DZE3 {
	displayName = "$STR_VEH_NAME_BTR60_WOOD++++";
	fuelCapacity = 200; // base 100	
};

class BTR60_Gue_DZ: BTR60_TK_EP1_DZ {
	displayName = $STR_VEH_NAME_BTR60_GREEN;
	hiddenSelectionsTextures[] = {"\CorePatch\CorePatch_Vehicles\textures\btr60_body_gue_co.paa","\CorePatch\CorePatch_Vehicles\textures\btr60_details_gue_co.paa"};	
};

class BTR60_Gue_DZE: BTR60_TK_EP1_DZE {
	displayName = "$STR_VEH_NAME_BTR60_GREEN";
	hiddenSelectionsTextures[] = {"\CorePatch\CorePatch_Vehicles\textures\btr60_body_gue_co.paa","\CorePatch\CorePatch_Vehicles\textures\btr60_details_gue_co.paa"};	

	class Upgrades {
		ItemTankORP[] = {"BTR60_Gue_DZE1",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankORP",1},{"PartEngine",6},{"PartGeneric",2},{"ItemScrews",2}}};
	};
};

class BTR60_Gue_DZE1: BTR60_Gue_DZE {
	displayName = "$STR_VEH_NAME_BTR60_GREEN+";
	original = "BTR60_Gue_DZE";
	maxspeed = 120; // base 100
	terrainCoef = 1; // base 2
	turnCoef = 6;  // base 4
	
	class Upgrades {
		ItemTankAVE[] = {"BTR60_Gue_DZE2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankAVE",1},{"equip_metal_sheet",8},{"ItemScrews",2}}};
	};
};

class BTR60_Gue_DZE2: BTR60_Gue_DZE1 {
	displayName = "$STR_VEH_NAME_BTR60_GREEN++";
	armor = 200; // base 120
	damageResistance = 0.037; // base 0.01849
	
	class Upgrades {
		ItemTankLRK[] = {"BTR60_Gue_DZE3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class BTR60_Gue_DZE3: BTR60_Gue_DZE2 {
	displayName = "$STR_VEH_NAME_BTR60_GREEN+++";
	transportMaxWeapons = 40;
	transportMaxMagazines = 200;
	transportmaxbackpacks = 12;
	
	class Upgrades {
		ItemTankTNK[] = {"BTR60_Gue_DZE4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankTNK",1},{"PartFueltank",6},{"ItemFuelBarrel",4}}};
	};
};

class BTR60_Gue_DZE4: BTR60_Gue_DZE3 {
	displayName = "$STR_VEH_NAME_BTR60_GREEN++++";
	fuelCapacity = 200; // base 100	
};