class BAF_Jackal2_L2A1_D;
class BAF_Jackal2_L2A1_D_DZ : BAF_Jackal2_L2A1_D 
{
	side = 1;
	faction = "USMC";
	displayname = "$STR_VEH_NAME_JACKAL_L2A1_DESERT";
	vehicleClass = "DayZ Epoch Vehicles";
	crew = "";
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};	
	transportMaxMagazines = 100;
	transportMaxWeapons = 15;
	transportmaxbackpacks = 5;
	class Turrets;
	class MainTurret;
	supplyRadius = 1.5;
};

class BAF_Jackal2_L2A1_D_DZE : BAF_Jackal2_L2A1_D_DZ 
{
	class Turrets: Turrets
	{
		class M420_Turret: MainTurret
		{
			gunnerName = "$STR_POSITION_COMMANDER";
			primaryGunner = 0;
			primaryObserver = 1;
			discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800};
			discreteDistanceInitIndex = 2;	
			turretInfoType = "RscWeaponZeroing";			
			commanding = 2;
			body = "mainTurret_2";
			gun = "mainGun_2";
			animationSourceBody = "mainTurret_2";
			animationSourceGun = "mainGun_2";
			proxyIndex = 2;
			gunBeg = "usti hlavne_2";
			gunEnd = "konec hlavne_2";
			memoryPointGun = "gun_muzzle";
			selectionFireAnim = "zasleh_2";
			memoryPointGunnerOptics = "gunnerview_2";
			LODTurnedOut = 1100;
			LODTurnedIn = 1100;
			minElev = -18;
			maxElev = 40;
			minTurn = -35;
			maxTurn = 45;
			initTurn = 0;
			gunnerOpticsModel = "\ca\Weapons\optika_empty";
			gunnerForceOptics = 0;
			weapons[] = {"BAF_M240_veh","SmokeLauncher"};
			magazines[] = {"SmokeLauncherMag","SmokeLauncherMag"};
			soundServo[] = {};
			gunnerAction = "Jackal_commander_BAF";
			gunnerInAction = "Jackal_commander_BAF";
			ejectDeadGunner = 0;
			stabilizedInAxes = "StabilizedInAxesNone";
			memoryPointsGetInGunner = "pos codriver";
			memoryPointsGetInGunnerDir = "pos codriver dir";
		};
		class M2_Turret: MainTurret
		{
			body = "mainTurret";
			gun = "mainGun";
			animationSourceBody = "mainTurret";
			animationSourceGun = "mainGun";
			turretInfoType = "RscWeaponZeroing";
			discreteDistance[] = {100,200,300,400,500,600,800,1000,1200,1500};
			discreteDistanceInitIndex = 2;
			gunnerForceOptics = 0;
			gunnerOutOpticsShowCursor = 0;
			weapons[] = {"BAF_L2A1"};
			minElev = -25;
			maxElev = 40;
			soundServo[] = {"\Ca\sounds\Vehicles\Servos\turret-1",0.0099999998,1,10};	
			magazines[] = {};
			gunnerAction = "Jackal_gunner_L2A1_BAF";
			ejectDeadGunner = 0;
			castGunnerShadow = 1;
			stabilizedInAxes = "StabilizedInAxesNone";
			gunBeg = "usti hlavne";
			gunEnd = "konec hlavne";
			memoryPointGunnerOptics = "gunnerview";
			optics = 1;
			gunnerOpticsModel = "ca\Weapons_baf\ACOG_optic";
			class ViewOptics
			{
				initAngleX = 0;
				minAngleX = -30;
				maxAngleX = 30;
				initAngleY = 0;
				minAngleY = -100;
				maxAngleY = 100;
				initFov = 0.0623;
				minFov = 0.0623;
				maxFov = 0.0623;
			};
			class GunFire: WeaponCloudsMGun
			{
				interval = 0.01;
			};
			memoryPointsGetInGunner = "pos gunner";
			memoryPointsGetInGunnerDir = "pos gunner dir";
		};
	};
	
	class Upgrades
	{
		ItemORP[] = {"BAF_Jackal2_L2A1_D_DZE1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",2},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class BAF_Jackal2_L2A1_D_DZE1: BAF_Jackal2_L2A1_D_DZE 
{
	displayName = "$STR_VEH_NAME_JACKAL_L2A1_DESERT+";
	original = "BAF_Jackal2_L2A1_D_DZE";
	maxSpeed = 155; // base 150
	turnCoef = 4; // base 3
	terrainCoef = 1; //base 3
	
	class Upgrades
	{
		ItemAVE[] = {"BAF_Jackal2_L2A1_D_DZE2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"equip_metal_sheet",6},{"ItemScrews",4}}};
	};
};

class BAF_Jackal2_L2A1_D_DZE2: BAF_Jackal2_L2A1_D_DZE1
{
	displayName = "$STR_VEH_NAME_JACKAL_L2A1_DESERT++";
	armor = 60; // base 30
	damageResistance = 0.015; // base 0.00719
	
	class Upgrades
	{
		ItemLRK[] = {"BAF_Jackal2_L2A1_D_DZE3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class BAF_Jackal2_L2A1_D_DZE3: BAF_Jackal2_L2A1_D_DZE2
{
	displayName = "$STR_VEH_NAME_JACKAL_L2A1_DESERT+++";
	transportMaxWeapons = 30; 
	transportMaxMagazines = 200; 
	transportmaxbackpacks = 10;
	
	class Upgrades
	{
		ItemTNK[] = {"BAF_Jackal2_L2A1_D_DZE4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",4},{"PartFueltank",2},{"ItemFuelBarrel",1}}};
	};
};

class BAF_Jackal2_L2A1_D_DZE4: BAF_Jackal2_L2A1_D_DZE3
{
	displayName = "$STR_VEH_NAME_JACKAL_L2A1_DESERT++++";
	fuelCapacity = 180; // base 100
};

class BAF_Jackal2_L2A1_W_DZ : BAF_Jackal2_L2A1_D_DZ
{
	model = "\CorePatch\CorePatch_Vehicles\models\Jackal_L2A1_W_BAF";
	displayname = "$STR_VEH_NAME_JACKAL_L2A1_WOODLAND";
	class Turrets;
	class MainTurret;
	class M420_Turret;
};

class BAF_Jackal2_L2A1_W_DZE : BAF_Jackal2_L2A1_W_DZ
{
	class Turrets: Turrets
	{
		class M420_Turret: MainTurret
		{
			gunnerName = "$STR_POSITION_COMMANDER";
			primaryGunner = 0;
			primaryObserver = 1;
			turretInfoType = "RscWeaponZeroing";
			discreteDistance[] = {100,200,300,400,500,600,800,1000,1200,1500};
			discreteDistanceInitIndex = 2;			
			commanding = 2;
			body = "mainTurret_2";
			gun = "mainGun_2";
			animationSourceBody = "mainTurret_2";
			animationSourceGun = "mainGun_2";
			proxyIndex = 2;
			gunBeg = "usti hlavne_2";
			gunEnd = "konec hlavne_2";
			memoryPointGun = "gun_muzzle";
			selectionFireAnim = "zasleh_2";
			memoryPointGunnerOptics = "gunnerview_2";
			LODTurnedOut = 1100;
			LODTurnedIn = 1100;
			minElev = -18;
			maxElev = 40;
			minTurn = -35;
			maxTurn = 45;
			initTurn = 0;
			gunnerOpticsModel = "\ca\Weapons\optika_empty";
			gunnerForceOptics = 0;
			weapons[] = {"BAF_M240_veh","SmokeLauncher"};
			magazines[] = {"SmokeLauncherMag","SmokeLauncherMag"};
			soundServo[] = {};
			gunnerAction = "Jackal_commander_BAF";
			gunnerInAction = "Jackal_commander_BAF";
			ejectDeadGunner = 0;
			stabilizedInAxes = "StabilizedInAxesNone";
			memoryPointsGetInGunner = "pos codriver";
			memoryPointsGetInGunnerDir = "pos codriver dir";
		};
		class M2_Turret: MainTurret
		{
			body = "mainTurret";
			gun = "mainGun";
			animationSourceBody = "mainTurret";
			animationSourceGun = "mainGun";
			turretInfoType = "RscWeaponZeroing";
			discreteDistance[] = {100,200,300,400,500,600,800,1000,1200,1500};
			discreteDistanceInitIndex = 2;
			gunnerForceOptics = 0;
			gunnerOutOpticsShowCursor = 0;
			weapons[] = {"BAF_L2A1"};
			minElev = -25;
			maxElev = 40;
			soundServo[] = {"\Ca\sounds\Vehicles\Servos\turret-1",0.0099999998,1,10};			
			magazines[] = {};
			gunnerAction = "Jackal_gunner_L2A1_BAF";
			ejectDeadGunner = 0;
			castGunnerShadow = 1;
			stabilizedInAxes = "StabilizedInAxesNone";
			gunBeg = "usti hlavne";
			gunEnd = "konec hlavne";
			memoryPointGunnerOptics = "gunnerview";
			optics = 1;
			gunnerOpticsModel = "ca\Weapons_baf\ACOG_optic";
			class ViewOptics
			{
				initAngleX = 0;
				minAngleX = -30;
				maxAngleX = 30;
				initAngleY = 0;
				minAngleY = -100;
				maxAngleY = 100;
				initFov = 0.0623;
				minFov = 0.0623;
				maxFov = 0.0623;
			};
			class GunFire: WeaponCloudsMGun
			{
				interval = 0.01;
			};
			memoryPointsGetInGunner = "pos gunner";
			memoryPointsGetInGunnerDir = "pos gunner dir";
		};
	};
	
	class Upgrades
	{
		ItemORP[] = {"BAF_Jackal2_L2A1_W_DZE1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",2},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class BAF_Jackal2_L2A1_W_DZE1: BAF_Jackal2_L2A1_W_DZE 
{
	displayName = "$STR_VEH_NAME_JACKAL_L2A1_WOODLAND+";
	original = "BAF_Jackal2_L2A1_W_DZE";
	maxSpeed = 155; // base 150
	turnCoef = 4; // base 3
	terrainCoef = 1; //base 3
	
	class Upgrades
	{
		ItemAVE[] = {"BAF_Jackal2_L2A1_W_DZE2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"equip_metal_sheet",6},{"ItemScrews",4}}};
	};
};

class BAF_Jackal2_L2A1_W_DZE2: BAF_Jackal2_L2A1_W_DZE1
{
	displayName = "$STR_VEH_NAME_JACKAL_L2A1_WOODLAND++";
	armor = 60; // base 30
	damageResistance = 0.015; // base 0.00719
	
	class Upgrades
	{
		ItemLRK[] = {"BAF_Jackal2_L2A1_W_DZE3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class BAF_Jackal2_L2A1_W_DZE3: BAF_Jackal2_L2A1_W_DZE2
{
	displayName = "$STR_VEH_NAME_JACKAL_L2A1_WOODLAND+++";
	transportMaxWeapons = 30; 
	transportMaxMagazines = 200; 
	transportmaxbackpacks = 10;
	
	class Upgrades
	{
		ItemTNK[] = {"BAF_Jackal2_L2A1_W_DZE4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",4},{"PartFueltank",2},{"ItemFuelBarrel",1}}};
	};
};

class BAF_Jackal2_L2A1_W_DZE4: BAF_Jackal2_L2A1_W_DZE3
{
	displayName = "$STR_VEH_NAME_JACKAL_L2A1_WOODLAND++++";
	fuelCapacity = 180; // base 100
};

class BAF_Jackal2_GMG_D;
class BAF_Jackal2_GMG_D_DZ : BAF_Jackal2_GMG_D
{
	side = 1;
	faction = "USMC";	
	displayname = "$STR_VEH_NAME_JACKAL_MK19_DESERT";
	vehicleClass = "DayZ Epoch Vehicles";
	crew = "";
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};	
	transportMaxMagazines = 100;
	transportMaxWeapons = 15;
	transportmaxbackpacks = 5;	
	class Turrets;
	class MainTurret;
	class M420_Turret;
	class GMG_Turret;
	supplyRadius = 1.5;
};

class BAF_Jackal2_GMG_D_DZE : BAF_Jackal2_GMG_D_DZ
{
	displayname = "$STR_VEH_NAME_JACKAL_MK19_DESERT";
	class Turrets: Turrets
	{
		class M420_Turret: M420_Turret{
			magazines[] = {};
		};
		class GMG_Turret: MainTurret
		{
			body = "mainTurret";
			gun = "mainGun";
			animationSourceBody = "mainTurret";
			animationSourceGun = "mainGun";
			turretInfoType = "RscWeaponZeroing";
			discreteDistance[] = {100,200,300,400,600,800,1000,1200,1500,1800};
			discreteDistanceInitIndex = 3;
			gunnerForceOptics = 0;
			gunnerOutOpticsShowCursor = 0;
			minElev = -25;
			maxElev = 40;
			soundServo[] = {"\Ca\sounds\Vehicles\Servos\turret-1",0.0099999998,1,10};
			weapons[] = {"BAF_GMG"};
			magazines[] = {};
			gunnerAction = "Jackal_gunner_GMG_BAF";
			ejectDeadGunner = 0;
			castGunnerShadow = 1;
			stabilizedInAxes = "StabilizedInAxesNone";
			gunBeg = "usti hlavne";
			gunEnd = "konec hlavne";
			class GunFire: WeaponCloudsMGun
			{
				interval = 0.01;
			};
			memoryPointsGetInGunner = "pos gunner";
			memoryPointsGetInGunnerDir = "pos gunner dir";
			memoryPointGunnerOptics = "gunnerview";
			optics = 1;
			gunnerOpticsModel = "\ca\Weapons_baf\nlaw_optic";
			class ViewOptics
			{
				initAngleX = 0;
				minAngleX = -30;
				maxAngleX = 30;
				initAngleY = 0;
				minAngleY = -100;
				maxAngleY = 100;
				initFov = 0.0623;
				minFov = 0.0623;
				maxFov = 0.0623;
			};
		};
	};
	
	class Upgrades
	{
		ItemORP[] = {"BAF_Jackal2_GMG_D_DZE1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",2},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class BAF_Jackal2_GMG_D_DZE1: BAF_Jackal2_GMG_D_DZE 
{
	displayName = "$STR_VEH_NAME_JACKAL_MK19_DESERT+";
	original = "BAF_Jackal2_GMG_D_DZE";
	maxSpeed = 155; // base 150
	turnCoef = 4; // base 3
	terrainCoef = 1; //base 3
	
	class Upgrades
	{
		ItemAVE[] = {"BAF_Jackal2_GMG_D_DZE2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"equip_metal_sheet",6},{"ItemScrews",4}}};
	};
};

class BAF_Jackal2_GMG_D_DZE2: BAF_Jackal2_GMG_D_DZE1
{
	displayName = "$STR_VEH_NAME_JACKAL_MK19_DESERT++";
	armor = 60; // base 30
	damageResistance = 0.015; // base 0.00719
	
	class Upgrades
	{
		ItemLRK[] = {"BAF_Jackal2_GMG_D_DZE3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class BAF_Jackal2_GMG_D_DZE3: BAF_Jackal2_GMG_D_DZE2
{
	displayName = "$STR_VEH_NAME_JACKAL_MK19_DESERT+++";
	transportMaxWeapons = 30; 
	transportMaxMagazines = 200; 
	transportmaxbackpacks = 10;
	
	class Upgrades
	{
		ItemTNK[] = {"BAF_Jackal2_GMG_D_DZE4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",4},{"PartFueltank",2},{"ItemFuelBarrel",1}}};
	};
};

class BAF_Jackal2_GMG_D_DZE4: BAF_Jackal2_GMG_D_DZE3
{
	displayName = "$STR_VEH_NAME_JACKAL_MK19_DESERT++++";
	fuelCapacity = 180; // base 100
};

class BAF_Jackal2_GMG_W_DZ : BAF_Jackal2_GMG_D_DZ
{
	model = "\CorePatch\CorePatch_Vehicles\models\Jackal_GMG_W_BAF";
	displayname = "$STR_VEH_NAME_JACKAL_MK19_WOODLAND";
	class Turrets;
	class MainTurret;
	class M420_Turret;
	class GMG_Turret;
};

class BAF_Jackal2_GMG_W_DZE : BAF_Jackal2_GMG_W_DZ
{
	class Turrets: Turrets
	{
		class M420_Turret: M420_Turret{
			magazines[] = {};
		};
		class GMG_Turret: MainTurret
		{
			body = "mainTurret";
			gun = "mainGun";
			animationSourceBody = "mainTurret";
			animationSourceGun = "mainGun";
			turretInfoType = "RscWeaponZeroing";
			discreteDistance[] = {100,200,300,400,600,800,1000,1200,1500,1800};
			discreteDistanceInitIndex = 3;
			gunnerForceOptics = 0;
			gunnerOutOpticsShowCursor = 0;
			minElev = -25;
			maxElev = 40;
			soundServo[] = {"\Ca\sounds\Vehicles\Servos\turret-1",0.0099999998,1,10};
			weapons[] = {"BAF_GMG"};
			magazines[] = {};
			gunnerAction = "Jackal_gunner_GMG_BAF";
			ejectDeadGunner = 0;
			castGunnerShadow = 1;
			stabilizedInAxes = "StabilizedInAxesNone";
			gunBeg = "usti hlavne";
			gunEnd = "konec hlavne";
			class GunFire: WeaponCloudsMGun
			{
				interval = 0.01;
			};
			memoryPointsGetInGunner = "pos gunner";
			memoryPointsGetInGunnerDir = "pos gunner dir";
			memoryPointGunnerOptics = "gunnerview";
			optics = 1;
			gunnerOpticsModel = "\ca\Weapons_baf\nlaw_optic";
			class ViewOptics
			{
				initAngleX = 0;
				minAngleX = -30;
				maxAngleX = 30;
				initAngleY = 0;
				minAngleY = -100;
				maxAngleY = 100;
				initFov = 0.0623;
				minFov = 0.0623;
				maxFov = 0.0623;
			};
		};
	};
		
	class Upgrades
	{
		ItemORP[] = {"BAF_Jackal2_GMG_W_DZE1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",2},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class BAF_Jackal2_GMG_W_DZE1: BAF_Jackal2_GMG_W_DZE 
{
	displayName = "$STR_VEH_NAME_JACKAL_MK19_WOODLAND+";
	original = "BAF_Jackal2_GMG_W_DZE";
	maxSpeed = 155; // base 150
	turnCoef = 4; // base 3
	terrainCoef = 1; //base 3
	
	class Upgrades
	{
		ItemAVE[] = {"BAF_Jackal2_GMG_W_DZE2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"equip_metal_sheet",6},{"ItemScrews",4}}};
	};
};

class BAF_Jackal2_GMG_W_DZE2: BAF_Jackal2_GMG_W_DZE1
{
	displayName = "$STR_VEH_NAME_JACKAL_MK19_WOODLAND++";
	armor = 60; // base 30
	damageResistance = 0.015; // base 0.00719
	
	class Upgrades
	{
		ItemLRK[] = {"BAF_Jackal2_GMG_W_DZE3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class BAF_Jackal2_GMG_W_DZE3: BAF_Jackal2_GMG_W_DZE2
{
	displayName = "$STR_VEH_NAME_JACKAL_MK19_WOODLAND+++";
	transportMaxWeapons = 30; 
	transportMaxMagazines = 200; 
	transportmaxbackpacks = 10;
	
	class Upgrades
	{
		ItemTNK[] = {"BAF_Jackal2_GMG_W_DZE4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",4},{"PartFueltank",2},{"ItemFuelBarrel",1}}};
	};
};

class BAF_Jackal2_GMG_W_DZE4: BAF_Jackal2_GMG_W_DZE3
{
	displayName = "$STR_VEH_NAME_JACKAL_MK19_WOODLAND++++";
	fuelCapacity = 180; // base 100
};