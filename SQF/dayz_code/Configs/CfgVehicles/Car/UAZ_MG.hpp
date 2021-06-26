class UAZ_MG_TK_EP1;
class UAZ_MG_TK_EP1_DZ: UAZ_MG_TK_EP1
{
	side = 1;
	faction = "USMC";
	displayName = "$STR_VEH_NAME_UAZ_DSHKM_TK";
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

class UAZ_MG_TK_EP1_DZE: UAZ_MG_TK_EP1_DZ
{
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			magazines[] = {};
		};
	};
	
	class Upgrades {
		ItemORP[] = {"UAZ_MG_TK_EP1_DZE1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class UAZ_MG_TK_EP1_DZE1: UAZ_MG_TK_EP1_DZE {
	displayName = "$STR_VEH_NAME_UAZ_DSHKM_TK+";
	original = "UAZ_MG_TK_EP1_DZE";
	maxspeed = 190;
	terrainCoef = 1;

	class Upgrades {
		ItemAVE[] = {"UAZ_MG_TK_EP1_DZE2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"PartGeneric",6},{"ItemScrews",4}}};
	};
};

class UAZ_MG_TK_EP1_DZE2: UAZ_MG_TK_EP1_DZE1 {
	displayName = "$STR_VEH_NAME_UAZ_DSHKM_TK++";
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
		ItemLRK[] = {"UAZ_MG_TK_EP1_DZE3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

class UAZ_MG_TK_EP1_DZE3: UAZ_MG_TK_EP1_DZE2 {
	displayName = "$STR_VEH_NAME_UAZ_DSHKM_TK+++";
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportmaxbackpacks = 9; // car 2, UAZ 7

	class Upgrades {
		ItemTNK[] = {"UAZ_MG_TK_EP1_DZE4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
	};
};

class UAZ_MG_TK_EP1_DZE4: UAZ_MG_TK_EP1_DZE3 {
	displayName = "$STR_VEH_NAME_UAZ_DSHKM_TK++++";
	fuelCapacity = 210; // car 100
};

class UAZ_MG_CDF;
class UAZ_MG_CDF_DZ: UAZ_MG_CDF
{
	side = 1;
	faction = "USMC";
	displayName = "$STR_VEH_NAME_UAZ_DSHKM_CDF";
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

class UAZ_MG_CDF_DZE: UAZ_MG_CDF_DZ
{
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			magazines[] = {};
		};
	};
	
	class Upgrades {
		ItemORP[] = {"UAZ_MG_CDF_DZE1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class UAZ_MG_CDF_DZE1: UAZ_MG_CDF_DZE {
	displayName = "$STR_VEH_NAME_UAZ_DSHKM_CDF+";
	original = "UAZ_MG_CDF_DZE";
	maxspeed = 190;
	terrainCoef = 1;

	class Upgrades {
		ItemAVE[] = {"UAZ_MG_CDF_DZE2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"PartGeneric",6},{"ItemScrews",4}}};
	};
};

class UAZ_MG_CDF_DZE2: UAZ_MG_CDF_DZE1 {
	displayName = "$STR_VEH_NAME_UAZ_DSHKM_CDF++";
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
		ItemLRK[] = {"UAZ_MG_CDF_DZE3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

class UAZ_MG_CDF_DZE3: UAZ_MG_CDF_DZE2 {
	displayName = "$STR_VEH_NAME_UAZ_DSHKM_CDF+++";
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportmaxbackpacks = 9; // car 2, UAZ 7

	class Upgrades {
		ItemTNK[] = {"UAZ_MG_CDF_DZE4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
	};
};

class UAZ_MG_CDF_DZE4: UAZ_MG_CDF_DZE3 {
	displayName = "$STR_VEH_NAME_UAZ_DSHKM_CDF++++";
	fuelCapacity = 210; // car 100
};

class UAZ_MG_INS;
class UAZ_MG_INS_DZ: UAZ_MG_INS
{
	side = 1;
	faction = "USMC";
	displayName = "$STR_VEH_NAME_UAZ_DSHKM_INS";
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

class UAZ_MG_INS_DZE: UAZ_MG_INS_DZ
{
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			magazines[] = {};
		};
	};
	
	class Upgrades {
		ItemORP[] = {"UAZ_MG_INS_DZE1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class UAZ_MG_INS_DZE1: UAZ_MG_INS_DZE {
	displayName = "$STR_VEH_NAME_UAZ_DSHKM_INS+";
	original = "UAZ_MG_INS_DZE";
	maxspeed = 190;
	terrainCoef = 1;

	class Upgrades {
		ItemAVE[] = {"UAZ_MG_INS_DZE2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"PartGeneric",6},{"ItemScrews",4}}};
	};
};

class UAZ_MG_INS_DZE2: UAZ_MG_INS_DZE1 {
	displayName = "$STR_VEH_NAME_UAZ_DSHKM_INS++";
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
		ItemLRK[] = {"UAZ_MG_INS_DZE3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

class UAZ_MG_INS_DZE3: UAZ_MG_INS_DZE2 {
	displayName = "$STR_VEH_NAME_UAZ_DSHKM_INS+++";
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportmaxbackpacks = 9; // car 2, UAZ 7

	class Upgrades {
		ItemTNK[] = {"UAZ_MG_INS_DZE4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
	};
};

class UAZ_MG_INS_DZE4: UAZ_MG_INS_DZE3 {
	displayName = "$STR_VEH_NAME_UAZ_DSHKM_INS++++";
	fuelCapacity = 210; // car 100
};

class UAZ_MG_RUST_EP1_DZ: UAZ_MG_TK_EP1
{
	side = 1;
	faction = "USMC";
	displayName = "$STR_VEH_NAME_UAZ_DSHKM_RUST";
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

class UAZ_MG_RUST_EP1_DZE: UAZ_MG_RUST_EP1_DZ
{
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			magazines[] = {};
		};
	};
	
	class Upgrades {
		ItemORP[] = {"UAZ_MG_RUST_EP1_DZE1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class UAZ_MG_RUST_EP1_DZE1: UAZ_MG_RUST_EP1_DZE {
	displayName = "$STR_VEH_NAME_UAZ_DSHKM_RUST+";
	original = "UAZ_MG_RUST_EP1_DZE";
	maxspeed = 190;
	terrainCoef = 1;

	class Upgrades {
		ItemAVE[] = {"UAZ_MG_RUST_EP1_DZE2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"PartGeneric",6},{"ItemScrews",4}}};
	};
};

class UAZ_MG_RUST_EP1_DZE2: UAZ_MG_RUST_EP1_DZE1 {
	displayName = "$STR_VEH_NAME_UAZ_DSHKM_RUST++";
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
		ItemLRK[] = {"UAZ_MG_RUST_EP1_DZE3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

class UAZ_MG_RUST_EP1_DZE3: UAZ_MG_RUST_EP1_DZE2 {
	displayName = "$STR_VEH_NAME_UAZ_DSHKM_RUST+++";
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportmaxbackpacks = 9; // car 2, UAZ 7

	class Upgrades {
		ItemTNK[] = {"UAZ_MG_RUST_EP1_DZE4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
	};
};

class UAZ_MG_RUST_EP1_DZE4: UAZ_MG_RUST_EP1_DZE3 {
	displayName = "$STR_VEH_NAME_UAZ_DSHKM_RUST++++";
	fuelCapacity = 210; // car 100
};

class UAZ_MG_WINTER_DZ: UAZ_MG_TK_EP1
{
	side = 1;
	faction = "USMC";
	displayName = "$STR_VEH_NAME_UAZ_WINTER_DSHKM";
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

class UAZ_MG_WINTER_DZE: UAZ_MG_WINTER_DZ
{
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			magazines[] = {};
		};
	};
	
	class Upgrades {
		ItemORP[] = {"UAZ_MG_WINTER_DZE1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class UAZ_MG_WINTER_DZE1: UAZ_MG_WINTER_DZE {
	displayName = "$STR_VEH_NAME_UAZ_WINTER_DSHKM+";
	original = "UAZ_MG_WINTER_DZE";
	maxspeed = 190;
	terrainCoef = 1;

	class Upgrades {
		ItemAVE[] = {"UAZ_MG_WINTER_DZE2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"PartGeneric",6},{"ItemScrews",4}}};
	};
};

class UAZ_MG_WINTER_DZE2: UAZ_MG_WINTER_DZE1 {
	displayName = "$STR_VEH_NAME_UAZ_WINTER_DSHKM++";
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
		ItemLRK[] = {"UAZ_MG_WINTER_DZE3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

class UAZ_MG_WINTER_DZE3: UAZ_MG_WINTER_DZE2 {
	displayName = "$STR_VEH_NAME_UAZ_WINTER_DSHKM+++";
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportmaxbackpacks = 9; // car 2, UAZ 7

	class Upgrades {
		ItemTNK[] = {"UAZ_MG_WINTER_DZE4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
	};
};

class UAZ_MG_WINTER_DZE4: UAZ_MG_WINTER_DZE3 {
	displayName = "$STR_VEH_NAME_UAZ_WINTER_DSHKM++++";
	fuelCapacity = 210; // car 100
};