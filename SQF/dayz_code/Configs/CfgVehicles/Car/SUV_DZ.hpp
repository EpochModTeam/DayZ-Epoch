class SUV_DZ: SUV_Base_EP1 {
	crew = "";
	faction = "BIS_TK_CIV";
	rarityurban = 0.8;
	scope = public;
	side = 3;
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
class SUV_TK_CIV_EP1: SUV_Base_EP1 {
	scope = public;
	crew = "";
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};
	rarityUrban = 0.8;
	faction = "BIS_TK_CIV";
	side = 3;

	class Upgrades {
		ItemORP[] = {"SUV_TK_CIV_EP1_DZE1",{},{{"ItemORP",1},{"PartEngine",2}}};
	};
};

// Camo
class SUV_Camo: SUV_TK_CIV_EP1 {
	displayName = "SUV Camo";
	hiddenSelectionsTextures[] = {"\z\addons\dayz_epoch\textures\camo10.paa"};

	class Upgrades {
		ItemORP[] = {"SUV_Camo_DZE1",{},{{"ItemORP",1},{"PartEngine",2}}};
	};
};

// SUV RECOLORS
class SUV_Blue: SUV_TK_CIV_EP1 {
	displayName = "SUV Blue";
	hiddenSelectionsTextures[] = {"\z\addons\dayz_epoch\textures\suv_body_blue_co.paa"};

	class Upgrades {
		ItemORP[] = {"SUV_Blue_DZE1",{},{{"ItemORP",1},{"PartEngine",2}}};
	};
};
class SUV_Green: SUV_TK_CIV_EP1 {
	displayName = "SUV Green";
	hiddenSelectionsTextures[] = {"\z\addons\dayz_epoch\textures\suv_body_green_co.paa"};

	class Upgrades {
		ItemORP[] = {"SUV_Green_DZE1",{},{{"ItemORP",1},{"PartEngine",2}}};
	};
};
class SUV_Yellow: SUV_TK_CIV_EP1 {
	displayName = "SUV Yellow";
	hiddenSelectionsTextures[] = {"\z\addons\dayz_epoch\textures\suv_body_yellow_co.paa"};

	class Upgrades {
		ItemORP[] = {"SUV_Yellow_DZE1",{},{{"ItemORP",1},{"PartEngine",2}}};
	};
};
class SUV_Red: SUV_TK_CIV_EP1 {
	displayName = "SUV Red";
	hiddenSelectionsTextures[] = {"\z\addons\dayz_epoch\textures\suv_body_red_co.paa"};

	class Upgrades {
		ItemORP[] = {"SUV_Red_DZE1",{},{{"ItemORP",1},{"PartEngine",2}}};
	};
};
class SUV_White: SUV_TK_CIV_EP1 {
	displayName = "SUV White";
	hiddenSelectionsTextures[] = {"\z\addons\dayz_epoch\textures\suv_body_white_co.paa"};

	class Upgrades {
		ItemORP[] = {"SUV_White_DZE1",{},{{"ItemORP",1},{"PartEngine",2}}};
	};
};
class SUV_Pink: SUV_TK_CIV_EP1 {
	displayName = "SUV Pink";
	hiddenSelectionsTextures[] = {"\z\addons\dayz_epoch\textures\suv_body_pink_co.paa"};

	class Upgrades {
		ItemORP[] = {"SUV_Pink_DZE1",{},{{"ItemORP",1},{"PartEngine",2}}};
	};
};
class SUV_Charcoal: SUV_TK_CIV_EP1 {
	displayName = "SUV Charcoal";
	hiddenSelectionsTextures[] = {"\z\addons\dayz_epoch\textures\suv_body_charcoal_co.paa"};

	class Upgrades {
		ItemORP[] = {"SUV_Charcoal_DZE1",{},{{"ItemORP",1},{"PartEngine",2}}};
	};
};
class SUV_Orange: SUV_TK_CIV_EP1 {
	displayName = "SUV Orange";
	hiddenSelectionsTextures[] = {"\z\addons\dayz_epoch\textures\suv_body_orange_co.paa"};

