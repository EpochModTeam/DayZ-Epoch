class KamazOpen;
class KamazOpen_DZE : KamazOpen {
	side = 1;
	faction = "USMC";
	displayName = "$STR_VEH_NAME_KAMAZ";
	vehicleClass = "DayZ Epoch Vehicles";
	crew = "";
	typicalCargo[] = {};
	class TransportMagazines{};
	class TransportWeapons{};
	supplyRadius = 2.6;

	class Upgrades {
		ItemTruckORP[] = {"KamazOpen_DZE1",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckORP",1},{"PartEngine",2},{"PartWheel",6},{"ItemScrews",2}}};
	};
};

class KamazOpen_DZE1: KamazOpen_DZE {
	displayName = "$STR_VEH_NAME_KAMAZ+";
	original = "KamazOpen_DZE";
	maxspeed = 100; //base 80
	terrainCoef = 1.8;  // base 2.0
	turnCoef = 5.0;  // base 3.7
	
	class Upgrades {
		ItemTruckAVE[] = {"KamazOpen_DZE2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckAVE",1},{"PartGeneric",2},{"equip_metal_sheet",5},{"ItemScrews",4}}};
	};
};

class KamazOpen_DZE2: KamazOpen_DZE1 {
	displayName = "$STR_VEH_NAME_KAMAZ++";
	armor = 70; //base 32
	damageResistance = 0.0255; // base 0.00243
	
	class Upgrades {
		ItemTruckLRK[] = {"KamazOpen_DZE3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class KamazOpen_DZE3: KamazOpen_DZE2 {
	displayName = "$STR_VEH_NAME_KAMAZ+++";
	transportMaxWeapons = 100;
	transportMaxMagazines = 400;
	transportmaxbackpacks = 16;
	
	class Upgrades {
		ItemTruckTNK[] = {"KamazOpen_DZE4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckTNK",1},{"PartGeneric",4},{"PartFueltank",3},{"ItemFuelBarrel",2}}};
	};
};

class KamazOpen_DZE4: KamazOpen_DZE3 {
	displayName = "$STR_VEH_NAME_KAMAZ++++";
	fuelCapacity = 615;	
};

class Kamaz;
class Kamaz_DZE: Kamaz {
	side = 1;
	faction = "USMC";
	displayName = "$STR_VEH_NAME_KAMAZ_COVERT";
	vehicleClass = "DayZ Epoch Vehicles";
	crew = "";
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};
	supplyRadius = 2.6;
	
	class Upgrades {		
		ItemTruckORP[] = {"Kamaz_DZE1",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckORP",1},{"PartEngine",2},{"PartWheel",6},{"ItemScrews",2}}};
	};
};

class Kamaz_DZE1: Kamaz_DZE {
	displayName = "$STR_VEH_NAME_KAMAZ_COVERT+";
	original = "Kamaz_DZE";
	maxspeed = 100; //base 80
	terrainCoef = 1.8;  // base 2.0
	turnCoef = 5.0;  // base 3.7
	
	class Upgrades {
		ItemTruckAVE[] = {"Kamaz_DZE2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckAVE",1},{"PartGeneric",2},{"equip_metal_sheet",5},{"ItemScrews",4}}};
	};
};

class Kamaz_DZE2: Kamaz_DZE1 {
	displayName = "$STR_VEH_NAME_KAMAZ_COVERT++";
	armor = 70; //base 32
	damageResistance = 0.0255; // base 0.00243
	class Upgrades {
		ItemTruckLRK[] = {"Kamaz_DZE3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class Kamaz_DZE3: Kamaz_DZE2 {
	displayName = "$STR_VEH_NAME_KAMAZ_COVERT+++";
	transportMaxWeapons = 100;
	transportMaxMagazines = 400;
	transportmaxbackpacks = 16;
	
	class Upgrades {
		ItemTruckTNK[] = {"Kamaz_DZE4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckTNK",1},{"PartGeneric",4},{"PartFueltank",3},{"ItemFuelBarrel",2}}};
	};
};

class Kamaz_DZE4: Kamaz_DZE3 {
	displayName = "$STR_VEH_NAME_KAMAZ_COVERT++++";
	fuelCapacity = 615;
};

