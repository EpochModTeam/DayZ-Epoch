class UAZ_CDF;
class UAZ_CDF_DZE: UAZ_CDF {
	scope = 2;
	displayName = "$STR_VEH_NAME_UAZ_CDF";
	vehicleClass = "DayZ Epoch Vehicles";	
	crew = "";
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};
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
	supplyRadius = 1.3;	

	class Upgrades {
		ItemORP[] = {"UAZ_CDF_DZE1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class UAZ_CDF_DZE1: UAZ_CDF_DZE {
	displayName = "$STR_VEH_NAME_UAZ_CDF+";
	original = "UAZ_CDF_DZE";
	maxspeed = 190;
	terrainCoef = 1;

	class Upgrades {
		ItemAVE[] = {"UAZ_CDF_DZE2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"PartGeneric",6},{"ItemScrews",4}}};
	};
};

class UAZ_CDF_DZE2: UAZ_CDF_DZE1 {
	displayName = "$STR_VEH_NAME_UAZ_CDF++";
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
		ItemLRK[] = {"UAZ_CDF_DZE3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

class UAZ_CDF_DZE3: UAZ_CDF_DZE2 {
	displayName = "$STR_VEH_NAME_UAZ_CDF+++";
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportmaxbackpacks = 9; // car 2, UAZ 7

	class Upgrades {
		ItemTNK[] = {"UAZ_CDF_DZE4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
	};
};

class UAZ_CDF_DZE4: UAZ_CDF_DZE3 {
	displayName = "$STR_VEH_NAME_UAZ_CDF++++";
	fuelCapacity = 210; // car 100
};

class UAZ_INS;
class UAZ_INS_DZE: UAZ_INS {
	scope = 2;
	displayName = "$STR_VEH_NAME_UAZ_INS";
	vehicleClass = "DayZ Epoch Vehicles";
	crew = "";
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};
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
	supplyRadius = 1.3;	

	class Upgrades {
		ItemORP[] = {"UAZ_INS_DZE1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class UAZ_INS_DZE1: UAZ_INS_DZE {
	displayName = "$STR_VEH_NAME_UAZ_INS+";
	original = "UAZ_INS_DZE";
	maxspeed = 190;
	terrainCoef = 1;

	class Upgrades {
		ItemAVE[] = {"UAZ_INS_DZE2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"PartGeneric",6},{"ItemScrews",4}}};
	};
};

class UAZ_INS_DZE2: UAZ_INS_DZE1 {
	displayName = "$STR_VEH_NAME_UAZ_INS++";
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
		ItemLRK[] = {"UAZ_INS_DZE3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

class UAZ_INS_DZE3: UAZ_INS_DZE2 {
	displayName = "$STR_VEH_NAME_UAZ_INS+++";
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportmaxbackpacks = 9; // car 2, UAZ 7

	class Upgrades {
		ItemTNK[] = {"UAZ_INS_DZE4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
	};
};

class UAZ_INS_DZE4: UAZ_INS_DZE3 {
	displayName = "$STR_VEH_NAME_UAZ_INS++++";
	fuelCapacity = 210; // car 100
};

class UAZ_RU;
class UAZ_RU_DZE: UAZ_RU {
	scope = 2;
	displayName = "$STR_VEH_NAME_UAZ_RU";
	vehicleClass = "DayZ Epoch Vehicles";
	crew = "";
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};
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
	supplyRadius = 1.3;	

	class Upgrades {
		ItemORP[] = {"UAZ_RU_DZE1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class UAZ_RU_DZE1: UAZ_RU_DZE {
	displayName = "$STR_VEH_NAME_UAZ_RU+";
	original = "UAZ_RU_DZE";
	maxspeed = 190;
	terrainCoef = 1;

	class Upgrades {
		ItemAVE[] = {"UAZ_RU_DZE2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"PartGeneric",6},{"ItemScrews",4}}};
	};
};

class UAZ_RU_DZE2: UAZ_RU_DZE1 {
	displayName = "$STR_VEH_NAME_UAZ_RU++";
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
		ItemLRK[] = {"UAZ_RU_DZE3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

class UAZ_RU_DZE3: UAZ_RU_DZE2 {
	displayName = "$STR_VEH_NAME_UAZ_RU+++";
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportmaxbackpacks = 9; // car 2, UAZ 7

	class Upgrades {
		ItemTNK[] = {"UAZ_RU_DZE4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
	};
};

class UAZ_RU_DZE4: UAZ_RU_DZE3 {
	displayName = "$STR_VEH_NAME_UAZ_RU++++";
	fuelCapacity = 210; // car 100
};

class UAZ_Unarmed_TK_EP1;
class UAZ_Unarmed_TK_EP1_DZE: UAZ_Unarmed_TK_EP1 {
	scope = 2;
	displayName = "$STR_VEH_NAME_UAZ_TK";
	vehicleClass = "DayZ Epoch Vehicles";
	crew = "";
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};
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
	supplyRadius = 1.3;	

	class Upgrades {
		ItemORP[] = {"UAZ_Unarmed_TK_EP1_DZE1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class UAZ_Unarmed_TK_EP1_DZE1: UAZ_Unarmed_TK_EP1_DZE {
	displayName = "$STR_VEH_NAME_UAZ_TK+";
	original = "UAZ_Unarmed_TK_EP1_DZE";
	maxspeed = 190;
	terrainCoef = 1;

	class Upgrades {
		ItemAVE[] = {"UAZ_Unarmed_TK_EP1_DZE2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"PartGeneric",6},{"ItemScrews",4}}};
	};
};

class UAZ_Unarmed_TK_EP1_DZE2: UAZ_Unarmed_TK_EP1_DZE1 {
	displayName = "$STR_VEH_NAME_UAZ_TK++";
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
		ItemLRK[] = {"UAZ_Unarmed_TK_EP1_DZE3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

class UAZ_Unarmed_TK_EP1_DZE3: UAZ_Unarmed_TK_EP1_DZE2 {
	displayName = "$STR_VEH_NAME_UAZ_TK+++";
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportmaxbackpacks = 9; // car 2, UAZ 7

	class Upgrades {
		ItemTNK[] = {"UAZ_Unarmed_TK_EP1_DZE4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
	};
};

class UAZ_Unarmed_TK_EP1_DZE4: UAZ_Unarmed_TK_EP1_DZE3 {
	displayName = "$STR_VEH_NAME_UAZ_TK++++";
	fuelCapacity = 210; // car 100
};

class UAZ_Unarmed_UN_EP1;
class UAZ_Unarmed_UN_EP1_DZE: UAZ_Unarmed_UN_EP1 {
	scope = 2;
	displayName = "$STR_VEH_NAME_UAZ_UN";
	vehicleClass = "DayZ Epoch Vehicles";
	crew = "";
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};
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
	supplyRadius = 1.3;	

	class Upgrades {
		ItemORP[] = {"UAZ_Unarmed_UN_EP1_DZE1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class UAZ_Unarmed_UN_EP1_DZE1: UAZ_Unarmed_UN_EP1_DZE {
	displayName = "$STR_VEH_NAME_UAZ_UN+";
	original = "UAZ_Unarmed_UN_EP1_DZE";
	maxspeed = 190;
	terrainCoef = 1;

	class Upgrades {
		ItemAVE[] = {"UAZ_Unarmed_UN_EP1_DZE2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"PartGeneric",6},{"ItemScrews",4}}};
	};
};

class UAZ_Unarmed_UN_EP1_DZE2: UAZ_Unarmed_UN_EP1_DZE1 {
	displayName = "$STR_VEH_NAME_UAZ_UN++";
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
		ItemLRK[] = {"UAZ_Unarmed_UN_EP1_DZE3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

class UAZ_Unarmed_UN_EP1_DZE3: UAZ_Unarmed_UN_EP1_DZE2 {
	displayName = "$STR_VEH_NAME_UAZ_UN+++";
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportmaxbackpacks = 9; // car 2, UAZ 7

	class Upgrades {
		ItemTNK[] = {"UAZ_Unarmed_UN_EP1_DZE4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
	};
};

class UAZ_Unarmed_UN_EP1_DZE4: UAZ_Unarmed_UN_EP1_DZE3 {
	displayName = "$STR_VEH_NAME_UAZ_UN++++";
	fuelCapacity = 210; // car 100
};

class UAZ_Unarmed_TK_CIV_EP1;
class UAZ_Unarmed_TK_CIV_EP1_DZE: UAZ_Unarmed_TK_CIV_EP1 {
	scope = 2;
	displayName = "$STR_VEH_NAME_UAZ_CIVIL";
	vehicleClass = "DayZ Epoch Vehicles";
	crew = "";
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};
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
	supplyRadius = 1.3;	

	class Upgrades {
		ItemORP[] = {"UAZ_Unarmed_TK_CIV_EP1_DZE1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class UAZ_Unarmed_TK_CIV_EP1_DZE1: UAZ_Unarmed_TK_CIV_EP1_DZE {
	displayName = "$STR_VEH_NAME_UAZ_CIVIL+";
	original = "UAZ_Unarmed_TK_CIV_EP1_DZE";
	maxspeed = 190;
	terrainCoef = 1;

	class Upgrades {
		ItemAVE[] = {"UAZ_Unarmed_TK_CIV_EP1_DZE2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"PartGeneric",6},{"ItemScrews",4}}};
	};
};

class UAZ_Unarmed_TK_CIV_EP1_DZE2: UAZ_Unarmed_TK_CIV_EP1_DZE1 {
	displayName = "$STR_VEH_NAME_UAZ_CIVIL++";
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
		ItemLRK[] = {"UAZ_Unarmed_TK_CIV_EP1_DZE3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

class UAZ_Unarmed_TK_CIV_EP1_DZE3: UAZ_Unarmed_TK_CIV_EP1_DZE2 {
	displayName = "$STR_VEH_NAME_UAZ_CIVIL+++";
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportmaxbackpacks = 9; // car 2, UAZ 7

	class Upgrades {
		ItemTNK[] = {"UAZ_Unarmed_TK_CIV_EP1_DZE4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
	};
};

class UAZ_Unarmed_TK_CIV_EP1_DZE4: UAZ_Unarmed_TK_CIV_EP1_DZE3 {
	displayName = "$STR_VEH_NAME_UAZ_CIVIL++++";
	fuelCapacity = 210; // car 100
};