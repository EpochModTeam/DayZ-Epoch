class Volha_1_TK_CIV_EP1;
class Volha_1_TK_CIV_EP1_DZE: Volha_1_TK_CIV_EP1 {
	scope = public;
	displayname = $STR_VEH_NAME_GAZ_BLUE;
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
		ItemORP[] = {"Volha_1_TK_CIV_EP1_DZE1",{},{{"ItemORP",1},{"PartEngine",2}}};
	};
};

class Volha_2_TK_CIV_EP1;
class Volha_2_TK_CIV_EP1_DZE: Volha_2_TK_CIV_EP1 {
	scope = public;
	displayname = $STR_VEH_NAME_GAZ_GREY;
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
		ItemORP[] = {"Volha_2_TK_CIV_EP1_DZE1",{},{{"ItemORP",1},{"PartEngine",2}}};
	};
};

class VolhaLimo_TK_CIV_EP1;
class VolhaLimo_TK_CIV_EP1_DZE: VolhaLimo_TK_CIV_EP1 {
	scope = public;
	displayname = $STR_VEH_NAME_GAZ_BLACK;
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
		ItemORP[] = {"VolhaLimo_TK_CIV_EP1_DZE1",{},{{"ItemORP",1},{"PartEngine",2}}};
	};
};

// Performance 1
class VolhaLimo_TK_CIV_EP1_DZE1: VolhaLimo_TK_CIV_EP1_DZE {
	original = "VolhaLimo_TK_CIV_EP1_DZE";
	maxspeed = 150; // max engine limit 125-130
	terrainCoef = 2.5;

	class Upgrades {
		ItemAVE[] = {"VolhaLimo_TK_CIV_EP1_DZE2",{},{{"ItemAVE",1},{"PartGeneric",4},{"ItemTankTrap",2}}};
	};
};
class Volha_1_TK_CIV_EP1_DZE1: Volha_1_TK_CIV_EP1_DZE {
	original = "Volha_1_TK_CIV_EP1_DZE";
	maxspeed = 150; // car 100
	terrainCoef = 2.5;

	class Upgrades {
		ItemAVE[] = {"Volha_1_TK_CIV_EP1_DZE2",{},{{"ItemAVE",1},{"PartGeneric",4},{"ItemTankTrap",2}}};
	};
};
class Volha_2_TK_CIV_EP1_DZE1: Volha_2_TK_CIV_EP1_DZE {
	original = "Volha_2_TK_CIV_EP1_DZE";
	maxspeed = 150; // car 100
	terrainCoef = 2.5;

	class Upgrades {
		ItemAVE[] = {"Volha_2_TK_CIV_EP1_DZE2",{},{{"ItemAVE",1},{"PartGeneric",4},{"ItemTankTrap",2}}};
	};
};

// Armor 2
class VolhaLimo_TK_CIV_EP1_DZE2: VolhaLimo_TK_CIV_EP1_DZE1 {
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
		ItemLRK[] = {"VolhaLimo_TK_CIV_EP1_DZE3",{},{{"ItemLRK",1},{"PartGeneric",1},{"ItemTent",1}}};
	};
};
class Volha_1_TK_CIV_EP1_DZE2: Volha_1_TK_CIV_EP1_DZE1 {
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
		ItemLRK[] = {"Volha_1_TK_CIV_EP1_DZE3",{},{{"ItemLRK",1},{"PartGeneric",1},{"ItemTent",1}}};
	};
};
class Volha_2_TK_CIV_EP1_DZE2: Volha_2_TK_CIV_EP1_DZE1 {
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
		ItemLRK[] = {"Volha_2_TK_CIV_EP1_DZE3",{},{{"ItemLRK",1},{"PartGeneric",1},{"ItemTent",1}}};
	};
};

// Cargo 3
class VolhaLimo_TK_CIV_EP1_DZE3: VolhaLimo_TK_CIV_EP1_DZE2 {
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportmaxbackpacks = 4; // car 2

	class Upgrades {
		ItemTNK[] = {"VolhaLimo_TK_CIV_EP1_DZE4",{},{{"ItemTNK",1},{"PartFueltank",2}}};
	};
};
class Volha_1_TK_CIV_EP1_DZE3: Volha_1_TK_CIV_EP1_DZE2 {
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportmaxbackpacks = 4; // car 2

	class Upgrades {
		ItemTNK[] = {"Volha_1_TK_CIV_EP1_DZE4",{},{{"ItemTNK",1},{"PartFueltank",2}}};
	};
};
class Volha_2_TK_CIV_EP1_DZE3: Volha_2_TK_CIV_EP1_DZE2 {
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportmaxbackpacks = 4; // car 2

	class Upgrades {
		ItemTNK[] = {"Volha_2_TK_CIV_EP1_DZE4",{},{{"ItemTNK",1},{"PartFueltank",2}}};
	};
};

// Fuel 4
class VolhaLimo_TK_CIV_EP1_DZE4: VolhaLimo_TK_CIV_EP1_DZE3 {
	fuelCapacity = 210; // car 100
};
class Volha_1_TK_CIV_EP1_DZE4: Volha_1_TK_CIV_EP1_DZE3 {
	fuelCapacity = 210; // car 100
};
class Volha_2_TK_CIV_EP1_DZE4: Volha_2_TK_CIV_EP1_DZE3 {
	fuelCapacity = 210; // car 100
};
