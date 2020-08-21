class BMP2_HQ_CDF;
class BMP2_HQ_CDF_DZ: BMP2_HQ_CDF {
	scope = 2;
	displayName = "$STR_VEH_NAME_BMP2_CDF";
	vehicleClass = "DayZ Epoch Vehicles";

	commanderCanSee = 2+16+32;
	gunnerCanSee = 2+16+32;
	driverCanSee = 2+16+32;

	crew = "";
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};

	transportMaxMagazines = 100;
	transportMaxWeapons = 20;
	transportmaxbackpacks = 6;
	enableGPS = 0;
	supplyRadius = 1.8;

	class Turrets; // External class reference
	class MainTurret; // External class reference
};

class BMP2_HQ_CDF_DZE: BMP2_HQ_CDF_DZ {
	scope = 2;
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			magazines[] = {"SmokeLauncherMag","SmokeLauncherMag","SmokeLauncherMag"};
		};
	};	
	
	class Upgrades {
		ItemTankORP[] = {"BMP2_HQ_CDF_DZE1",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankORP",1},{"PartEngine",6},{"PartGeneric",2},{"ItemScrews",2}}};
	};
};

class BMP2_HQ_CDF_DZE1: BMP2_HQ_CDF_DZE {
	displayName = "$STR_VEH_NAME_BMP2_CDF+";
	original = "BMP2_HQ_CDF_DZE";
	maxspeed = 90; // base 65
	turnCoef = 0.5;  // base 1
	
	class Upgrades {
		ItemTankAVE[] = {"BMP2_HQ_CDF_DZE2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankAVE",1},{"equip_metal_sheet",8},{"ItemScrews",2}}};
	};
};

class BMP2_HQ_CDF_DZE2: BMP2_HQ_CDF_DZE1 {
	displayName = "$STR_VEH_NAME_BMP2_CDF++";
	armor = 320; // base 250
	damageResistance = 0.035; // base 0.01796
	
	class Upgrades {
		ItemTankLRK[] = {"BMP2_HQ_CDF_DZE3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class BMP2_HQ_CDF_DZE3: BMP2_HQ_CDF_DZE2 {
	displayName = "$STR_VEH_NAME_BMP2_CDF+++";
	transportMaxWeapons = 40;
	transportMaxMagazines = 200;
	transportmaxbackpacks = 12;
	
	class Upgrades {
		ItemTankTNK[] = {"BMP2_HQ_CDF_DZE4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankTNK",1},{"PartFueltank",6},{"ItemFuelBarrel",4}}};
	};
};

class BMP2_HQ_CDF_DZE4: BMP2_HQ_CDF_DZE3 {
	displayName = "$STR_VEH_NAME_BMP2_CDF++++";
	fuelCapacity = 1200; // base 700	
};

class BMP2_HQ_INS;
class BMP2_HQ_INS_DZ: BMP2_HQ_INS {
	scope = 2;
	displayName = "$STR_VEH_NAME_BMP2_INS";
	vehicleClass = "DayZ Epoch Vehicles";

	commanderCanSee = 2+16+32;
	gunnerCanSee = 2+16+32;
	driverCanSee = 2+16+32;

	crew = "";
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};

	transportMaxMagazines = 100;
	transportMaxWeapons = 20;
	transportmaxbackpacks = 6;
	enableGPS = 0;
	supplyRadius = 1.8;

	class Turrets; // External class reference
	class MainTurret; // External class reference
};

class BMP2_HQ_INS_DZE: BMP2_HQ_INS_DZ {
	scope = 2;
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			magazines[] = {"SmokeLauncherMag","SmokeLauncherMag","SmokeLauncherMag"};
		};
	};	
	
	class Upgrades {
		ItemTankORP[] = {"BMP2_HQ_INS_DZE1",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankORP",1},{"PartEngine",6},{"PartGeneric",2},{"ItemScrews",2}}};
	};
};

class BMP2_HQ_INS_DZE1: BMP2_HQ_INS_DZE {
	displayName = "$STR_VEH_NAME_BMP2_INS+";
	original = "BMP2_HQ_INS_DZE";
	maxspeed = 90; // base 65
	turnCoef = 0.5;  // base 1
	
	class Upgrades {
		ItemTankAVE[] = {"BMP2_HQ_INS_DZE2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankAVE",1},{"equip_metal_sheet",8},{"ItemScrews",2}}};
	};
};

class BMP2_HQ_INS_DZE2: BMP2_HQ_INS_DZE1 {
	displayName = "$STR_VEH_NAME_BMP2_INS++";
	armor = 320; // base 250
	damageResistance = 0.035; // base 0.01796
	
	class Upgrades {
		ItemTankLRK[] = {"BMP2_HQ_INS_DZE3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class BMP2_HQ_INS_DZE3: BMP2_HQ_INS_DZE2 {
	displayName = "$STR_VEH_NAME_BMP2_INS+++";
	transportMaxWeapons = 40;
	transportMaxMagazines = 200;
	transportmaxbackpacks = 12;
	
	class Upgrades {
		ItemTankTNK[] = {"BMP2_HQ_INS_DZE4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankTNK",1},{"PartFueltank",6},{"ItemFuelBarrel",4}}};
	};
};

