class UAZ_SPG9_INS;
class UAZ_SPG9_INS_DZ: UAZ_SPG9_INS
{
	side = 1;
	faction = "USMC";
	displayName = "$STR_VEH_NAME_UAZ_SPG_INS";
	vehicleClass = "DayZ Epoch Vehicles";
	crew = "";
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};
	class Turrets;
	class MainTurret;
	supplyRadius = 1.3;	
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
};

class UAZ_SPG9_INS_DZE: UAZ_SPG9_INS_DZ
{
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			magazines[] = {};
		};
	};
	
	class Upgrades {
		ItemORP[] = {"UAZ_SPG9_INS_DZE1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class UAZ_SPG9_INS_DZE1: UAZ_SPG9_INS_DZE {
	displayName = "$STR_VEH_NAME_UAZ_SPG_INS+";
	original = "UAZ_SPG9_INS_DZE";
	maxspeed = 190;
	terrainCoef = 1;

	class Upgrades {
		ItemAVE[] = {"UAZ_SPG9_INS_DZE2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"PartGeneric",6},{"ItemScrews",4}}};
	};
};

class UAZ_SPG9_INS_DZE2: UAZ_SPG9_INS_DZE1 {
	displayName = "$STR_VEH_NAME_UAZ_SPG_INS++";
	armor = 75; // UAZ 40
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
		ItemLRK[] = {"UAZ_SPG9_INS_DZE3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

class UAZ_SPG9_INS_DZE3: UAZ_SPG9_INS_DZE2 {
	displayName = "$STR_VEH_NAME_UAZ_SPG_INS+++";
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportmaxbackpacks = 9; // car 2, UAZ 7

	class Upgrades {
		ItemTNK[] = {"UAZ_SPG9_INS_DZE4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
	};
};

class UAZ_SPG9_INS_DZE4: UAZ_SPG9_INS_DZE3 {
	displayName = "$STR_VEH_NAME_UAZ_SPG_INS++++";
	fuelCapacity = 210; // car 100
};

class UAZ_SPG9_CDF_DZ: UAZ_SPG9_INS
{
	side = 1;
	faction = "USMC";
	displayName = "$STR_VEH_NAME_UAZ_SPG_CDF";
	hiddenSelectionsTextures[] = {"\ca\wheeled\data\Uaz_main_002_CO.paa","\ca\wheeled\data\uaz_mount_002_co.paa"};
	vehicleClass = "DayZ Epoch Vehicles";
	crew = "";
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};
	class Turrets;
	class MainTurret;
	supplyRadius = 1.3;	
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
};

class UAZ_SPG9_CDF_DZE: UAZ_SPG9_CDF_DZ
{
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			magazines[] = {};
		};
	};
	
	class Upgrades {
		ItemORP[] = {"UAZ_SPG9_CDF_DZE1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class UAZ_SPG9_CDF_DZE1: UAZ_SPG9_CDF_DZE {
	displayName = "$STR_VEH_NAME_UAZ_SPG_CDF+";
	original = "UAZ_SPG9_CDF_DZE";
	maxspeed = 190;
	terrainCoef = 1;

	class Upgrades {
		ItemAVE[] = {"UAZ_SPG9_CDF_DZE2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"PartGeneric",6},{"ItemScrews",4}}};
	};
};

class UAZ_SPG9_CDF_DZE2: UAZ_SPG9_CDF_DZE1 {
	displayName = "$STR_VEH_NAME_UAZ_SPG_CDF++";
	armor = 75; // UAZ 40
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
		ItemLRK[] = {"UAZ_SPG9_CDF_DZE3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

class UAZ_SPG9_CDF_DZE3: UAZ_SPG9_CDF_DZE2 {
	displayName = "$STR_VEH_NAME_UAZ_SPG_CDF+++";
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportmaxbackpacks = 9; // car 2, UAZ 7

	class Upgrades {
		ItemTNK[] = {"UAZ_SPG9_CDF_DZE4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
	};
};

class UAZ_SPG9_CDF_DZE4: UAZ_SPG9_CDF_DZE3 {
	displayName = "$STR_VEH_NAME_UAZ_SPG_CDF++++";
	fuelCapacity = 210; // car 100
};

class UAZ_SPG9_TK_DZ: UAZ_SPG9_INS
{
	side = 1;
	faction = "USMC";
	displayName = "$STR_VEH_NAME_UAZ_SPG_TK";
	hiddenSelectionsTextures[] = {"\CA\wheeled_E\UAZ\Data\Uaz_main_IND_CO.paa","\ca\wheeled\data\uaz_mount_001_co.paa"};
	vehicleClass = "DayZ Epoch Vehicles";
	crew = "";
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};
	class Turrets;
	class MainTurret;
	supplyRadius = 1.3;	
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
};

class UAZ_SPG9_TK_DZE: UAZ_SPG9_TK_DZ
{
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			magazines[] = {};
		};
	};
	
	class Upgrades {
		ItemORP[] = {"UAZ_SPG9_TK_DZE1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class UAZ_SPG9_TK_DZE1: UAZ_SPG9_TK_DZE {
	displayName = "$STR_VEH_NAME_UAZ_SPG_TK+";
	original = "UAZ_SPG9_TK_DZE";
	maxspeed = 190;
	terrainCoef = 1;

	class Upgrades {
		ItemAVE[] = {"UAZ_SPG9_TK_DZE2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"PartGeneric",6},{"ItemScrews",4}}};
	};
};

class UAZ_SPG9_TK_DZE2: UAZ_SPG9_TK_DZE1 {
	displayName = "$STR_VEH_NAME_UAZ_SPG_TK++";
	armor = 75; // UAZ 40
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
		ItemLRK[] = {"UAZ_SPG9_TK_DZE3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

class UAZ_SPG9_TK_DZE3: UAZ_SPG9_TK_DZE2 {
	displayName = "$STR_VEH_NAME_UAZ_SPG_TK+++";
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportmaxbackpacks = 9; // car 2, UAZ 7

	class Upgrades {
		ItemTNK[] = {"UAZ_SPG9_TK_DZE4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
	};
};

class UAZ_SPG9_TK_DZE4: UAZ_SPG9_TK_DZE3 {
	displayName = "$STR_VEH_NAME_UAZ_SPG_TK++++";
	fuelCapacity = 210; // car 100
};

class UAZ_SPG9_RUST_DZ: UAZ_SPG9_INS
{
	side = 1;
	faction = "USMC";
	displayName = "$STR_VEH_NAME_UAZ_SPG_RUST";
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\uaz\uaz_main_wrecked_co.paa","\ca\wheeled\data\uaz_mount_002_co.paa"};
	vehicleClass = "DayZ Epoch Vehicles";
	crew = "";
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};
	class Turrets;
	class MainTurret;
	supplyRadius = 1.3;	
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
};

class UAZ_SPG9_RUST_DZE: UAZ_SPG9_RUST_DZ
{
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			magazines[] = {};
		};
	};
	
	class Upgrades {
		ItemORP[] = {"UAZ_SPG9_RUST_DZE1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class UAZ_SPG9_RUST_DZE1: UAZ_SPG9_RUST_DZE {
	displayName = "$STR_VEH_NAME_UAZ_SPG_RUST+";
	original = "UAZ_SPG9_RUST_DZE";
	maxspeed = 190;
	terrainCoef = 1;

	class Upgrades {
		ItemAVE[] = {"UAZ_SPG9_RUST_DZE2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"PartGeneric",6},{"ItemScrews",4}}};
	};
};

class UAZ_SPG9_RUST_DZE2: UAZ_SPG9_RUST_DZE1 {
	displayName = "$STR_VEH_NAME_UAZ_SPG_RUST++";
	armor = 75; // UAZ 40
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
		ItemLRK[] = {"UAZ_SPG9_RUST_DZE3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

class UAZ_SPG9_RUST_DZE3: UAZ_SPG9_RUST_DZE2 {
	displayName = "$STR_VEH_NAME_UAZ_SPG_RUST+++";
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportmaxbackpacks = 9; // car 2, UAZ 7

	class Upgrades {
		ItemTNK[] = {"UAZ_SPG9_RUST_DZE4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
	};
};

class UAZ_SPG9_RUST_DZE4: UAZ_SPG9_RUST_DZE3 {
	displayName = "$STR_VEH_NAME_UAZ_SPG_RUST++++";
	fuelCapacity = 210; // car 100
};

class UAZ_SPG_WINTER_DZ: UAZ_SPG9_INS
{
	side = 1;
	faction = "USMC";
	displayName = "$STR_VEH_NAME_UAZ_WINTER_SPG";
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\uaz\uaz_winter.paa","\ca\wheeled\data\uaz_mount_002_co.paa"};
	vehicleClass = "DayZ Epoch Vehicles";
	crew = "";
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};
	class Turrets;
	class MainTurret;
	supplyRadius = 1.3;	
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
};

class UAZ_SPG_WINTER_DZE: UAZ_SPG_WINTER_DZ
{
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			magazines[] = {};
		};
	};
	
	class Upgrades {
		ItemORP[] = {"UAZ_SPG_WINTER_DZE1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class UAZ_SPG_WINTER_DZE1: UAZ_SPG_WINTER_DZE {
	displayName = "$STR_VEH_NAME_UAZ_WINTER_SPG+";
	original = "UAZ_SPG_WINTER_DZE";
	maxspeed = 190;
	terrainCoef = 1;

	class Upgrades {
		ItemAVE[] = {"UAZ_SPG_WINTER_DZE2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"PartGeneric",6},{"ItemScrews",4}}};
	};
};

class UAZ_SPG_WINTER_DZE2: UAZ_SPG_WINTER_DZE1 {
	displayName = "$STR_VEH_NAME_UAZ_WINTER_SPG++";
	armor = 75; // UAZ 40
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
		ItemLRK[] = {"UAZ_SPG_WINTER_DZE3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

class UAZ_SPG_WINTER_DZE3: UAZ_SPG_WINTER_DZE2 {
	displayName = "$STR_VEH_NAME_UAZ_WINTER_SPG+++";
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportmaxbackpacks = 9; // car 2, UAZ 7

	class Upgrades {
		ItemTNK[] = {"UAZ_SPG_WINTER_DZE4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
	};
};

class UAZ_SPG_WINTER_DZE4: UAZ_SPG_WINTER_DZE3 {
	displayName = "$STR_VEH_NAME_UAZ_WINTER_SPG++++";
	fuelCapacity = 210; // car 100
};