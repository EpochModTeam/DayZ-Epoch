class MTVR;
class MTVR_DZE: MTVR {
	scope = 2;
	displayName = "$STR_VEH_NAME_MTVR_WOODLAND";
	vehicleClass = "DayZ Epoch Vehicles";
	crew = "";
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};
	supplyRadius = 2.6;

	class Upgrades {
		ItemTruckORP[] = {"MTVR_DZE1",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckORP",1},{"PartEngine",2},{"PartWheel",6},{"ItemScrews",2}}};
	};
};

class MTVR_DZE1: MTVR_DZE {
	displayName = "$STR_VEH_NAME_MTVR_WOODLAND+";
	original = "MTVR_DZE";
	maxspeed = 100; //base 80
	terrainCoef = 1.8;  // base 2.0
	turnCoef = 2.0;  // base 3.7
	
	class Upgrades {
		ItemTruckAVE[] = {"MTVR_DZE2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckAVE",1},{"PartGeneric",2},{"equip_metal_sheet",5},{"ItemScrews",4}}};
	};
};

class MTVR_DZE2: MTVR_DZE1 {
	displayName = "$STR_VEH_NAME_MTVR_WOODLAND++";
	armor = 70; //base 32
	damageResistance = 0.0255; // base 0.00243
	
	class Upgrades {
		ItemTruckLRK[] = {"MTVR_DZE3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class MTVR_DZE3: MTVR_DZE2 {
	displayName = "$STR_VEH_NAME_MTVR_WOODLAND+++";
	transportMaxWeapons = 100;
	transportMaxMagazines = 400;
	transportmaxbackpacks = 16;
	
	class Upgrades {
		ItemTruckTNK[] = {"MTVR_DZE4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckTNK",1},{"PartGeneric",4},{"PartFueltank",3},{"ItemFuelBarrel",2}}};
	};
};

class MTVR_DZE4: MTVR_DZE3 {
	displayName = "$STR_VEH_NAME_MTVR_WOODLAND++++";
	fuelCapacity = 615;	
};

class MTVR_DES_EP1;
class MTVR_DES_EP1_DZE : MTVR_DES_EP1 {
	scope = 2;
	displayName = "$STR_VEH_NAME_MTVR_DESERT";
	vehicleClass = "DayZ Epoch Vehicles";
	crew = "";
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};
	supplyRadius = 2.6;

	class Upgrades {
		ItemTruckORP[] = {"MTVR_DES_EP1_DZE1",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckORP",1},{"PartEngine",2},{"PartWheel",6},{"ItemScrews",2}}};
	};
};

class MTVR_DES_EP1_DZE1: MTVR_DES_EP1_DZE {
	displayName = "$STR_VEH_NAME_MTVR_DESERT+";
	original = "MTVR_DES_EP1_DZE";
	maxspeed = 100; //base 80
	terrainCoef = 1.8;  // base 2.0
	turnCoef = 2.0;  // base 3.7
	
	class Upgrades {
		ItemTruckAVE[] = {"MTVR_DES_EP1_DZE2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckAVE",1},{"PartGeneric",2},{"equip_metal_sheet",5},{"ItemScrews",4}}};
	};
};

class MTVR_DES_EP1_DZE2: MTVR_DES_EP1_DZE1 {
	displayName = "$STR_VEH_NAME_MTVR_DESERT++";
	armor = 70; //base 32
	damageResistance = 0.0255; // base 0.00243
	
	class Upgrades {
		ItemTruckLRK[] = {"MTVR_DES_EP1_DZE3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class MTVR_DES_EP1_DZE3: MTVR_DES_EP1_DZE2 {
	displayName = "$STR_VEH_NAME_MTVR_DESERT+++";
	transportMaxWeapons = 100;
	transportMaxMagazines = 400;
	transportmaxbackpacks = 16;
	
	class Upgrades {
		ItemTruckTNK[] = {"MTVR_DES_EP1_DZE4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckTNK",1},{"PartGeneric",4},{"PartFueltank",3},{"ItemFuelBarrel",2}}};
	};
};

