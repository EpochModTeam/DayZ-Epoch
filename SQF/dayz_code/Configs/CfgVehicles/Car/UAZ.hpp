class UAZ_Unarmed_Base : UAZ_Base {
    class HitPoints : HitPoints {
      class HitGlass1 {
        armor = 0.05;
        material = -1;
        name = "glass1";
        visual = "glass1";
        passThrough = 0;
      };
      class HitGlass2 {
        armor = 0.05;
        material = -1;
        name = "glass2";
        visual = "glass2";
        passThrough = 0;
      };
      class HitGlass3 {
        armor = 0.05;
        material = -1;
        name = "glass3";
        visual = "glass3";
        passThrough = 0;
      };
      class HitGlass4 {
        armor = 0.05;
        material = -1;
        name = "glass4";
        visual = "glass4";
        passThrough = 0;
      };
    };
    model = "\ca\wheeled\uaz";
    picture = "\Ca\wheeled\data\ico\uaz_CA.paa";
    Icon = "\Ca\wheeled\data\map_ico\icomap_Uaz_CA.paa";
    mapSize = 4;
    displayName = "UAZ";
    vehicleClass = "Car";
    transportSoldier = 6;
    transportAmmo = 0;
    maxSpeed = 90;
    cost = 25000;
    armor = 40;
    damageResistance = 0.00845;
    armorWheels = 0.12;
    soundGear[] = {
      "",
      0.000562341,
      1
    };
    threat[] = {
      0,
      0,
      0
    };
    class Turrets {
    };
    class Damage {
      tex[] = {
      };
      mat[] = {
        "ca\wheeled\data\detailmapy\uaz_main_metal.rvmat",
        "ca\wheeled\data\detailmapy\uaz_main_metal_damage.rvmat",
        "ca\wheeled\data\detailmapy\uaz_main_metal_destruct.rvmat",
        "ca\wheeled\data\detailmapy\uaz_other_metal.rvmat",
        "ca\wheeled\data\detailmapy\uaz_other_metal_damage.rvmat",
        "ca\wheeled\data\detailmapy\uaz_other_metal_destruct.rvmat",
        "ca\wheeled\data\detailmapy\uaz_skla.rvmat",
        "ca\wheeled\data\detailmapy\uaz_skla_damage.rvmat",
        "ca\wheeled\data\detailmapy\uaz_skla_destruct.rvmat",
        "ca\wheeled\data\detailmapy\uaz_skla_in.rvmat",
        "ca\wheeled\data\detailmapy\uaz_skla_in_damage.rvmat",
        "ca\wheeled\data\detailmapy\uaz_skla_in_damage.rvmat"
      };
    };
    hiddenSelections[] = {
      "Camo1"
    };
    hiddenSelectionsTextures[] = {
      "\ca\wheeled\data\Uaz_main_002_CO.paa"
    };
};

class UAZ_CDF: UAZ_Unarmed_Base {
	accuracy = 0.3;
	maxspeed = 190;
	crew = "";
	faction = "CDF";
	hiddenselectionstextures[] = {"\ca\wheeled\data\Uaz_main_002_CO.paa"};
	scope = public;
	side = 1;
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};

	class Upgrades {
		ItemORP[] = {"UAZ_CDF_DZE1",{},{{"ItemORP",1},{"PartEngine",2}}};
	};
};
class UAZ_INS: UAZ_Unarmed_Base {
	scope = public;
	maxspeed = 190;
	side = 0;
	faction = "INS";
	accuracy = 0.3;
	crew = "";
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};
	hiddenSelectionsTextures[] = {"\ca\wheeled\data\Uaz_main_001_CO.paa"};

	class Upgrades {
		ItemORP[] = {"UAZ_INS_DZE1",{},{{"ItemORP",1},{"PartEngine",2}}};
	};
};
class UAZ_RU: UAZ_Unarmed_Base {
	scope = public;
	maxspeed = 190;
	side = 0;
	faction = "RU";
	crew = "";
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};
	hiddenSelectionsTextures[] = {"\ca\wheeled\data\Uaz_main_CO.paa"};

	class Upgrades {
		ItemORP[] = {"UAZ_RU_DZE1",{},{{"ItemORP",1},{"PartEngine",2}}};
	};
};
class UAZ_Unarmed_TK_EP1: UAZ_Unarmed_Base {
	expansion = 1;
	maxspeed = 190;
	scope = public;
	side = 0;
	faction = "BIS_TK";
	accuracy = 0.3;
	crew = "";
	typicalCargo[] = {};
	hiddenSelectionsTextures[] = {"\CA\wheeled_E\UAZ\Data\Uaz_main_IND_CO.paa"};
	class TransportMagazines {};
	class TransportWeapons {};

