class Pickup_PK_GUE;
class Pickup_PK_GUE_DZ: Pickup_PK_GUE {
	scope = public;
	side = TGuerrila;
	displayName = "Pickup (PK) DZ";

	crew = "";
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};

	terrainCoef = 2.5;

	class Turrets; // External class reference
	class MainTurret; // External class reference
};
class Pickup_PK_TK_GUE_EP1;
class Pickup_PK_TK_GUE_EP1_DZ: Pickup_PK_TK_GUE_EP1 {
	scope = public;
	side = TGuerrila;
	displayName = "Pickup (PK) DZ";

	crew = "";
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};

	terrainCoef = 2.5;

	class Turrets; // External class reference
	class MainTurret; // External class reference
};
class Pickup_PK_INS;
class Pickup_PK_INS_DZ: Pickup_PK_INS {
	scope = public;
	side = TGuerrila;
	displayName = "Pickup (PK) DZ";

	crew = "";
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};

	terrainCoef = 2.5;

	class Turrets; // External class reference
	class MainTurret; // External class reference
};

// Ammo Less
class Pickup_PK_GUE_DZE: Pickup_PK_GUE_DZ {
	displayName = "Pickup (PK) AL";
	class Turrets: Turrets {
		class MainTurret : MainTurret {
			magazines[] = {};
		};
	};
	class HitPoints; // External class reference
	class HitLFWheel; // External class reference
	class HitLBWheel; // External class reference
	class HitRFWheel; // External class reference
	class HitRBWheel; // External class reference
	class HitFuel; // External class reference
	class HitEngine; // External class reference
	class HitGlass1; // External class reference
	class HitGlass2; // External class reference
	class HitGlass3; // External class reference
	class HitGlass4; // External class reference

	class Upgrades {
		ItemORP[] = {"Pickup_PK_GUE_DZE1",{},{{"ItemORP",1},{"PartEngine",2}}};
	};
};
class Pickup_PK_TK_GUE_EP1_DZE: Pickup_PK_TK_GUE_EP1_DZ {
	displayName = "Pickup (PK) AL";
	class Turrets: Turrets {
		class MainTurret : MainTurret {
			magazines[] = {};
		};
	};
	class HitPoints; // External class reference
	class HitLFWheel; // External class reference
	class HitLBWheel; // External class reference
	class HitRFWheel; // External class reference
	class HitRBWheel; // External class reference
	class HitFuel; // External class reference
	class HitEngine; // External class reference
	class HitGlass1; // External class reference
	class HitGlass2; // External class reference
	class HitGlass3; // External class reference
	class HitGlass4; // External class reference

	class Upgrades {
		ItemORP[] = {"Pickup_PK_TK_GUE_EP1_DZE1",{},{{"ItemORP",1},{"PartEngine",2}}};
	};
};
class Pickup_PK_INS_DZE: Pickup_PK_INS_DZ {
	displayName = "Pickup (PK) AL";
	class Turrets: Turrets {
		class MainTurret : MainTurret {
			magazines[] = {};
		};
	};
	class HitPoints; // External class reference
	class HitLFWheel; // External class reference
	class HitLBWheel; // External class reference
	class HitRFWheel; // External class reference
	class HitRBWheel; // External class reference
	class HitFuel; // External class reference
	class HitEngine; // External class reference
	class HitGlass1; // External class reference
	class HitGlass2; // External class reference
	class HitGlass3; // External class reference
	class HitGlass4; // External class reference

	class Upgrades {
		ItemORP[] = {"Pickup_PK_INS_DZE1",{},{{"ItemORP",1},{"PartEngine",2}}};
	};
};

// Performance 1
class Pickup_PK_GUE_DZE1: Pickup_PK_GUE_DZE {
	original = "Pickup_PK_GUE_DZE";
	maxspeed = 150; // max engine limit 125-130
	terrainCoef = 1.8;

	class Upgrades {
		ItemAVE[] = {"Pickup_PK_GUE_DZE1",{},{{"ItemAVE",1},{"PartGeneric",4},{"ItemTankTrap",2}}};
	};
};
class Pickup_PK_TK_GUE_EP1_DZE1: Pickup_PK_TK_GUE_EP1_DZE {
	original = "Pickup_PK_TK_GUE_EP1_DZE";
	maxspeed = 150; // max engine limit 125-130
	terrainCoef = 1.8;

	class Upgrades {
		ItemAVE[] = {"Pickup_PK_TK_GUE_EP1_DZE2",{},{{"ItemAVE",1},{"PartGeneric",4},{"ItemTankTrap",2}}};
	};
};
class Pickup_PK_INS_DZE1: Pickup_PK_INS_DZE {
	original = "Pickup_PK_INS_DZE";
	maxspeed = 150; // max engine limit 125-130
	terrainCoef = 1.8;

	class Upgrades {
		ItemAVE[] = {"Pickup_PK_INS_DZE2",{},{{"ItemAVE",1},{"PartGeneric",4},{"ItemTankTrap",2}}};
	};
};

// Armor 2
class Pickup_PK_GUE_DZE2: Pickup_PK_GUE_DZE1 {
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
		ItemLRK[] = {"Pickup_PK_GUE_DZE3",{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemTent",1}}};
	};
};
class Pickup_PK_TK_GUE_EP1_DZE2: Pickup_PK_TK_GUE_EP1_DZE1 {
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
		ItemLRK[] = {"Pickup_PK_TK_GUE_EP1_DZE3",{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemTent",1}}};
	};
};
class Pickup_PK_INS_DZE2: Pickup_PK_INS_DZE1 {
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
		ItemLRK[] = {"Pickup_PK_INS_DZE3",{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemTent",1}}};
	};
};

// Cargo 3
class Pickup_PK_GUE_DZE3: Pickup_PK_GUE_DZE2 {
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportmaxbackpacks = 4; // car 2

	class Upgrades {
		ItemTNK[] = {"Pickup_PK_GUE_DZE4",{},{{"ItemTNK",1},{"PartFueltank",2}}};
	};
};
class Pickup_PK_TK_GUE_EP1_DZE3: Pickup_PK_TK_GUE_EP1_DZE2 {
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportmaxbackpacks = 4; // car 2

	class Upgrades {
		ItemTNK[] = {"Pickup_PK_TK_GUE_EP1_DZE4",{},{{"ItemTNK",1},{"PartFueltank",2}}};
	};
};
class Pickup_PK_INS_DZE3: Pickup_PK_INS_DZE2 {
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportmaxbackpacks = 4; // car 2

	class Upgrades {
		ItemTNK[] = {"Pickup_PK_INS_DZE4",{},{{"ItemTNK",1},{"PartFueltank",2}}};
	};
};

// Fuel 4
class Pickup_PK_GUE_DZE4: Pickup_PK_GUE_DZE3 {
	fuelCapacity = 210; // car 100
};
class Pickup_PK_TK_GUE_EP1_DZE4: Pickup_PK_TK_GUE_EP1_DZE3 {
	fuelCapacity = 210; // car 100
};
class Pickup_PK_INS_DZE4: Pickup_PK_INS_DZE3 {
	fuelCapacity = 210; // car 100
};