class KamazRefuel;
class KamazRefuel_DZ: KamazRefuel {
	side = 1;
	faction = "USMC";
	displayName = "$STR_VEH_NAME_KAMAZ_REFUEL";
	vehicleClass = "DayZ Epoch Vehicles";
	crew = "";
	typicalCargo[] = {};
	transportMaxWeapons = 10;
	transportMaxMagazines = 50;
	transportmaxbackpacks = 5;	
	class TransportMagazines{};
	class TransportWeapons{};
	fuelCapacity = 10400;
	transportFuel = 0; //Required to disable A2 built in auto refuel for fuel trucks
	supplyRadius = 2.6;
	
	class Upgrades {
		ItemTruckORP[] = {"KamazRefuel_DZE1",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckORP",1},{"PartEngine",2},{"PartWheel",6},{"ItemScrews",2}}};
	};
};
class KamazRefuel_DZE1: KamazRefuel_DZ {
	displayName = "$STR_VEH_NAME_KAMAZ_REFUEL+";
	original = "KamazRefuel_DZ";
	maxspeed = 100; //base 80
	terrainCoef = 1.8;  // base 2.0
	turnCoef = 5.0;  // base 3.7
	
	class Upgrades {
		ItemTruckAVE[] = {"KamazRefuel_DZE2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckAVE",1},{"PartGeneric",2},{"equip_metal_sheet",5},{"ItemScrews",4}}};
	};
};
class KamazRefuel_DZE2: KamazRefuel_DZE1 {
	displayName = "$STR_VEH_NAME_KAMAZ_REFUEL++";
	armor = 70; //base 32
	damageResistance = 0.0255; // base 0.00243
	
	class Upgrades {
		ItemTruckLRK[] = {"KamazRefuel_DZE3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};
class KamazRefuel_DZE3: KamazRefuel_DZE2 {
	displayName = "$STR_VEH_NAME_KAMAZ_REFUEL+++";
	transportMaxWeapons = 20;
	transportMaxMagazines = 100;
	transportmaxbackpacks = 10;
	
	class Upgrades {
		ItemTruckTNK[] = {"KamazRefuel_DZE4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckTNK",1},{"PartGeneric",2},{"PartFueltank",2},{"ItemFuelBarrel",6}}};
	};
};
class KamazRefuel_DZE4: KamazRefuel_DZE3 {
	displayName = "$STR_VEH_NAME_KAMAZ_REFUEL++++";
	fuelCapacity = 20000;
};

class KamazRepair;
class KamazRepair_DZE : KamazRepair {
	side = 1;
	faction = "USMC";
	displayName = "$STR_VEH_NAME_KAMAZ_AMMO";
	vehicleClass = "DayZ Epoch Vehicles";
	crew = "";
	typicalCargo[] = {};
	transportMaxWeapons = 25;
	transportMaxMagazines = 300;
	transportmaxbackpacks = 8;
	class TransportMagazines{};
	class TransportWeapons{};	
	supplyRadius = 2.6;
	transportRepair = 0;
	
	class Upgrades {
		ItemTruckORP[] = {"KamazRepair_DZE1",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckORP",1},{"PartEngine",2},{"PartWheel",6},{"ItemScrews",2}}};
	};
};

class KamazRepair_DZE1 : KamazRepair_DZE {
	displayName = "$STR_VEH_NAME_KAMAZ_AMMO+";
	original = "KamazRepair_DZE";
	maxspeed = 100;
	terrainCoef = 1.8;
	turnCoef = 5.0;  // base 3.7
	
	class Upgrades {
		ItemTruckAVE[] = {"KamazRepair_DZE2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckAVE",1},{"PartGeneric",2},{"equip_metal_sheet",5},{"ItemScrews",4}}};
	};
};

class KamazRepair_DZE2: KamazRepair_DZE1 {
	displayName = "$STR_VEH_NAME_KAMAZ_AMMO++";
	armor = 70;
	damageResistance = 0.0255;
	
	class Upgrades {
		ItemTruckLRK[] = {"KamazRepair_DZE3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",6},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

class KamazRepair_DZE3: KamazRepair_DZE2 {
	displayName = "$STR_VEH_NAME_KAMAZ_AMMO+++";
	transportMaxWeapons = 50;
	transportMaxMagazines = 600;
	transportmaxbackpacks = 16;
	
	class Upgrades {
		ItemTruckTNK[] = {"KamazRepair_DZE4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckTNK",1},{"PartGeneric",4},{"PartFueltank",3},{"ItemFuelBarrel",2}}};
	};
};

class KamazRepair_DZE4: KamazRepair_DZE3 {
	displayName = "$STR_VEH_NAME_KAMAZ_AMMO++++";
	fuelCapacity = 615;	
};

