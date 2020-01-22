class UAZ_CDF;
class UAZ_CDF_DZE: UAZ_CDF {
	scope = public;
	maxspeed = 190;
	displayName = $STR_VEH_NAME_UAZ_CDF;
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
		ItemORP[] = {"UAZ_CDF_DZE1",{},{{"ItemORP",1},{"PartEngine",2}}};
	};
};
class UAZ_INS;
class UAZ_INS_DZE: UAZ_INS {
	scope = public;
	maxspeed = 190;
	displayName = $STR_VEH_NAME_UAZ_INS;
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
		ItemORP[] = {"UAZ_INS_DZE1",{},{{"ItemORP",1},{"PartEngine",2}}};
	};
};
class UAZ_RU;
class UAZ_RU_DZE: UAZ_RU {
	scope = public;
	maxspeed = 190;
	displayName = $STR_VEH_NAME_UAZ_RU;
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
		ItemORP[] = {"UAZ_RU_DZE1",{},{{"ItemORP",1},{"PartEngine",2}}};
	};
};
class UAZ_Unarmed_TK_EP1;
class UAZ_Unarmed_TK_EP1_DZE: UAZ_Unarmed_TK_EP1 {
	maxspeed = 190;
	scope = public;
	displayName = $STR_VEH_NAME_UAZ_TK;
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
		ItemORP[] = {"UAZ_Unarmed_TK_EP1_DZE1",{},{{"ItemORP",1},{"PartEngine",2}}};
	};
};
class UAZ_Unarmed_UN_EP1;
class UAZ_Unarmed_UN_EP1_DZE: UAZ_Unarmed_UN_EP1 {
	maxspeed = 190;
	scope = public;
	displayName = $STR_VEH_NAME_UAZ_UN;
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
		ItemORP[] = {"UAZ_Unarmed_UN_EP1_DZE1",{},{{"ItemORP",1},{"PartEngine",2}}};
	};
};
class UAZ_Unarmed_TK_CIV_EP1;
class UAZ_Unarmed_TK_CIV_EP1_DZE: UAZ_Unarmed_TK_CIV_EP1 {
	maxspeed = 190;
	scope = public;
	displayName = $STR_VEH_NAME_UAZ_CIVIL;
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
		ItemORP[] = {"UAZ_Unarmed_TK_CIV_EP1_DZE1",{},{{"ItemORP",1},{"PartEngine",2}}};
	};
};

// Performance 1
class UAZ_CDF_DZE1: UAZ_CDF_DZE {
	original = "UAZ_CDF_DZE";
	maxspeed = 240; // max engine limit 125-130
	terrainCoef = 2.5;

	class Upgrades {
		ItemAVE[] = {"UAZ_CDF_DZE2",{},{{"ItemAVE",1},{"PartGeneric",4},{"ItemTankTrap",2}}};
	};
};
class UAZ_INS_DZE1: UAZ_INS_DZE {
	original = "UAZ_INS_DZE";
	maxspeed = 240; // car 100
	terrainCoef = 2.5;

	class Upgrades {
		ItemAVE[] = {"UAZ_INS_DZE2",{},{{"ItemAVE",1},{"PartGeneric",4},{"ItemTankTrap",2}}};
	};
};
class UAZ_RU_DZE1: UAZ_RU_DZE {
	original = "UAZ_RU_DZE";
	maxspeed = 240; // car 100
	terrainCoef = 2.5;

	class Upgrades {
		ItemAVE[] = {"UAZ_RU_DZE2",{},{{"ItemAVE",1},{"PartGeneric",4},{"ItemTankTrap",2}}};
	};
};
class UAZ_Unarmed_TK_EP1_DZE1: UAZ_Unarmed_TK_EP1_DZE {
	original = "UAZ_Unarmed_TK_EP1_DZE";
	maxspeed = 240; // max engine limit 125-130
	terrainCoef = 2.5;

	class Upgrades {
		ItemAVE[] = {"UAZ_Unarmed_TK_EP1_DZE2",{},{{"ItemAVE",1},{"PartGeneric",4},{"ItemTankTrap",2}}};
	};
};
class UAZ_Unarmed_UN_EP1_DZE1: UAZ_Unarmed_UN_EP1_DZE {
	original = "UAZ_Unarmed_UN_EP1_DZE";
	maxspeed = 240; // car 100
	terrainCoef = 2.5;

	class Upgrades {
		ItemAVE[] = {"UAZ_Unarmed_UN_EP1_DZE2",{},{{"ItemAVE",1},{"PartGeneric",4},{"ItemTankTrap",2}}};
	};
};
class UAZ_Unarmed_TK_CIV_EP1_DZE1: UAZ_Unarmed_TK_CIV_EP1_DZE {
	original = "UAZ_Unarmed_TK_CIV_EP1_DZE";
	maxspeed = 240; // car 100
	terrainCoef = 2.5;

