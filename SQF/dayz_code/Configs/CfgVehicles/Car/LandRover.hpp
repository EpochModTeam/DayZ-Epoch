class LandRover_CZ_EP1;
class LandRover_CZ_EP1_DZE: LandRover_CZ_EP1 {
	scope = public;
	displayname = $STR_VEH_NAME_MILITARY_OFFROAD_DESERT;
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
	
	class Upgrades {
		ItemORP[] = {"LandRover_CZ_EP1_DZE1",{},{{"ItemORP",1},{"PartEngine",2}}};
	};
};

class LandRover_CZ_EP1_DZE1: LandRover_CZ_EP1_DZE {	
	original = "LandRover_CZ_EP1_DZE";
	maxspeed = 160;
	terrainCoef = 1.5;
	
	class Upgrades {
		ItemAVE[] = {"LandRover_CZ_EP1_DZE2",{},{{"ItemAVE",1},{"PartGeneric",4},{"ItemTankTrap",2}}};
	};	
};

class LandRover_CZ_EP1_DZE2: LandRover_CZ_EP1_DZE1 {
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
		class HitFuel {
			armor = 1.5;
			material = -1;
			name = "palivo";
			visual = "";
			passThrough = 1;
		};
		class HitEngine {
			armor = 2.5;
			material = -1;
			name = "motor";
			visual = "";
			passThrough = 1;
		};
		class HitGlass1: HitGlass1 {
			armor = 0.25;
		};
		class HitGlass2: HitGlass2 {
			armor = 0.2;
		};
		class HitGlass3: HitGlass3 {
			armor = 0.2;
		};
	};

	class Upgrades {
		ItemLRK[] = {"LandRover_CZ_EP1_DZE3",{},{{"ItemLRK",1},{"PartGeneric",1},{"ItemTent",1}}};
	};
};

class LandRover_CZ_EP1_DZE3: LandRover_CZ_EP1_DZE2 {
	transportMaxWeapons = 30;
	transportMaxMagazines = 140;
    transportmaxbackpacks = 8;

	class Upgrades {
		ItemTNK[] = {"LandRover_CZ_EP1_DZE4",{},{{"ItemTNK",1},{"PartFueltank",2}}};
	};
};

class LandRover_CZ_EP1_DZE4: LandRover_CZ_EP1_DZE3 {
	fuelCapacity = 250;
};

class LandRover_TK_CIV_EP1_DZE: LandRover_CZ_EP1_DZE {
	displayname = $STR_VEH_NAME_MILITARY_OFFROAD_RED;
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
		ItemORP[] = {"LandRover_TK_CIV_EP1_DZE1",{},{{"ItemORP",1},{"PartEngine",2}}};
	};	
};

class LandRover_TK_CIV_EP1_DZE1: LandRover_TK_CIV_EP1_DZE {
	original = "LandRover_TK_CIV_EP1_DZE";
	maxspeed = 160;
	terrainCoef = 1.5;

	class Upgrades {
		ItemAVE[] = {"LandRover_TK_CIV_EP1_DZE2",{},{{"ItemAVE",1},{"PartGeneric",4},{"ItemTankTrap",2}}};
	};	
};

class LandRover_TK_CIV_EP1_DZE2: LandRover_TK_CIV_EP1_DZE1 {
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
		class HitFuel {
			armor = 1.5;
			material = -1;
			name = "palivo";
			visual = "";
			passThrough = 1;
		};
		class HitEngine {
			armor = 2.5;
			material = -1;
			name = "motor";
			visual = "";
			passThrough = 1;
		};
		class HitGlass1: HitGlass1 {
			armor = 0.25;
		};
		class HitGlass2: HitGlass2 {
			armor = 0.2;
		};
		class HitGlass3: HitGlass3 {
			armor = 0.2;
		};
	};

	class Upgrades {
		ItemLRK[] = {"LandRover_TK_CIV_EP1_DZE3",{},{{"ItemLRK",1},{"PartGeneric",1},{"ItemTent",1}}};
	};
};

class LandRover_TK_CIV_EP1_DZE3: LandRover_TK_CIV_EP1_DZE2 {
	transportMaxWeapons = 30;
	transportMaxMagazines = 140;
    transportmaxbackpacks = 8;

	class Upgrades {
		ItemTNK[] = {"LandRover_TK_CIV_EP1_DZE4",{},{{"ItemTNK",1},{"PartFueltank",2}}};
	};
};

