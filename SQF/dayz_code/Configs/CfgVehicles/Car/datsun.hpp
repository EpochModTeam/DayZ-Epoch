class datsun1_civil_1_open;
class datsun1_civil_1_open_DZE: datsun1_civil_1_open {
	displayname = "$STR_VEH_NAME_PICKUP_BLUE";
	vehicleClass = "DayZ Epoch Vehicles";
	terrainCoef = 2.5;
	crew = "";
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};
	class HitPoints;
	fuelCapacity = 100;	
	supplyRadius = 1.5;

	class Upgrades {
		ItemORP[] = {"datsun1_civil_1_open_DZE1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",4},{"ItemScrews",2}}};
		ItemARM[] = {"Pickup_PK_GUE_DZE",{"ItemToolbox"},{"PKM_DZ"},{{"ItemARM",1},{"PartGeneric",2},{"ItemPole",1},{"ItemScrews",2}}};
	};
};

class datsun1_civil_1_open_DZE1: datsun1_civil_1_open_DZE {
	displayname = "$STR_VEH_NAME_PICKUP_BLUE+";
	original = "datsun1_civil_1_open_DZE";
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
		ItemAVE[] = {"datsun1_civil_1_open_DZE2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"PartGeneric",6},{"ItemScrews",4}}};
		ItemARM[] = {"Pickup_PK_GUE_DZE1",{"ItemToolbox"},{"PKM_DZ"},{{"ItemARM",1},{"PartGeneric",2},{"ItemPole",1},{"ItemScrews",2}}};
	};
};

class datsun1_civil_1_open_DZE2: datsun1_civil_1_open_DZE1 {
	displayname = "$STR_VEH_NAME_PICKUP_BLUE++";
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
		ItemLRK[] = {"datsun1_civil_1_open_DZE3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
		ItemARM[] = {"Pickup_PK_GUE_DZE2",{"ItemToolbox"},{"PKM_DZ"},{{"ItemARM",1},{"PartGeneric",2},{"ItemPole",1},{"ItemScrews",2}}};
	};
};

class datsun1_civil_1_open_DZE3: datsun1_civil_1_open_DZE2 {
	displayname = "$STR_VEH_NAME_PICKUP_BLUE+++";
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportmaxbackpacks = 4; // car 2

	class Upgrades {
		ItemTNK[] = {"datsun1_civil_1_open_DZE4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
		ItemARM[] = {"Pickup_PK_GUE_DZE3",{"ItemToolbox"},{"PKM_DZ"},{{"ItemARM",1},{"PartGeneric",2},{"ItemPole",1},{"ItemScrews",2}}};
	};
};

class datsun1_civil_1_open_DZE4: datsun1_civil_1_open_DZE3 {
	displayname = "$STR_VEH_NAME_PICKUP_BLUE++++";
	fuelCapacity = 210; // car 100

	class Upgrades {
		ItemARM[] = {"Pickup_PK_GUE_DZE4",{"ItemToolbox"},{"PKM_DZ"},{{"ItemARM",1},{"PartGeneric",2},{"ItemPole",1},{"ItemScrews",2}}};
	};
};

class datsun1_green_open_DZE: datsun1_civil_1_open_DZE {
	displayname = "$STR_VEH_NAME_PICKUP_GREEN";
	model = "\sra_civilian\wheeled\datsun\datsun1_civil_3_open";
	class Damage
	{
		tex[] = {};
		mat[] = {"sra_civilian\wheeled\datsun\datsun_trup3.rvmat","sra_civilian\wheeled\datsun\datsun_trup3.rvmat","sra_civilian\wheeled\datsun\datsun_trup_destruct.rvmat","sra_civilian\wheeled\datsun\datsun_interier.rvmat","sra_civilian\wheeled\datsun\datsun_interier.rvmat","sra_civilian\wheeled\datsun\datsun_interier_destruct.rvmat","sra_civilian\wheeled\datsun\datsun_pristroje.rvmat","sra_civilian\wheeled\datsun\datsun_pristroje.rvmat","sra_civilian\wheeled\datsun\datsun_pristroje_destruct.rvmat","sra_civilian\wheeled\data\auta_skla.rvmat","sra_civilian\wheeled\data\auta_skla_damage.rvmat","sra_civilian\wheeled\data\auta_skla_damage.rvmat","sra_civilian\wheeled\data\auta_skla_in.rvmat","sra_civilian\wheeled\data\auta_skla_in_damage.rvmat","sra_civilian\wheeled\data\auta_skla_in_damage.rvmat"};
	};		
	