	class Upgrades {
		ItemORP[] = {"SUV_Orange_DZE1",{},{{"ItemORP",1},{"PartEngine",2}}};
	};
};
class SUV_Silver: SUV_TK_CIV_EP1 {
	displayName = "SUV Silver";
	hiddenSelectionsTextures[] = {"\z\addons\dayz_epoch\textures\suv_body_silver_co.paa"};

	class Upgrades {
		ItemORP[] = {"SUV_Silver_DZE1",{},{{"ItemORP",1},{"PartEngine",2}}};
	};
};

// Performance 1
class SUV_TK_CIV_EP1_DZE1: SUV_TK_CIV_EP1 {
	original = "SUV_TK_CIV_EP1";
	maxSpeed = 250; // max engine limit 125-130
	brakeDistance = 14; // 19
	terrainCoef = 1.5;

	class Upgrades {
		ItemAVE[] = {"SUV_TK_CIV_EP1_DZE2",{},{{"ItemAVE",1},{"PartGeneric",4},{"ItemTankTrap",2}}};
	};
};
class SUV_Camo_DZE1: SUV_Camo {
	original = "SUV_Camo";
	maxSpeed = 250; // max engine limit 125-130
	brakeDistance = 14; // 19
	terrainCoef = 1.5;

	class Upgrades {
		ItemAVE[] = {"SUV_Camo_DZE2",{},{{"ItemAVE",1},{"PartGeneric",4},{"ItemTankTrap",2}}};
	};
};
class SUV_Blue_DZE1: SUV_Blue {
	original = "SUV_Blue";
	maxSpeed = 250; // suv base 130
	terrainCoef = 1.5;
	brakeDistance = 14; // 19

	class Upgrades {
		ItemAVE[] = {"SUV_Blue_DZE2",{},{{"ItemAVE",1},{"PartGeneric",4},{"ItemTankTrap",2}}};
	};
};
class SUV_Green_DZE1: SUV_Green {
	original = "SUV_Green";
	maxSpeed = 250; // suv base 130
	terrainCoef = 1.5;
	brakeDistance = 14; // 19

	class Upgrades {
		ItemAVE[] = {"SUV_Green_DZE2",{},{{"ItemAVE",1},{"PartGeneric",4},{"ItemTankTrap",2}}};
	};
};
class SUV_Yellow_DZE1: SUV_Yellow {
	original = "SUV_Yellow";
	maxSpeed = 250; // max engine limit 125-130
	terrainCoef = 1.5;
	brakeDistance = 14; // 19

	class Upgrades {
		ItemAVE[] = {"SUV_Yellow_DZE2",{},{{"ItemAVE",1},{"PartGeneric",4},{"ItemTankTrap",2}}};
	};
};
class SUV_Red_DZE1: SUV_Red {
	original = "SUV_Red";
	maxSpeed = 250; // suv base 130
	terrainCoef = 1.5;
	brakeDistance = 14; // 19

	class Upgrades {
		ItemAVE[] = {"SUV_Red_DZE2",{},{{"ItemAVE",1},{"PartGeneric",4},{"ItemTankTrap",2}}};
	};
};
class SUV_White_DZE1: SUV_White {
	original = "SUV_White";
	maxSpeed = 250; // suv base 130
	terrainCoef = 1.5;
	brakeDistance = 14; // 19

	class Upgrades {
		ItemAVE[] = {"SUV_White_DZE2",{},{{"ItemAVE",1},{"PartGeneric",4},{"ItemTankTrap",2}}};
	};
};
class SUV_Pink_DZE1: SUV_Pink {
	original = "SUV_Pink";
	maxSpeed = 250; // suv base 130
	terrainCoef = 1.5;
	brakeDistance = 14; // 19

	class Upgrades {
		ItemAVE[] = {"SUV_Pink_DZE2",{},{{"ItemAVE",1},{"PartGeneric",4},{"ItemTankTrap",2}}};
	};
};
class SUV_Charcoal_DZE1: SUV_Charcoal {
	original = "SUV_Charcoal";
	maxSpeed = 250; // max engine limit 125-130
	terrainCoef = 1.5;
	brakeDistance = 14; // 19

