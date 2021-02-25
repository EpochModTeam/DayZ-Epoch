class M113Ambul_UN_EP1;
class M113Ambul_UN_EP1_DZ : M113Ambul_UN_EP1 {
	scope = 2;
	displayName = $STR_VEH_NAME_M113_AMBULANCE_UN;
	vehicleClass = "DayZ Epoch Vehicles";
	crew = "";
	typicalCargo[] = {};
	class TransportMagazines{};
	class TransportWeapons{};
	commanderCanSee = 2+16+32;
	gunnerCanSee = 2+16+32;
	driverCanSee = 2+16+32;
	transportMaxWeapons = 20;
	transportMaxMagazines = 100;
	transportmaxbackpacks = 6;
	enableGPS = 0;
	attendant = 0;
	supplyRadius = 1.8;
	
	class Upgrades {
		ItemTankORP[] = {"M113Ambul_UN_EP1_DZE1",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankORP",1},{"PartEngine",6},{"PartGeneric",2},{"ItemScrews",2}}};
	};
};

class M113Ambul_UN_EP1_DZE1: M113Ambul_UN_EP1_DZ {
	displayName = "$STR_VEH_NAME_M113_AMBULANCE_UN+";
	original = "M113Ambul_UN_EP1_DZ";
	maxspeed = 90; // base 66
	turnCoef = 2.5;  // base 1
	
	class Upgrades {
		ItemTankAVE[] = {"M113Ambul_UN_EP1_DZE2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankAVE",1},{"equip_metal_sheet",8},{"ItemScrews",2}}};
	};
};

class M113Ambul_UN_EP1_DZE2: M113Ambul_UN_EP1_DZE1 {
	displayName = "$STR_VEH_NAME_M113_AMBULANCE_UN++";
	armor = 180; // base 105
	damageResistance = 0.064; // base 0.03249
	
	class Upgrades {
		ItemTankLRK[] = {"M113Ambul_UN_EP1_DZE3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class M113Ambul_UN_EP1_DZE3: M113Ambul_UN_EP1_DZE2 {
	displayName = "$STR_VEH_NAME_M113_AMBULANCE_UN+++";
	transportMaxWeapons = 40;
	transportMaxMagazines = 200;
	transportmaxbackpacks = 12;
	
	class Upgrades {
		ItemTankTNK[] = {"M113Ambul_UN_EP1_DZE4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankTNK",1},{"PartFueltank",6},{"ItemFuelBarrel",4}}};
	};
};

class M113Ambul_UN_EP1_DZE4: M113Ambul_UN_EP1_DZE3 {
	displayName = "$STR_VEH_NAME_M113_AMBULANCE_UN++++";
	fuelCapacity = 1200; // base 700	
};

class M113Ambul_TK_EP1_DZ : M113Ambul_UN_EP1_DZ {
	scope = 2;
	displayName = $STR_VEH_NAME_M113_AMBULANCE_TK;
	hiddenSelectionsTextures[] = {"\ca\Tracked_E\M113\Data\m113a3_01_TK_co.paa"};
	
	class Upgrades {
		ItemTankORP[] = {"M113Ambul_TK_EP1_DZE1",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankORP",1},{"PartEngine",6},{"PartGeneric",2},{"ItemScrews",2}}};
	};
};

class M113Ambul_TK_EP1_DZE1: M113Ambul_TK_EP1_DZ {
	displayName = "$STR_VEH_NAME_M113_AMBULANCE_TK+";
	original = "M113Ambul_TK_EP1_DZ";
	maxspeed = 90; // base 66
	turnCoef = 2.5;  // base 1
	
	class Upgrades {
		ItemTankAVE[] = {"M113Ambul_TK_EP1_DZE2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankAVE",1},{"equip_metal_sheet",8},{"ItemScrews",2}}};
	};
};

class M113Ambul_TK_EP1_DZE2: M113Ambul_TK_EP1_DZE1 {
	displayName = "$STR_VEH_NAME_M113_AMBULANCE_TK++";
	armor = 180; // base 105
	damageResistance = 0.064; // base 0.03249
	
	class Upgrades {
		ItemTankLRK[] = {"M113Ambul_TK_EP1_DZE3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class M113Ambul_TK_EP1_DZE3: M113Ambul_TK_EP1_DZE2 {
	displayName = "$STR_VEH_NAME_M113_AMBULANCE_TK+++";
	transportMaxWeapons = 40;
	transportMaxMagazines = 200;
	transportmaxbackpacks = 12;
	
	class Upgrades {
		ItemTankTNK[] = {"M113Ambul_TK_EP1_DZE4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankTNK",1},{"PartFueltank",6},{"ItemFuelBarrel",4}}};
	};
};