class LandRover_TK_CIV_EP1_DZE4: LandRover_TK_CIV_EP1_DZE3 {
	fuelCapacity = 250;
};

class LandRover_ACR_DZE: LandRover_CZ_EP1_DZE {
	displayname = $STR_VEH_NAME_MILITARY_OFFROAD_WOODLAND;
	model = "\Ca\Wheeled_ACR\LR\LR_ACR.p3d";
	class Upgrades {
		ItemORP[] = {"LandRover_ACR_DZE1",{},{{"ItemORP",1},{"PartEngine",2}}};
	};
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
};

class LandRover_ACR_DZE1: LandRover_ACR_DZE {
	original = "LandRover_ACR_DZE";
	maxspeed = 160;
	terrainCoef = 1.5;	

	class Upgrades {
		ItemAVE[] = {"LandRover_ACR_DZE2",{},{{"ItemAVE",1},{"PartGeneric",4},{"ItemTankTrap",2}}};
	};	
};

class LandRover_ACR_DZE2: LandRover_ACR_DZE1 {
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
		class HitFuel {
			armor = 1.5;
			material = -1;
			name = "palivo";
			visual = "";
			passThrough = 1;
		};
		class HitEngine {
			armor = 2.5;
			material = -1;
			name = "motor";
			visual = "";
			passThrough = 1;
		};
		class HitGlass1: HitGlass1 {
			armor = 0.25;
		};
		class HitGlass2: HitGlass2 {
			armor = 0.2;
		};
		class HitGlass3: HitGlass3 {
			armor = 0.2;
		};
	};

	class Upgrades {
		ItemLRK[] = {"LandRover_ACR_DZE3",{},{{"ItemLRK",1},{"PartGeneric",1},{"ItemTent",1}}};
	};
};

class LandRover_ACR_DZE3: LandRover_ACR_DZE2 {
	transportMaxWeapons = 30;
	transportMaxMagazines = 140;
    transportmaxbackpacks = 8;

	class Upgrades {
		ItemTNK[] = {"LandRover_ACR_DZE4",{},{{"ItemTNK",1},{"PartFueltank",2}}};
	};
};

class LandRover_ACR_DZE4: LandRover_ACR_DZE3 {
	fuelCapacity = 250;
};

class LandRover_Ambulance_ACR_DZE: LandRover_ACR_DZE {
	displayname = $STR_VEH_NAME_MILITARY_OFFROAD_MEDIC_WOODLAND;
	model = "\Ca\Wheeled_ACR\LR\LR_AMB_ACR";
	hiddenSelections[] = {"camo2"};
	hiddenSelectionsTextures[] = {"\ca\wheeled_acr\lr\data\lr_amb_ext_co.paa"};
	attendant = 0;
	
	class Damage
	{
		tex[] = {};
		mat[] = {"ca\wheeled_acr\lr\data\lr_amb_ext.rvmat","ca\wheeled_acr\lr\data\lr_amb_ext_damage.rvmat","ca\wheeled_acr\lr\data\lr_amb_ext_destruct.rvmat","ca\wheeled_E\LR\Data\LR_base.rvmat","ca\wheeled_E\LR\Data\LR_base_damage.rvmat","ca\wheeled_E\LR\Data\LR_base_destruct.rvmat","ca\wheeled_E\LR\Data\LR_glass.rvmat","ca\wheeled_E\LR\Data\LR_glass_damage.rvmat","ca\wheeled_E\LR\Data\LR_glass_destruct.rvmat","ca\wheeled_E\LR\Data\LR_Special.rvmat","ca\wheeled_E\LR\Data\LR_Special_damage.rvmat","ca\wheeled_E\LR\Data\LR_Special_destruct.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default_destruct.rvmat"};
	};		
};

class LandRover_Ambulance_Des_ACR_DZE: LandRover_Ambulance_ACR_DZE {
	displayname = $STR_VEH_NAME_MILITARY_OFFROAD_MEDIC_DESERT;
	hiddenSelectionsTextures[] = {"\ca\wheeled_acr\lr\data\lr_amb_ext_desert_co.paa"};
};

