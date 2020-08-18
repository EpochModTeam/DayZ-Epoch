class Lada1;
class Lada1_DZE: Lada1 {
	scope = 2;
	displayname = "$STR_VEH_NAME_LADA_WHITE";
	vehicleClass = "DayZ Epoch Vehicles";
	crew = "";
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};	
	armor = 20;
	damageResistance = 0.01511;
	fuelCapacity = 50;
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
	supplyRadius = 1.5;

	class Upgrades {
		ItemORP[] = {"Lada1_DZE1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class Lada1_DZE1: Lada1_DZE {
	displayname = "$STR_VEH_NAME_LADA_WHITE+";
	original = "Lada1_DZE";
	maxspeed = 150; // max engine limit 125-130
	terrainCoef = 2.5;

	class Upgrades {
		ItemAVE[] = {"Lada1_DZE2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"PartGeneric",6},{"ItemScrews",4}}};
	};
};

class Lada1_DZE2: Lada1_DZE1 {
	displayname = "$STR_VEH_NAME_LADA_WHITE++";
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
		ItemLRK[] = {"Lada1_DZE3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

class Lada1_DZE3: Lada1_DZE2 {
	displayname = "$STR_VEH_NAME_LADA_WHITE+++";
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportmaxbackpacks = 4; // car 2

	class Upgrades {
		ItemTNK[] = {"Lada1_DZE4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
	};
};

class Lada1_DZE4: Lada1_DZE3 {
	displayname = "$STR_VEH_NAME_LADA_WHITE";
	fuelCapacity = 150; // car 50
};

class Lada2;
class Lada2_DZE: Lada2 {
	scope = 2;
	displayname = "$STR_VEH_NAME_LADA_RED";
	vehicleClass = "DayZ Epoch Vehicles";
	crew = "";
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};	
	armor = 20;
	damageResistance = 0.01511;
	fuelCapacity = 50;
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
	supplyRadius = 1.5;

	class Upgrades {
		ItemORP[] = {"Lada2_DZE1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class Lada2_DZE1: Lada2_DZE {
	displayname = "$STR_VEH_NAME_LADA_RED+";
	original = "Lada2_DZE";
	maxspeed = 150; // car 100
	terrainCoef = 2.5;

	class Upgrades {
		ItemAVE[] = {"Lada2_DZE2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"PartGeneric",6},{"ItemScrews",4}}};
	};
};

class Lada2_DZE2: Lada2_DZE1 {
	displayname = "$STR_VEH_NAME_LADA_RED++";
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
		ItemLRK[] = {"Lada2_DZE3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

class Lada2_DZE3: Lada2_DZE2 {
	displayname = "$STR_VEH_NAME_LADA_RED+++";
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportmaxbackpacks = 4; // car 2

	class Upgrades {
		ItemTNK[] = {"Lada2_DZE4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
	};
};

class Lada2_DZE4: Lada2_DZE3 {
	displayname = "$STR_VEH_NAME_LADA_RED++++";
	fuelCapacity = 150; // car 50
};

class LadaLM;
class LadaLM_DZE: LadaLM {
	scope = 2;
	displayname = "$STR_VEH_NAME_LADA_POLICE";
	vehicleClass = "DayZ Epoch Vehicles";
	crew = "";
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};	
	armor = 20;
	damageResistance = 0.01511;
	fuelCapacity = 50;
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
	supplyRadius = 1.5;

	class Upgrades {
		ItemORP[] = {"LadaLM_DZE1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class LadaLM_DZE1: LadaLM_DZE {
	displayname = "$STR_VEH_NAME_LADA_POLICE+";
	original = "LadaLM_DZE";
	maxspeed = 150; // car 100
	terrainCoef = 2.5;

	class Upgrades {
		ItemAVE[] = {"LadaLM_DZE2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"PartGeneric",6},{"ItemScrews",4}}};
	};
};

class LadaLM_DZE2: LadaLM_DZE1 {
	displayname = "$STR_VEH_NAME_LADA_POLICE++";
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
		ItemLRK[] = {"LadaLM_DZE3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

class LadaLM_DZE3: LadaLM_DZE2 {
	displayname = "$STR_VEH_NAME_LADA_POLICE+++";
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportmaxbackpacks = 4; // car 2

	class Upgrades {
		ItemTNK[] = {"LadaLM_DZE4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
	};
};

class LadaLM_DZE4: LadaLM_DZE3 {
	displayname = "$STR_VEH_NAME_LADA_POLICE++++";
	fuelCapacity = 150; // car 50
};

class Lada1_TK_CIV_EP1;
class Lada1_TK_CIV_EP1_DZE: Lada1_TK_CIV_EP1 {
	scope = 2;
	displayname = "$STR_VEH_NAME_LADA_GREEN";
	vehicleClass = "DayZ Epoch Vehicles";
	crew = "";
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};	
	armor = 20;
	damageResistance = 0.01511;
	fuelCapacity = 50;
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
	supplyRadius = 1.5;

	class Upgrades {
		ItemORP[] = {"Lada1_TK_CIV_EP1_DZE1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class Lada1_TK_CIV_EP1_DZE1: Lada1_TK_CIV_EP1_DZE {
	displayname = "$STR_VEH_NAME_LADA_GREEN+";
	original = "Lada1_TK_CIV_EP1_DZE";
	maxspeed = 150; // car 100
	terrainCoef = 2.5;

	class Upgrades {
		ItemAVE[] = {"Lada1_TK_CIV_EP1_DZE2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"PartGeneric",6},{"ItemScrews",4}}};
	};
};

class Lada1_TK_CIV_EP1_DZE2: Lada1_TK_CIV_EP1_DZE1 {
	displayname = "$STR_VEH_NAME_LADA_GREEN++";
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
		ItemLRK[] = {"Lada1_TK_CIV_EP1_DZE3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

class Lada1_TK_CIV_EP1_DZE3: Lada1_TK_CIV_EP1_DZE2 {
	displayname = "$STR_VEH_NAME_LADA_GREEN+++";
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportmaxbackpacks = 4; // car 2

	class Upgrades {
		ItemTNK[] = {"Lada1_TK_CIV_EP1_DZE4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
	};
};

class Lada1_TK_CIV_EP1_DZE4: Lada1_TK_CIV_EP1_DZE3 {
	displayname = "$STR_VEH_NAME_LADA_GREEN++++";
	fuelCapacity = 150; // car 50
};

class Lada2_TK_CIV_EP1;
class Lada2_TK_CIV_EP1_DZE: Lada2_TK_CIV_EP1 {
	scope = 2;
	displayname = "$STR_VEH_NAME_LADA_HIPPY";
	vehicleClass = "DayZ Epoch Vehicles";
	crew = "";
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};	
	armor = 20;
	damageResistance = 0.01511;
	fuelCapacity = 50;
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
	supplyRadius = 1.5;

	class Upgrades {
		ItemORP[] = {"Lada2_TK_CIV_EP1_DZE1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class Lada2_TK_CIV_EP1_DZE1: Lada2_TK_CIV_EP1_DZE {
	displayname = "$STR_VEH_NAME_LADA_HIPPY+";
	original = "Lada2_TK_CIV_EP1_DZE";
	maxspeed = 150; // car 100
	terrainCoef = 2.5;

	class Upgrades {
		ItemAVE[] = {"Lada2_TK_CIV_EP1_DZE2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"PartGeneric",6},{"ItemScrews",4}}};
	};
};

class Lada2_TK_CIV_EP1_DZE2: Lada2_TK_CIV_EP1_DZE1 {
	displayname = "$STR_VEH_NAME_LADA_HIPPY++";
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
		ItemLRK[] = {"Lada2_TK_CIV_EP1_DZE3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

class Lada2_TK_CIV_EP1_DZE3: Lada2_TK_CIV_EP1_DZE2 {
	displayname = "$STR_VEH_NAME_LADA_HIPPY+++";
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportmaxbackpacks = 4; // car 2

	class Upgrades {
		ItemTNK[] = {"Lada2_TK_CIV_EP1_DZE4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
	};
};

class Lada2_TK_CIV_EP1_DZE4: Lada2_TK_CIV_EP1_DZE3 {
	displayname = "$STR_VEH_NAME_LADA_HIPPY++++";
	fuelCapacity = 150; // car 50
};

class GLT_M300_LT;
class GLT_M300_LT_DZE : GLT_M300_LT {
	displayname = "$STR_VEH_NAME_LADA_YELLOW";
	vehicleClass = "DayZ Epoch Vehicles";	
	crew = "";
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};	
	armor = 20;
	damageResistance = 0.01511;
	fuelCapacity = 50;	
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
	supplyRadius = 1.5;
	
	class Upgrades {
		ItemORP[] = {"GLT_M300_LT_DZE1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",4},{"ItemScrews",2}}};
	};	
};

class GLT_M300_LT_DZE1: GLT_M300_LT_DZE {
	displayname = "$STR_VEH_NAME_LADA_YELLOW+";
	original = "GLT_M300_LT_DZE";
	maxspeed = 150; // car 100
	terrainCoef = 2.5;

	class Upgrades {
		ItemAVE[] = {"GLT_M300_LT_DZE2",{"ItemToolbox"},{},{{"ItemAVE",1},{"PartGeneric",6},{"ItemScrews",4}}};
	};
};

class GLT_M300_LT_DZE2: GLT_M300_LT_DZE1 {
	displayname = "$STR_VEH_NAME_LADA_YELLOW++";
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
		ItemLRK[] = {"GLT_M300_LT_DZE3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

class GLT_M300_LT_DZE3: GLT_M300_LT_DZE2 {
	displayname = "$STR_VEH_NAME_LADA_YELLOW+++";
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportmaxbackpacks = 4; // car 2

	class Upgrades {
		ItemTNK[] = {"GLT_M300_LT_DZE4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
	};
};

class GLT_M300_LT_DZE4: GLT_M300_LT_DZE3 {
	displayname = "$STR_VEH_NAME_LADA_YELLOW++++";
	fuelCapacity = 150; // car 50
};