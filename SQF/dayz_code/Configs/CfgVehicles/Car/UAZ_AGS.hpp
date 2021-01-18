class UAZ_AGS30_RU;
class UAZ_AGS30_RU_DZ: UAZ_AGS30_RU
{
	scope = 2;
	displayName = "$STR_VEH_NAME_UAZ_AGS";
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

class UAZ_AGS30_RU_DZE: UAZ_AGS30_RU_DZ
{
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			magazines[] = {};
		};
	};
	
	class Upgrades {
		ItemORP[] = {"UAZ_AGS30_RU_DZE1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class UAZ_AGS30_RU_DZE1: UAZ_AGS30_RU_DZE {
	displayName = "$STR_VEH_NAME_UAZ_AGS+";
	original = "UAZ_AGS30_RU_DZE";
	maxspeed = 190;
	terrainCoef = 1;

	class Upgrades {
		ItemAVE[] = {"UAZ_AGS30_RU_DZE2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"PartGeneric",6},{"ItemScrews",4}}};
	};
};

class UAZ_AGS30_RU_DZE2: UAZ_AGS30_RU_DZE1 {
	displayName = "$STR_VEH_NAME_UAZ_AGS++";
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
		ItemLRK[] = {"UAZ_AGS30_RU_DZE3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

class UAZ_AGS30_RU_DZE3: UAZ_AGS30_RU_DZE2 {
	displayName = "$STR_VEH_NAME_UAZ_AGS+++";
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportmaxbackpacks = 9; // car 2, UAZ 7

	class Upgrades {
		ItemTNK[] = {"UAZ_AGS30_RU_DZE4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
	};
};

class UAZ_AGS30_RU_DZE4: UAZ_AGS30_RU_DZE3 {
	displayName = "$STR_VEH_NAME_UAZ_AGS++++";
	fuelCapacity = 210; // car 100
};

class UAZ_AGS30_RUST_DZ: UAZ_AGS30_RU
{
	scope = 2;
	displayName = "$STR_VEH_NAME_UAZ_AGS_RUST";
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

class UAZ_AGS30_RUST_DZE: UAZ_AGS30_RUST_DZ
{
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			magazines[] = {};
		};
	};
	
	class Upgrades {
		ItemORP[] = {"UAZ_AGS30_RUST_DZE1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class UAZ_AGS30_RUST_DZE1: UAZ_AGS30_RUST_DZE {
	displayName = "$STR_VEH_NAME_UAZ_AGS_RUST+";
	original = "UAZ_AGS30_RUST_DZE";
	maxspeed = 190;
	terrainCoef = 1;

	class Upgrades {
		ItemAVE[] = {"UAZ_AGS30_RUST_DZE2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"PartGeneric",6},{"ItemScrews",4}}};
	};
};

class UAZ_AGS30_RUST_DZE2: UAZ_AGS30_RUST_DZE1 {
	displayName = "$STR_VEH_NAME_UAZ_AGS_RUST++";
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
		ItemLRK[] = {"UAZ_AGS30_RUST_DZE3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

class UAZ_AGS30_RUST_DZE3: UAZ_AGS30_RUST_DZE2 {
	displayName = "$STR_VEH_NAME_UAZ_AGS_RUST+++";
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportmaxbackpacks = 9; // car 2, UAZ 7

	class Upgrades {
		ItemTNK[] = {"UAZ_AGS30_RUST_DZE4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
	};
};

class UAZ_AGS30_RUST_DZE4: UAZ_AGS30_RUST_DZE3 {
	displayName = "$STR_VEH_NAME_UAZ_AGS_RUST++++";
	fuelCapacity = 210; // car 100
};

class UAZ_AGS30_WINTER_DZ: UAZ_AGS30_RU
{
	scope = 2;
	displayName = "$STR_VEH_NAME_UAZ_WINTER_AGS";
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

class UAZ_AGS30_WINTER_DZE: UAZ_AGS30_WINTER_DZ
{
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			magazines[] = {};
		};
	};
	
	class Upgrades {
		ItemORP[] = {"UAZ_AGS30_WINTER_DZE1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class UAZ_AGS30_WINTER_DZE1: UAZ_AGS30_WINTER_DZE {
	displayName = "$STR_VEH_NAME_UAZ_WINTER_AGS+";
	original = "UAZ_AGS30_WINTER_DZE";
	maxspeed = 190;
	terrainCoef = 1;

	class Upgrades {
		ItemAVE[] = {"UAZ_AGS30_WINTER_DZE2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"PartGeneric",6},{"ItemScrews",4}}};
	};
};

class UAZ_AGS30_WINTER_DZE2: UAZ_AGS30_WINTER_DZE1 {
	displayName = "$STR_VEH_NAME_UAZ_WINTER_AGS++";
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
		ItemLRK[] = {"UAZ_AGS30_WINTER_DZE3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

class UAZ_AGS30_WINTER_DZE3: UAZ_AGS30_WINTER_DZE2 {
	displayName = "$STR_VEH_NAME_UAZ_WINTER_AGS+++";
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportmaxbackpacks = 9; // car 2, UAZ 7

	class Upgrades {
		ItemTNK[] = {"UAZ_AGS30_WINTER_DZE4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
	};
};

class UAZ_AGS30_WINTER_DZE4: UAZ_AGS30_WINTER_DZE3 {
	displayName = "$STR_VEH_NAME_UAZ_WINTER_AGS++++";
	fuelCapacity = 210; // car 100
};