class BAF_Offroad_D_DZE: LandRover_CZ_EP1_DZE {
	displayname = $STR_VEH_NAME_MILITARY_OFFROAD_DESERT;
	model = "ca\wheeled_d_baf\LR_covered_soft_BAF";
	transportMaxWeapons = 15;
	transportMaxMagazines = 70;
    transportmaxbackpacks = 4;
	supplyRadius = 0;
	
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
		ItemORP[] = {"BAF_Offroad_D_DZE1",{},{{"ItemORP",1},{"PartEngine",2}}};
	};		
};

class BAF_Offroad_D_DZE1: BAF_Offroad_D_DZE {	
	original = "BAF_Offroad_D_DZE";
	maxspeed = 160;
	terrainCoef = 1.5;	

	class Upgrades {
		ItemAVE[] = {"BAF_Offroad_D_DZE2",{},{{"ItemAVE",1},{"PartGeneric",4},{"ItemTankTrap",2}}};
	};	
};

class BAF_Offroad_D_DZE2: BAF_Offroad_D_DZE1 {
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
		class HitFuel {
			armor = 1.5;
			material = -1;
			name = "palivo";
			visual = "";
			passThrough = 1;
		};
		class HitEngine {
			armor = 2.5;
			material = -1;
			name = "motor";
			visual = "";
			passThrough = 1;
		};
		class HitGlass1: HitGlass1 {
			armor = 0.25;
		};
		class HitGlass2: HitGlass2 {
			armor = 0.2;
		};
		class HitGlass3: HitGlass3 {
			armor = 0.2;
		};
	};

	class Upgrades {
		ItemLRK[] = {"BAF_Offroad_D_DZE3",{},{{"ItemLRK",1},{"PartGeneric",1},{"ItemTent",1}}};
	};
};

class BAF_Offroad_D_DZE3: BAF_Offroad_D_DZE2 {
	transportMaxWeapons = 30;
	transportMaxMagazines = 140;
    transportmaxbackpacks = 8;

	class Upgrades {
		ItemTNK[] = {"BAF_Offroad_D_DZE4",{},{{"ItemTNK",1},{"PartFueltank",2}}};
	};
};

class BAF_Offroad_D_DZE4: BAF_Offroad_D_DZE3 {
	fuelCapacity = 250;
};

class BAF_Offroad_W_DZE: BAF_Offroad_D_DZE {
	displayname = $STR_VEH_NAME_MILITARY_OFFROAD_WOODLAND;	
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
		ItemORP[] = {"BAF_Offroad_W_DZE1",{},{{"ItemORP",1},{"PartEngine",2}}};
	};		
};

class BAF_Offroad_W_DZE1: BAF_Offroad_W_DZE {
	original = "BAF_Offroad_W_DZE";
	maxspeed = 160;
	terrainCoef = 1.5;

	class Upgrades {
		ItemAVE[] = {"BAF_Offroad_W_DZE2",{},{{"ItemAVE",1},{"PartGeneric",4},{"ItemTankTrap",2}}};
	};	
};

class BAF_Offroad_W_DZE2: BAF_Offroad_W_DZE1 {
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
		class HitFuel {
			armor = 1.5;
			material = -1;
			name = "palivo";
			visual = "";
			passThrough = 1;
		};
		class HitEngine {
			armor = 2.5;
			material = -1;
			name = "motor";
			visual = "";
			passThrough = 1;
		};
		class HitGlass1: HitGlass1 {
			armor = 0.25;
		};
		class HitGlass2: HitGlass2 {
			armor = 0.2;
		};
		class HitGlass3: HitGlass3 {
			armor = 0.2;
		};
	};

	class Upgrades {
		ItemLRK[] = {"BAF_Offroad_W_DZE3",{},{{"ItemLRK",1},{"PartGeneric",1},{"ItemTent",1}}};
	};
};

class BAF_Offroad_W_DZE3: BAF_Offroad_W_DZE2 {
	transportMaxWeapons = 30;
	transportMaxMagazines = 140;
    transportmaxbackpacks = 8;

	class Upgrades {
		ItemTNK[] = {"BAF_Offroad_W_DZE4",{},{{"ItemTNK",1},{"PartFueltank",2}}};
	};
};

class BAF_Offroad_W_DZE4: BAF_Offroad_W_DZE3 {
	fuelCapacity = 250;
};

class LandRover_Special_CZ_EP1;
class LandRover_Special_CZ_EP1_DZ: LandRover_Special_CZ_EP1
{
	scope = public;
	displayname = $STR_VEH_NAME_MILITARY_OFFROAD_SPECIAL;
	class Turrets;
	class MainTurret;
	class AGS30_Turret;
	class PK_Turret;
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
};

