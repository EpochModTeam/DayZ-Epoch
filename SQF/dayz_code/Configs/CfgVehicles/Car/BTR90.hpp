class BTR90;
class BTR90_DZ: BTR90 {
	scope = 2;
	displayName = "$STR_VEH_NAME_BTR90";
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
	supplyRadius = 1.8;
	crewVulnerable = 1;

	class Turrets; // External class reference
	class MainTurret; // External class reference
};

class BTR90_DZE: BTR90_DZ {
	displayName = "$STR_VEH_NAME_BTR90";
	class Turrets: Turrets {
		class MainTurret: MainTurret {
			magazines[] = {};
		};
	};
	
	class Upgrades {
		ItemTankORP[] = {"BTR90_DZE1",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankORP",1},{"PartEngine",6},{"PartGeneric",2},{"ItemScrews",2}}};
	};
};

class BTR90_DZE1: BTR90_DZE {
	displayName = "$STR_VEH_NAME_BTR90+";
	original = "BTR90_DZE";
	maxspeed = 120; // base 100
	terrainCoef = 0.5; // base 1.5
	turnCoef = 6;  // base 4
	
	class Upgrades {
		ItemTankAVE[] = {"BTR90_DZE2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankAVE",1},{"equip_metal_sheet",8},{"ItemScrews",2}}};
	};
};

class BTR90_DZE2: BTR90_DZE1 {
	displayName = "$STR_VEH_NAME_BTR90++";
	armor = 220; // base 150
	damageResistance = 0.048; // base 0.02432
	
	class Upgrades {
		ItemTankLRK[] = {"BTR90_DZE3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class BTR90_DZE3: BTR90_DZE2 {
	displayName = "$STR_VEH_NAME_BTR90+++";
	transportMaxWeapons = 40;
	transportMaxMagazines = 200;
	transportmaxbackpacks = 12;
	
	class Upgrades {
		ItemTankTNK[] = {"BTR90_DZE4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankTNK",1},{"PartFueltank",6},{"ItemFuelBarrel",4}}};
	};
};

class BTR90_DZE4: BTR90_DZE3 {
	displayName = "$STR_VEH_NAME_BTR90++++";
	fuelCapacity = 550; // base 300	
};

class BTR90_HQ;
class BTR90_HQ_DZ: BTR90_HQ {
	scope = 2;
	displayName = "$STR_VEH_NAME_BTR90_HQ";
	vehicleClass = "DayZ Epoch Vehicles";

	commanderCanSee = 2+16+32;
	gunnerCanSee = 2+16+32;
	driverCanSee = 2+16+32;

	crew = "";
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};

	transportSoldier = 6;
	enableGPS = 0;

	transportMaxMagazines = 100;
	transportMaxWeapons = 20;
	transportmaxbackpacks = 6;
	supplyRadius = 1.8;
	crewVulnerable = 1;

	class Turrets; // External class reference
	class MainTurret; // External class reference
};

class BTR90_HQ_DZE: BTR90_HQ_DZ {
	displayName = "$STR_VEH_NAME_BTR90_HQ";
	class Turrets: Turrets {
		class MainTurret: MainTurret {
			magazines[] = {};
		};
	};
	
	class Upgrades {
		ItemTankORP[] = {"BTR90_HQ_DZE1",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankORP",1},{"PartEngine",6},{"PartGeneric",2},{"ItemScrews",2}}};
	};	
};

class BTR90_HQ_DZE1: BTR90_HQ_DZE {
	displayName = "$STR_VEH_NAME_BTR90_HQ+";
	original = "BTR90_HQ_DZE";
	maxspeed = 120; // base 100
	terrainCoef = 0.5; // base 1.5
	turnCoef = 6;  // base 4
	
	class Upgrades {
		ItemTankAVE[] = {"BTR90_HQ_DZE2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankAVE",1},{"equip_metal_sheet",8},{"ItemScrews",2}}};
	};
};

class BTR90_HQ_DZE2: BTR90_HQ_DZE1 {
	displayName = "$STR_VEH_NAME_BTR90_HQ++";
	armor = 220; // base 150
	damageResistance = 0.048; // base 0.02432
	
	class Upgrades {
		ItemTankLRK[] = {"BTR90_HQ_DZE3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class BTR90_HQ_DZE3: BTR90_HQ_DZE2 {
	displayName = "$STR_VEH_NAME_BTR90_HQ+++";
	transportMaxWeapons = 40;
	transportMaxMagazines = 200;
	transportmaxbackpacks = 12;
	
	class Upgrades {
		ItemTankTNK[] = {"BTR90_HQ_DZE4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankTNK",1},{"PartFueltank",6},{"ItemFuelBarrel",4}}};
	};
};

class BTR90_HQ_DZE4: BTR90_HQ_DZE3 {
	displayName = "$STR_VEH_NAME_BTR90_HQ++++";
	fuelCapacity = 550; // base 300	
};