	class Upgrades {
		ItemAVE[] = {"UAZ_Unarmed_TK_CIV_EP1_DZE2",{},{{"ItemAVE",1},{"PartGeneric",4},{"ItemTankTrap",2}}};
	};
};

// Armor 2
class UAZ_CDF_DZE2: UAZ_CDF_DZE1 {
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
		ItemLRK[] = {"UAZ_CDF_DZE3",{},{{"ItemLRK",1},{"PartGeneric",1},{"ItemTent",1}}};
	};
};
class UAZ_INS_DZE2: UAZ_INS_DZE1 {
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
		ItemLRK[] = {"UAZ_INS_DZE3",{},{{"ItemLRK",1},{"PartGeneric",1},{"ItemTent",1}}};
	};
};
class UAZ_RU_DZE2: UAZ_RU_DZE1 {
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
		ItemLRK[] = {"UAZ_RU_DZE3",{},{{"ItemLRK",1},{"PartGeneric",1},{"ItemTent",1}}};
	};
};
class UAZ_Unarmed_TK_EP1_DZE2: UAZ_Unarmed_TK_EP1_DZE1 {
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
		ItemLRK[] = {"UAZ_Unarmed_TK_EP1_DZE3",{},{{"ItemLRK",1},{"PartGeneric",1},{"ItemTent",1}}};
	};
};
class UAZ_Unarmed_UN_EP1_DZE2: UAZ_Unarmed_UN_EP1_DZE1 {
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
		ItemLRK[] = {"UAZ_Unarmed_UN_EP1_DZE3",{},{{"ItemLRK",1},{"PartGeneric",1},{"ItemTent",1}}};
	};
};
class UAZ_Unarmed_TK_CIV_EP1_DZE2: UAZ_Unarmed_TK_CIV_EP1_DZE1 {
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
		ItemLRK[] = {"UAZ_Unarmed_TK_CIV_EP1_DZE3",{},{{"ItemLRK",1},{"PartGeneric",1},{"ItemTent",1}}};
	};
};

// Cargo 3
class UAZ_CDF_DZE3: UAZ_CDF_DZE2 {
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportmaxbackpacks = 9; // car 2, UAZ 7

	class Upgrades {
		ItemTNK[] = {"UAZ_CDF_DZE4",{},{{"ItemTNK",1},{"PartFueltank",2}}};
	};
};
class UAZ_INS_DZE3: UAZ_INS_DZE2 {
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportmaxbackpacks = 9; // car 2, UAZ 7

	class Upgrades {
		ItemTNK[] = {"UAZ_INS_DZE4",{},{{"ItemTNK",1},{"PartFueltank",2}}};
	};
};
class UAZ_RU_DZE3: UAZ_RU_DZE2 {
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportmaxbackpacks = 9; // car 2, UAZ 7

	class Upgrades {
		ItemTNK[] = {"UAZ_RU_DZE4",{},{{"ItemTNK",1},{"PartFueltank",2}}};
	};
};
class UAZ_Unarmed_TK_EP1_DZE3: UAZ_Unarmed_TK_EP1_DZE2 {
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportmaxbackpacks = 9; // car 2, UAZ 7

	class Upgrades {
		ItemTNK[] = {"UAZ_Unarmed_TK_EP1_DZE4",{},{{"ItemTNK",1},{"PartFueltank",2}}};
	};
};
class UAZ_Unarmed_UN_EP1_DZE3: UAZ_Unarmed_UN_EP1_DZE2 {
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportmaxbackpacks = 9; // car 2, UAZ 7

	class Upgrades {
		ItemTNK[] = {"UAZ_Unarmed_UN_EP1_DZE4",{},{{"ItemTNK",1},{"PartFueltank",2}}};
	};
};
class UAZ_Unarmed_TK_CIV_EP1_DZE3: UAZ_Unarmed_TK_CIV_EP1_DZE2 {
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportmaxbackpacks = 9; // car 2, UAZ 7

	class Upgrades {
		ItemTNK[] = {"UAZ_Unarmed_TK_CIV_EP1_DZE4",{},{{"ItemTNK",1},{"PartFueltank",2}}};
	};
};

// Fuel 4
class UAZ_CDF_DZE4: UAZ_CDF_DZE3 {
	fuelCapacity = 210; // car 100
};
class UAZ_INS_DZE4: UAZ_INS_DZE3 {
	fuelCapacity = 210; // car 100
};
class UAZ_RU_DZE4: UAZ_RU_DZE3 {
	fuelCapacity = 210; // car 100
};
class UAZ_Unarmed_TK_EP1_DZE4: UAZ_Unarmed_TK_EP1_DZE3 {
	fuelCapacity = 210; // car 100
};
class UAZ_Unarmed_UN_EP1_DZE4: UAZ_Unarmed_UN_EP1_DZE3 {
	fuelCapacity = 210; // car 100
};
class UAZ_Unarmed_TK_CIV_EP1_DZE4: UAZ_Unarmed_TK_CIV_EP1_DZE3 {
	fuelCapacity = 210; // car 100
};