class MTVR_DES_EP1_DZE4: MTVR_DES_EP1_DZE3 {
	displayName = "$STR_VEH_NAME_MTVR_DESERT++++";
	fuelCapacity = 615;	
};

class MtvrRefuel_DES_EP1;
class MtvrRefuel_DES_EP1_DZ: MtvrRefuel_DES_EP1 {
	scope = 2;
	crew = "";
	displayName = "$STR_VEH_NAME_MTVR_DESERT_REFUEL";
	vehicleClass = "DayZ Epoch Vehicles";
	typicalCargo[] = {};
	transportMaxWeapons = 10;
	transportMaxMagazines = 50;
	transportmaxbackpacks = 5;		
	class TransportMagazines{};
	class TransportWeapons{};
	transportFuel = 0; //Required to disable A2 built in auto refuel for fuel trucks
	fuelCapacity = 10000;
	supplyRadius = 2.6;
	
	class Upgrades {
		ItemTruckORP[] = {"MtvrRefuel_DES_EP1_DZE1",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckORP",1},{"PartEngine",2},{"PartWheel",6},{"ItemScrews",2}}};
	};
};
class MtvrRefuel_DES_EP1_DZE1: MtvrRefuel_DES_EP1_DZ {
	displayName = "$STR_VEH_NAME_MTVR_DESERT_REFUEL+";
	original = "MtvrRefuel_DES_EP1_DZ";
	maxspeed = 100; //base 80
	terrainCoef = 1.8;  // base 2.0
	turnCoef = 2.0;  // base 3.7
	
	class Upgrades {
		ItemTruckAVE[] = {"MtvrRefuel_DES_EP1_DZE2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckAVE",1},{"PartGeneric",2},{"equip_metal_sheet",5},{"ItemScrews",4}}};
	};
};
class MtvrRefuel_DES_EP1_DZE2: MtvrRefuel_DES_EP1_DZE1 {
	displayName = "$STR_VEH_NAME_MTVR_DESERT_REFUEL++";
	armor = 70; //base 32
	damageResistance = 0.0255; // base 0.00243
	
	class Upgrades {
		ItemTruckLRK[] = {"MtvrRefuel_DES_EP1_DZE3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};
class MtvrRefuel_DES_EP1_DZE3: MtvrRefuel_DES_EP1_DZE2 {
	displayName = "$STR_VEH_NAME_MTVR_DESERT_REFUEL+++";
	transportMaxWeapons = 20;
	transportMaxMagazines = 100;
	transportmaxbackpacks = 10;
	
	class Upgrades {
		ItemTruckTNK[] = {"MtvrRefuel_DES_EP1_DZE4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckTNK",1},{"PartGeneric",2},{"PartFueltank",2},{"ItemFuelBarrel",6}}};
	};
};
class MtvrRefuel_DES_EP1_DZE4: MtvrRefuel_DES_EP1_DZE3 {
	displayName = "$STR_VEH_NAME_MTVR_DESERT_REFUEL++++";
	fuelCapacity = 20000;
};

class MtvrRefuel;
class MtvrRefuel_DZ: MtvrRefuel {
	scope = 2;
	crew = "";
	displayName = "$STR_VEH_NAME_MTVR_WOODLAND_REFUEL";
	vehicleClass = "DayZ Epoch Vehicles";
	typicalCargo[] = {};
	transportMaxWeapons = 10;
	transportMaxMagazines = 50;
	transportmaxbackpacks = 5;		
	class TransportMagazines{};
	class TransportWeapons{};
	transportFuel = 0; //Required to disable A2 built in auto refuel for fuel trucks
	fuelCapacity = 10000;
	supplyRadius = 2.6;
	
	class Upgrades {
		ItemTruckORP[] = {"MtvrRefuel_DZE1",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckORP",1},{"PartEngine",2},{"PartWheel",6},{"ItemScrews",2}}};
	};
};
class MtvrRefuel_DZE1: MtvrRefuel_DZ {
	displayName = "$STR_VEH_NAME_MTVR_WOODLAND_REFUEL+";
	original = "MtvrRefuel_DZ";
	maxspeed = 100; //base 80
	terrainCoef = 1.8;  // base 2.0
	turnCoef = 2.0;  // base 3.7
	
