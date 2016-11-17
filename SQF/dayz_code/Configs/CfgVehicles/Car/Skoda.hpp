class SkodaBase: Car {
	scope = private;
	faction = "CIV";
	crew = "";
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};
	maxSpeed = 110;
	side = 3;
	armor = 20;
	damageResistance = 0.01821;
	fuelCapacity = 50;
};

class Skoda: SkodaBase {
	scope = public;
	accuracy = 1000;
	faction = "CIV";
	model = "\ca\wheeled\skodovka";
	picture = "\Ca\wheeled\data\ico\skodovka_CA.paa";
	Icon = "\Ca\wheeled\data\map_ico\icomap_skoda_CA.paa";
	mapSize = 6;
	displayName = "Car (white)";
	displayNameShort = "Car";
	hiddenSelections[] = {"Camo1","Camo2"};
	hiddenSelectionsTextures[] = {"\ca\wheeled\data\skodovka_bila_co.paa","\ca\wheeled\data\skodovka_int_co.paa"};
	class Damage {
		tex[] = {};
		mat[] = {"ca\wheeled\data\skodovka.rvmat","ca\wheeled\data\skodovka.rvmat","ca\wheeled\data\skodovka_destruct.rvmat","ca\wheeled\data\detailmapy\auta_skla.rvmat","ca\wheeled\data\detailmapy\auta_skla_damage.rvmat","ca\wheeled\data\detailmapy\auta_skla_damage.rvmat","ca\wheeled\data\detailmapy\auta_skla_in.rvmat","ca\wheeled\data\detailmapy\auta_skla_in_damage.rvmat","ca\wheeled\data\detailmapy\auta_skla_in_damage.rvmat"};
	};
	rarityUrban = 0.25;

	class Upgrades {
		ItemORP[] = {"Skoda_DZE1",{},{{"ItemORP",1},{"PartEngine",2}}};
	};
};
class SkodaBlue: SkodaBase {
	scope = public;
	accuracy = 1000;
	faction = "CIV";
	model = "\ca\wheeled\skodovka_blue";
	picture = "\Ca\wheeled\data\ico\skodovka_CA.paa";
	Icon = "\Ca\wheeled\data\map_ico\icomap_skoda_CA.paa";
	mapSize = 6;
	displayName = "Car (blue)";
	displayNameShort = "Car";
	class Damage {
		tex[] = {};
		mat[] = {"ca\wheeled\data\skodovka_modra.rvmat","ca\wheeled\data\skodovka_modra.rvmat","ca\wheeled\data\skodovka_destruct.rvmat","ca\wheeled\data\detailmapy\auta_skla.rvmat","ca\wheeled\data\detailmapy\auta_skla_damage.rvmat","ca\wheeled\data\detailmapy\auta_skla_damage.rvmat","ca\wheeled\data\detailmapy\auta_skla_in.rvmat","ca\wheeled\data\detailmapy\auta_skla_in_damage.rvmat","ca\wheeled\data\detailmapy\auta_skla_in_damage.rvmat"};
	};
	rarityUrban = 0.25;

	class Upgrades {
		ItemORP[] = {"SkodaBlue_DZE1",{},{{"ItemORP",1},{"PartEngine",2}}};
	};
};
class SkodaRed: SkodaBase {
	scope = public;
	faction = "CIV";
	accuracy = 1000;
	model = "\ca\wheeled\skodovka_red";
	picture = "\Ca\wheeled\data\ico\skodovka_CA.paa";
	Icon = "\Ca\wheeled\data\map_ico\icomap_skoda_CA.paa";
	mapSize = 6;
	displayName = "Car (red)";
	displayNameShort = "Car";
	class Damage {
		tex[] = {};
		mat[] = {"ca\wheeled\data\skodovka.rvmat","ca\wheeled\data\skodovka.rvmat","ca\wheeled\data\skodovka_destruct.rvmat","ca\wheeled\data\detailmapy\auta_skla.rvmat","ca\wheeled\data\detailmapy\auta_skla_damage.rvmat","ca\wheeled\data\detailmapy\auta_skla_damage.rvmat","ca\wheeled\data\detailmapy\auta_skla_in.rvmat","ca\wheeled\data\detailmapy\auta_skla_in_damage.rvmat","ca\wheeled\data\detailmapy\auta_skla_in_damage.rvmat"};
	};

