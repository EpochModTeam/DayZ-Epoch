class hilux1_civil_1_open;
class hilux1_civil_1_open_DZE: hilux1_civil_1_open {
	displayName = "$STR_VEH_NAME_PICKUP_TAN";
	vehicleClass = "DayZ Epoch Vehicles";
	terrainCoef = 2.5;
	crew = "";
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};
	class HitPoints;
	supplyRadius = 1.5;

	class Upgrades {
		ItemORP[] = {"hilux1_civil_1_open_DZE1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",4},{"ItemScrews",2}}};
		ItemARM[] = {"Pickup_PK_GUE_DZE",{"ItemToolbox"},{"PKM_DZ"},{{"ItemARM",1},{"PartGeneric",2},{"ItemPole",1},{"ItemScrews",2}}};
	};
};

class hilux1_civil_1_open_DZE1: hilux1_civil_1_open_DZE {
	displayName = "$STR_VEH_NAME_PICKUP_TAN+";
	original = "hilux1_civil_1_open_DZE";
	maxspeed = 150; // max engine limit 125-130
	terrainCoef = 1.8;
	class HitPoints: HitPoints {
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

	class Upgrades {
		ItemAVE[] = {"hilux1_civil_1_open_DZE2",{"ItemToolbox"},{},{{"ItemAVE",1},{"PartGeneric",6},{"ItemScrews",4}}};
		ItemARM[] = {"Pickup_PK_GUE_DZE1",{"ItemToolbox"},{"PKM_DZ"},{{"ItemARM",1},{"PartGeneric",2},{"ItemPole",1},{"ItemScrews",2}}};
	};
};

class hilux1_civil_1_open_DZE2: hilux1_civil_1_open_DZE1 {
	displayName = "$STR_VEH_NAME_PICKUP_TAN++";
	armor = 55; // car 20
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
		ItemLRK[] = {"hilux1_civil_1_open_DZE3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
		ItemARM[] = {"Pickup_PK_GUE_DZE2",{"ItemToolbox"},{"PKM_DZ"},{{"ItemARM",1},{"PartGeneric",2},{"ItemPole",1},{"ItemScrews",2}}};
	};
};

class hilux1_civil_1_open_DZE3: hilux1_civil_1_open_DZE2 {
	displayName = "$STR_VEH_NAME_PICKUP_TAN+++";
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportmaxbackpacks = 4; // car 2

	class Upgrades {
		ItemTNK[] = {"hilux1_civil_1_open_DZE4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
		ItemARM[] = {"Pickup_PK_GUE_DZE3",{"ItemToolbox"},{"PKM_DZ"},{{"ItemARM",1},{"PartGeneric",2},{"ItemPole",1},{"ItemScrews",2}}};
	};
};

class hilux1_civil_1_open_DZE4: hilux1_civil_1_open_DZE3 {
	displayName = "$STR_VEH_NAME_PICKUP_TAN++++";
	fuelCapacity = 210; // car 100

	class Upgrades {
		ItemARM[] = {"Pickup_PK_GUE_DZE4",{"ItemToolbox"},{"PKM_DZ"},{{"ItemARM",1},{"PartGeneric",2},{"ItemPole",1},{"ItemScrews",2}}};
	};
};

class hilux1_civil_2_covered;
class hilux1_civil_2_covered_DZE: hilux1_civil_2_covered {
	displayName = "$STR_VEH_NAME_PICKUP_COVERED_RED";
	vehicleClass = "DayZ Epoch Vehicles";
	terrainCoef = 2.5;
	crew = "";
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};
	class HitPoints;
	supplyRadius = 1.5;

	class Upgrades {
		ItemORP[] = {"hilux1_civil_2_covered_DZE1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",4},{"ItemScrews",2}}};
		ItemARM[] = {"Pickup_PK_TK_GUE_EP1_DZE",{"ItemToolbox"},{"PKM_DZ"},{{"ItemARM",1},{"PartGeneric",2},{"ItemPole",1},{"ItemScrews",2}}};
	};
};

class hilux1_civil_2_covered_DZE1: hilux1_civil_2_covered_DZE {
	displayName = "$STR_VEH_NAME_PICKUP_COVERED_RED+";
	original = "hilux1_civil_2_covered_DZE";
	maxspeed = 150; // car 100
	terrainCoef = 1.8;
	class HitPoints: HitPoints {
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

