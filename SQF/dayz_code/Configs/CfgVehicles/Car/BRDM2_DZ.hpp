class BRDM2_HQ_Base;
class BRDM2_HQ_TK_GUE_EP1: BRDM2_HQ_Base {
	class Turrets; // External class reference
	class MainTurret; // External class reference	
};

class BRDM2_HQ_TK_GUE_EP1_DZ: BRDM2_HQ_TK_GUE_EP1 {
	scope = 2;
	displayname = "$STR_VEH_NAME_BRDM2_HQ";
	vehicleClass = "DayZ Epoch Vehicles";
	crew = "";
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};
	transportMaxMagazines = 100;
	transportMaxWeapons = 20;
	transportmaxbackpacks = 6;
	armor = 85;
	damageResistance = 0.032;
	commanderCanSee = 2+16+32;
	gunnerCanSee = 2+16+32;
	driverCanSee = 2+16+32;
	fuelCapacity = 220;
	enableGPS = 0;
	supplyRadius = 1.4;
	crewVulnerable = 1;

	class Turrets: Turrets {
		class MainTurret: MainTurret {
			class ViewOptics {
				initAngleX = 0;
				minAngleX = -90;
				maxAngleX = 90;
				initAngleY = 0;
				minAngleY = -100;
				maxAngleY = 100;
				initFov = 0.2;
				minFov = 0.05;
				maxFov = 0.2;
				gunnerOpticsEffect[] = {"TankGunnerOptics1","OpticsBlur2","OpticsCHAbera2"};
				visionMode[] = {"Normal"};
			};
			magazines[] = {"100Rnd_762x54_PK","100Rnd_762x54_PK","100Rnd_762x54_PK","100Rnd_762x54_PK"};
		};
	};		
};

class BRDM2_HQ_TK_GUE_EP1_DZE: BRDM2_HQ_TK_GUE_EP1_DZ {
	class Turrets: Turrets {
		class MainTurret: MainTurret {
			magazines[] = {};
		};
	};	

	class Upgrades
	{
		ItemORP[] = {"BRDM2_HQ_TK_GUE_EP1_DZE1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",2},{"PartWheel",4},{"ItemScrews",2}}};
	};	
};

class BRDM2_HQ_TK_GUE_EP1_DZE1: BRDM2_HQ_TK_GUE_EP1_DZE
{
	displayName = "$STR_VEH_NAME_BRDM2_HQ+";
	original = "BRDM2_HQ_TK_GUE_EP1_DZE";
	maxSpeed = 115; //base 100
	terrainCoef = 1; //base 2
	
	class Upgrades
	{
		ItemAVE[] = {"BRDM2_HQ_TK_GUE_EP1_DZE2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"equip_metal_sheet",6},{"ItemScrews",4}}};
	};
};

class BRDM2_HQ_TK_GUE_EP1_DZE2: BRDM2_HQ_TK_GUE_EP1_DZE1
{
	displayName = "$STR_VEH_NAME_BRDM2_HQ++";
	armor = 170; // base 120
	damageResistance = 0.048; // base 0.02409
	