class KamazReammo;
class KamazReammo_DZE : KamazReammo {
	side = 1;
	faction = "USMC";
	displayName = "$STR_VEH_NAME_KAMAZ_WEAPONS";
	vehicleClass = "DayZ Epoch Vehicles";
	crew = "";
	typicalCargo[] = {};
	transportMaxWeapons = 75;
	transportMaxMagazines = 100;
	transportmaxbackpacks = 8;	
	class TransportMagazines{};
	class TransportWeapons{};	
	supplyRadius = 2.6;
	transportAmmo = 0;
	
	class Upgrades {
		ItemTruckORP[] = {"KamazReammo_DZE1",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckORP",1},{"PartEngine",2},{"PartWheel",6},{"ItemScrews",2}}};
	};
};

class KamazReammo_DZE1 : KamazReammo_DZE {
	displayName = "$STR_VEH_NAME_KAMAZ_WEAPONS+";
	original = "KamazReammo_DZE";
	maxspeed = 100;
	terrainCoef = 1.8;
	turnCoef = 5.0;  // base 3.7
	
	class Upgrades {
		ItemTruckAVE[] = {"KamazReammo_DZE2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckAVE",1},{"PartGeneric",2},{"equip_metal_sheet",5},{"ItemScrews",4}}};
	};
};

class KamazReammo_DZE2: KamazReammo_DZE1 {
	displayName = "$STR_VEH_NAME_KAMAZ_WEAPONS++";
	armor = 70;
	damageResistance = 0.0255;
	
	class Upgrades {
		ItemTruckLRK[] = {"KamazReammo_DZE3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",6},{"ItemScrews",2}}};
	};
};

class KamazReammo_DZE3: KamazReammo_DZE2 {
	displayName = "$STR_VEH_NAME_KAMAZ_WEAPONS+++";
	transportMaxWeapons = 150;
	transportMaxMagazines = 200;
	transportmaxbackpacks = 16;
	
	class Upgrades {
		ItemTruckTNK[] = {"KamazReammo_DZE4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckTNK",1},{"PartGeneric",4},{"PartFueltank",3},{"ItemFuelBarrel",2}}};
	};
};

class KamazReammo_DZE4: KamazReammo_DZE3 {
	displayName = "$STR_VEH_NAME_KAMAZ_WEAPONS++++";
	fuelCapacity = 615;	
};

class KamazOpen_Winter_DZE : KamazOpen_DZE {
	displayName = "$STR_VEH_NAME_KAMAZ_WINTER";
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\kamaz\kamaz_kab_winter_co.paa","\dayz_epoch_c\skins\kamaz\kamaz_kuz_winter_co.paa"};

	class Upgrades {
		ItemTruckORP[] = {"KamazOpen_Winter_DZE1",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckORP",1},{"PartEngine",2},{"PartWheel",6},{"ItemScrews",2}}};
	};
};

class KamazOpen_Winter_DZE1: KamazOpen_Winter_DZE {
	displayName = "$STR_VEH_NAME_KAMAZ_WINTER+";
	original = "KamazOpen_Winter_DZE";
	maxspeed = 100; //base 80
	terrainCoef = 1.8;  // base 2.0
	turnCoef = 5.0;  // base 3.7
	
	class Upgrades {
		ItemTruckAVE[] = {"KamazOpen_Winter_DZE2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckAVE",1},{"PartGeneric",2},{"equip_metal_sheet",5},{"ItemScrews",4}}};
	};
};

class KamazOpen_Winter_DZE2: KamazOpen_Winter_DZE1 {
	displayName = "$STR_VEH_NAME_KAMAZ_WINTER++";
	armor = 70; //base 32
	damageResistance = 0.0255; // base 0.00243
	
	class Upgrades {
		ItemTruckLRK[] = {"KamazOpen_Winter_DZE3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class KamazOpen_Winter_DZE3: KamazOpen_Winter_DZE2 {
	displayName = "$STR_VEH_NAME_KAMAZ_WINTER+++";
	transportMaxWeapons = 100;
	transportMaxMagazines = 400;
	transportmaxbackpacks = 16;
	
	class Upgrades {
		ItemTruckTNK[] = {"KamazOpen_Winter_DZE4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckTNK",1},{"PartGeneric",4},{"PartFueltank",3},{"ItemFuelBarrel",2}}};
	};
};

class KamazOpen_Winter_DZE4: KamazOpen_Winter_DZE3 {
	displayName = "$STR_VEH_NAME_KAMAZ_WINTER++++";
	fuelCapacity = 615;	
};