	class HitPoints;

	class Upgrades {
		ItemORP[] = {"datsun1_green_open_DZE1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",4},{"ItemScrews",2}}};
		ItemARM[] = {"Pickup_PK_GUE_DZE",{"ItemToolbox"},{"PKM_DZ"},{{"ItemARM",1},{"PartGeneric",2},{"ItemPole",1},{"ItemScrews",2}}};
	};
};

class datsun1_green_open_DZE1: datsun1_green_open_DZE {
	displayname = "$STR_VEH_NAME_PICKUP_GREEN+";
	original = "datsun1_green_open_DZE";
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
		ItemAVE[] = {"datsun1_green_open_DZE2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"PartGeneric",6},{"ItemScrews",4}}};
		ItemARM[] = {"Pickup_PK_GUE_DZE1",{"ItemToolbox"},{"PKM_DZ"},{{"ItemARM",1},{"PartGeneric",2},{"ItemPole",1},{"ItemScrews",2}}};
	};
};

class datsun1_green_open_DZE2: datsun1_green_open_DZE1 {
	displayname = "$STR_VEH_NAME_PICKUP_GREEN++";
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
		ItemLRK[] = {"datsun1_green_open_DZE3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};		
		ItemARM[] = {"Pickup_PK_GUE_DZE2",{"ItemToolbox"},{"PKM_DZ"},{{"ItemARM",1},{"PartGeneric",2},{"ItemPole",1},{"ItemScrews",2}}};
	};
};

class datsun1_green_open_DZE3: datsun1_green_open_DZE2 {
	displayname = "$STR_VEH_NAME_PICKUP_GREEN+++";
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportmaxbackpacks = 4; // car 2

	class Upgrades {
		ItemTNK[] = {"datsun1_green_open_DZE4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
		ItemARM[] = {"Pickup_PK_GUE_DZE3",{"ItemToolbox"},{"PKM_DZ"},{{"ItemARM",1},{"PartGeneric",2},{"ItemPole",1},{"ItemScrews",2}}};
	};
};

class datsun1_green_open_DZE4: datsun1_green_open_DZE3 {
	displayname = "$STR_VEH_NAME_PICKUP_GREEN++++";
	fuelCapacity = 210; // car 100

	class Upgrades {
		ItemARM[] = {"Pickup_PK_GUE_DZE4",{"ItemToolbox"},{"PKM_DZ"},{{"ItemARM",1},{"PartGeneric",2},{"ItemPole",1},{"ItemScrews",2}}};
	};
};

class datsun1_civil_2_covered;
class datsun1_civil_2_covered_DZE: datsun1_civil_2_covered {
	displayname = "$STR_VEH_NAME_PICKUP_COVERED_TAN";
	vehicleClass = "DayZ Epoch Vehicles";
	terrainCoef = 2.5;
	crew = "";
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};
	class HitPoints;
	fuelCapacity = 100;	
	supplyRadius = 1.5;

	class Upgrades {
		ItemORP[] = {"datsun1_civil_2_covered_DZE1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",4},{"ItemScrews",2}}};
		ItemARM[] = {"Pickup_PK_TK_GUE_EP1_DZE",{"ItemToolbox"},{"PKM_DZ"},{{"ItemARM",1},{"PartGeneric",2},{"ItemPole",1},{"ItemScrews",2}}};
	};
};

