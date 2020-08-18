class Skoda;
class Skoda_DZE: Skoda {
	scope = 2;
	displayName = "$STR_VEH_NAME_SKODA_WHITE";
	displayNameShort = "$STR_VEH_NAME_SKODA_WHITE";
	vehicleClass = "DayZ Epoch Vehicles";
	crew = "";
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};
	maxSpeed = 110;	
	armor = 20;
	damageResistance = 0.01821;
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
		ItemORP[] = {"Skoda_DZE1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class Skoda_DZE1: Skoda_DZE {
	displayName = "$STR_VEH_NAME_SKODA_WHITE+";
	displayNameShort = "$STR_VEH_NAME_SKODA_WHITE+";
	original = "Skoda_DZE";
	maxspeed = 150; // max engine limit 125-130
	terrainCoef = 2.5;

	class Upgrades {
		ItemAVE[] = {"Skoda_DZE2",{"ItemToolbox"},{},{{"ItemAVE",1},{"PartGeneric",6},{"ItemScrews",4}}};
	};
};

class Skoda_DZE2: Skoda_DZE1 {
	displayName = "$STR_VEH_NAME_SKODA_WHITE++";
	displayNameShort = "$STR_VEH_NAME_SKODA_WHITE++";
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
		ItemLRK[] = {"Skoda_DZE3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

class Skoda_DZE3: Skoda_DZE2 {
	displayName = "$STR_VEH_NAME_SKODA_WHITE+++";
	displayNameShort = "$STR_VEH_NAME_SKODA_WHITE+++";
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportmaxbackpacks = 4; // car 2

	class Upgrades {
		ItemTNK[] = {"Skoda_DZE4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
	};
};

class Skoda_DZE4: Skoda_DZE3 {
	displayName = "$STR_VEH_NAME_SKODA_WHITE++++";
	displayNameShort = "$STR_VEH_NAME_SKODA_WHITE++++";
	fuelCapacity = 210; // car 100
};

class SkodaBlue;
class SkodaBlue_DZE: SkodaBlue {
	scope = 2;
	displayName = "$STR_VEH_NAME_SKODA_BLUE";
	displayNameShort = "$STR_VEH_NAME_SKODA_BLUE";
	vehicleClass = "DayZ Epoch Vehicles";
	crew = "";
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};
	maxSpeed = 110;	
	armor = 20;
	damageResistance = 0.01821;
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
		ItemORP[] = {"SkodaBlue_DZE1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class SkodaBlue_DZE1: SkodaBlue_DZE {
	displayName = "$STR_VEH_NAME_SKODA_BLUE+";
	displayNameShort = "$STR_VEH_NAME_SKODA_BLUE+";
	original = "SkodaBlue_DZE";
	maxspeed = 150; // car 100
	terrainCoef = 2.5;

	class Upgrades {
		ItemAVE[] = {"SkodaBlue_DZE2",{"ItemToolbox"},{},{{"ItemAVE",1},{"PartGeneric",6},{"ItemScrews",4}}};
	};
};

class SkodaBlue_DZE2: SkodaBlue_DZE1 {
	displayName = "$STR_VEH_NAME_SKODA_BLUE++";
	displayNameShort = "$STR_VEH_NAME_SKODA_BLUE++";
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
		ItemLRK[] = {"SkodaBlue_DZE3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

class SkodaBlue_DZE3: SkodaBlue_DZE2 {
	displayName = "$STR_VEH_NAME_SKODA_BLUE+++";
	displayNameShort = "$STR_VEH_NAME_SKODA_BLUE+++";
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportmaxbackpacks = 4; // car 2

	class Upgrades {
		ItemTNK[] = {"SkodaBlue_DZE4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
	};
};

class SkodaBlue_DZE4: SkodaBlue_DZE3 {
	displayName = "$STR_VEH_NAME_SKODA_BLUE++++";
	displayNameShort = "$STR_VEH_NAME_SKODA_BLUE++++";
	fuelCapacity = 210; // car 100
};

class SkodaRed;
class SkodaRed_DZE: SkodaRed {
	scope = 2;
	displayName = "$STR_VEH_NAME_SKODA_RED";
	displayNameShort = "$STR_VEH_NAME_SKODA_RED";
	vehicleClass = "DayZ Epoch Vehicles";
	crew = "";
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};
	maxSpeed = 110;	
	armor = 20;
	damageResistance = 0.01821;
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
		ItemORP[] = {"SkodaRed_DZE1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class SkodaRed_DZE1: SkodaRed_DZE {
	displayName = "$STR_VEH_NAME_SKODA_RED+";
	displayNameShort = "$STR_VEH_NAME_SKODA_RED+";
	original = "SkodaRed_DZE";
	maxspeed = 150; // car 100
	terrainCoef = 2.5;

	class Upgrades {
		ItemAVE[] = {"SkodaRed_DZE2",{"ItemToolbox"},{},{{"ItemAVE",1},{"PartGeneric",6},{"ItemScrews",4}}};
	};
};

class SkodaRed_DZE2: SkodaRed_DZE1 {
	displayName = "$STR_VEH_NAME_SKODA_RED++";
	displayNameShort = "$STR_VEH_NAME_SKODA_RED++";
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
		ItemLRK[] = {"SkodaRed_DZE3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

class SkodaRed_DZE3: SkodaRed_DZE2 {
	displayName = "$STR_VEH_NAME_SKODA_RED+++";
	displayNameShort = "$STR_VEH_NAME_SKODA_RED+++";
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportmaxbackpacks = 4; // car 2

	class Upgrades {
		ItemTNK[] = {"SkodaRed_DZE4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
	};
};

class SkodaRed_DZE4: SkodaRed_DZE3 {
	displayName = "$STR_VEH_NAME_SKODA_RED++++";
	displayNameShort = "$STR_VEH_NAME_SKODA_RED++++";
	fuelCapacity = 210; // car 100
};

class SkodaGreen;
class SkodaGreen_DZE: SkodaGreen {
	scope = 2;
	displayName = "$STR_VEH_NAME_SKODA_GREEN";
	displayNameShort = "$STR_VEH_NAME_SKODA_GREEN";
	vehicleClass = "DayZ Epoch Vehicles";
	crew = "";
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};
	maxSpeed = 110;	
	armor = 20;
	damageResistance = 0.01821;
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
		ItemORP[] = {"SkodaGreen_DZE1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class SkodaGreen_DZE1: SkodaGreen_DZE {
	displayName = "$STR_VEH_NAME_SKODA_GREEN+";
	displayNameShort = "$STR_VEH_NAME_SKODA_GREEN+";
	original = "SkodaGreen_DZE";
	maxspeed = 150; // car 100
	terrainCoef = 2.5;

	class Upgrades {
		ItemAVE[] = {"SkodaGreen_DZE2",{"ItemToolbox"},{},{{"ItemAVE",1},{"PartGeneric",6},{"ItemScrews",4}}};
	};
};

class SkodaGreen_DZE2: SkodaGreen_DZE1 {
	displayName = "$STR_VEH_NAME_SKODA_GREEN++";
	displayNameShort = "$STR_VEH_NAME_SKODA_GREEN++";
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
		ItemLRK[] = {"SkodaGreen_DZE3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

class SkodaGreen_DZE3: SkodaGreen_DZE2 {
	displayName = "$STR_VEH_NAME_SKODA_GREEN+++";
	displayNameShort = "$STR_VEH_NAME_SKODA_GREEN+++";
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportmaxbackpacks = 4; // car 2

	class Upgrades {
		ItemTNK[] = {"SkodaGreen_DZE4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
	};
};

class SkodaGreen_DZE4: SkodaGreen_DZE3 {
	displayName = "$STR_VEH_NAME_SKODA_GREEN++++";
	displayNameShort = "$STR_VEH_NAME_SKODA_GREEN++++";
	fuelCapacity = 210; // car 100
};