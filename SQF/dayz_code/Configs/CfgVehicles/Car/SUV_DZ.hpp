class SUV_DZ: SUV_Base_EP1 {
	crew = "";
	scope = 2;
	vehicleClass = "DayZ Epoch Vehicles";
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};
	class HitPoints : HitPoints {
		class HitLFWheel:HitLFWheel {
			armor = 0.15;
			material = -1;
			name = "wheel_1_1_steering";
			passthrough = 0.3;
			visual = "";
		};
		class HitLBWheel:HitLBWheel {
			armor = 0.15;
			material = -1;
			name = "wheel_1_2_steering";
			passthrough = 0.3;
			visual = "";
		};
		class HitRFWheel:HitRFWheel {
			armor = 0.15;
			material = -1;
			name = "wheel_2_1_steering";
			passthrough = 0.3;
			visual = "";
		};
		class HitRBWheel:HitRBWheel {
			armor = 0.15;
			material = -1;
			name = "wheel_2_2_steering";
			passthrough = 0.3;
			visual = "";
		};
		class HitFuel:HitFuel {
			armor = 0.14;
			material = -1;
			name = "palivo";
			passthrough = 1;
			visual = "";
		};
		class HitEngine:HitEngine {
			armor = 0.5;
			material = -1;
			name = "motor";
			passthrough = 1;
			visual = "";
		};
		class HitGlass1:HitGlass1 {
			armor = 0.1;
			material = -1;
			name = "glass1";
			passthrough = 0;
			visual = "glass1";
		};
		class HitGlass2:HitGlass2 {
			armor = 0.1;
			material = -1;
			name = "glass2";
			passthrough = 0;
			visual = "glass2";
		};
		class HitGlass3:HitGlass3 {
			armor = 0.1;
			material = -1;
			name = "glass3";
			passthrough = 0;
			visual = "glass3";
		};
		class HitGlass4:HitGlass4 {
			armor = 0.1;
			material = -1;
			name = "glass4";
			passthrough = 0;
			visual = "glass4";
		};
	};
};