class Kamaz_Winter_DZE: Kamaz_DZE {
	displayName = "$STR_VEH_NAME_KAMAZ_COVERT_WINTER";
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\kamaz\kamaz_kab_winter_co.paa","\dayz_epoch_c\skins\kamaz\kamaz_kuz_winter_co.paa"};
	
	class Upgrades {		
		ItemTruckORP[] = {"Kamaz_Winter_DZE1",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckORP",1},{"PartEngine",2},{"PartWheel",6},{"ItemScrews",2}}};
	};
};

class Kamaz_Winter_DZE1: Kamaz_Winter_DZE {
	displayName = "$STR_VEH_NAME_KAMAZ_COVERT_WINTER+";
	original = "Kamaz_Winter_DZE";
	maxspeed = 100; //base 80
	terrainCoef = 1.8;  // base 2.0
	turnCoef = 5.0;  // base 3.7
	
	class Upgrades {
		ItemTruckAVE[] = {"Kamaz_Winter_DZE2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckAVE",1},{"PartGeneric",2},{"equip_metal_sheet",5},{"ItemScrews",4}}};
	};
};

class Kamaz_Winter_DZE2: Kamaz_Winter_DZE1 {
	displayName = "$STR_VEH_NAME_KAMAZ_COVERT_WINTER++";
	armor = 70; //base 32
	damageResistance = 0.0255; // base 0.00243
	class Upgrades {
		ItemTruckLRK[] = {"Kamaz_Winter_DZE3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class Kamaz_Winter_DZE3: Kamaz_Winter_DZE2 {
	displayName = "$STR_VEH_NAME_KAMAZ_COVERT_WINTER+++";
	transportMaxWeapons = 100;
	transportMaxMagazines = 400;
	transportmaxbackpacks = 16;
	
	class Upgrades {
		ItemTruckTNK[] = {"Kamaz_Winter_DZE4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckTNK",1},{"PartGeneric",4},{"PartFueltank",3},{"ItemFuelBarrel",2}}};
	};
};

class Kamaz_Winter_DZE4: Kamaz_Winter_DZE3 {
	displayName = "$STR_VEH_NAME_KAMAZ_COVERT_WINTER++++";
	fuelCapacity = 615;
};

class KamazRefuel_Winter_DZ: KamazRefuel_DZ {
	displayName = "$STR_VEH_NAME_KAMAZ_REFUEL_WINTER";
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\kamaz\kamaz_kab_winter_co.paa","\dayz_epoch_c\skins\kamaz\kamaz_fuel_winter_co.paa"};
	
	class Upgrades {
		ItemTruckORP[] = {"KamazRefuel_Winter_DZE1",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckORP",1},{"PartEngine",2},{"PartWheel",6},{"ItemScrews",2}}};
	};
};

class KamazRefuel_Winter_DZE1: KamazRefuel_Winter_DZ {
	displayName = "$STR_VEH_NAME_KAMAZ_REFUEL_WINTER+";
	original = "KamazRefuel_Winter_DZ";
	maxspeed = 100; //base 80
	terrainCoef = 1.8;  // base 2.0
	turnCoef = 5.0;  // base 3.7
	
	class Upgrades {
		ItemTruckAVE[] = {"KamazRefuel_Winter_DZE2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckAVE",1},{"PartGeneric",2},{"equip_metal_sheet",5},{"ItemScrews",4}}};
	};
};

class KamazRefuel_Winter_DZE2: KamazRefuel_Winter_DZE1 {
	displayName = "$STR_VEH_NAME_KAMAZ_REFUEL_WINTER++";
	armor = 70; //base 32
	damageResistance = 0.0255; // base 0.00243
	
	class Upgrades {
		ItemTruckLRK[] = {"KamazRefuel_Winter_DZE3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class KamazRefuel_Winter_DZE3: KamazRefuel_Winter_DZE2 {
	displayName = "$STR_VEH_NAME_KAMAZ_REFUEL_WINTER+++";
	transportMaxWeapons = 100;
	transportMaxMagazines = 400;
	transportmaxbackpacks = 16;
	
	class Upgrades {
		ItemTruckTNK[] = {"KamazRefuel_Winter_DZE4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckTNK",1},{"PartGeneric",2},{"PartFueltank",2},{"ItemFuelBarrel",6}}};
	};
};

class KamazRefuel_Winter_DZE4: KamazRefuel_Winter_DZE3 {
	displayName = "$STR_VEH_NAME_KAMAZ_REFUEL_WINTER++++";
	fuelCapacity = 20000;
};