class BMP2_HQ_INS_DZE4: BMP2_HQ_INS_DZE3 {
	displayName = "$STR_VEH_NAME_BMP2_INS++++";
	fuelCapacity = 1200; // base 700	
};

class BMP2_HQ_TK_EP1;
class BMP2_HQ_TK_EP1_DZ: BMP2_HQ_TK_EP1 {
	scope = 2;
	displayName = "$STR_VEH_NAME_BMP2_TK";	
	vehicleClass = "DayZ Epoch Vehicles";

	commanderCanSee = 2+16+32;
	gunnerCanSee = 2+16+32;
	driverCanSee = 2+16+32;

	crew = "";
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};

	transportMaxMagazines = 100;
	transportMaxWeapons = 20;
	transportmaxbackpacks = 6;
	enableGPS = 0;
	supplyRadius = 1.8;

	class Turrets; // External class reference
	class MainTurret; // External class reference
};

class BMP2_HQ_TK_EP1_DZE: BMP2_HQ_TK_EP1_DZ {
	scope = 2;
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			magazines[] = {"SmokeLauncherMag","SmokeLauncherMag","SmokeLauncherMag"};
		};
	};	
	
	class Upgrades {
		ItemTankORP[] = {"BMP2_HQ_TK_EP1_DZE1",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankORP",1},{"PartEngine",6},{"PartGeneric",2},{"ItemScrews",2}}};
	};
};

class BMP2_HQ_TK_EP1_DZE1: BMP2_HQ_TK_EP1_DZE {
	displayName = "$STR_VEH_NAME_BMP2_TK+";
	original = "BMP2_HQ_TK_EP1_DZE";
	maxspeed = 90; // base 65
	turnCoef = 0.5;  // base 1
	
	class Upgrades {
		ItemTankAVE[] = {"BMP2_HQ_TK_EP1_DZE2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankAVE",1},{"equip_metal_sheet",8},{"ItemScrews",2}}};
	};
};

class BMP2_HQ_TK_EP1_DZE2: BMP2_HQ_TK_EP1_DZE1 {
	displayName = "$STR_VEH_NAME_BMP2_TK++";
	armor = 320; // base 250
	damageResistance = 0.035; // base 0.01796
	
	class Upgrades {
		ItemTankLRK[] = {"BMP2_HQ_TK_EP1_DZE3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class BMP2_HQ_TK_EP1_DZE3: BMP2_HQ_TK_EP1_DZE2 {
	displayName = "$STR_VEH_NAME_BMP2_TK+++";
	transportMaxWeapons = 40;
	transportMaxMagazines = 200;
	transportmaxbackpacks = 12;
	
	class Upgrades {
		ItemTankTNK[] = {"BMP2_HQ_TK_EP1_DZE4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankTNK",1},{"PartFueltank",6},{"ItemFuelBarrel",4}}};
	};
};

class BMP2_HQ_TK_EP1_DZE4: BMP2_HQ_TK_EP1_DZE3 {
	displayName = "$STR_VEH_NAME_BMP2_TK++++";
	fuelCapacity = 1200; // base 700	
};


class BMP2_Ambul_INS;
class BMP2_Ambul_INS_DZE: BMP2_Ambul_INS {
	scope = 2;
	displayName = "$STR_VEH_NAME_BMP2_AMBULANCE_INS";
	displayNameShort = "$STR_VEH_NAME_BMP2_AMBULANCE_INS";
	vehicleClass = "DayZ Epoch Vehicles";

	commanderCanSee = 2+16+32;
	gunnerCanSee = 2+16+32;
	driverCanSee = 2+16+32;

	crew = "";
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};

	transportMaxMagazines = 100;
	transportMaxWeapons = 20;
	transportmaxbackpacks = 6;
	enableGPS = 0;
	supplyRadius = 1.8;
	attendant = 0;
	
	class Upgrades {
		ItemTankORP[] = {"BMP2_Ambul_INS_DZE1",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankORP",1},{"PartEngine",6},{"PartGeneric",2},{"ItemScrews",2}}};
	};
};

class BMP2_Ambul_INS_DZE1: BMP2_Ambul_INS_DZE {
	displayName = "$STR_VEH_NAME_BMP2_AMBULANCE_INS+";
	displayNameShort = "$STR_VEH_NAME_BMP2_AMBULANCE_INS+";
	original = "BMP2_Ambul_INS_DZE";
	maxspeed = 90; // base 65
	turnCoef = 0.5;  // base 1
	
	class Upgrades {
		ItemTankAVE[] = {"BMP2_Ambul_INS_DZE2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankAVE",1},{"equip_metal_sheet",8},{"ItemScrews",2}}};
	};
};

