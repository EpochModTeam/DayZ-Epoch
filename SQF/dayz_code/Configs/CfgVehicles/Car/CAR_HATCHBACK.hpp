class car_hatchback;
class car_hatchback_DZE: car_hatchback {
	scope = 2;
	displayname = $STR_VEH_NAME_HATCHBACK_YELLOW;
	vehicleClass = "DayZ Epoch Vehicles";
	maxspeed = 125;
	armor = 20;
	damageResistance = 0.01821;
	fuelCapacity = 100;	
	crew = "";
	typicalCargo[] = {};
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
	supplyRadius = 1.2;	
	
	class Upgrades {
		ItemORP[] = {"car_hatchback_DZE1",{},{{"ItemORP",1},{"PartEngine",2}}};
	};
};

// Performance 1
class car_hatchback_DZE1: car_hatchback_DZE {
	original = "car_hatchback_DZE";
	maxspeed = 150; // max engine limit 125-130
	terrainCoef = 2.5;

	class Upgrades {
		ItemAVE[] = {"car_hatchback_DZE2",{},{{"ItemAVE",1},{"PartGeneric",4},{"ItemTankTrap",2}}};
	};
};

// Armor 2
class car_hatchback_DZE2: car_hatchback_DZE1 {
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
		ItemLRK[] = {"car_hatchback_DZE3",{},{{"ItemLRK",1},{"PartGeneric",1},{"ItemTent",1}}};
	};
};

// Cargo 3
class car_hatchback_DZE3: car_hatchback_DZE2 {
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportmaxbackpacks = 4; // car 2

	class Upgrades {
		ItemTNK[] = {"car_hatchback_DZE4",{},{{"ItemTNK",1},{"PartFueltank",2}}};
	};
};

// Fuel 4
class car_hatchback_DZE4: car_hatchback_DZE3 {
	fuelCapacity = 210; // car 100
};

class car_hatchback_red_DZE: car_hatchback_DZE {
	displayname = $STR_VEH_NAME_HATCHBACK_RED;
	
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"\sra_civilian\wheeled\data\hatchback_co.paa"};
	
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
		ItemORP[] = {"car_hatchback_red_DZE1",{},{{"ItemORP",1},{"PartEngine",2}}};
	};
};

// Performance 1
class car_hatchback_red_DZE1: car_hatchback_red_DZE {
	original = "car_hatchback_red_DZE";
	maxspeed = 150; // max engine limit 125-130
	terrainCoef = 2.5;

	class Upgrades {
		ItemAVE[] = {"car_hatchback_red_DZE2",{},{{"ItemAVE",1},{"PartGeneric",4},{"ItemTankTrap",2}}};
	};
};

// Armor 2
class car_hatchback_red_DZE2: car_hatchback_red_DZE1 {
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
		ItemLRK[] = {"car_hatchback_red_DZE3",{},{{"ItemLRK",1},{"PartGeneric",1},{"ItemTent",1}}};
	};
};

// Cargo 3
class car_hatchback_red_DZE3: car_hatchback_red_DZE2 {
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportmaxbackpacks = 4; // car 2

	class Upgrades {
		ItemTNK[] = {"car_hatchback_red_DZE4",{},{{"ItemTNK",1},{"PartFueltank",2}}};
	};
};

// Fuel 4
class car_hatchback_red_DZE4: car_hatchback_red_DZE3 {
	fuelCapacity = 210; // car 100
};
