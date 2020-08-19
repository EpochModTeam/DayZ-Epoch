class S1203_TK_CIV_EP1;
class S1203_TK_CIV_EP1_DZE: S1203_TK_CIV_EP1 {
	displayName = "$STR_VEH_NAME_SKODA_BUS";
	vehicleClass = "DayZ Epoch Vehicles";
	crew = "";
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};
	fuelCapacity = 100;	
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
	
	class Upgrades {
		ItemORP[] = {"S1203_TK_CIV_EP1_DZE1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class S1203_TK_CIV_EP1_DZE1: S1203_TK_CIV_EP1_DZE {
	displayname = "$STR_VEH_NAME_SKODA_BUS+";
	original = "S1203_TK_CIV_EP1_DZE";
	maxspeed = 155; // base 105
	terrainCoef = 2;

	class Upgrades {
		ItemAVE[] = {"S1203_TK_CIV_EP1_DZE2",{"ItemToolbox"},{},{{"ItemAVE",1},{"PartGeneric",6},{"ItemScrews",4}}};
	};
};

class S1203_TK_CIV_EP1_DZE2: S1203_TK_CIV_EP1_DZE1 {
	displayname = "$STR_VEH_NAME_SKODA_BUS++";
	armor = 55; // base 20
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
		ItemLRK[] = {"S1203_TK_CIV_EP1_DZE3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

class S1203_TK_CIV_EP1_DZE3: S1203_TK_CIV_EP1_DZE2 {
	displayname = "$STR_VEH_NAME_SKODA_BUS+++";
	transportMaxWeapons = 20;  // base 10
	transportMaxMagazines = 100; // base 50
    transportmaxbackpacks = 4; // base 2

	class Upgrades {
		ItemTNK[] = {"S1203_TK_CIV_EP1_DZE4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
	};
};

class S1203_TK_CIV_EP1_DZE4: S1203_TK_CIV_EP1_DZE3 {
	displayname = "$STR_VEH_NAME_SKODA_BUS++++";
	fuelCapacity = 200; // base 100
};

class S1203_ambulance_EP1;
class S1203_ambulance_EP1_DZE: S1203_ambulance_EP1 {
	displayName = "$STR_VEH_NAME_SKODA_AMBULANCE";
	vehicleClass = "DayZ Epoch Vehicles";
	crew = "";
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};
	fuelCapacity = 100;	
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
	
	class Upgrades {
		ItemORP[] = {"S1203_ambulance_EP1_DZE1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class S1203_ambulance_EP1_DZE1: S1203_ambulance_EP1_DZE {
	displayname = "$STR_VEH_NAME_SKODA_AMBULANCE+";
	original = "S1203_ambulance_EP1_DZE";
	maxspeed = 155; // base 105
	terrainCoef = 2;

	class Upgrades {
		ItemAVE[] = {"S1203_ambulance_EP1_DZE2",{"ItemToolbox"},{},{{"ItemAVE",1},{"PartGeneric",6},{"ItemScrews",4}}};
	};
};

class S1203_ambulance_EP1_DZE2: S1203_ambulance_EP1_DZE1 {
	displayname = "$STR_VEH_NAME_SKODA_AMBULANCE++";
	armor = 55; // base 20
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
		ItemLRK[] = {"S1203_ambulance_EP1_DZE3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

class S1203_ambulance_EP1_DZE3: S1203_ambulance_EP1_DZE2 {
	displayname = "$STR_VEH_NAME_SKODA_AMBULANCE+++";
	transportMaxWeapons = 20;  // base 10
	transportMaxMagazines = 100; // base 50
    transportmaxbackpacks = 4; // base 2

	class Upgrades {
		ItemTNK[] = {"S1203_ambulance_EP1_DZE4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
	};
};

class S1203_ambulance_EP1_DZE4: S1203_ambulance_EP1_DZE3 {
	displayname = "$STR_VEH_NAME_SKODA_AMBULANCE++++";
	fuelCapacity = 200; // base 100
};