	class Upgrades {
		ItemTruckAVE[] = {"MtvrRefuel_DZE2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckAVE",1},{"PartGeneric",2},{"equip_metal_sheet",5},{"ItemScrews",4}}};
	};
};
class MtvrRefuel_DZE2: MtvrRefuel_DZE1 {
	displayName = "$STR_VEH_NAME_MTVR_WOODLAND_REFUEL++";
	armor = 70; //base 32
	damageResistance = 0.0255; // base 0.00243
	
	class Upgrades {
		ItemTruckLRK[] = {"MtvrRefuel_DZE3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};
class MtvrRefuel_DZE3: MtvrRefuel_DZE2 {
	displayName = "$STR_VEH_NAME_MTVR_WOODLAND_REFUEL+++";
	transportMaxWeapons = 20;
	transportMaxMagazines = 100;
	transportmaxbackpacks = 10;
	
	class Upgrades {
		ItemTruckTNK[] = {"MtvrRefuel_DZE4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckTNK",1},{"PartGeneric",2},{"PartFueltank",2},{"ItemFuelBarrel",6}}};
	};
};
class MtvrRefuel_DZE4: MtvrRefuel_DZE3 {
	displayName = "$STR_VEH_NAME_MTVR_WOODLAND_REFUEL++++";
	fuelCapacity = 20000;
};

class MtvrRepair;
class MtvrRepair_DZE: MtvrRepair {
	scope = 2;
	crew = "";
	displayName = "$STR_VEH_NAME_MTVR_AMMO";
	vehicleClass = "DayZ Epoch Vehicles";
	typicalCargo[] = {};
	transportMaxWeapons = 25;
	transportMaxMagazines = 300;
	transportmaxbackpacks = 8;
	class TransportMagazines{};
	class TransportWeapons{};	
	transportRepair = 0;
	supplyRadius = 2.6;
	
	class Upgrades {
		ItemTruckORP[] = {"MtvrRepair_DZE1",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckORP",1},{"PartEngine",2},{"PartWheel",6},{"ItemScrews",2}}};
	};
};

class MtvrRepair_DZE1 : MtvrRepair_DZE {
	displayName = "$STR_VEH_NAME_MTVR_AMMO+";
	original = "MtvrRepair_DZE";
	maxspeed = 100;
	terrainCoef = 1.8;
	turnCoef = 2.0;
	
	class Upgrades {
		ItemTruckAVE[] = {"MtvrRepair_DZE2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckAVE",1},{"PartGeneric",2},{"equip_metal_sheet",5},{"ItemScrews",4}}};
	};
};

class MtvrRepair_DZE2: MtvrRepair_DZE1 {
	displayName = "$STR_VEH_NAME_MTVR_AMMO++";
	armor = 70;
	damageResistance = 0.0255;
	
	class Upgrades {
		ItemTruckLRK[] = {"MtvrRepair_DZE3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",6},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

class MtvrRepair_DZE3: MtvrRepair_DZE2 {
	displayName = "$STR_VEH_NAME_MTVR_AMMO+++";
	transportMaxWeapons = 50;
	transportMaxMagazines = 600;
	transportmaxbackpacks = 16;
	
	class Upgrades {
		ItemTruckTNK[] = {"MtvrRepair_DZE4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckTNK",1},{"PartGeneric",4},{"PartFueltank",3},{"ItemFuelBarrel",2}}};
	};
};

class MtvrRepair_DZE4: MtvrRepair_DZE3 {
	displayName = "$STR_VEH_NAME_MTVR_AMMO++++";
	fuelCapacity = 615;	
};

class MtvrReammo;
class MtvrReammo_DZE: MtvrReammo {
	scope = 2;
	crew = "";
	displayName = "$STR_VEH_NAME_MTVR_WEAPONS";
	vehicleClass = "DayZ Epoch Vehicles";
	typicalCargo[] = {};
	transportMaxWeapons = 75;
	transportMaxMagazines = 100;
	transportmaxbackpacks = 8;
	class TransportMagazines{};
	class TransportWeapons{};	
	transportAmmo = 0;
	supplyRadius = 2.6;
	