	class Upgrades {
		ItemORP[] = {"SkodaRed_DZE1",{},{{"ItemORP",1},{"PartEngine",2}}};
	};
};
class SkodaGreen: SkodaBase {
	scope = public;
	faction = "CIV";
	accuracy = 1000;
	model = "\ca\wheeled\skodovka_green";
	picture = "\Ca\wheeled\data\ico\skodovka_CA.paa";
	Icon = "\Ca\wheeled\data\map_ico\icomap_skoda_CA.paa";
	mapSize = 6;
	displayName = "Car (green)";
	displayNameShort = "Car";
	class Damage {
		tex[] = {};
		mat[] = {"ca\wheeled\data\skodovka_zelena.rvmat","ca\wheeled\data\skodovka_zelena.rvmat","ca\wheeled\data\skodovka_destruct.rvmat","ca\wheeled\data\detailmapy\auta_skla.rvmat","ca\wheeled\data\detailmapy\auta_skla_damage.rvmat","ca\wheeled\data\detailmapy\auta_skla_damage.rvmat","ca\wheeled\data\detailmapy\auta_skla_in.rvmat","ca\wheeled\data\detailmapy\auta_skla_in_damage.rvmat","ca\wheeled\data\detailmapy\auta_skla_in_damage.rvmat"};
	};

	class Upgrades {
		ItemORP[] = {"SkodaGreen_DZE1",{},{{"ItemORP",1},{"PartEngine",2}}};
	};
};

// Performance 1
class Skoda_DZE1: Skoda {
	original = "Skoda";
	maxspeed = 150; // max engine limit 125-130
	terrainCoef = 2.5;

	class Upgrades {
		ItemAVE[] = {"Skoda_DZE2",{},{{"ItemAVE",1},{"PartGeneric",4},{"ItemTankTrap",2}}};
	};
};
class SkodaBlue_DZE1: SkodaBlue {
	original = "SkodaBlue";
	maxspeed = 150; // car 100
	terrainCoef = 2.5;

	class Upgrades {
		ItemAVE[] = {"SkodaBlue_DZE2",{},{{"ItemAVE",1},{"PartGeneric",4},{"ItemTankTrap",2}}};
	};
};
class SkodaRed_DZE1: SkodaRed {
	original = "SkodaRed";
	maxspeed = 150; // car 100
	terrainCoef = 2.5;

	class Upgrades {
		ItemAVE[] = {"SkodaRed_DZE2",{},{{"ItemAVE",1},{"PartGeneric",4},{"ItemTankTrap",2}}};
	};
};
class SkodaGreen_DZE1: SkodaGreen {
	original = "SkodaGreen";
	maxspeed = 150; // car 100
	terrainCoef = 2.5;

	class Upgrades {
		ItemAVE[] = {"SkodaGreen_DZE2",{},{{"ItemAVE",1},{"PartGeneric",4},{"ItemTankTrap",2}}};
	};
};

// Armor 2
class Skoda_DZE2: Skoda_DZE1 {
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
		ItemLRK[] = {"Skoda_DZE3",{},{{"ItemLRK",1},{"PartGeneric",1},{"ItemTent",1}}};
	};
};
class SkodaBlue_DZE2: SkodaBlue_DZE1 {
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
		ItemLRK[] = {"SkodaBlue_DZE3",{},{{"ItemLRK",1},{"PartGeneric",1},{"ItemTent",1}}};
	};
};
class SkodaRed_DZE2: SkodaRed_DZE1 {
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
		ItemLRK[] = {"SkodaRed_DZE3",{},{{"ItemLRK",1},{"PartGeneric",1},{"ItemTent",1}}};
	};
};
class SkodaGreen_DZE2: SkodaGreen_DZE1 {
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
		ItemLRK[] = {"SkodaGreen_DZE3",{},{{"ItemLRK",1},{"PartGeneric",1},{"ItemTent",1}}};
	};
};

// Cargo 3
class Skoda_DZE3: Skoda_DZE2 {
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportmaxbackpacks = 4; // car 2

	class Upgrades {
		ItemTNK[] = {"Skoda_DZE4",{},{{"ItemTNK",1},{"PartFueltank",2}}};
	};
};
class SkodaBlue_DZE3: SkodaBlue_DZE2 {
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportmaxbackpacks = 4; // car 2

	class Upgrades {
		ItemTNK[] = {"SkodaBlue_DZE4",{},{{"ItemTNK",1},{"PartFueltank",2}}};
	};
};
class SkodaRed_DZE3: SkodaRed_DZE2 {
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportmaxbackpacks = 4; // car 2

	class Upgrades {
		ItemTNK[] = {"SkodaRed_DZE4",{},{{"ItemTNK",1},{"PartFueltank",2}}};
	};
};
class SkodaGreen_DZE3: SkodaGreen_DZE2 {
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportmaxbackpacks = 4; // car 2

	class Upgrades {
		ItemTNK[] = {"SkodaGreen_DZE4",{},{{"ItemTNK",1},{"PartFueltank",2}}};
	};
};

// Fuel 4
class Skoda_DZE4: Skoda_DZE3 {
	fuelCapacity = 210; // car 100
};
class SkodaBlue_DZE4: SkodaBlue_DZE3 {
	fuelCapacity = 210; // car 100
};
class SkodaRed_DZE4: SkodaRed_DZE3 {
	fuelCapacity = 210; // car 100
};
class SkodaGreen_DZE4: SkodaGreen_DZE3 {
	fuelCapacity = 210; // car 100
};

class GLT_M300_ST : SkodaBase {};