class M113Ambul_TK_EP1_DZE4: M113Ambul_TK_EP1_DZE3 {
	displayName = "$STR_VEH_NAME_M113_AMBULANCE_TK++++";
	fuelCapacity = 1200; // base 700	
};

class M113_UN_EP1;
class M113_UN_EP1_DZ : M113_UN_EP1 {
	scope = 2;
	displayName = $STR_VEH_NAME_M113_UN;
	vehicleClass = "DayZ Epoch Vehicles";
	crew = "";
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};
	class Turrets;
	class MainTurret;
	transportMaxWeapons = 20;
	transportMaxMagazines = 100;
	transportmaxbackpacks = 6;
	commanderCanSee = 2+16+32;
	gunnerCanSee = 2+16+32;
	driverCanSee = 2+16+32;
	enableGPS = 0;
	supplyRadius = 1.8;
};

class M113_UN_EP1_DZE: M113_UN_EP1_DZ {
	class Turrets: Turrets {
		class MainTurret: MainTurret {
			magazines[] = {};
		};
	};
	
	class Upgrades {
		ItemTankORP[] = {"M113_UN_EP1_DZE1",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankORP",1},{"PartEngine",6},{"PartGeneric",2},{"ItemScrews",2}}};
	};
};

class M113_UN_EP1_DZE1: M113_UN_EP1_DZE {
	displayName = "$STR_VEH_NAME_M113_UN+";
	original = "M113_UN_EP1_DZE";
	maxspeed = 90; // base 66
	turnCoef = 2.5;  // base 1
	
	class Upgrades {
		ItemTankAVE[] = {"M113_UN_EP1_DZE2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankAVE",1},{"equip_metal_sheet",8},{"ItemScrews",2}}};
	};
};

class M113_UN_EP1_DZE2: M113_UN_EP1_DZE1 {
	displayName = "$STR_VEH_NAME_M113_UN++";
	armor = 180; // base 105
	damageResistance = 0.064; // base 0.03249
	
	class Upgrades {
		ItemTankLRK[] = {"M113_UN_EP1_DZE3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class M113_UN_EP1_DZE3: M113_UN_EP1_DZE2 {
	displayName = "$STR_VEH_NAME_M113_UN+++";
	transportMaxWeapons = 40;
	transportMaxMagazines = 200;
	transportmaxbackpacks = 12;
	
	class Upgrades {
		ItemTankTNK[] = {"M113_UN_EP1_DZE4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankTNK",1},{"PartFueltank",6},{"ItemFuelBarrel",4}}};
	};
};

class M113_UN_EP1_DZE4: M113_UN_EP1_DZE3 {
	displayName = "$STR_VEH_NAME_M113_UN++++";
	fuelCapacity = 1200; // base 700	
};

class M113_TK_EP1_DZ : M113_UN_EP1_DZ {
	scope = 2;
	displayName = $STR_VEH_NAME_M113_TK;
	hiddenSelectionsTextures[] = {"\ca\Tracked_E\M113\Data\m113a3_01_TK_co.paa"};	
};

class M113_TK_EP1_DZE: M113_TK_EP1_DZ {
	class Turrets: Turrets {
		class MainTurret: MainTurret {
			magazines[] = {};
		};
	};
	
	class Upgrades {
		ItemTankORP[] = {"M113_TK_EP1_DZE1",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankORP",1},{"PartEngine",6},{"PartGeneric",2},{"ItemScrews",2}}};
	};
};

class M113_TK_EP1_DZE1: M113_TK_EP1_DZE {
	displayName = "$STR_VEH_NAME_M113_TK+";
	original = "M113_TK_EP1_DZE";
	maxspeed = 90; // base 66
	turnCoef = 2.5;  // base 1
	
	class Upgrades {
		ItemTankAVE[] = {"M113_TK_EP1_DZE2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankAVE",1},{"equip_metal_sheet",8},{"ItemScrews",2}}};
	};
};

class M113_TK_EP1_DZE2: M113_TK_EP1_DZE1 {
	displayName = "$STR_VEH_NAME_M113_TK++";
	armor = 180; // base 105
	damageResistance = 0.064; // base 0.03249
	
	class Upgrades {
		ItemTankLRK[] = {"M113_TK_EP1_DZE3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class M113_TK_EP1_DZE3: M113_TK_EP1_DZE2 {
	displayName = "$STR_VEH_NAME_M113_TK+++";
	transportMaxWeapons = 40;
	transportMaxMagazines = 200;
	transportmaxbackpacks = 12;
	
	class Upgrades {
		ItemTankTNK[] = {"M113_TK_EP1_DZE4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankTNK",1},{"PartFueltank",6},{"ItemFuelBarrel",4}}};
	};
};

class M113_TK_EP1_DZE4: M113_TK_EP1_DZE3 {
	displayName = "$STR_VEH_NAME_M113_TK++++";
	fuelCapacity = 1200; // base 700	
};