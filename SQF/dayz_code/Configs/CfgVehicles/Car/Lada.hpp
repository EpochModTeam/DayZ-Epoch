class Lada1;
class Lada1_DZE: Lada1 {
	scope = public;
	displayname = $STR_VEH_NAME_LADA_WHITE;
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
		ItemORP[] = {"Lada1_DZE1",{},{{"ItemORP",1},{"PartEngine",2}}};
	};
};
class Lada2;
class Lada2_DZE: Lada2 {
	scope = public;
	displayname = $STR_VEH_NAME_LADA_RED;
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
		ItemORP[] = {"Lada2_DZE1",{},{{"ItemORP",1},{"PartEngine",2}}};
	};
};
class LadaLM;
class LadaLM_DZE: LadaLM {
	scope = public;
	displayname = $STR_VEH_NAME_LADA_POLICE;
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
		ItemORP[] = {"LadaLM_DZE1",{},{{"ItemORP",1},{"PartEngine",2}}};
	};
};

class Lada1_TK_CIV_EP1;
class Lada1_TK_CIV_EP1_DZE: Lada1_TK_CIV_EP1 {
	scope = public;
	displayname = $STR_VEH_NAME_LADA_GREEN;
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
		ItemORP[] = {"Lada1_TK_CIV_EP1_DZE1",{},{{"ItemORP",1},{"PartEngine",2}}};
	};
};
class Lada2_TK_CIV_EP1;
class Lada2_TK_CIV_EP1_DZE: Lada2_TK_CIV_EP1 {
	scope = public;
	displayname = $STR_VEH_NAME_LADA_HIPPY;
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
		ItemORP[] = {"Lada2_TK_CIV_EP1_DZE1",{},{{"ItemORP",1},{"PartEngine",2}}};
	};
};

// Performance 1
class Lada1_DZE1: Lada1_DZE {
	original = "Lada1_DZE";
	maxspeed = 150; // max engine limit 125-130
	terrainCoef = 2.5;

	class Upgrades {
		ItemAVE[] = {"Lada1_DZE2",{},{{"ItemAVE",1},{"PartGeneric",4},{"ItemTankTrap",2}}};
	};
};
class Lada2_DZE1: Lada2_DZE {
	original = "Lada2_DZE";
	maxspeed = 150; // car 100
	terrainCoef = 2.5;

	class Upgrades {
		ItemAVE[] = {"Lada2_DZE2",{},{{"ItemAVE",1},{"PartGeneric",4},{"ItemTankTrap",2}}};
	};
};
class LadaLM_DZE1: LadaLM_DZE {
	original = "LadaLM_DZE";
	maxspeed = 150; // car 100
	terrainCoef = 2.5;

	class Upgrades {
		ItemAVE[] = {"LadaLM_DZE2",{},{{"ItemAVE",1},{"PartGeneric",4},{"ItemTankTrap",2}}};
	};
};
class Lada1_TK_CIV_EP1_DZE1: Lada1_TK_CIV_EP1_DZE {
	original = "Lada1_TK_CIV_EP1_DZE";
	maxspeed = 150; // car 100
	terrainCoef = 2.5;

	class Upgrades {
		ItemAVE[] = {"Lada1_TK_CIV_EP1_DZE2",{},{{"ItemAVE",1},{"PartGeneric",4},{"ItemTankTrap",2}}};
	};
};
class Lada2_TK_CIV_EP1_DZE1: Lada2_TK_CIV_EP1_DZE {
	original = "Lada2_TK_CIV_EP1_DZE";
	maxspeed = 150; // car 100
	terrainCoef = 2.5;

	class Upgrades {
		ItemAVE[] = {"Lada2_TK_CIV_EP1_DZE2",{},{{"ItemAVE",1},{"PartGeneric",4},{"ItemTankTrap",2}}};
	};
};

