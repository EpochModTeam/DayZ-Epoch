class Pickup_PK_GUE;
class Pickup_PK_GUE_DZ: Pickup_PK_GUE {
	side = 1;
	faction = "USMC";
	displayName = "$STR_VEH_NAME_PICKUP_GUE_PKT";
	vehicleClass = "DayZ Epoch Vehicles";

	crew = "";
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};

	terrainCoef = 2.5;

	class Turrets; // External class reference
	class MainTurret; // External class reference
	supplyRadius = 1.3;
};

class Pickup_PK_GUE_DZE: Pickup_PK_GUE_DZ {
	class Turrets: Turrets {
		class MainTurret : MainTurret {
			magazines[] = {};
		};
	};
	class HitPoints; // External class reference
	class HitLFWheel; // External class reference
	class HitLBWheel; // External class reference
	class HitRFWheel; // External class reference
	class HitRBWheel; // External class reference
	class HitFuel; // External class reference
	class HitEngine; // External class reference
	class HitGlass1; // External class reference
	class HitGlass2; // External class reference
	class HitGlass3; // External class reference
	class HitGlass4; // External class reference

	class Upgrades {
		ItemORP[] = {"Pickup_PK_GUE_DZE1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class Pickup_PK_GUE_DZE1: Pickup_PK_GUE_DZE {
	displayName = "$STR_VEH_NAME_PICKUP_GUE_PKT+";
	original = "Pickup_PK_GUE_DZE";
	maxspeed = 150; // max engine limit 125-130
	terrainCoef = 1.8;

	class Upgrades {
		ItemAVE[] = {"Pickup_PK_GUE_DZE2",{"ItemToolbox"},{},{{"ItemAVE",1},{"PartGeneric",6},{"ItemScrews",4}}};
	};
};

class Pickup_PK_GUE_DZE2: Pickup_PK_GUE_DZE1 {
	displayName = "$STR_VEH_NAME_PICKUP_GUE_PKT++";
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
		ItemLRK[] = {"Pickup_PK_GUE_DZE3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

class Pickup_PK_GUE_DZE3: Pickup_PK_GUE_DZE2 {
	displayName = "$STR_VEH_NAME_PICKUP_GUE_PKT+++";
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportmaxbackpacks = 4; // car 2

	class Upgrades {
		ItemTNK[] = {"Pickup_PK_GUE_DZE4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
	};
};

class Pickup_PK_GUE_DZE4: Pickup_PK_GUE_DZE3 {
	displayName = "$STR_VEH_NAME_PICKUP_GUE_PKT++++";
	fuelCapacity = 210; // car 100
};

class Pickup_PK_TK_GUE_EP1;
class Pickup_PK_TK_GUE_EP1_DZ: Pickup_PK_TK_GUE_EP1 {
	side = 1;
	faction = "USMC";
	displayName = "$STR_VEH_NAME_PICKUP_TK_PKT";
	vehicleClass = "DayZ Epoch Vehicles";

	crew = "";
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};

	terrainCoef = 2.5;

	class Turrets; // External class reference
	class MainTurret; // External class reference
	supplyRadius = 1.3;
};

class Pickup_PK_TK_GUE_EP1_DZE: Pickup_PK_TK_GUE_EP1_DZ {
	class Turrets: Turrets {
		class MainTurret : MainTurret {
			magazines[] = {};
		};
	};
	class HitPoints; // External class reference
	class HitLFWheel; // External class reference
	class HitLBWheel; // External class reference
	class HitRFWheel; // External class reference
	class HitRBWheel; // External class reference
	class HitFuel; // External class reference
	class HitEngine; // External class reference
	class HitGlass1; // External class reference
	class HitGlass2; // External class reference
	class HitGlass3; // External class reference
	class HitGlass4; // External class reference

	class Upgrades {
		ItemORP[] = {"Pickup_PK_TK_GUE_EP1_DZE1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class Pickup_PK_TK_GUE_EP1_DZE1: Pickup_PK_TK_GUE_EP1_DZE {
	displayName = "$STR_VEH_NAME_PICKUP_TK_PKT+";
	original = "Pickup_PK_TK_GUE_EP1_DZE";
	maxspeed = 150; // max engine limit 125-130
	terrainCoef = 1.8;

	class Upgrades {
		ItemAVE[] = {"Pickup_PK_TK_GUE_EP1_DZE2",{"ItemToolbox"},{},{{"ItemAVE",1},{"PartGeneric",6},{"ItemScrews",4}}};
	};
};

class Pickup_PK_TK_GUE_EP1_DZE2: Pickup_PK_TK_GUE_EP1_DZE1 {
	displayName = "$STR_VEH_NAME_PICKUP_TK_PKT++";
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
		ItemLRK[] = {"Pickup_PK_TK_GUE_EP1_DZE3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

class Pickup_PK_TK_GUE_EP1_DZE3: Pickup_PK_TK_GUE_EP1_DZE2 {
	displayName = "$STR_VEH_NAME_PICKUP_TK_PKT+++";
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportmaxbackpacks = 4; // car 2

	class Upgrades {
		ItemTNK[] = {"Pickup_PK_TK_GUE_EP1_DZE4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
	};
};

class Pickup_PK_TK_GUE_EP1_DZE4: Pickup_PK_TK_GUE_EP1_DZE3 {
	displayName = "$STR_VEH_NAME_PICKUP_TK_PKT++++";
	fuelCapacity = 210; // car 100
};

class Pickup_PK_INS;
class Pickup_PK_INS_DZ: Pickup_PK_INS {
	side = 1;
	faction = "USMC";
	displayName = "$STR_VEH_NAME_PICKUP_INS_PKT";
	vehicleClass = "DayZ Epoch Vehicles";

	crew = "";
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};

	terrainCoef = 2.5;

	class Turrets; // External class reference
	class MainTurret; // External class reference
	supplyRadius = 1.3;
};

class Pickup_PK_INS_DZE: Pickup_PK_INS_DZ {
	class Turrets: Turrets {
		class MainTurret : MainTurret {
			magazines[] = {};
		};
	};
	class HitPoints; // External class reference
	class HitLFWheel; // External class reference
	class HitLBWheel; // External class reference
	class HitRFWheel; // External class reference
	class HitRBWheel; // External class reference
	class HitFuel; // External class reference
	class HitEngine; // External class reference
	class HitGlass1; // External class reference
	class HitGlass2; // External class reference
	class HitGlass3; // External class reference
	class HitGlass4; // External class reference

	class Upgrades {
		ItemORP[] = {"Pickup_PK_INS_DZE1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class Pickup_PK_INS_DZE1: Pickup_PK_INS_DZE {
	displayName = "$STR_VEH_NAME_PICKUP_INS_PKT+";
	original = "Pickup_PK_INS_DZE";
	maxspeed = 150; // max engine limit 125-130
	terrainCoef = 1.8;

	class Upgrades {
		ItemAVE[] = {"Pickup_PK_INS_DZE2",{"ItemToolbox"},{},{{"ItemAVE",1},{"PartGeneric",6},{"ItemScrews",4}}};
	};
};

class Pickup_PK_INS_DZE2: Pickup_PK_INS_DZE1 {
	displayName = "$STR_VEH_NAME_PICKUP_INS_PKT++";
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
		ItemLRK[] = {"Pickup_PK_INS_DZE3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

class Pickup_PK_INS_DZE3: Pickup_PK_INS_DZE2 {
	displayName = "$STR_VEH_NAME_PICKUP_INS_PKT+++";
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportmaxbackpacks = 4; // car 2

	class Upgrades {
		ItemTNK[] = {"Pickup_PK_INS_DZE4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
	};
};

class Pickup_PK_INS_DZE4: Pickup_PK_INS_DZE3 {
	displayName = "$STR_VEH_NAME_PICKUP_INS_PKT++++";
	fuelCapacity = 210; // car 100
};