	class Upgrades {
		ItemTruckORP[] = {"MtvrReammo_DZE1",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckORP",1},{"PartEngine",2},{"PartWheel",6},{"ItemScrews",2}}};
	};
};

class MtvrReammo_DZE1 : MtvrReammo_DZE {
	displayName = "$STR_VEH_NAME_MTVR_WEAPONS+";
	original = "MtvrReammo_DZE";
	maxspeed = 100;
	terrainCoef = 1.8;
	turnCoef = 2.0;
	
	class Upgrades {
		ItemTruckAVE[] = {"MtvrReammo_DZE2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckAVE",1},{"PartGeneric",2},{"equip_metal_sheet",5},{"ItemScrews",4}}};
	};
};

class MtvrReammo_DZE2: MtvrReammo_DZE1 {
	displayName = "$STR_VEH_NAME_MTVR_WEAPONS++";
	armor = 70;
	damageResistance = 0.0255;
	
	class Upgrades {
		ItemTruckLRK[] = {"MtvrReammo_DZE3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",6},{"ItemScrews",2}}};
	};
};

class MtvrReammo_DZE3: MtvrReammo_DZE2 {
	displayName = "$STR_VEH_NAME_MTVR_WEAPONS+++";
	transportMaxWeapons = 150;
	transportMaxMagazines = 200;
	transportmaxbackpacks = 16;
	
	class Upgrades {
		ItemTruckTNK[] = {"MtvrReammo_DZE4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckTNK",1},{"PartGeneric",4},{"PartFueltank",3},{"ItemFuelBarrel",2}}};
	};
};

class MtvrReammo_DZE4: MtvrReammo_DZE3 {
	displayName = "$STR_VEH_NAME_MTVR_WEAPONS++++";
	fuelCapacity = 615;	
};

class MTVR_Open_DZE: MTVR {
	scope = 2;
	displayName = "$STR_VEH_NAME_MTVR_WOODLAND_OPEN";
	model = "\z\addons\dayz_epoch_v\vehicles\mtvr\dze_mtvr";
	picture = "\Ca\wheeled2\data\UI\Picture_MTVR_repair_CA.paa";
	vehicleClass = "DayZ Epoch Vehicles";
	crew = "";
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};
	transportSoldier = 2;
	supplyRadius = 2.6;

	class Upgrades {
		ItemTruckORP[] = {"MTVR_Open_DZE1",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckORP",1},{"PartEngine",2},{"PartWheel",6},{"ItemScrews",2}}};
	};
};

class MTVR_Open_DZE1: MTVR_Open_DZE {
	displayName = "$STR_VEH_NAME_MTVR_WOODLAND_OPEN+";
	original = "MTVR_Open_DZE";
	maxspeed = 100; //base 80
	terrainCoef = 1.8;  // base 2.0
	turnCoef = 2.0;  // base 3.7
	
	class Upgrades {
		ItemTruckAVE[] = {"MTVR_Open_DZE2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckAVE",1},{"PartGeneric",2},{"equip_metal_sheet",5},{"ItemScrews",4}}};
	};
};

class MTVR_Open_DZE2: MTVR_Open_DZE1 {
	displayName = "$STR_VEH_NAME_MTVR_WOODLAND_OPEN++";
	armor = 70; //base 32
	damageResistance = 0.0255; // base 0.00243
	
	class Upgrades {
		ItemTruckLRK[] = {"MTVR_Open_DZE3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class MTVR_Open_DZE3: MTVR_Open_DZE2 {
	displayName = "$STR_VEH_NAME_MTVR_WOODLAND_OPEN+++";
	transportMaxWeapons = 100;
	transportMaxMagazines = 400;
	transportmaxbackpacks = 16;
	
	class Upgrades {
		ItemTruckTNK[] = {"MTVR_Open_DZE4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckTNK",1},{"PartGeneric",4},{"PartFueltank",3},{"ItemFuelBarrel",2}}};
	};
};

class MTVR_Open_DZE4: MTVR_Open_DZE3 {
	displayName = "$STR_VEH_NAME_MTVR_WOODLAND_OPEN++++";
	fuelCapacity = 615;	
};