	class Upgrades
	{
		ItemLRK[] = {"BRDM2_HQ_TK_GUE_EP1_DZE3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class BRDM2_HQ_TK_GUE_EP1_DZE3: BRDM2_HQ_TK_GUE_EP1_DZE2
{
	displayName = "$STR_VEH_NAME_BRDM2_HQ+++";
	transportMaxWeapons = 40; 
	transportMaxMagazines = 400; 
	transportmaxbackpacks = 12;
	
	class Upgrades
	{
		ItemTNK[] = {"BRDM2_HQ_TK_GUE_EP1_DZE4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",4},{"PartFueltank",2},{"ItemFuelBarrel",1}}};
	};
};

class BRDM2_HQ_TK_GUE_EP1_DZE4: BRDM2_HQ_TK_GUE_EP1_DZE3
{
	displayName = "$STR_VEH_NAME_BRDM2_HQ++++";
	fuelCapacity = 180; // base 100
};

class BRDM2_TK_EP1: BRDM2_Base {
	class Turrets; // External class reference
	class MainTurret; // External class reference
};
class BRDM2_TK_EP1_DZ: BRDM2_TK_EP1 {
	displayname = "$STR_VEH_NAME_BRDM2_TK";
	vehicleClass = "DayZ Epoch Vehicles";
	crew = "";
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};
	transportMaxMagazines = 100;
	transportMaxWeapons = 20;
	transportmaxbackpacks = 6;
	armor = 85;
	damageResistance = 0.032;
	commanderCanSee = 2+16+32;
	gunnerCanSee = 2+16+32;
	driverCanSee = 2+16+32;
	fuelCapacity = 220;	
	enableGPS = 0;
	supplyRadius = 1.4;
	crewVulnerable = 1;
	
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			weapons[] = {"PKTBC"};
			magazines[] = {"100Rnd_762x54_PK","100Rnd_762x54_PK","100Rnd_762x54_PK","100Rnd_762x54_PK"};
			class ViewOptics
			{
				initAngleX = 0;
				minAngleX = -30;
				maxAngleX = 30;
				initAngleY = 0;
				minAngleY = -100;
				maxAngleY = 100;
				initFov = 0.2;
				minFov = 0.05;
				maxFov = 0.2;
				gunnerOpticsEffect[] = {"TankGunnerOptics1","OpticsBlur2","OpticsCHAbera2"};
				visionMode[] = {"Normal"};
			};
		};
	};
};

class BRDM2_TK_EP1_DZE: BRDM2_TK_EP1_DZ {
	class Turrets: Turrets {
		class MainTurret: MainTurret {
			magazines[] = {};
		};
	};	

	class Upgrades
	{
		ItemORP[] = {"BRDM2_TK_EP1_DZE1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",2},{"PartWheel",4},{"ItemScrews",2}}};
	};	
};

class BRDM2_TK_EP1_DZE1: BRDM2_TK_EP1_DZE
{
	displayName = "$STR_VEH_NAME_BRDM2_TK+";
	original = "BRDM2_TK_EP1_DZE";
	maxSpeed = 115; //base 100
	terrainCoef = 1; //base 2
	
	class Upgrades
	{
		ItemAVE[] = {"BRDM2_TK_EP1_DZE2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"equip_metal_sheet",6},{"ItemScrews",4}}};
	};
};

class BRDM2_TK_EP1_DZE2: BRDM2_TK_EP1_DZE1
{
	displayName = "$STR_VEH_NAME_BRDM2_TK++";
	armor = 170; // base 120
	damageResistance = 0.048; // base 0.02409
	
	class Upgrades
	{
		ItemLRK[] = {"BRDM2_TK_EP1_DZE3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class BRDM2_TK_EP1_DZE3: BRDM2_TK_EP1_DZE2
{
	displayName = "$STR_VEH_NAME_BRDM2_TK+++";
	transportMaxWeapons = 40; 
	transportMaxMagazines = 400; 
	transportmaxbackpacks = 12;
	
	class Upgrades
	{
		ItemTNK[] = {"BRDM2_TK_EP1_DZE4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",4},{"PartFueltank",2},{"ItemFuelBarrel",1}}};
	};
};

class BRDM2_TK_EP1_DZE4: BRDM2_TK_EP1_DZE3
{
	displayName = "$STR_VEH_NAME_BRDM2_TK++++";
	fuelCapacity = 180; // base 100
};

class BRDM2_TK_GUE_EP1_DZ: BRDM2_TK_EP1_DZ {
	displayname = "$STR_VEH_NAME_BRDM2_GUE";
	hiddenSelectionsTextures[] = {"\ca\wheeled\data\BDRM2_KHK_01_CO.paa"};
	hiddenSelections[] = {"Camo1"};	
};

class BRDM2_TK_GUE_EP1_DZE: BRDM2_TK_EP1_DZE {
	displayname = "$STR_VEH_NAME_BRDM2_GUE";
	hiddenSelectionsTextures[] = {"\ca\wheeled\data\BDRM2_KHK_01_CO.paa"};
	hiddenSelections[] = {"Camo1"};	
	