class KamazRepair_Winter_DZE : KamazRepair_DZE {
	displayName = "$STR_VEH_NAME_KAMAZ_AMMO_WINTER";
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\kamaz\kamaz_kab_winter_co.paa","\dayz_epoch_c\skins\kamaz\kamaz_repair_winter_co.paa"};
	
	class Upgrades {
		ItemTruckORP[] = {"KamazRepair_Winter_DZE1",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckORP",1},{"PartEngine",2},{"PartWheel",6},{"ItemScrews",2}}};
	};
};

class KamazRepair_Winter_DZE1 : KamazRepair_Winter_DZE {
	displayName = "$STR_VEH_NAME_KAMAZ_AMMO_WINTER+";
	original = "KamazRepair_Winter_DZE";
	maxspeed = 100;
	terrainCoef = 1.8;
	turnCoef = 5.0;  // base 3.7
	
	class Upgrades {
		ItemTruckAVE[] = {"KamazRepair_Winter_DZE2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckAVE",1},{"PartGeneric",2},{"equip_metal_sheet",5},{"ItemScrews",4}}};
	};
};

class KamazRepair_Winter_DZE2: KamazRepair_Winter_DZE1 {
	displayName = "$STR_VEH_NAME_KAMAZ_AMMO_WINTER++";
	armor = 70;
	damageResistance = 0.0255;
	
	class Upgrades {
		ItemTruckLRK[] = {"KamazRepair_Winter_DZE3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",6},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

class KamazRepair_Winter_DZE3: KamazRepair_Winter_DZE2 {
	displayName = "$STR_VEH_NAME_KAMAZ_AMMO_WINTER+++";
	transportMaxWeapons = 50;
	transportMaxMagazines = 600;
	transportmaxbackpacks = 16;
	
	class Upgrades {
		ItemTruckTNK[] = {"KamazRepair_Winter_DZE4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckTNK",1},{"PartGeneric",4},{"PartFueltank",3},{"ItemFuelBarrel",2}}};
	};
};

class KamazRepair_Winter_DZE4: KamazRepair_Winter_DZE3 {
	displayName = "$STR_VEH_NAME_KAMAZ_AMMO_WINTER++++";
	fuelCapacity = 615;	
};

class KamazReammo_Winter_DZE : KamazReammo_DZE {
	displayName = "$STR_VEH_NAME_KAMAZ_WEAPONS_WINTER";
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\kamaz\kamaz_kab_winter_co.paa","\dayz_epoch_c\skins\kamaz\kamaz_kuz_winter_co.paa"};
	
	class Upgrades {
		ItemTruckORP[] = {"KamazReammo_Winter_DZE1",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckORP",1},{"PartEngine",2},{"PartWheel",6},{"ItemScrews",2}}};
	};
};

class KamazReammo_Winter_DZE1 : KamazReammo_Winter_DZE {
	displayName = "$STR_VEH_NAME_KAMAZ_WEAPONS_WINTER+";
	original = "KamazReammo_Winter_DZE";
	maxspeed = 100;
	terrainCoef = 1.8;
	turnCoef = 5.0;  // base 3.7
	
	class Upgrades {
		ItemTruckAVE[] = {"KamazReammo_Winter_DZE2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckAVE",1},{"PartGeneric",2},{"equip_metal_sheet",5},{"ItemScrews",4}}};
	};
};

class KamazReammo_Winter_DZE2: KamazReammo_Winter_DZE1 {
	displayName = "$STR_VEH_NAME_KAMAZ_WEAPONS_WINTER++";
	armor = 70;
	damageResistance = 0.0255;
	
	class Upgrades {
		ItemTruckLRK[] = {"KamazReammo_Winter_DZE3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",6},{"ItemScrews",2}}};
	};
};

class KamazReammo_Winter_DZE3: KamazReammo_Winter_DZE2 {
	displayName = "$STR_VEH_NAME_KAMAZ_WEAPONS_WINTER+++";
	transportMaxWeapons = 150;
	transportMaxMagazines = 200;
	transportmaxbackpacks = 16;
	
	class Upgrades {
		ItemTruckTNK[] = {"KamazReammo_Winter_DZE4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckTNK",1},{"PartGeneric",4},{"PartFueltank",3},{"ItemFuelBarrel",2}}};
	};
};

class KamazReammo_Winter_DZE4: KamazReammo_Winter_DZE3 {
	displayName = "$STR_VEH_NAME_KAMAZ_WEAPONS_WINTER++++";
	fuelCapacity = 615;	
};