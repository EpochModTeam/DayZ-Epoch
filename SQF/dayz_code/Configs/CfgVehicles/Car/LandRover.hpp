class LandRover_CZ_EP1;
class LandRover_CZ_EP1_DZE: LandRover_CZ_EP1 {
	side = 1;
	faction = "USMC";
	displayname = "$STR_VEH_NAME_MILITARY_OFFROAD_DESERT";
	vehicleClass = "DayZ Epoch Vehicles";
	crew = "";
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};
	class Turrets {};
	transportMaxWeapons = 15;
	transportMaxMagazines = 70;
    transportmaxbackpacks = 4;	
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
	supplyRadius = 1.2;
	
	class Upgrades {
		ItemORP[] = {"LandRover_CZ_EP1_DZE1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",2},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class LandRover_CZ_EP1_DZE1: LandRover_CZ_EP1_DZE {	
	displayname = "$STR_VEH_NAME_MILITARY_OFFROAD_DESERT+";
	original = "LandRover_CZ_EP1_DZE";
	maxspeed = 160;
	terrainCoef = 1.5;
	
	class Upgrades {
		ItemAVE[] = {"LandRover_CZ_EP1_DZE2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"equip_metal_sheet",6},{"ItemScrews",4}}};
	};	
};

class LandRover_CZ_EP1_DZE2: LandRover_CZ_EP1_DZE1 {
	displayname = "$STR_VEH_NAME_MILITARY_OFFROAD_DESERT++";
	armor = 60;
	damageResistance = 0.02099;
	class HitPoints: HitPoints {
		class HitLFWheel: HitLFWheel {
			armor = 0.65;
		};
		class HitLBWheel: HitLBWheel {
			armor = 0.65;
		};
		class HitRFWheel: HitRFWheel {
			armor = 0.65;
		};
		class HitRBWheel: HitRBWheel {
			armor = 0.65;
		};
		class HitFuel: HitFuel {
			armor = 1.5;
		};
		class HitEngine: HitEngine {
			armor = 2.5;
		};
		class HitGlass1: HitGlass1 {
			armor = 0.25;
		};
	};

	class Upgrades {
		ItemLRK[] = {"LandRover_CZ_EP1_DZE3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class LandRover_CZ_EP1_DZE3: LandRover_CZ_EP1_DZE2 {
	displayname = "$STR_VEH_NAME_MILITARY_OFFROAD_DESERT+++";
	transportMaxWeapons = 30;
	transportMaxMagazines = 140;
    transportmaxbackpacks = 8;

	class Upgrades {
		ItemTNK[] = {"LandRover_CZ_EP1_DZE4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
	};
};

class LandRover_CZ_EP1_DZE4: LandRover_CZ_EP1_DZE3 {
	displayname = "$STR_VEH_NAME_MILITARY_OFFROAD_DESERT++++";
	fuelCapacity = 250;
};

class LandRover_TK_CIV_EP1_DZE: LandRover_CZ_EP1_DZE {
	displayname = "$STR_VEH_NAME_MILITARY_OFFROAD_RED";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"\ca\wheeled_E\LR\Data\LR_Base_red_CO.paa"};
	
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
	
	class Upgrades {
		ItemORP[] = {"LandRover_TK_CIV_EP1_DZE1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",2},{"PartWheel",4},{"ItemScrews",2}}};
	};	
};

class LandRover_TK_CIV_EP1_DZE1: LandRover_TK_CIV_EP1_DZE {
	displayname = "$STR_VEH_NAME_MILITARY_OFFROAD_RED+";
	original = "LandRover_TK_CIV_EP1_DZE";
	maxspeed = 160;
	terrainCoef = 1.5;

	class Upgrades {
		ItemAVE[] = {"LandRover_TK_CIV_EP1_DZE2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"equip_metal_sheet",6},{"ItemScrews",4}}};
	};	
};

class LandRover_TK_CIV_EP1_DZE2: LandRover_TK_CIV_EP1_DZE1 {
	displayname = "$STR_VEH_NAME_MILITARY_OFFROAD_RED++";
	armor = 60;
	damageResistance = 0.02099;
	class HitPoints: HitPoints {
		class HitLFWheel: HitLFWheel {
			armor = 0.65;
		};
		class HitLBWheel: HitLBWheel {
			armor = 0.65;
		};
		class HitRFWheel: HitRFWheel {
			armor = 0.65;
		};
		class HitRBWheel: HitRBWheel {
			armor = 0.65;
		};
		class HitFuel: HitFuel {
			armor = 1.5;
		};
		class HitEngine: HitEngine {
			armor = 2.5;
		};
		class HitGlass1: HitGlass1 {
			armor = 0.25;
		};
	};

	class Upgrades {
		ItemLRK[] = {"LandRover_TK_CIV_EP1_DZE3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class LandRover_TK_CIV_EP1_DZE3: LandRover_TK_CIV_EP1_DZE2 {
	displayname = "$STR_VEH_NAME_MILITARY_OFFROAD_RED+++";
	transportMaxWeapons = 30;
	transportMaxMagazines = 140;
    transportmaxbackpacks = 8;

	class Upgrades {
		ItemTNK[] = {"LandRover_TK_CIV_EP1_DZE4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
	};
};

class LandRover_TK_CIV_EP1_DZE4: LandRover_TK_CIV_EP1_DZE3 {
	displayname = "$STR_VEH_NAME_MILITARY_OFFROAD_RED++++";
	fuelCapacity = 250;
};

class LandRover_ACR_DZE: LandRover_CZ_EP1_DZE {
	displayname = "$STR_VEH_NAME_MILITARY_OFFROAD_WOODLAND";
	model = "\Ca\Wheeled_ACR\LR\LR_ACR.p3d";
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
	
	class Upgrades {
		ItemORP[] = {"LandRover_ACR_DZE1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",2},{"PartWheel",4},{"ItemScrews",2}}};
	};	
};

class LandRover_ACR_DZE1: LandRover_ACR_DZE {
	displayname = "$STR_VEH_NAME_MILITARY_OFFROAD_WOODLAND+";
	original = "LandRover_ACR_DZE";
	maxspeed = 160;
	terrainCoef = 1.5;	

	class Upgrades {
		ItemAVE[] = {"LandRover_ACR_DZE2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"equip_metal_sheet",6},{"ItemScrews",4}}};
	};	
};

class LandRover_ACR_DZE2: LandRover_ACR_DZE1 {
	displayname = "$STR_VEH_NAME_MILITARY_OFFROAD_WOODLAND++";
	armor = 60;
	damageResistance = 0.02099;
	class HitPoints: HitPoints {
		class HitLFWheel: HitLFWheel {
			armor = 0.65;
		};
		class HitLBWheel: HitLBWheel {
			armor = 0.65;
		};
		class HitRFWheel: HitRFWheel {
			armor = 0.65;
		};
		class HitRBWheel: HitRBWheel {
			armor = 0.65;
		};
		class HitFuel: HitFuel {
			armor = 1.5;
		};
		class HitEngine: HitEngine {
			armor = 2.5;
		};
		class HitGlass1: HitGlass1 {
			armor = 0.25;
		};
	};

	class Upgrades {
		ItemLRK[] = {"LandRover_ACR_DZE3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class LandRover_ACR_DZE3: LandRover_ACR_DZE2 {
	displayname = "$STR_VEH_NAME_MILITARY_OFFROAD_WOODLAND+++";
	transportMaxWeapons = 30;
	transportMaxMagazines = 140;
    transportmaxbackpacks = 8;

	class Upgrades {
		ItemTNK[] = {"LandRover_ACR_DZE4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
	};
};

class LandRover_ACR_DZE4: LandRover_ACR_DZE3 {
	displayname = "$STR_VEH_NAME_MILITARY_OFFROAD_WOODLAND++++";
	fuelCapacity = 250;
};

class LandRover_Ambulance_ACR_DZE: LandRover_ACR_DZE {
	displayname = "$STR_VEH_NAME_MILITARY_OFFROAD_MEDIC_WOODLAND";
	model = "\Ca\Wheeled_ACR\LR\LR_AMB_ACR";
	hiddenSelections[] = {"camo2"};
	hiddenSelectionsTextures[] = {"\ca\wheeled_acr\lr\data\lr_amb_ext_co.paa"};
	attendant = 0;
	
	class Damage
	{
		tex[] = {};
		mat[] = {"ca\wheeled_acr\lr\data\lr_amb_ext.rvmat","ca\wheeled_acr\lr\data\lr_amb_ext_damage.rvmat","ca\wheeled_acr\lr\data\lr_amb_ext_destruct.rvmat","ca\wheeled_E\LR\Data\LR_base.rvmat","ca\wheeled_E\LR\Data\LR_base_damage.rvmat","ca\wheeled_E\LR\Data\LR_base_destruct.rvmat","ca\wheeled_E\LR\Data\LR_glass.rvmat","ca\wheeled_E\LR\Data\LR_glass_damage.rvmat","ca\wheeled_E\LR\Data\LR_glass_destruct.rvmat","ca\wheeled_E\LR\Data\LR_Special.rvmat","ca\wheeled_E\LR\Data\LR_Special_damage.rvmat","ca\wheeled_E\LR\Data\LR_Special_destruct.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default_destruct.rvmat"};
	};	

	class Upgrades {
		ItemORP[] = {"LandRover_Ambulance_ACR_DZE1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",2},{"PartWheel",4},{"ItemScrews",2}}};
	};		
};

class LandRover_Ambulance_ACR_DZE1: LandRover_Ambulance_ACR_DZE {
	displayname = "$STR_VEH_NAME_MILITARY_OFFROAD_MEDIC_WOODLAND+";
	original = "LandRover_Ambulance_ACR_DZE";
	maxspeed = 160;
	terrainCoef = 1.5;	

	class Upgrades {
		ItemAVE[] = {"LandRover_Ambulance_ACR_DZE2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"equip_metal_sheet",6},{"ItemScrews",4}}};
	};	
};

class LandRover_Ambulance_ACR_DZE2: LandRover_Ambulance_ACR_DZE1 {
	displayname = "$STR_VEH_NAME_MILITARY_OFFROAD_MEDIC_WOODLAND++";
	armor = 60;
	damageResistance = 0.02099;
	class HitPoints: HitPoints {
		class HitLFWheel: HitLFWheel {
			armor = 0.65;
		};
		class HitLBWheel: HitLBWheel {
			armor = 0.65;
		};
		class HitRFWheel: HitRFWheel {
			armor = 0.65;
		};
		class HitRBWheel: HitRBWheel {
			armor = 0.65;
		};
		class HitFuel: HitFuel {
			armor = 1.5;
		};
		class HitEngine: HitEngine {
			armor = 2.5;
		};
		class HitGlass1: HitGlass1 {
			armor = 0.25;
		};
	};

	class Upgrades {
		ItemLRK[] = {"LandRover_Ambulance_ACR_DZE3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class LandRover_Ambulance_ACR_DZE3: LandRover_Ambulance_ACR_DZE2 {
	displayname = "$STR_VEH_NAME_MILITARY_OFFROAD_MEDIC_WOODLAND+++";
	transportMaxWeapons = 30;
	transportMaxMagazines = 140;
    transportmaxbackpacks = 8;

	class Upgrades {
		ItemTNK[] = {"LandRover_Ambulance_ACR_DZE4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
	};
};

class LandRover_Ambulance_ACR_DZE4: LandRover_Ambulance_ACR_DZE3 {
	displayname = "$STR_VEH_NAME_MILITARY_OFFROAD_MEDIC_WOODLAND++++";
	fuelCapacity = 250;
};

class LandRover_Ambulance_Des_ACR_DZE: LandRover_Ambulance_ACR_DZE {
	displayname = "$STR_VEH_NAME_MILITARY_OFFROAD_MEDIC_DESERT";
	hiddenSelectionsTextures[] = {"\ca\wheeled_acr\lr\data\lr_amb_ext_desert_co.paa"};
	
	class Upgrades {
		ItemORP[] = {"LandRover_Ambulance_Des_ACR_DZE1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",2},{"PartWheel",4},{"ItemScrews",2}}};
	};	
};

class LandRover_Ambulance_Des_ACR_DZE1: LandRover_Ambulance_Des_ACR_DZE {
	displayname = "$STR_VEH_NAME_MILITARY_OFFROAD_MEDIC_DESERT+";
	original = "LandRover_Ambulance_Des_ACR_DZE";
	maxspeed = 160;
	terrainCoef = 1.5;	

	class Upgrades {
		ItemAVE[] = {"LandRover_Ambulance_Des_ACR_DZE2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"equip_metal_sheet",6},{"ItemScrews",4}}};
	};	
};

class LandRover_Ambulance_Des_ACR_DZE2: LandRover_Ambulance_Des_ACR_DZE1 {
	displayname = "$STR_VEH_NAME_MILITARY_OFFROAD_MEDIC_DESERT++";
	armor = 60;
	damageResistance = 0.02099;
	class HitPoints: HitPoints {
		class HitLFWheel: HitLFWheel {
			armor = 0.65;
		};
		class HitLBWheel: HitLBWheel {
			armor = 0.65;
		};
		class HitRFWheel: HitRFWheel {
			armor = 0.65;
		};
		class HitRBWheel: HitRBWheel {
			armor = 0.65;
		};
		class HitFuel: HitFuel {
			armor = 1.5;
		};
		class HitEngine: HitEngine {
			armor = 2.5;
		};
		class HitGlass1: HitGlass1 {
			armor = 0.25;
		};
	};

	class Upgrades {
		ItemLRK[] = {"LandRover_Ambulance_Des_ACR_DZE3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class LandRover_Ambulance_Des_ACR_DZE3: LandRover_Ambulance_Des_ACR_DZE2 {
	displayname = "$STR_VEH_NAME_MILITARY_OFFROAD_MEDIC_DESERT+++";
	transportMaxWeapons = 30;
	transportMaxMagazines = 140;
    transportmaxbackpacks = 8;

	class Upgrades {
		ItemTNK[] = {"LandRover_Ambulance_Des_ACR_DZE4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
	};
};

class LandRover_Ambulance_Des_ACR_DZE4: LandRover_Ambulance_Des_ACR_DZE3 {
	displayname = "$STR_VEH_NAME_MILITARY_OFFROAD_MEDIC_DESERT++++";
	fuelCapacity = 250;
};

class BAF_Offroad_D_DZE: LandRover_CZ_EP1_DZE {
	displayname = "$STR_VEH_NAME_MILITARY_OFFROAD_DESERT";
	model = "ca\wheeled_d_baf\LR_covered_soft_BAF";
	transportMaxWeapons = 15;
	transportMaxMagazines = 70;
    transportmaxbackpacks = 4;	
	
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
	
	class Damage
	{
		tex[] = {};
		mat[] = {"ca\wheeled_d_baf\Data\LR_base_baf.rvmat","ca\wheeled_d_baf\Data\LR_base_baf_damage.rvmat","ca\wheeled_d_baf\Data\LR_base_baf_destruct.rvmat","ca\wheeled_d_baf\Data\LR_glass_baf.rvmat","ca\wheeled_d_baf\Data\LR_glass_baf_damage.rvmat","ca\wheeled_d_baf\Data\LR_glass_baf_destruct.rvmat","ca\wheeled_d_baf\Data\LR_Special_baf.rvmat","ca\wheeled_d_baf\Data\LR_Special_baf_damage.rvmat","ca\wheeled_d_baf\Data\LR_Special_baf_destruct.rvmat"};
	};
	class Upgrades {
		ItemORP[] = {"BAF_Offroad_D_DZE1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",2},{"PartWheel",4},{"ItemScrews",2}}};
	};		
};

class BAF_Offroad_D_DZE1: BAF_Offroad_D_DZE {
	displayname = "$STR_VEH_NAME_MILITARY_OFFROAD_DESERT+";	
	original = "BAF_Offroad_D_DZE";
	maxspeed = 160;
	terrainCoef = 1.5;	

	class Upgrades {
		ItemAVE[] = {"BAF_Offroad_D_DZE2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"equip_metal_sheet",6},{"ItemScrews",4}}};
	};	
};

class BAF_Offroad_D_DZE2: BAF_Offroad_D_DZE1 {
	displayname = "$STR_VEH_NAME_MILITARY_OFFROAD_DESERT++";
	armor = 60;
	damageResistance = 0.02099;
	class HitPoints: HitPoints {
		class HitLFWheel: HitLFWheel {
			armor = 0.65;
		};
		class HitLBWheel: HitLBWheel {
			armor = 0.65;
		};
		class HitRFWheel: HitRFWheel {
			armor = 0.65;
		};
		class HitRBWheel: HitRBWheel {
			armor = 0.65;
		};
		class HitFuel: HitFuel {
			armor = 1.5;
		};
		class HitEngine: HitEngine {
			armor = 2.5;
		};
		class HitGlass1: HitGlass1 {
			armor = 0.25;
		};
	};

	class Upgrades {
		ItemLRK[] = {"BAF_Offroad_D_DZE3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class BAF_Offroad_D_DZE3: BAF_Offroad_D_DZE2 {
	displayname = "$STR_VEH_NAME_MILITARY_OFFROAD_DESERT+++";
	transportMaxWeapons = 30;
	transportMaxMagazines = 140;
    transportmaxbackpacks = 8;

	class Upgrades {
		ItemTNK[] = {"BAF_Offroad_D_DZE4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
	};
};

class BAF_Offroad_D_DZE4: BAF_Offroad_D_DZE3 {
	displayname = "$STR_VEH_NAME_MILITARY_OFFROAD_DESERT++++";
	fuelCapacity = 250;
};

class BAF_Offroad_W_DZE: BAF_Offroad_D_DZE {
	displayname = "$STR_VEH_NAME_MILITARY_OFFROAD_WOODLAND";	
	model = "ca\wheeled_w_baf\LR_covered_soft_W_BAF";
	
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
	
	class Upgrades {
		ItemORP[] = {"BAF_Offroad_W_DZE1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",2},{"PartWheel",4},{"ItemScrews",2}}};
	};		
};

class BAF_Offroad_W_DZE1: BAF_Offroad_W_DZE {
	displayname = "$STR_VEH_NAME_MILITARY_OFFROAD_WOODLAND+";
	original = "BAF_Offroad_W_DZE";
	maxspeed = 160;
	terrainCoef = 1.5;

	class Upgrades {
		ItemAVE[] = {"BAF_Offroad_W_DZE2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"equip_metal_sheet",6},{"ItemScrews",4}}};
	};	
};

class BAF_Offroad_W_DZE2: BAF_Offroad_W_DZE1 {
	displayname = "$STR_VEH_NAME_MILITARY_OFFROAD_WOODLAND++";
	armor = 60;
	damageResistance = 0.02099;
	class HitPoints: HitPoints {
		class HitLFWheel: HitLFWheel {
			armor = 0.65;
		};
		class HitLBWheel: HitLBWheel {
			armor = 0.65;
		};
		class HitRFWheel: HitRFWheel {
			armor = 0.65;
		};
		class HitRBWheel: HitRBWheel {
			armor = 0.65;
		};
		class HitFuel: HitFuel {
			armor = 1.5;
		};
		class HitEngine: HitEngine {
			armor = 2.5;
		};
		class HitGlass1: HitGlass1 {
			armor = 0.25;
		};
	};

	class Upgrades {
		ItemLRK[] = {"BAF_Offroad_W_DZE3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class BAF_Offroad_W_DZE3: BAF_Offroad_W_DZE2 {
	displayname = "$STR_VEH_NAME_MILITARY_OFFROAD_WOODLAND+++";
	transportMaxWeapons = 30;
	transportMaxMagazines = 140;
    transportmaxbackpacks = 8;

	class Upgrades {
		ItemTNK[] = {"BAF_Offroad_W_DZE4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
	};
};

class BAF_Offroad_W_DZE4: BAF_Offroad_W_DZE3 {
	displayname = "$STR_VEH_NAME_MILITARY_OFFROAD_WOODLAND++++";
	fuelCapacity = 250;
};

class LandRover_Special_CZ_EP1;
class LandRover_Special_CZ_EP1_DZ: LandRover_Special_CZ_EP1
{
	side = 1;
	faction = "USMC";
	displayname = "$STR_VEH_NAME_MILITARY_OFFROAD_SPECIAL";
	vehicleClass = "DayZ Epoch Vehicles";
	class Turrets;
	class MainTurret;
	class AGS30_Turret;
	class PK_Turret;
	class ViewOptics;
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};
	transportMaxWeapons = 15;
	transportMaxMagazines = 70;
    transportmaxbackpacks = 4;	
	class HitPoints;
	class HitLFWheel;
	class HitLBWheel;
	class HitRFWheel;
	class HitRBWheel;
	class HitFuel;
	class HitEngine;
	class HitGlass1;
	supplyRadius = 1.2;	
};

class LandRover_Special_CZ_EP1_DZE: LandRover_Special_CZ_EP1_DZ
{
	class Turrets: Turrets
	{
		class AGS30_Turret: MainTurret
		{
			discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300};
			discreteDistanceInitIndex = 2;
			turretInfoType = "RscWeaponZeroing";
			body = "mainTurret";
			gun = "mainGun";
			gunnerForceOptics = 0;
			gunnerOutOpticsShowCursor = 0;
			weapons[] = {"AGS30"};
			magazines[] = {};
			soundServo[] = {"\ca\sounds\vehicles\servos\turret-1",0.0316228,1,15};
			gunnerAction = "LR_Gunner01_EP1";
			gunnerInAction = "LR_Gunner01_EP1";
			ejectDeadGunner = 1;
			gunnerOpticsModel = "\ca\weapons\optika_AGS30";
			stabilizedInAxes = "StabilizedInAxesNone";
			minElev = -18;
			class ViewOptics : ViewOptics
			{
				initFov = 0.1;
				maxFov = 0.1;
				minFov = 0.1;
			};			
		};
		class PK_Turret: MainTurret
		{
			discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500};
			discreteDistanceInitIndex = 2;
			gunnerName = "$STR_POSITION_COMMANDER";
			primaryGunner = 0;
			primaryObserver = 1;
			commanding = 2;
			body = "mainTurret_2";
			gun = "mainGun_2";
			animationSourceBody = "mainTurret_2";
			animationSourceGun = "mainGun_2";
			proxyIndex = 2;
			gunBeg = "usti hlavne_2";
			gunEnd = "konec hlavne_2";
			memoryPointGunnerOptics = "gunnerview_2";
			minElev = -18;
			maxElev = 40;
			minTurn = -45;
			maxTurn = 45;
			initTurn = 0;
			gunnerOpticsModel = "\ca\Weapons\optika_empty";
			gunnerForceOptics = 0;
			turretInfoType = "RscWeaponZeroing";
			weapons[] = {"PKTBC"};
			magazines[] = {};
			soundServo[] = {};
			gunnerAction = "LR_Gunner02_EP1";
			gunnerInAction = "LR_Gunner02_EP1";
			ejectDeadGunner = 1;
			stabilizedInAxes = "StabilizedInAxesNone";
			memoryPointsGetInGunner = "pos codriver";
			memoryPointsGetInGunnerDir = "pos codriver dir";
		};
	};
	class Upgrades {
		ItemORP[] = {"LandRover_Special_CZ_EP1_DZE1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",2},{"PartWheel",4},{"ItemScrews",2}}};
	};		
};

class LandRover_Special_CZ_EP1_DZE1: LandRover_Special_CZ_EP1_DZE {	
	displayname = "$STR_VEH_NAME_MILITARY_OFFROAD_SPECIAL+";
	original = "LandRover_Special_CZ_EP1_DZE";
	maxspeed = 160;
	terrainCoef = 1.5;

	class Upgrades {
		ItemAVE[] = {"LandRover_Special_CZ_EP1_DZE2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"equip_metal_sheet",6},{"ItemScrews",4}}};
	};	
};

class LandRover_Special_CZ_EP1_DZE2: LandRover_Special_CZ_EP1_DZE1 {
	displayname = "$STR_VEH_NAME_MILITARY_OFFROAD_SPECIAL++";
	armor = 60;
	damageResistance = 0.02099;
	class HitPoints: HitPoints {
		class HitLFWheel: HitLFWheel {
			armor = 0.65;
		};
		class HitLBWheel: HitLBWheel {
			armor = 0.65;
		};
		class HitRFWheel: HitRFWheel {
			armor = 0.65;
		};
		class HitRBWheel: HitRBWheel {
			armor = 0.65;
		};
		class HitFuel: HitFuel {
			armor = 1.5;
		};
		class HitEngine: HitEngine {
			armor = 2.5;
		};
		class HitGlass1: HitGlass1 {
			armor = 0.25;
		};
	};

	class Upgrades {
		ItemLRK[] = {"LandRover_Special_CZ_EP1_DZE3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class LandRover_Special_CZ_EP1_DZE3: LandRover_Special_CZ_EP1_DZE2 {
	displayname = "$STR_VEH_NAME_MILITARY_OFFROAD_SPECIAL+++";
	transportMaxWeapons = 30;
	transportMaxMagazines = 140;
    transportmaxbackpacks = 8;

	class Upgrades {
		ItemTNK[] = {"LandRover_Special_CZ_EP1_DZE4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
	};
};

class LandRover_Special_CZ_EP1_DZE4: LandRover_Special_CZ_EP1_DZE3 {
	displayname = "$STR_VEH_NAME_MILITARY_OFFROAD_SPECIAL++++";
	fuelCapacity = 250;
};

class LandRover_MG_TK_EP1;
class LandRover_MG_TK_EP1_DZ: LandRover_MG_TK_EP1
{
	side = 1;
	faction = "USMC";
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};	
	displayname = "$STR_VEH_NAME_MILITARY_OFFROAD_M2";
	vehicleClass = "DayZ Epoch Vehicles";
	class Turrets;
	class MainTurret;
	transportMaxWeapons = 15;
	transportMaxMagazines = 70;
    transportmaxbackpacks = 4;	
	class HitPoints;
	class HitLFWheel;
	class HitLBWheel;
	class HitRFWheel;
	class HitRBWheel;
	class HitFuel;
	class HitEngine;
	class HitGlass1;	
	supplyRadius = 1.2;
};

class LandRover_MG_TK_EP1_DZE: LandRover_MG_TK_EP1_DZ
{
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			magazines[] = {};
		};
	};
	class Upgrades {
		ItemORP[] = {"LandRover_MG_TK_EP1_DZE1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",2},{"PartWheel",4},{"ItemScrews",2}}};
	};	
};

class LandRover_MG_TK_EP1_DZE1: LandRover_MG_TK_EP1_DZE {
	displayname = "$STR_VEH_NAME_MILITARY_OFFROAD_M2+";
	original = "LandRover_MG_TK_EP1_DZE";
	maxspeed = 160;
	terrainCoef = 1.5;

	class Upgrades {
		ItemAVE[] = {"LandRover_MG_TK_EP1_DZE2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"equip_metal_sheet",6},{"ItemScrews",4}}};
	};	
};

class LandRover_MG_TK_EP1_DZE2: LandRover_MG_TK_EP1_DZE1 {
	displayname = "$STR_VEH_NAME_MILITARY_OFFROAD_M2++";
	armor = 60;
	damageResistance = 0.02099;
	class HitPoints: HitPoints {
		class HitLFWheel: HitLFWheel {
			armor = 0.65;
		};
		class HitLBWheel: HitLBWheel {
			armor = 0.65;
		};
		class HitRFWheel: HitRFWheel {
			armor = 0.65;
		};
		class HitRBWheel: HitRBWheel {
			armor = 0.65;
		};
		class HitFuel: HitFuel {
			armor = 1.5;
		};
		class HitEngine: HitEngine {
			armor = 2.5;
		};
		class HitGlass1: HitGlass1 {
			armor = 0.25;
		};
	};

	class Upgrades {
		ItemLRK[] = {"LandRover_MG_TK_EP1_DZE3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class LandRover_MG_TK_EP1_DZE3: LandRover_MG_TK_EP1_DZE2 {
	displayname = "$STR_VEH_NAME_MILITARY_OFFROAD_M2+++";
	transportMaxWeapons = 30;
	transportMaxMagazines = 140;
    transportmaxbackpacks = 8;

	class Upgrades {
		ItemTNK[] = {"LandRover_MG_TK_EP1_DZE4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
	};
};

class LandRover_MG_TK_EP1_DZE4: LandRover_MG_TK_EP1_DZE3 {
	displayname = "$STR_VEH_NAME_MILITARY_OFFROAD_M2++++";
	fuelCapacity = 250;
};

class LandRover_SPG9_TK_EP1;
class LandRover_SPG9_TK_EP1_DZ: LandRover_SPG9_TK_EP1
{
	side = 1;
	faction = "USMC";
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};	
	displayname = "$STR_VEH_NAME_MILITARY_OFFROAD_SPG9";
	vehicleClass = "DayZ Epoch Vehicles";
	class Turrets;
	class MainTurret;
	transportMaxWeapons = 15;
	transportMaxMagazines = 70;
    transportmaxbackpacks = 4;
	class HitPoints;
	class HitLFWheel;
	class HitLBWheel;
	class HitRFWheel;
	class HitRBWheel;
	class HitFuel;
	class HitEngine;
	class HitGlass1;
	supplyRadius = 1.2;
};

class LandRover_SPG9_TK_EP1_DZE: LandRover_SPG9_TK_EP1_DZ
{
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			magazines[] = {};
		};
	};
	class Upgrades {
		ItemORP[] = {"LandRover_SPG9_TK_EP1_DZE1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",2},{"PartWheel",4},{"ItemScrews",2}}};
	};	
};

class LandRover_SPG9_TK_EP1_DZE1: LandRover_SPG9_TK_EP1_DZE {
	displayname = "$STR_VEH_NAME_MILITARY_OFFROAD_SPG9+";
	original = "LandRover_SPG9_TK_EP1_DZE";
	maxspeed = 160;
	terrainCoef = 1.5;

	class Upgrades {
		ItemAVE[] = {"LandRover_SPG9_TK_EP1_DZE2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"equip_metal_sheet",6},{"ItemScrews",4}}};
	};	
};

class LandRover_SPG9_TK_EP1_DZE2: LandRover_SPG9_TK_EP1_DZE1 {
	displayname = "$STR_VEH_NAME_MILITARY_OFFROAD_SPG9++";
	armor = 60;
	damageResistance = 0.02099;
	class HitPoints: HitPoints {
		class HitLFWheel: HitLFWheel {
			armor = 0.65;
		};
		class HitLBWheel: HitLBWheel {
			armor = 0.65;
		};
		class HitRFWheel: HitRFWheel {
			armor = 0.65;
		};
		class HitRBWheel: HitRBWheel {
			armor = 0.65;
		};
		class HitFuel: HitFuel {
			armor = 1.5;
		};
		class HitEngine: HitEngine {
			armor = 2.5;
		};
		class HitGlass1: HitGlass1 {
			armor = 0.25;
		};
	};

	class Upgrades {
		ItemLRK[] = {"LandRover_SPG9_TK_EP1_DZE3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class LandRover_SPG9_TK_EP1_DZE3: LandRover_SPG9_TK_EP1_DZE2 {
	displayname = "$STR_VEH_NAME_MILITARY_OFFROAD_SPG9+++";
	transportMaxWeapons = 30;
	transportMaxMagazines = 140;
    transportmaxbackpacks = 8;

	class Upgrades {
		ItemTNK[] = {"LandRover_SPG9_TK_EP1_DZE4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
	};
};

class LandRover_SPG9_TK_EP1_DZE4: LandRover_SPG9_TK_EP1_DZE3 {
	displayname = "$STR_VEH_NAME_MILITARY_OFFROAD_SPG9++++";
	fuelCapacity = 250;
};