	class Upgrades {
		ItemAVE[] = {"SUV_Charcoal_DZE2",{},{{"ItemAVE",1},{"PartGeneric",4},{"ItemTankTrap",2}}};
	};
};
class SUV_Orange_DZE1: SUV_Orange {
	original = "SUV_Orange";
	maxSpeed = 250; // suv base 130
	terrainCoef = 1.5;
	brakeDistance = 14; // 19

	class Upgrades {
		ItemAVE[] = {"SUV_Orange_DZE2",{},{{"ItemAVE",1},{"PartGeneric",4},{"ItemTankTrap",2}}};
	};
};
class SUV_Silver_DZE1: SUV_Silver {
	original = "SUV_Silver";
	maxSpeed = 250; // suv base 130
	terrainCoef = 1.5;
	brakeDistance = 14; // 19

	class Upgrades {
		ItemAVE[] = {"SUV_Silver_DZE2",{},{{"ItemAVE",1},{"PartGeneric",4},{"ItemTankTrap",2}}};
	};
};

// Armor 2
class SUV_TK_CIV_EP1_DZE2: SUV_TK_CIV_EP1_DZE1 {
	armor = 60; // car 20, SUV 25
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
			armor = 2;
		};
		class HitGlass2: HitGlass2 {
			armor = 2;
		};
		class HitGlass3: HitGlass3 {
			armor = 2;
		};
		class HitGlass4: HitGlass4 {
			armor = 2;
		};
	};

	class Upgrades {
		ItemLRK[] = {"SUV_TK_CIV_EP1_DZE3",{},{{"ItemLRK",1},{"PartGeneric",1},{"ItemTent",1}}};
	};
};
class SUV_Camo_DZE2: SUV_Camo_DZE1 {
	armor = 60; // car 20, SUV 25
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
			armor = 2;
		};
		class HitGlass2: HitGlass2 {
			armor = 2;
		};
		class HitGlass3: HitGlass3 {
			armor = 2;
		};
		class HitGlass4: HitGlass4 {
			armor = 2;
		};
	};

	class Upgrades {
		ItemLRK[] = {"SUV_Camo_DZE3",{},{{"ItemLRK",1},{"PartGeneric",1},{"ItemTent",1}}};
	};
};
class SUV_Blue_DZE2: SUV_Blue_DZE1 {
	armor = 60; // car 20, SUV 25
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
			armor = 2;
		};
		class HitGlass2: HitGlass2 {
			armor = 2;
		};
		class HitGlass3: HitGlass3 {
			armor = 2;
		};
		class HitGlass4: HitGlass4 {
			armor = 2;
		};
	};

	class Upgrades {
		ItemLRK[] = {"SUV_Blue_DZE3",{},{{"ItemLRK",1},{"PartGeneric",1},{"ItemTent",1}}};
	};
};
class SUV_Green_DZE2: SUV_Green_DZE1 {
	armor = 60; // car 20, SUV 25
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
			armor = 2;
		};
		class HitGlass2: HitGlass2 {
			armor = 2;
		};
		class HitGlass3: HitGlass3 {
			armor = 2;
		};
		class HitGlass4: HitGlass4 {
			armor = 2;
		};
	};

	class Upgrades {
		ItemLRK[] = {"SUV_Green_DZE3",{},{{"ItemLRK",1},{"PartGeneric",1},{"ItemTent",1}}};
	};
};
class SUV_Yellow_DZE2: SUV_Yellow_DZE1 {
	armor = 60; // car 20, SUV 25
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
			armor = 2;
		};
		class HitGlass2: HitGlass2 {
			armor = 2;
		};
		class HitGlass3: HitGlass3 {
			armor = 2;
		};
		class HitGlass4: HitGlass4 {
			armor = 2;
		};
	};

	class Upgrades {
		ItemLRK[] = {"SUV_Yellow_DZE3",{},{{"ItemLRK",1},{"PartGeneric",1},{"ItemTent",1}}};
	};
};
class SUV_Red_DZE2: SUV_Red_DZE1 {
	armor = 60; // car 20, SUV 25
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
			armor = 2;
		};
		class HitGlass2: HitGlass2 {
			armor = 2;
		};
		class HitGlass3: HitGlass3 {
			armor = 2;
		};
		class HitGlass4: HitGlass4 {
			armor = 2;
		};
	};

	class Upgrades {
		ItemLRK[] = {"SUV_Red_DZE3",{},{{"ItemLRK",1},{"PartGeneric",1},{"ItemTent",1}}};
	};
};
class SUV_White_DZE2: SUV_White_DZE1 {
	armor = 60; // car 20, SUV 25
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
			armor = 2;
		};
		class HitGlass2: HitGlass2 {
			armor = 2;
		};
		class HitGlass3: HitGlass3 {
			armor = 2;
		};
		class HitGlass4: HitGlass4 {
			armor = 2;
		};
	};

	class Upgrades {
		ItemLRK[] = {"SUV_White_DZE3",{},{{"ItemLRK",1},{"PartGeneric",1},{"ItemTent",1}}};
	};
};
class SUV_Pink_DZE2: SUV_Pink_DZE1 {
	armor = 60; // car 20, SUV 25
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
			armor = 2;
		};
		class HitGlass2: HitGlass2 {
			armor = 2;
		};
		class HitGlass3: HitGlass3 {
			armor = 2;
		};
		class HitGlass4: HitGlass4 {
			armor = 2;
		};
	};

	class Upgrades {
		ItemLRK[] = {"SUV_Pink_DZE3",{},{{"ItemLRK",1},{"PartGeneric",1},{"ItemTent",1}}};
	};
};
class SUV_Charcoal_DZE2: SUV_Charcoal_DZE1 {
	armor = 60; // car 20, SUV 25
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
			armor = 2;
		};
		class HitGlass2: HitGlass2 {
			armor = 2;
		};
		class HitGlass3: HitGlass3 {
			armor = 2;
		};
		class HitGlass4: HitGlass4 {
			armor = 2;
		};
	};

	class Upgrades {
		ItemLRK[] = {"SUV_Charcoal_DZE3",{},{{"ItemLRK",1},{"PartGeneric",1},{"ItemTent",1}}};
	};
};
class SUV_Orange_DZE2: SUV_Orange_DZE1 {
	armor = 60; // car 20, SUV 25
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
			armor = 2;
		};
		class HitGlass2: HitGlass2 {
			armor = 2;
		};
		class HitGlass3: HitGlass3 {
			armor = 2;
		};
		class HitGlass4: HitGlass4 {
			armor = 2;
		};
	};

	class Upgrades {
		ItemLRK[] = {"SUV_Orange_DZE3",{},{{"ItemLRK",1},{"PartGeneric",1},{"ItemTent",1}}};
	};
};
class SUV_Silver_DZE2: SUV_Silver_DZE1 {
	armor = 60; // car 20, SUV 25
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
			armor = 2;
		};
		class HitGlass2: HitGlass2 {
			armor = 2;
		};
		class HitGlass3: HitGlass3 {
			armor = 2;
		};
		class HitGlass4: HitGlass4 {
			armor = 2;
		};
	};

	class Upgrades {
		ItemLRK[] = {"SUV_Silver_DZE3",{},{{"ItemLRK",1},{"PartGeneric",1},{"ItemTent",1}}};
	};
};