class LandRover_Special_CZ_EP1_DZE: LandRover_Special_CZ_EP1_DZ
{
	class Turrets: Turrets
	{
		class AGS30_Turret: MainTurret
		{
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
		};
		class PK_Turret: MainTurret
		{
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
			weapons[] = {"PKT"};
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
		ItemORP[] = {"LandRover_Special_CZ_EP1_DZE1",{},{{"ItemORP",1},{"PartEngine",2}}};
	};		
};

class LandRover_Special_CZ_EP1_DZE1: LandRover_Special_CZ_EP1_DZE {	
	original = "LandRover_Special_CZ_EP1_DZE";
	maxspeed = 160;
	terrainCoef = 1.5;

	class Upgrades {
		ItemAVE[] = {"LandRover_Special_CZ_EP1_DZE2",{},{{"ItemAVE",1},{"PartGeneric",4},{"ItemTankTrap",2}}};
	};	
};

class LandRover_Special_CZ_EP1_DZE2: LandRover_Special_CZ_EP1_DZE1 {
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
		class HitFuel {
			armor = 1.5;
			material = -1;
			name = "palivo";
			visual = "";
			passThrough = 1;
		};
		class HitEngine {
			armor = 2.5;
			material = -1;
			name = "motor";
			visual = "";
			passThrough = 1;
		};
	};

	class Upgrades {
		ItemLRK[] = {"LandRover_Special_CZ_EP1_DZE3",{},{{"ItemLRK",1},{"PartGeneric",1},{"ItemTent",1}}};
	};
};

class LandRover_Special_CZ_EP1_DZE3: LandRover_Special_CZ_EP1_DZE2 {
	transportMaxWeapons = 30;
	transportMaxMagazines = 140;
    transportmaxbackpacks = 8;

	class Upgrades {
		ItemTNK[] = {"LandRover_Special_CZ_EP1_DZE4",{},{{"ItemTNK",1},{"PartFueltank",2}}};
	};
};

class LandRover_Special_CZ_EP1_DZE4: LandRover_Special_CZ_EP1_DZE3 {
	fuelCapacity = 250;
};

class LandRover_MG_TK_EP1;
class LandRover_MG_TK_EP1_DZ: LandRover_MG_TK_EP1
{
	scope = public;
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};	
	displayname = $STR_VEH_NAME_MILITARY_OFFROAD_M2;
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
		ItemORP[] = {"LandRover_MG_TK_EP1_DZE1",{},{{"ItemORP",1},{"PartEngine",2}}};
	};	
};

class LandRover_MG_TK_EP1_DZE1: LandRover_MG_TK_EP1_DZE {
	original = "LandRover_MG_TK_EP1_DZE";
	maxspeed = 160;
	terrainCoef = 1.5;

	class Upgrades {
		ItemAVE[] = {"LandRover_MG_TK_EP1_DZE2",{},{{"ItemAVE",1},{"PartGeneric",4},{"ItemTankTrap",2}}};
	};	
};

class LandRover_MG_TK_EP1_DZE2: LandRover_MG_TK_EP1_DZE1 {
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
		class HitFuel {
			armor = 1.5;
			material = -1;
			name = "palivo";
			visual = "";
			passThrough = 1;
		};
		class HitEngine {
			armor = 2.5;
			material = -1;
			name = "motor";
			visual = "";
			passThrough = 1;
		};
		class HitGlass1: HitGlass1 {
			armor = 0.25;
		};
	};

	class Upgrades {
		ItemLRK[] = {"LandRover_MG_TK_EP1_DZE3",{},{{"ItemLRK",1},{"PartGeneric",1},{"ItemTent",1}}};
	};
};

class LandRover_MG_TK_EP1_DZE3: LandRover_MG_TK_EP1_DZE2 {
	transportMaxWeapons = 30;
	transportMaxMagazines = 140;
    transportmaxbackpacks = 8;

	class Upgrades {
		ItemTNK[] = {"LandRover_MG_TK_EP1_DZE4",{},{{"ItemTNK",1},{"PartFueltank",2}}};
	};
};

class LandRover_MG_TK_EP1_DZE4: LandRover_MG_TK_EP1_DZE3 {
	fuelCapacity = 250;
};