class SUV_TK_CIV_EP1_DZE: SUV_Base_EP1 {
	displayName = "$STR_VEH_NAME_SUV_BLACK";
	vehicleClass = "DayZ Epoch Vehicles";
	scope = 2;
	crew = "";
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};

	class HitPoints : HitPoints {
		class HitLFWheel:HitLFWheel {
			armor = 0.15;
			material = -1;
			name = "wheel_1_1_steering";
			passthrough = 0.3;
			visual = "";
		};
		class HitLBWheel:HitLBWheel {
			armor = 0.15;
			material = -1;
			name = "wheel_1_2_steering";
			passthrough = 0.3;
			visual = "";
		};
		class HitRFWheel:HitRFWheel {
			armor = 0.15;
			material = -1;
			name = "wheel_2_1_steering";
			passthrough = 0.3;
			visual = "";
		};
		class HitRBWheel:HitRBWheel {
			armor = 0.15;
			material = -1;
			name = "wheel_2_2_steering";
			passthrough = 0.3;
			visual = "";
		};
		class HitFuel:HitFuel {
			armor = 0.14;
			material = -1;
			name = "palivo";
			passthrough = 1;
			visual = "";
		};
		class HitEngine:HitEngine {
			armor = 0.5;
			material = -1;
			name = "motor";
			passthrough = 1;
			visual = "";
		};
		class HitGlass1:HitGlass1 {
			armor = 0.1;
			material = -1;
			name = "glass1";
			passthrough = 0;
			visual = "glass1";
		};
		class HitGlass2:HitGlass2 {
			armor = 0.1;
			material = -1;
			name = "glass2";
			passthrough = 0;
			visual = "glass2";
		};
		class HitGlass3:HitGlass3 {
			armor = 0.1;
			material = -1;
			name = "glass3";
			passthrough = 0;
			visual = "glass3";
		};
		class HitGlass4:HitGlass4 {
			armor = 0.1;
			material = -1;
			name = "glass4";
			passthrough = 0;
			visual = "glass4";
		};
	};	

	class Upgrades {
		ItemORP[] = {"SUV_TK_CIV_EP1_DZE1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class SUV_TK_CIV_EP1_DZE1: SUV_TK_CIV_EP1_DZE {
	displayName = "$STR_VEH_NAME_SUV_BLACK+";
	original = "SUV_TK_CIV_EP1_DZE";
	maxSpeed = 250; // max engine limit 125-130
	brakeDistance = 14; // 19
	terrainCoef = 1.5;

	class Upgrades {
		ItemAVE[] = {"SUV_TK_CIV_EP1_DZE2",{"ItemToolbox"},{},{{"ItemAVE",1},{"PartGeneric",6},{"ItemScrews",4}}};
	};
};

class SUV_TK_CIV_EP1_DZE2: SUV_TK_CIV_EP1_DZE1 {
	displayName = "$STR_VEH_NAME_SUV_BLACK++";
	armor = 60; // car 20, SUV 25
	damageResistance = 0.02099;
	class HitPoints: HitPoints {
		class HitLFWheel: HitLFWheel {
			armor = 0.7;
		};
		class HitLBWheel: HitLBWheel {
			armor = 0.7;
		};
		class HitRFWheel: HitRFWheel {
			armor = 0.7;
		};
		class HitRBWheel: HitRBWheel {
			armor = 0.7;
		};
		class HitFuel: HitFuel {
			armor = 1;
		};
		class HitEngine: HitEngine {
			armor = 1;
		};
		class HitGlass1: HitGlass1 {
			armor = 1;
		};
		class HitGlass2: HitGlass2 {
			armor = 1;
		};
		class HitGlass3: HitGlass3 {
			armor = 1;
		};
		class HitGlass4: HitGlass4 {
			armor = 1;
		};
	};

	class Upgrades {
		ItemLRK[] = {"SUV_TK_CIV_EP1_DZE3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

class SUV_TK_CIV_EP1_DZE3: SUV_TK_CIV_EP1_DZE2 {
	displayName = "$STR_VEH_NAME_SUV_BLACK+++";
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportmaxbackpacks = 4; // car 2

	class Upgrades {
		ItemTNK[] = {"SUV_TK_CIV_EP1_DZE4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
	};
};

class SUV_TK_CIV_EP1_DZE4: SUV_TK_CIV_EP1_DZE3 {
	displayName = "$STR_VEH_NAME_SUV_BLACK++++";
	fuelCapacity = 250; // suv base 130
};

class SUV_Camo: SUV_TK_CIV_EP1_DZE {
	displayName = "$STR_VEH_NAME_SUV_CAMO";
	vehicleClass = "DayZ Epoch Vehicles";
	hiddenSelectionsTextures[] = {"\z\addons\dayz_epoch\textures\camo10.paa"};

	class Upgrades {
		ItemORP[] = {"SUV_Camo_DZE1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class SUV_Camo_DZE1: SUV_Camo {
	displayName = "$STR_VEH_NAME_SUV_CAMO+";
	original = "SUV_Camo";
	maxSpeed = 250; // max engine limit 125-130
	brakeDistance = 14; // 19
	terrainCoef = 1.5;

	class Upgrades {
		ItemAVE[] = {"SUV_Camo_DZE2",{"ItemToolbox"},{},{{"ItemAVE",1},{"PartGeneric",6},{"ItemScrews",4}}};
	};
};

class SUV_Camo_DZE2: SUV_Camo_DZE1 {
	displayName = "$STR_VEH_NAME_SUV_CAMO++";
	armor = 60; // car 20, SUV 25
	damageResistance = 0.02099;
	class HitPoints: HitPoints {
		class HitLFWheel: HitLFWheel {
			armor = 0.7;
		};
		class HitLBWheel: HitLBWheel {
			armor = 0.7;
		};
		class HitRFWheel: HitRFWheel {
			armor = 0.7;
		};
		class HitRBWheel: HitRBWheel {
			armor = 0.7;
		};
		class HitFuel: HitFuel {
			armor = 1;
		};
		class HitEngine: HitEngine {
			armor = 1;
		};
		class HitGlass1: HitGlass1 {
			armor = 1;
		};
		class HitGlass2: HitGlass2 {
			armor = 1;
		};
		class HitGlass3: HitGlass3 {
			armor = 1;
		};
		class HitGlass4: HitGlass4 {
			armor = 1;
		};
	};

	class Upgrades {
		ItemLRK[] = {"SUV_Camo_DZE3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

class SUV_Camo_DZE3: SUV_Camo_DZE2 {
	displayName = "$STR_VEH_NAME_SUV_CAMO+++";
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportmaxbackpacks = 4; // car 2

	class Upgrades {
		ItemTNK[] = {"SUV_Camo_DZE4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
	};
};

class SUV_Camo_DZE4: SUV_Camo_DZE3 {
	displayName = "$STR_VEH_NAME_SUV_CAMO++++";
	fuelCapacity = 250; // suv base 130
};

class SUV_Blue: SUV_TK_CIV_EP1_DZE {
	displayName = "$STR_VEH_NAME_SUV_BLUE";
	vehicleClass = "DayZ Epoch Vehicles";
	hiddenSelectionsTextures[] = {"\z\addons\dayz_epoch\textures\suv_body_blue_co.paa"};

	class Upgrades {
		ItemORP[] = {"SUV_Blue_DZE1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class SUV_Blue_DZE1: SUV_Blue {
	displayName = "$STR_VEH_NAME_SUV_BLUE+";
	original = "SUV_Blue";
	maxSpeed = 250; // suv base 130
	terrainCoef = 1.5;
	brakeDistance = 14; // 19

	class Upgrades {
		ItemAVE[] = {"SUV_Blue_DZE2",{"ItemToolbox"},{},{{"ItemAVE",1},{"PartGeneric",6},{"ItemScrews",4}}};
	};
};

class SUV_Blue_DZE2: SUV_Blue_DZE1 {
	displayName = "$STR_VEH_NAME_SUV_BLUE++";
	armor = 60; // car 20, SUV 25
	damageResistance = 0.02099;
	class HitPoints: HitPoints {
		class HitLFWheel: HitLFWheel {
			armor = 0.7;
		};
		class HitLBWheel: HitLBWheel {
			armor = 0.7;
		};
		class HitRFWheel: HitRFWheel {
			armor = 0.7;
		};
		class HitRBWheel: HitRBWheel {
			armor = 0.7;
		};
		class HitFuel: HitFuel {
			armor = 1;
		};
		class HitEngine: HitEngine {
			armor = 1;
		};
		class HitGlass1: HitGlass1 {
			armor = 1;
		};
		class HitGlass2: HitGlass2 {
			armor = 1;
		};
		class HitGlass3: HitGlass3 {
			armor = 1;
		};
		class HitGlass4: HitGlass4 {
			armor = 1;
		};
	};

	class Upgrades {
		ItemLRK[] = {"SUV_Blue_DZE3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

class SUV_Blue_DZE3: SUV_Blue_DZE2 {
	displayName = "$STR_VEH_NAME_SUV_BLUE+++";
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportmaxbackpacks = 4; // car 2

	class Upgrades {
		ItemTNK[] = {"SUV_Blue_DZE4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
	};
};

class SUV_Blue_DZE4: SUV_Blue_DZE3 {
	displayName = "$STR_VEH_NAME_SUV_BLUE++++";
	fuelCapacity = 250; // suv base 130
};

class SUV_Green: SUV_TK_CIV_EP1_DZE {
	displayName = "$STR_VEH_NAME_SUV_GREEN";
	vehicleClass = "DayZ Epoch Vehicles";
	hiddenSelectionsTextures[] = {"\z\addons\dayz_epoch\textures\suv_body_green_co.paa"};

	class Upgrades {
		ItemORP[] = {"SUV_Green_DZE1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class SUV_Green_DZE1: SUV_Green {
	displayName = "$STR_VEH_NAME_SUV_GREEN+";
	original = "SUV_Green";
	maxSpeed = 250; // suv base 130
	terrainCoef = 1.5;
	brakeDistance = 14; // 19

	class Upgrades {
		ItemAVE[] = {"SUV_Green_DZE2",{"ItemToolbox"},{},{{"ItemAVE",1},{"PartGeneric",6},{"ItemScrews",4}}};
	};
};

class SUV_Green_DZE2: SUV_Green_DZE1 {
	displayName = "$STR_VEH_NAME_SUV_GREEN++";
	armor = 60; // car 20, SUV 25
	damageResistance = 0.02099;
	class HitPoints: HitPoints {
		class HitLFWheel: HitLFWheel {
			armor = 0.7;
		};
		class HitLBWheel: HitLBWheel {
			armor = 0.7;
		};
		class HitRFWheel: HitRFWheel {
			armor = 0.7;
		};
		class HitRBWheel: HitRBWheel {
			armor = 0.7;
		};
		class HitFuel: HitFuel {
			armor = 1;
		};
		class HitEngine: HitEngine {
			armor = 1;
		};
		class HitGlass1: HitGlass1 {
			armor = 1;
		};
		class HitGlass2: HitGlass2 {
			armor = 1;
		};
		class HitGlass3: HitGlass3 {
			armor = 1;
		};
		class HitGlass4: HitGlass4 {
			armor = 1;
		};
	};

	class Upgrades {
		ItemLRK[] = {"SUV_Green_DZE3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

class SUV_Green_DZE3: SUV_Green_DZE2 {
	displayName = "$STR_VEH_NAME_SUV_GREEN+++";
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportmaxbackpacks = 4; // car 2

	class Upgrades {
		ItemTNK[] = {"SUV_Green_DZE4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
	};
};

class SUV_Green_DZE4: SUV_Green_DZE3 {
	displayName = "$STR_VEH_NAME_SUV_GREEN++++";
	fuelCapacity = 250; // suv base 130
};

class SUV_Yellow: SUV_TK_CIV_EP1_DZE {
	displayName = "$STR_VEH_NAME_SUV_YELLOW";
	vehicleClass = "DayZ Epoch Vehicles";
	hiddenSelectionsTextures[] = {"\z\addons\dayz_epoch\textures\suv_body_yellow_co.paa"};

	class Upgrades {
		ItemORP[] = {"SUV_Yellow_DZE1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class SUV_Yellow_DZE1: SUV_Yellow {
	displayName = "$STR_VEH_NAME_SUV_YELLOW+";
	original = "SUV_Yellow";
	maxSpeed = 250; // max engine limit 125-130
	terrainCoef = 1.5;
	brakeDistance = 14; // 19

	class Upgrades {
		ItemAVE[] = {"SUV_Yellow_DZE2",{"ItemToolbox"},{},{{"ItemAVE",1},{"PartGeneric",6},{"ItemScrews",4}}};
	};
};

class SUV_Yellow_DZE2: SUV_Yellow_DZE1 {
	displayName = "$STR_VEH_NAME_SUV_YELLOW++";
	armor = 60; // car 20, SUV 25
	damageResistance = 0.02099;
	class HitPoints: HitPoints {
		class HitLFWheel: HitLFWheel {
			armor = 0.7;
		};
		class HitLBWheel: HitLBWheel {
			armor = 0.7;
		};
		class HitRFWheel: HitRFWheel {
			armor = 0.7;
		};
		class HitRBWheel: HitRBWheel {
			armor = 0.7;
		};
		class HitFuel: HitFuel {
			armor = 1;
		};
		class HitEngine: HitEngine {
			armor = 1;
		};
		class HitGlass1: HitGlass1 {
			armor = 1;
		};
		class HitGlass2: HitGlass2 {
			armor = 1;
		};
		class HitGlass3: HitGlass3 {
			armor = 1;
		};
		class HitGlass4: HitGlass4 {
			armor = 1;
		};
	};

	class Upgrades {
		ItemLRK[] = {"SUV_Yellow_DZE3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

class SUV_Yellow_DZE3: SUV_Yellow_DZE2 {
	displayName = "$STR_VEH_NAME_SUV_YELLOW+++";
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportmaxbackpacks = 4; // car 2

	class Upgrades {
		ItemTNK[] = {"SUV_Yellow_DZE4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
	};
};

class SUV_Yellow_DZE4: SUV_Yellow_DZE3 {
	displayName = "$STR_VEH_NAME_SUV_YELLOW++++";
	fuelCapacity = 250; // suv base 130
};

class SUV_Red: SUV_TK_CIV_EP1_DZE {
	displayName = "$STR_VEH_NAME_SUV_RED";
	vehicleClass = "DayZ Epoch Vehicles";
	hiddenSelectionsTextures[] = {"\z\addons\dayz_epoch\textures\suv_body_red_co.paa"};

	class Upgrades {
		ItemORP[] = {"SUV_Red_DZE1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class SUV_Red_DZE1: SUV_Red {
	displayName = "$STR_VEH_NAME_SUV_RED+";
	original = "SUV_Red";
	maxSpeed = 250; // suv base 130
	terrainCoef = 1.5;
	brakeDistance = 14; // 19

	class Upgrades {
		ItemAVE[] = {"SUV_Red_DZE2",{"ItemToolbox"},{},{{"ItemAVE",1},{"PartGeneric",6},{"ItemScrews",4}}};
	};
};

class SUV_Red_DZE2: SUV_Red_DZE1 {
	displayName = "$STR_VEH_NAME_SUV_RED++";
	armor = 60; // car 20, SUV 25
	damageResistance = 0.02099;
	class HitPoints: HitPoints {
		class HitLFWheel: HitLFWheel {
			armor = 0.7;
		};
		class HitLBWheel: HitLBWheel {
			armor = 0.7;
		};
		class HitRFWheel: HitRFWheel {
			armor = 0.7;
		};
		class HitRBWheel: HitRBWheel {
			armor = 0.7;
		};
		class HitFuel: HitFuel {
			armor = 1;
		};
		class HitEngine: HitEngine {
			armor = 1;
		};
		class HitGlass1: HitGlass1 {
			armor = 1;
		};
		class HitGlass2: HitGlass2 {
			armor = 1;
		};
		class HitGlass3: HitGlass3 {
			armor = 1;
		};
		class HitGlass4: HitGlass4 {
			armor = 1;
		};
	};

	class Upgrades {
		ItemLRK[] = {"SUV_Red_DZE3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

class SUV_Red_DZE3: SUV_Red_DZE2 {
	displayName = "$STR_VEH_NAME_SUV_RED+++";
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportmaxbackpacks = 4; // car 2

	class Upgrades {
		ItemTNK[] = {"SUV_Red_DZE4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
	};
};

class SUV_Red_DZE4: SUV_Red_DZE3 {
	displayName = "$STR_VEH_NAME_SUV_RED++++";
	fuelCapacity = 250; // suv base 130
};

class SUV_White: SUV_TK_CIV_EP1_DZE {
	displayName = "$STR_VEH_NAME_SUV_WHITE";
	vehicleClass = "DayZ Epoch Vehicles";
	hiddenSelectionsTextures[] = {"\z\addons\dayz_epoch\textures\suv_body_white_co.paa"};

	class Upgrades {
		ItemORP[] = {"SUV_White_DZE1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class SUV_White_DZE1: SUV_White {
	displayName = "$STR_VEH_NAME_SUV_WHITE+";
	original = "SUV_White";
	maxSpeed = 250; // suv base 130
	terrainCoef = 1.5;
	brakeDistance = 14; // 19

	class Upgrades {
		ItemAVE[] = {"SUV_White_DZE2",{"ItemToolbox"},{},{{"ItemAVE",1},{"PartGeneric",6},{"ItemScrews",4}}};
	};
};

class SUV_White_DZE2: SUV_White_DZE1 {
	displayName = "$STR_VEH_NAME_SUV_WHITE++";
	armor = 60; // car 20, SUV 25
	damageResistance = 0.02099;
	class HitPoints: HitPoints {
		class HitLFWheel: HitLFWheel {
			armor = 0.7;
		};
		class HitLBWheel: HitLBWheel {
			armor = 0.7;
		};
		class HitRFWheel: HitRFWheel {
			armor = 0.7;
		};
		class HitRBWheel: HitRBWheel {
			armor = 0.7;
		};
		class HitFuel: HitFuel {
			armor = 1;
		};
		class HitEngine: HitEngine {
			armor = 1;
		};
		class HitGlass1: HitGlass1 {
			armor = 1;
		};
		class HitGlass2: HitGlass2 {
			armor = 1;
		};
		class HitGlass3: HitGlass3 {
			armor = 1;
		};
		class HitGlass4: HitGlass4 {
			armor = 1;
		};
	};

	class Upgrades {
		ItemLRK[] = {"SUV_White_DZE3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

class SUV_White_DZE3: SUV_White_DZE2 {
	displayName = "$STR_VEH_NAME_SUV_WHITE+++";
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportmaxbackpacks = 4; // car 2

	class Upgrades {
		ItemTNK[] = {"SUV_White_DZE4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
	};
};

class SUV_White_DZE4: SUV_White_DZE3 {
	displayName = "$STR_VEH_NAME_SUV_WHITE++++";
	fuelCapacity = 250; // suv base 130
};

class SUV_Pink: SUV_TK_CIV_EP1_DZE {
	displayName = "$STR_VEH_NAME_SUV_PINK";
	vehicleClass = "DayZ Epoch Vehicles";
	hiddenSelectionsTextures[] = {"\z\addons\dayz_epoch\textures\suv_body_pink_co.paa"};

	class Upgrades {
		ItemORP[] = {"SUV_Pink_DZE1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class SUV_Pink_DZE1: SUV_Pink {
	displayName = "$STR_VEH_NAME_SUV_PINK+";
	original = "SUV_Pink";
	maxSpeed = 250; // suv base 130
	terrainCoef = 1.5;
	brakeDistance = 14; // 19

	class Upgrades {
		ItemAVE[] = {"SUV_Pink_DZE2",{"ItemToolbox"},{},{{"ItemAVE",1},{"PartGeneric",6},{"ItemScrews",4}}};
	};
};

class SUV_Pink_DZE2: SUV_Pink_DZE1 {
	displayName = "$STR_VEH_NAME_SUV_PINK++";
	armor = 60; // car 20, SUV 25
	damageResistance = 0.02099;
	class HitPoints: HitPoints {
		class HitLFWheel: HitLFWheel {
			armor = 0.7;
		};
		class HitLBWheel: HitLBWheel {
			armor = 0.7;
		};
		class HitRFWheel: HitRFWheel {
			armor = 0.7;
		};
		class HitRBWheel: HitRBWheel {
			armor = 0.7;
		};
		class HitFuel: HitFuel {
			armor = 1;
		};
		class HitEngine: HitEngine {
			armor = 1;
		};
		class HitGlass1: HitGlass1 {
			armor = 1;
		};
		class HitGlass2: HitGlass2 {
			armor = 1;
		};
		class HitGlass3: HitGlass3 {
			armor = 1;
		};
		class HitGlass4: HitGlass4 {
			armor = 1;
		};
	};

	class Upgrades {
		ItemLRK[] = {"SUV_Pink_DZE3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

class SUV_Pink_DZE3: SUV_Pink_DZE2 {
	displayName = "$STR_VEH_NAME_SUV_PINK+++";
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportmaxbackpacks = 4; // car 2

	class Upgrades {
		ItemTNK[] = {"SUV_Pink_DZE4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
	};
};

class SUV_Pink_DZE4: SUV_Pink_DZE3 {
	displayName = "$STR_VEH_NAME_SUV_PINK++++";
	fuelCapacity = 250; // suv base 130
};

class SUV_Charcoal: SUV_TK_CIV_EP1_DZE {
	displayName = "$STR_VEH_NAME_SUV_GREY";
	vehicleClass = "DayZ Epoch Vehicles";
	hiddenSelectionsTextures[] = {"\z\addons\dayz_epoch\textures\suv_body_charcoal_co.paa"};

	class Upgrades {
		ItemORP[] = {"SUV_Charcoal_DZE1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class SUV_Charcoal_DZE1: SUV_Charcoal {
	displayName = "$STR_VEH_NAME_SUV_GREY+";
	original = "SUV_Charcoal";
	maxSpeed = 250; // max engine limit 125-130
	terrainCoef = 1.5;
	brakeDistance = 14; // 19

	class Upgrades {
		ItemAVE[] = {"SUV_Charcoal_DZE2",{"ItemToolbox"},{},{{"ItemAVE",1},{"PartGeneric",6},{"ItemScrews",4}}};
	};
};

class SUV_Charcoal_DZE2: SUV_Charcoal_DZE1 {
	displayName = "$STR_VEH_NAME_SUV_GREY++";
	armor = 60; // car 20, SUV 25
	damageResistance = 0.02099;
	class HitPoints: HitPoints {
		class HitLFWheel: HitLFWheel {
			armor = 0.7;
		};
		class HitLBWheel: HitLBWheel {
			armor = 0.7;
		};
		class HitRFWheel: HitRFWheel {
			armor = 0.7;
		};
		class HitRBWheel: HitRBWheel {
			armor = 0.7;
		};
		class HitFuel: HitFuel {
			armor = 1;
		};
		class HitEngine: HitEngine {
			armor = 1;
		};
		class HitGlass1: HitGlass1 {
			armor = 1;
		};
		class HitGlass2: HitGlass2 {
			armor = 1;
		};
		class HitGlass3: HitGlass3 {
			armor = 1;
		};
		class HitGlass4: HitGlass4 {
			armor = 1;
		};
	};

	class Upgrades {
		ItemLRK[] = {"SUV_Charcoal_DZE3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

class SUV_Charcoal_DZE3: SUV_Charcoal_DZE2 {
	displayName = "$STR_VEH_NAME_SUV_GREY+++";
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportmaxbackpacks = 4; // car 2

	class Upgrades {
		ItemTNK[] = {"SUV_Charcoal_DZE4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
	};
};

class SUV_Charcoal_DZE4: SUV_Charcoal_DZE3 {
	displayName = "$STR_VEH_NAME_SUV_GREY++++";
	fuelCapacity = 250; // suv base 130
};

class SUV_Orange: SUV_TK_CIV_EP1_DZE {
	displayName = "$STR_VEH_NAME_SUV_ORANGE";
	vehicleClass = "DayZ Epoch Vehicles";
	hiddenSelectionsTextures[] = {"\z\addons\dayz_epoch\textures\suv_body_orange_co.paa"};

	class Upgrades {
		ItemORP[] = {"SUV_Orange_DZE1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class SUV_Orange_DZE1: SUV_Orange {
	displayName = "$STR_VEH_NAME_SUV_ORANGE+";
	original = "SUV_Orange";
	maxSpeed = 250; // suv base 130
	terrainCoef = 1.5;
	brakeDistance = 14; // 19

	class Upgrades {
		ItemAVE[] = {"SUV_Orange_DZE2",{"ItemToolbox"},{},{{"ItemAVE",1},{"PartGeneric",6},{"ItemScrews",4}}};
	};
};

class SUV_Orange_DZE2: SUV_Orange_DZE1 {
	displayName = "$STR_VEH_NAME_SUV_ORANGE++";
	armor = 60; // car 20, SUV 25
	damageResistance = 0.02099;
	class HitPoints: HitPoints {
		class HitLFWheel: HitLFWheel {
			armor = 0.7;
		};
		class HitLBWheel: HitLBWheel {
			armor = 0.7;
		};
		class HitRFWheel: HitRFWheel {
			armor = 0.7;
		};
		class HitRBWheel: HitRBWheel {
			armor = 0.7;
		};
		class HitFuel: HitFuel {
			armor = 1;
		};
		class HitEngine: HitEngine {
			armor = 1;
		};
		class HitGlass1: HitGlass1 {
			armor = 1;
		};
		class HitGlass2: HitGlass2 {
			armor = 1;
		};
		class HitGlass3: HitGlass3 {
			armor = 1;
		};
		class HitGlass4: HitGlass4 {
			armor = 1;
		};
	};

	class Upgrades {
		ItemLRK[] = {"SUV_Orange_DZE3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

class SUV_Orange_DZE3: SUV_Orange_DZE2 {
	displayName = "$STR_VEH_NAME_SUV_ORANGE+++";
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportmaxbackpacks = 4; // car 2

	class Upgrades {
		ItemTNK[] = {"SUV_Orange_DZE4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
	};
};

class SUV_Orange_DZE4: SUV_Orange_DZE3 {
	displayName = "$STR_VEH_NAME_SUV_ORANGE++++";
	fuelCapacity = 250; // suv base 130
};

class SUV_Silver: SUV_TK_CIV_EP1_DZE {
	displayName = "$STR_VEH_NAME_SUV_SILVER";
	vehicleClass = "DayZ Epoch Vehicles";
	hiddenSelectionsTextures[] = {"\z\addons\dayz_epoch\textures\suv_body_silver_co.paa"};

	class Upgrades {
		ItemORP[] = {"SUV_Silver_DZE1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class SUV_Silver_DZE1: SUV_Silver {
	displayName = "$STR_VEH_NAME_SUV_SILVER+";
	original = "SUV_Silver";
	maxSpeed = 250; // suv base 130
	terrainCoef = 1.5;
	brakeDistance = 14; // 19

	class Upgrades {
		ItemAVE[] = {"SUV_Silver_DZE2",{"ItemToolbox"},{},{{"ItemAVE",1},{"PartGeneric",6},{"ItemScrews",4}}};
	};
};

class SUV_Silver_DZE2: SUV_Silver_DZE1 {
	displayName = "$STR_VEH_NAME_SUV_SILVER++";
	armor = 60; // car 20, SUV 25
	damageResistance = 0.02099;
	class HitPoints: HitPoints {
		class HitLFWheel: HitLFWheel {
			armor = 0.7;
		};
		class HitLBWheel: HitLBWheel {
			armor = 0.7;
		};
		class HitRFWheel: HitRFWheel {
			armor = 0.7;
		};
		class HitRBWheel: HitRBWheel {
			armor = 0.7;
		};
		class HitFuel: HitFuel {
			armor = 1;
		};
		class HitEngine: HitEngine {
			armor = 1;
		};
		class HitGlass1: HitGlass1 {
			armor = 1;
		};
		class HitGlass2: HitGlass2 {
			armor = 1;
		};
		class HitGlass3: HitGlass3 {
			armor = 1;
		};
		class HitGlass4: HitGlass4 {
			armor = 1;
		};
	};

	class Upgrades {
		ItemLRK[] = {"SUV_Silver_DZE3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

class SUV_Silver_DZE3: SUV_Silver_DZE2 {
	displayName = "$STR_VEH_NAME_SUV_SILVER+++";
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportmaxbackpacks = 4; // car 2

	class Upgrades {
		ItemTNK[] = {"SUV_Silver_DZE4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
	};
};

class SUV_Silver_DZE4: SUV_Silver_DZE3 {
	displayName = "$STR_VEH_NAME_SUV_SILVER++++";
	fuelCapacity = 250; // suv base 130
};