class datsun1_civil_2_covered_DZE1: datsun1_civil_2_covered_DZE {
	displayname = "$STR_VEH_NAME_PICKUP_COVERED_TAN+";
	original = "datsun1_civil_2_covered_DZE";
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
		ItemAVE[] = {"datsun1_civil_2_covered_DZE2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"PartGeneric",6},{"ItemScrews",4}}};
		ItemARM[] = {"Pickup_PK_TK_GUE_EP1_DZE1",{"ItemToolbox"},{"PKM_DZ"},{{"ItemARM",1},{"PartGeneric",2},{"ItemPole",1},{"ItemScrews",2}}};
	};
};

class datsun1_civil_2_covered_DZE2: datsun1_civil_2_covered_DZE1 {
	displayname = "$STR_VEH_NAME_PICKUP_COVERED_TAN++";
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
		ItemLRK[] = {"datsun1_civil_2_covered_DZE3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
		ItemARM[] = {"Pickup_PK_TK_GUE_EP1_DZE2",{"ItemToolbox"},{"PKM_DZ"},{{"ItemARM",1},{"PartGeneric",2},{"ItemPole",1},{"ItemScrews",2}}};
	};
};

class datsun1_civil_2_covered_DZE3: datsun1_civil_2_covered_DZE2 {
	displayname = "$STR_VEH_NAME_PICKUP_COVERED_TAN+++";
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportmaxbackpacks = 4; // car 2

	class Upgrades {
		ItemTNK[] = {"datsun1_civil_2_covered_DZE4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
		ItemARM[] = {"Pickup_PK_TK_GUE_EP1_DZE3",{"ItemToolbox"},{"PKM_DZ"},{{"ItemARM",1},{"PartGeneric",2},{"ItemPole",1},{"ItemScrews",2}}};
	};
};

class datsun1_civil_2_covered_DZE4: datsun1_civil_2_covered_DZE3 {
	displayname = "$STR_VEH_NAME_PICKUP_COVERED_TAN++++";
	fuelCapacity = 210; // car 100

	class Upgrades {
		ItemARM[] = {"Pickup_PK_TK_GUE_EP1_DZE4",{"ItemToolbox"},{"PKM_DZ"},{{"ItemARM",1},{"PartGeneric",2},{"ItemPole",1},{"ItemScrews",2}}};
	};
};

class datsun1_red_covered_DZE: datsun1_civil_2_covered_DZE {
	displayname = "$STR_VEH_NAME_PICKUP_COVERED_RED";
	model = "\sra_civilian\wheeled\datsun\datsun1_civil_2_covered";	
	class HitPoints;	
	
	class Damage
	{
		tex[] = {};
		mat[] = {"sra_civilian\wheeled\datsun\datsun_addons.rvmat","sra_civilian\wheeled\datsun\datsun_addons.rvmat","sra_civilian\wheeled\datsun\datsun_addons_destruct.rvmat","sra_civilian\wheeled\datsun\datsun_trup2.rvmat","sra_civilian\wheeled\datsun\datsun_trup2.rvmat","sra_civilian\wheeled\datsun\datsun_trup_destruct.rvmat","sra_civilian\wheeled\datsun\datsun_interier.rvmat","sra_civilian\wheeled\datsun\datsun_interier.rvmat","sra_civilian\wheeled\datsun\datsun_interier_destruct.rvmat","sra_civilian\wheeled\datsun\datsun_pristroje.rvmat","sra_civilian\wheeled\datsun\datsun_pristroje.rvmat","sra_civilian\wheeled\datsun\datsun_pristroje_destruct.rvmat","sra_civilian\wheeled\data\auta_skla.rvmat","sra_civilian\wheeled\data\auta_skla_damage.rvmat","sra_civilian\wheeled\data\auta_skla_damage.rvmat","sra_civilian\wheeled\data\auta_skla_in.rvmat","sra_civilian\wheeled\data\auta_skla_in_damage.rvmat","sra_civilian\wheeled\data\auta_skla_in_damage.rvmat"};
	};	

