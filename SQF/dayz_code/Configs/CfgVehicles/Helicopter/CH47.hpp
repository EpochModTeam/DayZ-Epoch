class CH_47F_EP1;
class CH_47F_EP1_DZ : CH_47F_EP1 { 
	vehicleClass = "DayZ Epoch Vehicles";
	scope = 2; 
	displayName = "$STR_VEH_NAME_CH47_GREEN";
	crew = ""; 
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};
	commanderCanSee = 2+16+32;
	gunnerCanSee = 2+16+32;
	driverCanSee = 2+16+32;
	transportMaxWeapons = 40;
	transportMaxMagazines = 300;
	transportmaxbackpacks = 10;
	class Turrets;
	class MainTurret;
	class RightDoorGun;
	class BackDoorGun;
	maxSpeed = 293;
	fuelCapacity = 4043;
	radartype = 0;
	supplyRadius = 1.3;
};

class CH_47F_EP1_DZE: CH_47F_EP1_DZ
{
	cargoCompartments[] = {"Compartment1","Compartment2","Compartment3"};
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			body = "mainTurret";
			gun = "mainGun";
			minElev = -50;
			maxElev = 30;
			initElev = -30;
			minTurn = -3;
			maxTurn = 173;
			initTurn = 0;
			soundServo[] = {"",0.01,1};
			animationSourceHatch = "";
			stabilizedInAxes = "StabilizedInAxesNone";
			gunBeg = "muzzle_1";
			gunEnd = "chamber_1";
			weapons[] = {"M134"};
			magazines[] = {};
			gunnerName = $STR_POSITION_CREWCHIEF;
			gunnerOpticsModel = "\ca\weapons\optika_empty";
			gunnerOutOpticsShowCursor = 1;
			gunnerOpticsShowCursor = 1;
			gunnerAction = "CH47_Gunner_EP1";
			gunnerInAction = "CH47_Gunner_EP1";
			commanding = -2;
			primaryGunner = 0;
			class ViewOptics
			{
				initAngleX = 0;
				minAngleX = -30;
				maxAngleX = 30;
				initAngleY = 0;
				minAngleY = -100;
				maxAngleY = 100;
				initFov = 0.7;
				minFov = 0.25;
				maxFov = 1.1;
			};
			gunnerCompartments = "Compartment3";
			memoryPointsGetInGunner = "pos gunner";
			memoryPointsGetInGunnerDir = "pos gunner dir";
		};
		class RightDoorGun: MainTurret
		{
			body = "Turret2";
			gun = "Gun_2";
			minElev = -60;
			maxElev = 30;
			initElev = -30;
			minTurn = -173;
			maxTurn = 3;
			initTurn = 0;
			animationSourceBody = "Turret_2";
			animationSourceGun = "Gun_2";
			stabilizedInAxes = "StabilizedInAxesNone";
			selectionFireAnim = "zasleh_1";
			proxyIndex = 2;
			gunnerName = $STR_POSITION_DOORGUNNER;
			commanding = -3;
			weapons[] = {"M134_2"};
			gunBeg = "muzzle_2";
			gunEnd = "chamber_2";
			primaryGunner = 0;
			memoryPointGun = "machinegun_2";
			memoryPointGunnerOptics = "gunnerview_2";
		};
		class BackDoorGun: MainTurret
		{
			discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800};
			discreteDistanceInitIndex = 2;
			body = "Turret3";
			gun = "Gun_3";
			minTurn = 130;
			maxTurn = 230;
			initTurn = 180;
			minElev = -50;
			maxElev = 50;
			initElev = 0;
			animationSourceBody = "Turret_3";
			animationSourceGun = "Gun_3";
			stabilizedInAxes = "StabilizedInAxesNone";
			selectionFireAnim = "zasleh_3";
			proxyIndex = 3;
			gunnerName = $STR_POSITION_REARGUNNER;
			gunnerOpticsShowCursor = 0;
			commanding = -1;
			gunnerAction = "CH47_Gunner01_EP1";
			gunnerInAction = "CH47_Gunner01_EP1";
			turretInfoType = "RscWeaponZeroing";
			weapons[] = {"M240BC_veh"};
			magazines[] = {};
			gunBeg = "muzzle_3";
			gunEnd = "chamber_3";
			primaryGunner = 1;
			memoryPointGun = "machinegun_3";
			memoryPointGunnerOptics = "gunnerview_3";
		};
	};
	
	class Upgrades
	{
		ItemHeliAVE[] = {"CH_47F_EP1_DZE1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class CH_47F_EP1_DZE1: CH_47F_EP1_DZE
{
	displayName = "$STR_VEH_NAME_CH47_GREEN+";
	original = "CH_47F_EP1_DZE";
	armor = 80;
	damageResistance = 0.02078;
	
	class Upgrades
	{
		ItemHeliLRK[] = {"CH_47F_EP1_DZE2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class CH_47F_EP1_DZE2: CH_47F_EP1_DZE1
{
	displayName = "$STR_VEH_NAME_CH47_GREEN++";
	transportMaxWeapons = 80;
	transportMaxMagazines = 600;
	transportmaxbackpacks = 20;
	
	class Upgrades
	{
		ItemHeliTNK[] = {"CH_47F_EP1_DZE3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class CH_47F_EP1_DZE3: CH_47F_EP1_DZE2
{
	displayName = "$STR_VEH_NAME_CH47_GREEN+++";
	fuelCapacity = 8300;
};

class CH_47F_EP1_Black_DZ : CH_47F_EP1_DZ {
	displayName = "$STR_VEH_NAME_CH47_BLACK";
	model = "C1987_ch47\ca\air_e\CH47\CH_47F.p3d";
};

class CH_47F_EP1_Black_DZE : CH_47F_EP1_DZE {
	displayName = "$STR_VEH_NAME_CH47_BLACK";
	model = "C1987_ch47\ca\air_e\CH47\CH_47F.p3d";
	
	class Upgrades
	{
		ItemHeliAVE[] = {"CH_47F_EP1_Black_DZE1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};	
};

class CH_47F_EP1_Black_DZE1: CH_47F_EP1_Black_DZE
{
	displayName = "$STR_VEH_NAME_CH47_BLACK+";
	original = "CH_47F_EP1_Black_DZE";
	armor = 80;
	damageResistance = 0.02078;
	
	class Upgrades
	{
		ItemHeliLRK[] = {"CH_47F_EP1_Black_DZE2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class CH_47F_EP1_Black_DZE2: CH_47F_EP1_Black_DZE1
{
	displayName = "$STR_VEH_NAME_CH47_BLACK++";
	transportMaxWeapons = 80;
	transportMaxMagazines = 600;
	transportmaxbackpacks = 20;
	
	class Upgrades
	{
		ItemHeliTNK[] = {"CH_47F_EP1_Black_DZE3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class CH_47F_EP1_Black_DZE3: CH_47F_EP1_Black_DZE2
{
	displayName = "$STR_VEH_NAME_CH47_BLACK+++";
	fuelCapacity = 8300;
};

class CH_47F_EP1_GREY_DZ : CH_47F_EP1_DZ {
	displayName = "$STR_VEH_NAME_CH47_GREY";
	model = "C1987_ch47\ca\air_e\CH47\CH_47F2.p3d";
};

class CH_47F_EP1_GREY_DZE : CH_47F_EP1_DZE {
	displayName = "$STR_VEH_NAME_CH47_GREY";
	model = "C1987_ch47\ca\air_e\CH47\CH_47F2.p3d";
	
	class Upgrades
	{
		ItemHeliAVE[] = {"CH_47F_EP1_GREY_DZE1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};	
};

class CH_47F_EP1_GREY_DZE1: CH_47F_EP1_GREY_DZE
{
	displayName = "$STR_VEH_NAME_CH47_GREY+";
	original = "CH_47F_EP1_GREY_DZE";
	armor = 80;
	damageResistance = 0.02078;
	
	class Upgrades
	{
		ItemHeliLRK[] = {"CH_47F_EP1_GREY_DZE2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class CH_47F_EP1_GREY_DZE2: CH_47F_EP1_GREY_DZE1
{
	displayName = "$STR_VEH_NAME_CH47_GREY++";
	transportMaxWeapons = 80;
	transportMaxMagazines = 600;
	transportmaxbackpacks = 20;
	
	class Upgrades
	{
		ItemHeliTNK[] = {"CH_47F_EP1_GREY_DZE3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class CH_47F_EP1_GREY_DZE3: CH_47F_EP1_GREY_DZE2
{
	displayName = "$STR_VEH_NAME_CH47_GREY+++";
	fuelCapacity = 8300;
};

class CH_47F_EP1_DES_DZ : CH_47F_EP1_DZ {
	displayName = "$STR_VEH_NAME_CH47_DESERT";
	model = "C1987_ch47\ca\air_e\CH47\CH_47F3.p3d";
};

class CH_47F_EP1_DES_DZE : CH_47F_EP1_DZE {
	displayName = "$STR_VEH_NAME_CH47_DESERT";
	model = "C1987_ch47\ca\air_e\CH47\CH_47F3.p3d";
	
	class Upgrades
	{
		ItemHeliAVE[] = {"CH_47F_EP1_DES_DZE1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};	
};

class CH_47F_EP1_DES_DZE1: CH_47F_EP1_DES_DZE
{
	displayName = "$STR_VEH_NAME_CH47_DESERT+";
	original = "CH_47F_EP1_DES_DZE";
	armor = 80;
	damageResistance = 0.02078;
	
	class Upgrades
	{
		ItemHeliLRK[] = {"CH_47F_EP1_DES_DZE2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class CH_47F_EP1_DES_DZE2: CH_47F_EP1_DES_DZE1
{
	displayName = "$STR_VEH_NAME_CH47_DESERT++";
	transportMaxWeapons = 80;
	transportMaxMagazines = 600;
	transportmaxbackpacks = 20;
	
	class Upgrades
	{
		ItemHeliTNK[] = {"CH_47F_EP1_DES_DZE3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class CH_47F_EP1_DES_DZE3: CH_47F_EP1_DES_DZE2
{
	displayName = "$STR_VEH_NAME_CH47_DESERT+++";
	fuelCapacity = 8300;
};