// Cargo 3
class SUV_TK_CIV_EP1_DZE3: SUV_TK_CIV_EP1_DZE2 {
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportmaxbackpacks = 4; // car 2

	class Upgrades {
		ItemTNK[] = {"SUV_TK_CIV_EP1_DZE4",{},{{"ItemTNK",1},{"PartFueltank",2}}};
	};
};
class SUV_Camo_DZE3: SUV_Camo_DZE2 {
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportmaxbackpacks = 4; // car 2

	class Upgrades {
		ItemTNK[] = {"SUV_Camo_DZE4",{},{{"ItemTNK",1},{"PartFueltank",2}}};
	};
};
class SUV_Blue_DZE3: SUV_Blue_DZE2 {
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportmaxbackpacks = 4; // car 2

	class Upgrades {
		ItemTNK[] = {"SUV_Blue_DZE4",{},{{"ItemTNK",1},{"PartFueltank",2}}};
	};
};
class SUV_Green_DZE3: SUV_Green_DZE2 {
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportmaxbackpacks = 4; // car 2

	class Upgrades {
		ItemTNK[] = {"SUV_Green_DZE4",{},{{"ItemTNK",1},{"PartFueltank",2}}};
	};
};
class SUV_Yellow_DZE3: SUV_Yellow_DZE2 {
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportmaxbackpacks = 4; // car 2