	class Upgrades {
		ItemORP[] = {"UAZ_Unarmed_TK_EP1_DZE1",{},{{"ItemORP",1},{"PartEngine",2}}};
	};
};
class UAZ_Unarmed_UN_EP1: UAZ_Unarmed_Base {
	expansion = 1;
	maxspeed = 190;
	scope = public;
	side = 2;
	accuracy = 0.3;
	faction = "BIS_UN";
	crew = "";
	typicalCargo[] = {};
	hiddenSelectionsTextures[] = {"\CA\wheeled_E\UAZ\Data\Uaz_main_UN_CO.paa"};
	class TransportMagazines {};
	class TransportWeapons {};

	class Upgrades {
		ItemORP[] = {"UAZ_Unarmed_UN_EP1_DZE1",{},{{"ItemORP",1},{"PartEngine",2}}};
	};
};
class UAZ_Unarmed_TK_CIV_EP1: UAZ_Unarmed_Base {
	expansion = 1;
	maxspeed = 190;
	scope = public;
	side = 3;
	accuracy = 0.3;
	faction = "BIS_TK_CIV";
	crew = "";
	typicalCargo[] = {};
	hiddenSelectionsTextures[] = {"\CA\wheeled_E\UAZ\Data\Uaz_main_CIVIL_CO.paa"};
	class TransportMagazines {};
	class TransportWeapons {};

	class Upgrades {
		ItemORP[] = {"UAZ_Unarmed_TK_CIV_EP1_DZE1",{},{{"ItemORP",1},{"PartEngine",2}}};
	};
};

// Performance 1
class UAZ_CDF_DZE1: UAZ_CDF {
	original = "UAZ_CDF";
	maxspeed = 240; // max engine limit 125-130
	terrainCoef = 2.5;

	class Upgrades {
		ItemAVE[] = {"UAZ_CDF_DZE2",{},{{"ItemAVE",1},{"PartGeneric",4},{"ItemTankTrap",2}}};
	};
};
class UAZ_INS_DZE1: UAZ_INS {
	original = "UAZ_INS";
	maxspeed = 240; // car 100
	terrainCoef = 2.5;

	class Upgrades {
		ItemAVE[] = {"UAZ_INS_DZE2",{},{{"ItemAVE",1},{"PartGeneric",4},{"ItemTankTrap",2}}};
	};
};
class UAZ_RU_DZE1: UAZ_RU {
	original = "UAZ_RU";
	maxspeed = 240; // car 100
	terrainCoef = 2.5;

	class Upgrades {
		ItemAVE[] = {"UAZ_RU_DZE2",{},{{"ItemAVE",1},{"PartGeneric",4},{"ItemTankTrap",2}}};
	};
};
class UAZ_Unarmed_TK_EP1_DZE1: UAZ_Unarmed_TK_EP1 {
	original = "UAZ_Unarmed_TK_EP1";
	maxspeed = 240; // max engine limit 125-130
	terrainCoef = 2.5;

	class Upgrades {
		ItemAVE[] = {"UAZ_Unarmed_TK_EP1_DZE2",{},{{"ItemAVE",1},{"PartGeneric",4},{"ItemTankTrap",2}}};
	};
};
class UAZ_Unarmed_UN_EP1_DZE1: UAZ_Unarmed_UN_EP1 {
	original = "UAZ_Unarmed_UN_EP1";
	maxspeed = 240; // car 100
	terrainCoef = 2.5;

	class Upgrades {
		ItemAVE[] = {"UAZ_Unarmed_UN_EP1_DZE2",{},{{"ItemAVE",1},{"PartGeneric",4},{"ItemTankTrap",2}}};
	};
};
class UAZ_Unarmed_TK_CIV_EP1_DZE1: UAZ_Unarmed_TK_CIV_EP1 {
	original = "UAZ_Unarmed_TK_CIV_EP1";
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