	class Upgrades
	{
		ItemORP[] = {"BRDM2_TK_GUE_EP1_DZE1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",2},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class BRDM2_TK_GUE_EP1_DZE1: BRDM2_TK_GUE_EP1_DZE
{
	displayName = "$STR_VEH_NAME_BRDM2_GUE+";
	original = "BRDM2_TK_GUE_EP1_DZE";
	maxSpeed = 115; //base 100
	terrainCoef = 1; //base 2
	
	class Upgrades
	{
		ItemAVE[] = {"BRDM2_TK_GUE_EP1_DZE2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"equip_metal_sheet",6},{"ItemScrews",4}}};
	};
};

class BRDM2_TK_GUE_EP1_DZE2: BRDM2_TK_GUE_EP1_DZE1
{
	displayName = "$STR_VEH_NAME_BRDM2_GUE++";
	armor = 170; // base 120
	damageResistance = 0.048; // base 0.02409
	
	class Upgrades
	{
		ItemLRK[] = {"BRDM2_TK_GUE_EP1_DZE3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class BRDM2_TK_GUE_EP1_DZE3: BRDM2_TK_GUE_EP1_DZE2
{
	displayName = "$STR_VEH_NAME_BRDM2_GUE+++";
	transportMaxWeapons = 40; 
	transportMaxMagazines = 400; 
	transportmaxbackpacks = 12;
	
	class Upgrades
	{
		ItemTNK[] = {"BRDM2_TK_GUE_EP1_DZE4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",4},{"PartFueltank",2},{"ItemFuelBarrel",1}}};
	};
};

class BRDM2_TK_GUE_EP1_DZE4: BRDM2_TK_GUE_EP1_DZE3
{
	displayName = "$STR_VEH_NAME_BRDM2_GUE++++";
	fuelCapacity = 180; // base 100
};

class BRDM2_Desert_ACR_DZ: BRDM2_TK_EP1_DZ {
	displayname = "$STR_VEH_NAME_BRDM2_DES";
	hiddenSelections[] = {"camo1","camo2"};
	hiddenSelectionsTextures[] = {"\CA\Wheeled_ACR\Data\BDRM2_01_ACR_DES_CO.paa","\CA\Wheeled_ACR\Data\BDRM2_02_ACR_DES_CO.paa"};
};

class BRDM2_Desert_ACR_DZE: BRDM2_TK_EP1_DZE {
	displayname = "$STR_VEH_NAME_BRDM2_DES";
	hiddenSelections[] = {"camo1","camo2"};
	hiddenSelectionsTextures[] = {"\CA\Wheeled_ACR\Data\BDRM2_01_ACR_DES_CO.paa","\CA\Wheeled_ACR\Data\BDRM2_02_ACR_DES_CO.paa"};
	
	class Upgrades
	{
		ItemORP[] = {"BRDM2_Desert_ACR_DZE1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",2},{"PartWheel",4},{"ItemScrews",2}}};
	};	
};

class BRDM2_Desert_ACR_DZE1: BRDM2_Desert_ACR_DZE
{
	displayName = "$STR_VEH_NAME_BRDM2_DES+";
	original = "BRDM2_Desert_ACR_DZE";
	maxSpeed = 115; //base 100
	terrainCoef = 1; //base 2
	
	class Upgrades
	{
		ItemAVE[] = {"BRDM2_Desert_ACR_DZE2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"equip_metal_sheet",6},{"ItemScrews",4}}};
	};
};

class BRDM2_Desert_ACR_DZE2: BRDM2_Desert_ACR_DZE1
{
	displayName = "$STR_VEH_NAME_BRDM2_DES++";
	armor = 170; // base 120
	damageResistance = 0.048; // base 0.02409
	
	class Upgrades
	{
		ItemLRK[] = {"BRDM2_Desert_ACR_DZE3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class BRDM2_Desert_ACR_DZE3: BRDM2_Desert_ACR_DZE2
{
	displayName = "$STR_VEH_NAME_BRDM2_DES+++";
	transportMaxWeapons = 40; 
	transportMaxMagazines = 400; 
	transportmaxbackpacks = 12;
	
	class Upgrades
	{
		ItemTNK[] = {"BRDM2_Desert_ACR_DZE4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",4},{"PartFueltank",2},{"ItemFuelBarrel",1}}};
	};
};

class BRDM2_Desert_ACR_DZE4: BRDM2_Desert_ACR_DZE3
{
	displayName = "$STR_VEH_NAME_BRDM2_DES++++";
	fuelCapacity = 180; // base 100
};