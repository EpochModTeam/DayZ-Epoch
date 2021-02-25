class LAV25;
class LAV25_DZ: LAV25 {
	scope = 2;
	displayName = $STR_VEH_NAME_LAV25;

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

	class Turrets; // External class reference
	class MainTurret; // External class reference
	supplyRadius = 1.8;
	crewVulnerable = 1;
};

class LAV25_DZE: LAV25_DZ {
	class Turrets: Turrets {
		class MainTurret : MainTurret {
			magazines[] = {};
		};
	};
	
	class Upgrades {
		ItemTankORP[] = {"LAV25_DZE1",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankORP",1},{"PartEngine",6},{"PartGeneric",2},{"ItemScrews",2}}};
	};	
};

class LAV25_DZE1: LAV25_DZE {
	displayName = "$STR_VEH_NAME_LAV25+";
	original = "LAV25_DZE";
	maxspeed = 120; // base 100
	terrainCoef = 0.5; // base 1.5
	turnCoef = 5;  // base 4
	
	class Upgrades {
		ItemTankAVE[] = {"LAV25_DZE2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankAVE",1},{"equip_metal_sheet",8},{"ItemScrews",2}}};
	};
};

class LAV25_DZE2: LAV25_DZE1 {
	displayName = "$STR_VEH_NAME_LAV25++";
	armor = 220; // base 150
	damageResistance = 0.048; // base 0.02432
	
	class Upgrades {
		ItemTankLRK[] = {"LAV25_DZE3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class LAV25_DZE3: LAV25_DZE2 {
	displayName = "$STR_VEH_NAME_LAV25+++";
	transportMaxWeapons = 40;
	transportMaxMagazines = 200;
	transportmaxbackpacks = 12;
	
	class Upgrades {
		ItemTankTNK[] = {"LAV25_DZE4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankTNK",1},{"PartFueltank",6},{"ItemFuelBarrel",4}}};
	};
};

class LAV25_DZE4: LAV25_DZE3 {
	displayName = "$STR_VEH_NAME_LAV25++++";
	fuelCapacity = 550; // base 300	
};

class LAV25_HQ;
class LAV25_HQ_DZ: LAV25_HQ {
	scope = 2;
	displayName = "$STR_VEH_NAME_LAV25_HQ";

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

	class Turrets; // External class reference
	class MainTurret; // External class reference
	supplyRadius = 1.8;
	crewVulnerable = 1;
};

class LAV25_HQ_DZE: LAV25_HQ_DZ {
	class Turrets: Turrets {
		class MainTurret : MainTurret {
			magazines[] = {};
		};
	};
	class Upgrades {
		ItemTankORP[] = {"LAV25_HQ_DZE1",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankORP",1},{"PartEngine",6},{"PartGeneric",2},{"ItemScrews",2}}};
	};	
};

class LAV25_HQ_DZE1: LAV25_HQ_DZE {
	displayName = "$STR_VEH_NAME_LAV25_HQ+";
	original = "LAV25_HQ_DZE";
	maxspeed = 120; // base 100
	terrainCoef = 0.5; // base 1.5
	turnCoef = 5;  // base 4
	
	class Upgrades {
		ItemTankAVE[] = {"LAV25_HQ_DZE2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankAVE",1},{"equip_metal_sheet",8},{"ItemScrews",2}}};
	};
};

class LAV25_HQ_DZE2: LAV25_HQ_DZE1 {
	displayName = "$STR_VEH_NAME_LAV25_HQ++";
	armor = 220; // base 150
	damageResistance = 0.048; // base 0.02432
	
	class Upgrades {
		ItemTankLRK[] = {"LAV25_HQ_DZE3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class LAV25_HQ_DZE3: LAV25_HQ_DZE2 {
	displayName = "$STR_VEH_NAME_LAV25_HQ+++";
	transportMaxWeapons = 40;
	transportMaxMagazines = 200;
	transportmaxbackpacks = 12;
	
	class Upgrades {
		ItemTankTNK[] = {"LAV25_HQ_DZE4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankTNK",1},{"PartFueltank",6},{"ItemFuelBarrel",4}}};
	};
};

class LAV25_HQ_DZE4: LAV25_HQ_DZE3 {
	displayName = "$STR_VEH_NAME_LAV25_HQ++++";
	fuelCapacity = 550; // base 300	
};