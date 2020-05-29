class VWGolf;
class VWGolf_DZE: VWGolf {
	scope = 2;
	displayname = $STR_VEH_NAME_VWGOLF_RED;
	vehicleClass = "DayZ Epoch Vehicles";
	crew = "";
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};	
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
		ItemORP[] = {"VWGolf_DZE1",{},{{"ItemORP",1},{"PartEngine",2}}};
	};
};

// Performance 1
class VWGolf_DZE1: VWGolf_DZE {
	original = "VWGolf_DZE";
	maxSpeed = 260; // VW maxspeed from above =241
	terrainCoef = 2.5;

	class Upgrades {
		ItemAVE[] = {"VWGolf_DZE2",{},{{"ItemAVE",1},{"PartGeneric",4},{"ItemTankTrap",2}}};
	};
};

// Armor 2
class VWGolf_DZE2: VWGolf_DZE1 {
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
		ItemLRK[] = {"VWGolf_DZE3",{},{{"ItemLRK",1},{"PartGeneric",1},{"ItemTent",1}}};
	};
};

// Cargo 3
class VWGolf_DZE3: VWGolf_DZE2 {
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportmaxbackpacks = 4; // car 2

	class Upgrades {
		ItemTNK[] = {"VWGolf_DZE4",{},{{"ItemTNK",1},{"PartFueltank",2}}};
	};
};

// Fuel 4
class VWGolf_DZE4: VWGolf_DZE3 {
	fuelCapacity = 150; // car 100
};