	class Upgrades {
		ItemORP[] = {"datsun1_red_covered_DZE1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class datsun1_red_covered_DZE1: datsun1_red_covered_DZE {
	displayname = "$STR_VEH_NAME_PICKUP_COVERED_RED+";
	original = "datsun1_red_covered_DZE";
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
		ItemAVE[] = {"datsun1_red_covered_DZE2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"PartGeneric",6},{"ItemScrews",4}}};
	};
};

class datsun1_red_covered_DZE2: datsun1_red_covered_DZE1 {
	displayname = "$STR_VEH_NAME_PICKUP_COVERED_RED++";
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
		ItemLRK[] = {"datsun1_red_covered_DZE3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

class datsun1_red_covered_DZE3: datsun1_red_covered_DZE2 {
	displayname = "$STR_VEH_NAME_PICKUP_COVERED_RED+++";
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportmaxbackpacks = 4; // car 2

	class Upgrades {
		ItemTNK[] = {"datsun1_red_covered_DZE4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
	};
};

class datsun1_red_covered_DZE4: datsun1_red_covered_DZE3 {
	displayname = "$STR_VEH_NAME_PICKUP_COVERED_RED++++";
	fuelCapacity = 210; // car 100

	class Upgrades {};
};

class datsun1_civil_3_open;
class datsun1_civil_3_open_DZE: datsun1_civil_3_open {
	displayname = "$STR_VEH_NAME_PICKUP_GREY";
	vehicleClass = "DayZ Epoch Vehicles";
	terrainCoef = 2.5;
	crew = "";
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};
	class HitPoints;
	fuelCapacity = 100;	
	supplyRadius = 1.5;

	class Upgrades {
		ItemORP[] = {"datsun1_civil_3_open_DZE1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",4},{"ItemScrews",2}}};
		ItemARM[] = {"Pickup_PK_INS_DZE",{"ItemToolbox"},{"PKM_DZ"},{{"ItemARM",1},{"PartGeneric",2},{"ItemPole",1},{"ItemScrews",2}}};
	};
};

class datsun1_civil_3_open_DZE1: datsun1_civil_3_open_DZE {
	displayname = "$STR_VEH_NAME_PICKUP_GREY+";
	original = "datsun1_civil_3_open_DZE";
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
		ItemAVE[] = {"datsun1_civil_3_open_DZE2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"PartGeneric",6},{"ItemScrews",4}}};
		ItemARM[] = {"Pickup_PK_INS_DZE1",{"ItemToolbox"},{"PKM_DZ"},{{"ItemARM",1},{"PartGeneric",2},{"ItemPole",1},{"ItemScrews",2}}};
	};
};

class datsun1_civil_3_open_DZE2: datsun1_civil_3_open_DZE1 {
	displayname = "$STR_VEH_NAME_PICKUP_GREY++";
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
		ItemLRK[] = {"datsun1_civil_3_open_DZE3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
		ItemARM[] = {"Pickup_PK_INS_DZE2",{"ItemToolbox"},{"PKM_DZ"},{{"ItemARM",1},{"PartGeneric",2},{"ItemPole",1},{"ItemScrews",2}}};
	};
};

class datsun1_civil_3_open_DZE3: datsun1_civil_3_open_DZE2 {
	displayname = "$STR_VEH_NAME_PICKUP_GREY+++";
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportmaxbackpacks = 4; // car 2

	class Upgrades {
		ItemTNK[] = {"datsun1_civil_3_open_DZE4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
		ItemARM[] = {"Pickup_PK_INS_DZE3",{"ItemToolbox"},{"PKM_DZ"},{{"ItemARM",1},{"PartGeneric",2},{"ItemPole",1},{"ItemScrews",2}}};
	};
};

class datsun1_civil_3_open_DZE4: datsun1_civil_3_open_DZE3 {
	displayname = "$STR_VEH_NAME_PICKUP_GREY++++";
	fuelCapacity = 210; // car 100

	class Upgrades {
		ItemARM[] = {"Pickup_PK_INS_DZE4",{"ItemToolbox"},{"PKM_DZ"},{{"ItemARM",1},{"PartGeneric",2},{"ItemPole",1},{"ItemScrews",2}}};
	};
};