	class Upgrades {
		ItemTNK[] = {"SUV_Yellow_DZE4",{},{{"ItemTNK",1},{"PartFueltank",2}}};
	};
};
class SUV_Red_DZE3: SUV_Red_DZE2 {
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportmaxbackpacks = 4; // car 2

	class Upgrades {
		ItemTNK[] = {"SUV_Red_DZE4",{},{{"ItemTNK",1},{"PartFueltank",2}}};
	};
};
class SUV_White_DZE3: SUV_White_DZE2 {
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportmaxbackpacks = 4; // car 2

	class Upgrades {
		ItemTNK[] = {"SUV_White_DZE4",{},{{"ItemTNK",1},{"PartFueltank",2}}};
	};
};
class SUV_Pink_DZE3: SUV_Pink_DZE2 {
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportmaxbackpacks = 4; // car 2

	class Upgrades {
		ItemTNK[] = {"SUV_Pink_DZE4",{},{{"ItemTNK",1},{"PartFueltank",2}}};
	};
};
class SUV_Charcoal_DZE3: SUV_Charcoal_DZE2 {
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportmaxbackpacks = 4; // car 2

	class Upgrades {
		ItemTNK[] = {"SUV_Charcoal_DZE4",{},{{"ItemTNK",1},{"PartFueltank",2}}};
	};
};
class SUV_Orange_DZE3: SUV_Orange_DZE2 {
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportmaxbackpacks = 4; // car 2

	class Upgrades {
		ItemTNK[] = {"SUV_Orange_DZE4",{},{{"ItemTNK",1},{"PartFueltank",2}}};
	};
};
class SUV_Silver_DZE3: SUV_Silver_DZE2 {
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportmaxbackpacks = 4; // car 2

	class Upgrades {
		ItemTNK[] = {"SUV_Silver_DZE4",{},{{"ItemTNK",1},{"PartFueltank",2}}};
	};
};

// Fuel 4
class SUV_TK_CIV_EP1_DZE4: SUV_TK_CIV_EP1_DZE3 {
	fuelCapacity = 250; // suv base 130
};
class SUV_Camo_DZE4: SUV_Camo_DZE3 {
	fuelCapacity = 250; // suv base 130
};
class SUV_Blue_DZE4: SUV_Blue_DZE3 {
	fuelCapacity = 250; // suv base 130
};
class SUV_Green_DZE4: SUV_Green_DZE3 {
	fuelCapacity = 250; // suv base 130
};
class SUV_Yellow_DZE4: SUV_Yellow_DZE3 {
	fuelCapacity = 250; // suv base 130
};
class SUV_Red_DZE4: SUV_Red_DZE3 {
	fuelCapacity = 250; // suv base 130
};
class SUV_White_DZE4: SUV_White_DZE3 {
	fuelCapacity = 250; // suv base 130
};
class SUV_Pink_DZE4: SUV_Pink_DZE3 {
	fuelCapacity = 250; // suv base 130
};
class SUV_Charcoal_DZE4: SUV_Charcoal_DZE3 {
	fuelCapacity = 250; // suv base 130
};
class SUV_Orange_DZE4: SUV_Orange_DZE3 {
	fuelCapacity = 250; // suv base 130
};
class SUV_Silver_DZE4: SUV_Silver_DZE3 {
	fuelCapacity = 250; // suv base 130
};
