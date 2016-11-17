class hilux1_civil_1_open;
class hilux1_civil_1_open_DZE: hilux1_civil_1_open {
	terrainCoef = 2.5;
	crew = "";
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};
	class HitPoints;

	class Upgrades {
		ItemORP[] = {"hilux1_civil_1_open_DZE1",{},{{"ItemORP",1},{"PartEngine",2}}};
		ItemARM[] = {"Pickup_PK_GUE_DZE",{{"PKM_DZ",1}},{{"ItemARM",1},{"PartGeneric",2}}};
	};
};
class hilux1_civil_2_covered;
class hilux1_civil_2_covered_DZE: hilux1_civil_2_covered {
	terrainCoef = 2.5;
	crew = "";
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};
	class HitPoints;

	class Upgrades {
		ItemORP[] = {"hilux1_civil_2_covered_DZE1",{},{{"ItemORP",1},{"PartEngine",2}}};
		ItemARM[] = {"Pickup_PK_TK_GUE_EP1_DZE",{{"PKM_DZ",1}},{{"ItemARM",1},{"PartGeneric",2}}};
	};
};
class hilux1_civil_3_open;
class hilux1_civil_3_open_DZE: hilux1_civil_3_open {
	terrainCoef = 2.5;
	crew = "";
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};
	class HitPoints;

	class Upgrades {
		ItemORP[] = {"hilux1_civil_3_open_DZE1",{},{{"ItemORP",1},{"PartEngine",2}}};
		ItemARM[] = {"Pickup_PK_INS_DZE",{{"PKM_DZ",1}},{{"ItemARM",1},{"PartGeneric",2}}};
	};
};

// Performance 1
class hilux1_civil_1_open_DZE1: hilux1_civil_1_open_DZE {
	original = "hilux1_civil_1_open_DZE";
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
		ItemAVE[] = {"hilux1_civil_1_open_DZE2",{},{{"ItemAVE",1},{"PartGeneric",4},{"ItemTankTrap",2}}};
		ItemARM[] = {"Pickup_PK_GUE_DZE1",{{"PKM_DZ",1}},{{"ItemARM",1},{"PartGeneric",2}}};
	};
};
class hilux1_civil_2_covered_DZE1: hilux1_civil_2_covered_DZE {
	original = "hilux1_civil_2_covered_DZE";
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
		ItemAVE[] = {"hilux1_civil_2_covered_DZE2",{},{{"ItemAVE",1},{"PartGeneric",4},{"ItemTankTrap",2}}};
		ItemARM[] = {"Pickup_PK_TK_GUE_EP1_DZE1",{{"PKM_DZ",1}},{{"ItemARM",1},{"PartGeneric",2}}};
	};
};
class hilux1_civil_3_open_DZE1: hilux1_civil_3_open_DZE {
	original = "hilux1_civil_3_open_DZE";
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
		ItemAVE[] = {"hilux1_civil_3_open_DZE2",{},{{"ItemAVE",1},{"PartGeneric",4},{"ItemTankTrap",2}}};
		ItemARM[] = {"Pickup_PK_INS_DZE1",{{"PKM_DZ",1}},{{"ItemARM",1},{"PartGeneric",2}}};
	};
};

// Armor 2
class hilux1_civil_1_open_DZE2: hilux1_civil_1_open_DZE1 {
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
		ItemLRK[] = {"hilux1_civil_1_open_DZE3",{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemTent",1}}};
		ItemARM[] = {"Pickup_PK_GUE_DZE2",{{"PKM_DZ",1}},{{"ItemARM",1},{"PartGeneric",2}}};
	};
};
class hilux1_civil_2_covered_DZE2: hilux1_civil_2_covered_DZE1 {
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
		ItemLRK[] = {"hilux1_civil_2_covered_DZE3",{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemTent",1}}};
		ItemARM[] = {"Pickup_PK_TK_GUE_EP1_DZE2",{{"PKM_DZ",1}},{{"ItemARM",1},{"PartGeneric",2}}};
	};
};
class hilux1_civil_3_open_DZE2: hilux1_civil_3_open_DZE1 {
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
		ItemLRK[] = {"hilux1_civil_3_open_DZE3",{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemTent",1}}};
		ItemARM[] = {"Pickup_PK_INS_DZE2",{{"PKM_DZ",1}},{{"ItemARM",1},{"PartGeneric",2}}};
	};
};

// Cargo 3
class hilux1_civil_1_open_DZE3: hilux1_civil_1_open_DZE2 {
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportmaxbackpacks = 4; // car 2

	class Upgrades {
		ItemTNK[] = {"hilux1_civil_1_open_DZE4",{},{{"ItemTNK",1},{"PartFueltank",2}}};
		ItemARM[] = {"Pickup_PK_GUE_DZE3",{{"PKM_DZ",1}},{{"ItemARM",1},{"PartGeneric",2}}};
	};
};
class hilux1_civil_2_covered_DZE3: hilux1_civil_2_covered_DZE2 {
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportmaxbackpacks = 4; // car 2

	class Upgrades {
		ItemTNK[] = {"hilux1_civil_2_covered_DZE4",{},{{"ItemTNK",1},{"PartFueltank",2}}};
		ItemARM[] = {"Pickup_PK_TK_GUE_EP1_DZE3",{{"PKM_DZ",1}},{{"ItemARM",1},{"PartGeneric",2}}};
	};
};
class hilux1_civil_3_open_DZE3: hilux1_civil_3_open_DZE2 {
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportmaxbackpacks = 4; // car 2

	class Upgrades {
		ItemTNK[] = {"hilux1_civil_3_open_DZE4",{},{{"ItemTNK",1},{"PartFueltank",2}}};
		ItemARM[] = {"Pickup_PK_INS_DZE3",{{"PKM_DZ",1}},{{"ItemARM",1},{"PartGeneric",2}}};
	};
};

// Fuel 4
class hilux1_civil_1_open_DZE4: hilux1_civil_1_open_DZE3 {
	fuelCapacity = 210; // car 100

	class Upgrades {
		ItemARM[] = {"Pickup_PK_GUE_DZE4",{{"PKM_DZ",1}},{{"ItemARM",1},{"PartGeneric",2}}};
	};
};
class hilux1_civil_2_covered_DZE4: hilux1_civil_2_covered_DZE3 {
	fuelCapacity = 210; // car 100

	class Upgrades {
		ItemARM[] = {"Pickup_PK_TK_GUE_EP1_DZE4",{{"PKM_DZ",1}},{{"ItemARM",1},{"PartGeneric",2}}};
	};
};
class hilux1_civil_3_open_DZE4: hilux1_civil_3_open_DZE3 {
	fuelCapacity = 210; // car 100

	class Upgrades {
		ItemARM[] = {"Pickup_PK_INS_DZE4",{{"PKM_DZ",1}},{{"ItemARM",1},{"PartGeneric",2}}};
	};
};