class BMP2_Ambul_INS_DZE2: BMP2_Ambul_INS_DZE1 {
	displayName = "$STR_VEH_NAME_BMP2_AMBULANCE_INS++";
	displayNameShort = "$STR_VEH_NAME_BMP2_AMBULANCE_INS++";
	armor = 320; // base 250
	damageResistance = 0.035; // base 0.01796
	
	class Upgrades {
		ItemTankLRK[] = {"BMP2_Ambul_INS_DZE3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class BMP2_Ambul_INS_DZE3: BMP2_Ambul_INS_DZE2 {
	displayName = "$STR_VEH_NAME_BMP2_AMBULANCE_INS+++";
	displayNameShort = "$STR_VEH_NAME_BMP2_AMBULANCE_INS+++";
	transportMaxWeapons = 40;
	transportMaxMagazines = 200;
	transportmaxbackpacks = 12;
	
	class Upgrades {
		ItemTankTNK[] = {"BMP2_Ambul_INS_DZE4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankTNK",1},{"PartFueltank",6},{"ItemFuelBarrel",4}}};
	};
};

class BMP2_Ambul_INS_DZE4: BMP2_Ambul_INS_DZE3 {
	displayName = "$STR_VEH_NAME_BMP2_AMBULANCE_INS++++";
	displayNameShort = "$STR_VEH_NAME_BMP2_AMBULANCE_INS++++";
	fuelCapacity = 1200; // base 700	
};

class BMP2_Ambul_CDF;
class BMP2_Ambul_CDF_DZE: BMP2_Ambul_CDF {
	scope = 2;
	displayName = "$STR_VEH_NAME_BMP2_AMBULANCE_CDF";
	displayNameShort = "$STR_VEH_NAME_BMP2_AMBULANCE_CDF";
	vehicleClass = "DayZ Epoch Vehicles";

	commanderCanSee = 2+16+32;
	gunnerCanSee = 2+16+32;
	driverCanSee = 2+16+32;

	crew = "";
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};

	transportMaxMagazines = 100;
	transportMaxWeapons = 20;
	transportmaxbackpacks = 6;
	enableGPS = 0;
	supplyRadius = 1.8;
	attendant = 0;
	
	class Upgrades {
		ItemTankORP[] = {"BMP2_Ambul_CDF_DZE1",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankORP",1},{"PartEngine",6},{"PartGeneric",2},{"ItemScrews",2}}};
	};
};

class BMP2_Ambul_CDF_DZE1: BMP2_Ambul_CDF_DZE {
	displayName = "$STR_VEH_NAME_BMP2_AMBULANCE_CDF+";
	displayNameShort = "$STR_VEH_NAME_BMP2_AMBULANCE_CDF+";
	original = "BMP2_Ambul_CDF_DZE";
	maxspeed = 90; // base 65
	turnCoef = 0.5;  // base 1
	
	class Upgrades {
		ItemTankAVE[] = {"BMP2_Ambul_CDF_DZE2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankAVE",1},{"equip_metal_sheet",8},{"ItemScrews",2}}};
	};
};

class BMP2_Ambul_CDF_DZE2: BMP2_Ambul_CDF_DZE1 {
	displayName = "$STR_VEH_NAME_BMP2_AMBULANCE_CDF++";
	displayNameShort = "$STR_VEH_NAME_BMP2_AMBULANCE_CDF++";
	armor = 320; // base 250
	damageResistance = 0.035; // base 0.01796
	
	class Upgrades {
		ItemTankLRK[] = {"BMP2_Ambul_CDF_DZE3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class BMP2_Ambul_CDF_DZE3: BMP2_Ambul_CDF_DZE2 {
	displayName = "$STR_VEH_NAME_BMP2_AMBULANCE_CDF+++";
	displayNameShort = "$STR_VEH_NAME_BMP2_AMBULANCE_CDF+++";
	transportMaxWeapons = 40;
	transportMaxMagazines = 200;
	transportmaxbackpacks = 12;
	
	class Upgrades {
		ItemTankTNK[] = {"BMP2_Ambul_CDF_DZE4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankTNK",1},{"PartFueltank",6},{"ItemFuelBarrel",4}}};
	};
};

class BMP2_Ambul_CDF_DZE4: BMP2_Ambul_CDF_DZE3 {
	displayName = "$STR_VEH_NAME_BMP2_AMBULANCE_CDF++++";
	displayNameShort = "$STR_VEH_NAME_BMP2_AMBULANCE_CDF++++";
	fuelCapacity = 1200; // base 700	
};

class BMP2_INS;
class BMP2_RUST: BMP2_INS {
	displayName = "$STR_VEH_NAME_BMP2_RUST";
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\bmp\bmp2_01_wrecked_co.paa","\dayz_epoch_c\skins\bmp\bmp2_02_wrecked_co.paa"};
};

class BMP2_WINTER: BMP2_INS {
	displayName = "$STR_VEH_NAME_BMP2_WINTER";
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\bmp\bmp2_01_winter.paa","\dayz_epoch_c\skins\bmp\bmp2_02_winter.paa"};
};