	class Upgrades {
		ItemAVE[] = {"hilux1_civil_2_covered_DZE2",{"ItemToolbox"},{},{{"ItemAVE",1},{"PartGeneric",6},{"ItemScrews",4}}};
		ItemARM[] = {"Pickup_PK_TK_GUE_EP1_DZE1",{"ItemToolbox"},{"PKM_DZ"},{{"ItemARM",1},{"PartGeneric",2},{"ItemPole",1},{"ItemScrews",2}}};
	};
};

class hilux1_civil_2_covered_DZE2: hilux1_civil_2_covered_DZE1 {
	displayName = "$STR_VEH_NAME_PICKUP_COVERED_RED++";
	armor = 55; // car 20
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
		ItemLRK[] = {"hilux1_civil_2_covered_DZE3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
		ItemARM[] = {"Pickup_PK_TK_GUE_EP1_DZE2",{"ItemToolbox"},{"PKM_DZ"},{{"ItemARM",1},{"PartGeneric",2},{"ItemPole",1},{"ItemScrews",2}}};
	};
};

class hilux1_civil_2_covered_DZE3: hilux1_civil_2_covered_DZE2 {
	displayName = "$STR_VEH_NAME_PICKUP_COVERED_RED+++";
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportmaxbackpacks = 4; // car 2

	class Upgrades {
		ItemTNK[] = {"hilux1_civil_2_covered_DZE4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
		ItemARM[] = {"Pickup_PK_TK_GUE_EP1_DZE3",{"ItemToolbox"},{"PKM_DZ"},{{"ItemARM",1},{"PartGeneric",2},{"ItemPole",1},{"ItemScrews",2}}};
	};
};

class hilux1_civil_2_covered_DZE4: hilux1_civil_2_covered_DZE3 {
	displayName = "$STR_VEH_NAME_PICKUP_COVERED_RED++++";
	fuelCapacity = 210; // car 100

	class Upgrades {
		ItemARM[] = {"Pickup_PK_TK_GUE_EP1_DZE4",{"ItemToolbox"},{"PKM_DZ"},{{"ItemARM",1},{"PartGeneric",2},{"ItemPole",1},{"ItemScrews",2}}};
	};
};

class hilux1_civil_3_open;
class hilux1_civil_3_open_DZE: hilux1_civil_3_open {
	displayName = "$STR_VEH_NAME_PICKUP_WHITE";
	vehicleClass = "DayZ Epoch Vehicles";
	terrainCoef = 2.5;
	crew = "";
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};
	class HitPoints;
	supplyRadius = 1.5;

	class Upgrades {
		ItemORP[] = {"hilux1_civil_3_open_DZE1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",4},{"ItemScrews",2}}};
		ItemARM[] = {"Pickup_PK_INS_DZE",{"ItemToolbox"},{"PKM_DZ"},{{"ItemARM",1},{"PartGeneric",2},{"ItemPole",1},{"ItemScrews",2}}};
	};
};

class hilux1_civil_3_open_DZE1: hilux1_civil_3_open_DZE {
	displayName = "$STR_VEH_NAME_PICKUP_WHITE+";
	original = "hilux1_civil_3_open_DZE";
	maxspeed = 150; // car 100
	terrainCoef = 1.8;
	class HitPoints: HitPoints {
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

	class Upgrades {
		ItemAVE[] = {"hilux1_civil_3_open_DZE2",{"ItemToolbox"},{},{{"ItemAVE",1},{"PartGeneric",6},{"ItemScrews",4}}};
		ItemARM[] = {"Pickup_PK_INS_DZE1",{"ItemToolbox"},{"PKM_DZ"},{{"ItemARM",1},{"PartGeneric",2},{"ItemPole",1},{"ItemScrews",2}}};
	};
};

class hilux1_civil_3_open_DZE2: hilux1_civil_3_open_DZE1 {
	displayName = "$STR_VEH_NAME_PICKUP_WHITE++";
	armor = 55; // car 20
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
		ItemLRK[] = {"hilux1_civil_3_open_DZE3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
		ItemARM[] = {"Pickup_PK_INS_DZE2",{"ItemToolbox"},{"PKM_DZ"},{{"ItemARM",1},{"PartGeneric",2},{"ItemPole",1},{"ItemScrews",2}}};
	};
};

class hilux1_civil_3_open_DZE3: hilux1_civil_3_open_DZE2 {
	displayName = "$STR_VEH_NAME_PICKUP_WHITE+++";
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportmaxbackpacks = 4; // car 2

	class Upgrades {
		ItemTNK[] = {"hilux1_civil_3_open_DZE4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
		ItemARM[] = {"Pickup_PK_INS_DZE3",{"ItemToolbox"},{"PKM_DZ"},{{"ItemARM",1},{"PartGeneric",2},{"ItemPole",1},{"ItemScrews",2}}};
	};
};

class hilux1_civil_3_open_DZE4: hilux1_civil_3_open_DZE3 {
	displayName = "$STR_VEH_NAME_PICKUP_WHITE++++";
	fuelCapacity = 210; // car 100

	class Upgrades {
		ItemARM[] = {"Pickup_PK_INS_DZE4",{"ItemToolbox"},{"PKM_DZ"},{{"ItemARM",1},{"PartGeneric",2},{"ItemPole",1},{"ItemScrews",2}}};
	};
};