// Armor 2
class Lada1_DZE2: Lada1_DZE1 {
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
		class HitFuel {
			armor = 0.28;
			material = -1;
			name = "palivo";
			visual = "";
			passThrough = 1;
		};
		class HitEngine {
			armor = 1;
			material = -1;
			name = "motor";
			visual = "";
			passThrough = 1;
		};
		class HitGlass1: HitGlass1 {
			armor = 0.1;
		};
		class HitGlass2: HitGlass2 {
			armor = 0.1;
		};
		class HitGlass3: HitGlass3 {
			armor = 0.1;
		};
		class HitGlass4: HitGlass4 {
			armor = 0.1;
		};
	};

	class Upgrades {
		ItemLRK[] = {"Lada1_DZE3",{},{{"ItemLRK",1},{"PartGeneric",1},{"ItemTent",1}}};
	};
};
class Lada2_DZE2: Lada2_DZE1 {
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
		class HitFuel {
			armor = 0.28;
			material = -1;
			name = "palivo";
			visual = "";
			passThrough = 1;
		};
		class HitEngine {
			armor = 1;
			material = -1;
			name = "motor";
			visual = "";
			passThrough = 1;
		};
		class HitGlass1: HitGlass1 {
			armor = 0.1;
		};
		class HitGlass2: HitGlass2 {
			armor = 0.1;
		};
		class HitGlass3: HitGlass3 {
			armor = 0.1;
		};
		class HitGlass4: HitGlass4 {
			armor = 0.1;
		};
	};

	class Upgrades {
		ItemLRK[] = {"Lada2_DZE3",{},{{"ItemLRK",1},{"PartGeneric",1},{"ItemTent",1}}};
	};
};
class LadaLM_DZE2: LadaLM_DZE1 {
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
		class HitFuel {
			armor = 0.28;
			material = -1;
			name = "palivo";
			visual = "";
			passThrough = 1;
		};
		class HitEngine {
			armor = 1;
			material = -1;
			name = "motor";
			visual = "";
			passThrough = 1;
		};
		class HitGlass1: HitGlass1 {
			armor = 0.1;
		};
		class HitGlass2: HitGlass2 {
			armor = 0.1;
		};
		class HitGlass3: HitGlass3 {
			armor = 0.1;
		};
		class HitGlass4: HitGlass4 {
			armor = 0.1;
		};
	};

	class Upgrades {
		ItemLRK[] = {"LadaLM_DZE3",{},{{"ItemLRK",1},{"PartGeneric",1},{"ItemTent",1}}};
	};
};
class Lada1_TK_CIV_EP1_DZE2: Lada1_TK_CIV_EP1_DZE1 {
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
		class HitFuel {
			armor = 0.28;
			material = -1;
			name = "palivo";
			visual = "";
			passThrough = 1;
		};
		class HitEngine {
			armor = 1;
			material = -1;
			name = "motor";
			visual = "";
			passThrough = 1;
		};
		class HitGlass1: HitGlass1 {
			armor = 0.1;
		};
		class HitGlass2: HitGlass2 {
			armor = 0.1;
		};
		class HitGlass3: HitGlass3 {
			armor = 0.1;
		};
		class HitGlass4: HitGlass4 {
			armor = 0.1;
		};
	};

	class Upgrades {
		ItemLRK[] = {"Lada1_TK_CIV_EP1_DZE3",{},{{"ItemLRK",1},{"PartGeneric",1},{"ItemTent",1}}};
	};
};
class Lada2_TK_CIV_EP1_DZE2: Lada2_TK_CIV_EP1_DZE1 {
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
		class HitFuel {
			armor = 0.28;
			material = -1;
			name = "palivo";
			visual = "";
			passThrough = 1;
		};
		class HitEngine {
			armor = 1;
			material = -1;
			name = "motor";
			visual = "";
			passThrough = 1;
		};
		class HitGlass1: HitGlass1 {
			armor = 0.1;
		};
		class HitGlass2: HitGlass2 {
			armor = 0.1;
		};
		class HitGlass3: HitGlass3 {
			armor = 0.1;
		};
		class HitGlass4: HitGlass4 {
			armor = 0.1;
		};
	};

	class Upgrades {
		ItemLRK[] = {"Lada2_TK_CIV_EP1_DZE3",{},{{"ItemLRK",1},{"PartGeneric",1},{"ItemTent",1}}};
	};
};

// Cargo 3
class Lada1_DZE3: Lada1_DZE2 {
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportmaxbackpacks = 4; // car 2

	class Upgrades {
		ItemTNK[] = {"Lada1_DZE4",{},{{"ItemTNK",1},{"PartFueltank",2}}};
	};
};
class Lada2_DZE3: Lada2_DZE2 {
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportmaxbackpacks = 4; // car 2

	class Upgrades {
		ItemTNK[] = {"Lada2_DZE4",{},{{"ItemTNK",1},{"PartFueltank",2}}};
	};
};
class LadaLM_DZE3: LadaLM_DZE2 {
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportmaxbackpacks = 4; // car 2

	class Upgrades {
		ItemTNK[] = {"LadaLM_DZE4",{},{{"ItemTNK",1},{"PartFueltank",2}}};
	};
};
class Lada1_TK_CIV_EP1_DZE3: Lada1_TK_CIV_EP1_DZE2 {
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportmaxbackpacks = 4; // car 2

	class Upgrades {
		ItemTNK[] = {"Lada1_TK_CIV_EP1_DZE4",{},{{"ItemTNK",1},{"PartFueltank",2}}};
	};
};
class Lada2_TK_CIV_EP1_DZE3: Lada2_TK_CIV_EP1_DZE2 {
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportmaxbackpacks = 4; // car 2

	class Upgrades {
		ItemTNK[] = {"Lada2_TK_CIV_EP1_DZE4",{},{{"ItemTNK",1},{"PartFueltank",2}}};
	};
};

// Fuel 4
class Lada1_DZE4: Lada1_DZE3 {
	fuelCapacity = 150; // car 50
};
class Lada2_DZE4: Lada2_DZE3 {
	fuelCapacity = 150; // car 50
};
class LadaLM_DZE4: LadaLM_DZE3 {
	fuelCapacity = 150; // car 50
};
class Lada1_TK_CIV_EP1_DZE4: Lada1_TK_CIV_EP1_DZE3 {
	fuelCapacity = 150; // car 50
};
class Lada2_TK_CIV_EP1_DZE4: Lada2_TK_CIV_EP1_DZE3 {
	fuelCapacity = 150; // car 50
};

class GLT_M300_LT;
class GLT_M300_LT_DZE : GLT_M300_LT {
	displayname = $STR_VEH_NAME_LADA_YELLOW;
	vehicleClass = "DayZ Epoch Vehicles";	
	crew = "";
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};	
	armor = 20;
	damageResistance = 0.01511;
	fuelCapacity = 50;	
	supplyRadius = 1.5;
};