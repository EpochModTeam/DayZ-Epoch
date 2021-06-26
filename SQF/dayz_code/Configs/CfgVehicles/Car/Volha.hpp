class VolhaLimo_TK_CIV_EP1;
class VolhaLimo_TK_CIV_EP1_DZE: VolhaLimo_TK_CIV_EP1 {
	side = 1;
	faction = "USMC";
	displayname = "$STR_VEH_NAME_GAZ_BLACK";
	vehicleClass = "DayZ Epoch Vehicles";
	fuelCapacity = 100;
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
		ItemORP[] = {"VolhaLimo_TK_CIV_EP1_DZE1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class VolhaLimo_TK_CIV_EP1_DZE1: VolhaLimo_TK_CIV_EP1_DZE {
	displayname = "$STR_VEH_NAME_GAZ_BLUE+";
	original = "VolhaLimo_TK_CIV_EP1_DZE";
	maxspeed = 150; // max engine limit 125-130
	terrainCoef = 2.5;

	class Upgrades {
		ItemAVE[] = {"VolhaLimo_TK_CIV_EP1_DZE2",{"ItemToolbox"},{},{{"ItemAVE",1},{"PartGeneric",6},{"ItemScrews",4}}};
	};
};

class VolhaLimo_TK_CIV_EP1_DZE2: VolhaLimo_TK_CIV_EP1_DZE1 {
	displayname = "$STR_VEH_NAME_GAZ_BLUE++";
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
		ItemLRK[] = {"VolhaLimo_TK_CIV_EP1_DZE3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

class VolhaLimo_TK_CIV_EP1_DZE3: VolhaLimo_TK_CIV_EP1_DZE2 {
	displayname = "$STR_VEH_NAME_GAZ_BLUE+++";
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportmaxbackpacks = 4; // car 2

	class Upgrades {
		ItemTNK[] = {"VolhaLimo_TK_CIV_EP1_DZE4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
	};
};

class VolhaLimo_TK_CIV_EP1_DZE4: VolhaLimo_TK_CIV_EP1_DZE3 {
	displayname = "$STR_VEH_NAME_GAZ_BLUE++++";
	fuelCapacity = 210; // car 100
};

class Volha_1_TK_CIV_EP1;
class Volha_1_TK_CIV_EP1_DZE: Volha_1_TK_CIV_EP1 {
	side = 1;
	faction = "USMC";
	displayname = "$STR_VEH_NAME_GAZ_BLUE";
	vehicleClass = "DayZ Epoch Vehicles";
	fuelCapacity = 100;
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
		ItemORP[] = {"Volha_1_TK_CIV_EP1_DZE1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class Volha_1_TK_CIV_EP1_DZE1: Volha_1_TK_CIV_EP1_DZE {
	displayname = "$STR_VEH_NAME_GAZ_GREY+";
	original = "Volha_1_TK_CIV_EP1_DZE";
	maxspeed = 150; // car 100
	terrainCoef = 2.5;

	class Upgrades {
		ItemAVE[] = {"Volha_1_TK_CIV_EP1_DZE2",{"ItemToolbox"},{},{{"ItemAVE",1},{"PartGeneric",6},{"ItemScrews",4}}};
	};
};

class Volha_1_TK_CIV_EP1_DZE2: Volha_1_TK_CIV_EP1_DZE1 {
	displayname = "$STR_VEH_NAME_GAZ_GREY++";
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
		ItemLRK[] = {"Volha_1_TK_CIV_EP1_DZE3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

class Volha_1_TK_CIV_EP1_DZE3: Volha_1_TK_CIV_EP1_DZE2 {
	displayname = "$STR_VEH_NAME_GAZ_GREY+++";
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportmaxbackpacks = 4; // car 2

	class Upgrades {
		ItemTNK[] = {"Volha_1_TK_CIV_EP1_DZE4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
	};
};

class Volha_1_TK_CIV_EP1_DZE4: Volha_1_TK_CIV_EP1_DZE3 {
	displayname = "$STR_VEH_NAME_GAZ_GREY++++";
	fuelCapacity = 210; // car 100
};

class Volha_2_TK_CIV_EP1;
class Volha_2_TK_CIV_EP1_DZE: Volha_2_TK_CIV_EP1 {
	side = 1;
	faction = "USMC";
	displayname = "$STR_VEH_NAME_GAZ_GREY";
	vehicleClass = "DayZ Epoch Vehicles";
	fuelCapacity = 100;
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
		ItemORP[] = {"Volha_2_TK_CIV_EP1_DZE1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class Volha_2_TK_CIV_EP1_DZE1: Volha_2_TK_CIV_EP1_DZE {
	displayname = "$STR_VEH_NAME_GAZ_BLACK+";
	original = "Volha_2_TK_CIV_EP1_DZE";
	maxspeed = 150; // car 100
	terrainCoef = 2.5;

	class Upgrades {
		ItemAVE[] = {"Volha_2_TK_CIV_EP1_DZE2",{"ItemToolbox"},{},{{"ItemAVE",1},{"PartGeneric",6},{"ItemScrews",4}}};
	};
};

class Volha_2_TK_CIV_EP1_DZE2: Volha_2_TK_CIV_EP1_DZE1 {
	displayname = "$STR_VEH_NAME_GAZ_BLACK++";
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
		ItemLRK[] = {"Volha_2_TK_CIV_EP1_DZE3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

class Volha_2_TK_CIV_EP1_DZE3: Volha_2_TK_CIV_EP1_DZE2 {
	displayname = "$STR_VEH_NAME_GAZ_BLACK+++";
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportmaxbackpacks = 4; // car 2

	class Upgrades {
		ItemTNK[] = {"Volha_2_TK_CIV_EP1_DZE4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
	};
};

class Volha_2_TK_CIV_EP1_DZE4: Volha_2_TK_CIV_EP1_DZE3 {
	displayname = "$STR_VEH_NAME_GAZ_BLACK++++";
	fuelCapacity = 210; // car 100
};