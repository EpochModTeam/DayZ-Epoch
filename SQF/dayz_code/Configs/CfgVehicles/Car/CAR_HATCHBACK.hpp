class car_hatchback;
class car_hatchback_DZE: car_hatchback {
	side = 1;
	faction = "USMC";
	displayname = "$STR_VEH_NAME_HATCHBACK_YELLOW";
	vehicleClass = "DayZ Epoch Vehicles";
	maxspeed = 125;
	armor = 20;
	damageResistance = 0.01821;
	fuelCapacity = 100;	
	crew = "";
	typicalCargo[] = {};
	class HitPoints;
	supplyRadius = 1.2;	
	
	class Upgrades {
		ItemORP[] = {"car_hatchback_DZE1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

// Performance 1
class car_hatchback_DZE1: car_hatchback_DZE {
	displayname = "$STR_VEH_NAME_HATCHBACK_YELLOW+";
	original = "car_hatchback_DZE";
	maxspeed = 150; // max engine limit 125-130
	terrainCoef = 2.5;
	
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
		ItemAVE[] = {"car_hatchback_DZE2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"PartGeneric",6},{"ItemScrews",4}}};
	};
};

// Armor 2
class car_hatchback_DZE2: car_hatchback_DZE1 {
	displayname = "$STR_VEH_NAME_HATCHBACK_YELLOW++";
	armor = 50; // car 20
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
		ItemLRK[] = {"car_hatchback_DZE3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

// Cargo 3
class car_hatchback_DZE3: car_hatchback_DZE2 {
	displayname = "$STR_VEH_NAME_HATCHBACK_YELLOW+++";
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportmaxbackpacks = 4; // car 2

	class Upgrades {
		ItemTNK[] = {"car_hatchback_DZE4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
	};
};

// Fuel 4
class car_hatchback_DZE4: car_hatchback_DZE3 {
	displayname = "$STR_VEH_NAME_HATCHBACK_YELLOW++++";
	fuelCapacity = 210; // car 100
};

class car_hatchback_red_DZE: car_hatchback_DZE {
	displayname = "$STR_VEH_NAME_HATCHBACK_RED";	
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"\sra_civilian\wheeled\data\hatchback_co.paa"};	
	class HitPoints;
	
	class Upgrades {
		ItemORP[] = {"car_hatchback_red_DZE1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

// Performance 1
class car_hatchback_red_DZE1: car_hatchback_red_DZE {
	displayname = "$STR_VEH_NAME_HATCHBACK_RED+";	
	original = "car_hatchback_red_DZE";
	maxspeed = 150; // max engine limit 125-130
	terrainCoef = 2.5;
	
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
		ItemAVE[] = {"car_hatchback_red_DZE2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"PartGeneric",6},{"ItemScrews",4}}};
	};
};

// Armor 2
class car_hatchback_red_DZE2: car_hatchback_red_DZE1 {
	displayname = "$STR_VEH_NAME_HATCHBACK_RED++";	
	armor = 50; // car 20
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
		ItemLRK[] = {"car_hatchback_red_DZE3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

// Cargo 3
class car_hatchback_red_DZE3: car_hatchback_red_DZE2 {
	displayname = "$STR_VEH_NAME_HATCHBACK_RED+++";	
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportmaxbackpacks = 4; // car 2

	class Upgrades {
		ItemTNK[] = {"car_hatchback_red_DZE4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
	};
};

// Fuel 4
class car_hatchback_red_DZE4: car_hatchback_red_DZE3 {
	displayname = "$STR_VEH_NAME_HATCHBACK_RED++++";	
	fuelCapacity = 210; // car 100
};
