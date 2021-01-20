class Ural_INS;
class Ural_INS_DZE: Ural_INS {
	scope = 2;
	crew = "";
	displayName = "$STR_VEH_NAME_URAL_INS";
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};
	vehicleClass = "DayZ Epoch Vehicles";
	supplyRadius = 2.6;

	class Upgrades {
		ItemTruckORP[] = {"Ural_INS_DZE1",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckORP",1},{"PartEngine",2},{"PartWheel",6},{"ItemScrews",2}}};
	};
};

class Ural_INS_DZE1: Ural_INS_DZE {
	displayName = "$STR_VEH_NAME_URAL_INS+";
	original = "Ural_INS_DZE";
	maxspeed = 100; //base 80
	terrainCoef = 1.8;  // base 2.0
	turnCoef = 2.0;  // base 3.7
	
	class Upgrades {
		ItemTruckAVE[] = {"Ural_INS_DZE2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckAVE",1},{"PartGeneric",2},{"equip_metal_sheet",5},{"ItemScrews",4}}};
	};
};

class Ural_INS_DZE2: Ural_INS_DZE1 {
	displayName = "$STR_VEH_NAME_URAL_INS++";
	armor = 70; //base 32
	damageResistance = 0.0255; // base 0.00243
	
	class Upgrades {
		ItemTruckLRK[] = {"Ural_INS_DZE3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class Ural_INS_DZE3: Ural_INS_DZE2 {
	displayName = "$STR_VEH_NAME_URAL_INS+++";
	transportMaxWeapons = 100;
	transportMaxMagazines = 400;
	transportmaxbackpacks = 16;
	
	class Upgrades {
		ItemTruckTNK[] = {"Ural_INS_DZE4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckTNK",1},{"PartGeneric",4},{"PartFueltank",3},{"ItemFuelBarrel",2}}};
	};
};

class Ural_INS_DZE4: Ural_INS_DZE3 {
	displayName = "$STR_VEH_NAME_URAL_INS++++";
	fuelCapacity = 615;	
};

class Ural_RUST_DZE: Ural_INS {
	scope = 2;
	crew = "";
	displayName = "$STR_VEH_NAME_URAL_RUST";
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\ural\ural_kabina_wrecked_co.paa","dayz_epoch_c\skins\ural\ural_plachta_wrecked_co.paa"};
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};
	vehicleClass = "DayZ Epoch Vehicles";
	supplyRadius = 2.6;

	class Upgrades {
		ItemTruckORP[] = {"Ural_RUST_DZE1",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckORP",1},{"PartEngine",2},{"PartWheel",6},{"ItemScrews",2}}};
	};
};

class Ural_RUST_DZE1: Ural_RUST_DZE {
	displayName = "$STR_VEH_NAME_URAL_RUST+";
	original = "Ural_RUST_DZE";
	maxspeed = 100; //base 80
	terrainCoef = 1.8;  // base 2.0
	turnCoef = 2.0;  // base 3.7
	
	class Upgrades {
		ItemTruckAVE[] = {"Ural_RUST_DZE2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckAVE",1},{"PartGeneric",2},{"equip_metal_sheet",5},{"ItemScrews",4}}};
	};
};

class Ural_RUST_DZE2: Ural_RUST_DZE1 {
	displayName = "$STR_VEH_NAME_URAL_RUST++";
	armor = 70; //base 32
	damageResistance = 0.0255; // base 0.00243
	
	class Upgrades {
		ItemTruckLRK[] = {"Ural_RUST_DZE3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class Ural_RUST_DZE3: Ural_RUST_DZE2 {
	displayName = "$STR_VEH_NAME_URAL_RUST+++";
	transportMaxWeapons = 100;
	transportMaxMagazines = 400;
	transportmaxbackpacks = 16;
	
	class Upgrades {
		ItemTruckTNK[] = {"Ural_RUST_DZE4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckTNK",1},{"PartGeneric",4},{"PartFueltank",3},{"ItemFuelBarrel",2}}};
	};
};

class Ural_RUST_DZE4: Ural_RUST_DZE3 {
	displayName = "$STR_VEH_NAME_URAL_RUST++++";
	fuelCapacity = 615;	
};

class Ural_CDF;
class Ural_CDF_DZE: Ural_CDF {
	scope = 2;
	crew = "";
	displayName = "$STR_VEH_NAME_URAL_CDF";
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};
	vehicleClass = "DayZ Epoch Vehicles";
	supplyRadius = 2.6;

	class Upgrades {
		ItemTruckORP[] = {"URAL_CDF_DZE1",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckORP",1},{"PartEngine",2},{"PartWheel",6},{"ItemScrews",2}}};
	};
};

class URAL_CDF_DZE1: URAL_CDF_DZE {
	displayName = "$STR_VEH_NAME_URAL_CDF+";
	original = "URAL_CDF_DZE";
	maxspeed = 100; //base 80
	terrainCoef = 1.8;  // base 2.0
	turnCoef = 2.0;  // base 3.7
	
	class Upgrades {
		ItemTruckAVE[] = {"URAL_CDF_DZE2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckAVE",1},{"PartGeneric",2},{"equip_metal_sheet",5},{"ItemScrews",4}}};
	};
};

class URAL_CDF_DZE2: URAL_CDF_DZE1 {
	displayName = "$STR_VEH_NAME_URAL_CDF++";
	armor = 70; //base 32
	damageResistance = 0.0255; // base 0.00243
	
	class Upgrades {
		ItemTruckLRK[] = {"URAL_CDF_DZE3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class URAL_CDF_DZE3: URAL_CDF_DZE2 {
	displayName = "$STR_VEH_NAME_URAL_CDF+++";
	transportMaxWeapons = 100;
	transportMaxMagazines = 400;
	transportmaxbackpacks = 16;
	
	class Upgrades {
		ItemTruckTNK[] = {"URAL_CDF_DZE4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckTNK",1},{"PartGeneric",4},{"PartFueltank",3},{"ItemFuelBarrel",2}}};
	};
};

class URAL_CDF_DZE4: URAL_CDF_DZE3 {
	displayName = "$STR_VEH_NAME_URAL_CDF++++";
	fuelCapacity = 615;	
};

class UralOpen_CDF;
class UralOpen_CDF_DZE: UralOpen_CDF {
	scope = 2;
	crew = "";
	displayName = "$STR_VEH_NAME_URAL_CDF_OPEN";
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};
	vehicleClass = "DayZ Epoch Vehicles";
	supplyRadius = 2.6;

	class Upgrades {
		ItemTruckORP[] = {"UralOpen_CDF_DZE1",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckORP",1},{"PartEngine",2},{"PartWheel",6},{"ItemScrews",2}}};
	};
};

class UralOpen_CDF_DZE1: UralOpen_CDF_DZE {
	displayName = "$STR_VEH_NAME_URAL_CDF_OPEN+";
	original = "UralOpen_CDF_DZE";
	maxspeed = 100; //base 80
	terrainCoef = 1.8;  // base 2.0
	turnCoef = 2.0;  // base 3.7
	
	class Upgrades {
		ItemTruckAVE[] = {"UralOpen_CDF_DZE2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckAVE",1},{"PartGeneric",2},{"equip_metal_sheet",5},{"ItemScrews",4}}};
	};
};

class UralOpen_CDF_DZE2: UralOpen_CDF_DZE1 {
	displayName = "$STR_VEH_NAME_URAL_CDF_OPEN++";
	armor = 70; //base 32
	damageResistance = 0.0255; // base 0.00243
	
	class Upgrades {
		ItemTruckLRK[] = {"UralOpen_CDF_DZE3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class UralOpen_CDF_DZE3: UralOpen_CDF_DZE2 {
	displayName = "$STR_VEH_NAME_URAL_CDF_OPEN+++";
	transportMaxWeapons = 100;
	transportMaxMagazines = 400;
	transportmaxbackpacks = 16;
	
	class Upgrades {
		ItemTruckTNK[] = {"UralOpen_CDF_DZE4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckTNK",1},{"PartGeneric",4},{"PartFueltank",3},{"ItemFuelBarrel",2}}};
	};
};

class UralOpen_CDF_DZE4: UralOpen_CDF_DZE3 {
	displayName = "$STR_VEH_NAME_URAL_CDF_OPEN++++";
	fuelCapacity = 615;	
};

class Ural_TK_CIV_EP1;
class Ural_TK_CIV_EP1_DZE: Ural_TK_CIV_EP1 {
	scope = 2;
	crew = "";
	displayName = "$STR_VEH_NAME_URAL_TK";
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};
	vehicleClass = "DayZ Epoch Vehicles";
	supplyRadius = 2.6;

	class Upgrades {
		ItemTruckORP[] = {"Ural_TK_CIV_EP1_DZE1",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckORP",1},{"PartEngine",2},{"PartWheel",6},{"ItemScrews",2}}};
	};
};

class Ural_TK_CIV_EP1_DZE1: Ural_TK_CIV_EP1_DZE {
	displayName = "$STR_VEH_NAME_URAL_TK+";
	original = "Ural_TK_CIV_EP1_DZE";
	maxspeed = 100; //base 80
	terrainCoef = 1.8;  // base 2.0
	turnCoef = 2.0;  // base 3.7
	
	class Upgrades {
		ItemTruckAVE[] = {"Ural_TK_CIV_EP1_DZE2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckAVE",1},{"PartGeneric",2},{"equip_metal_sheet",5},{"ItemScrews",4}}};
	};
};

class Ural_TK_CIV_EP1_DZE2: Ural_TK_CIV_EP1_DZE1 {
	displayName = "$STR_VEH_NAME_URAL_TK++";
	armor = 70; //base 32
	damageResistance = 0.0255; // base 0.00243
	
	class Upgrades {
		ItemTruckLRK[] = {"Ural_TK_CIV_EP1_DZE3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class Ural_TK_CIV_EP1_DZE3: Ural_TK_CIV_EP1_DZE2 {
	displayName = "$STR_VEH_NAME_URAL_TK+++";
	transportMaxWeapons = 100;
	transportMaxMagazines = 400;
	transportmaxbackpacks = 16;
	
	class Upgrades {
		ItemTruckTNK[] = {"Ural_TK_CIV_EP1_DZE4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckTNK",1},{"PartGeneric",4},{"PartFueltank",3},{"ItemFuelBarrel",2}}};
	};
};

class Ural_TK_CIV_EP1_DZE4: Ural_TK_CIV_EP1_DZE3 {
	displayName = "$STR_VEH_NAME_URAL_TK++++";
	fuelCapacity = 615;	
};

class Ural_UN_EP1;
class Ural_UN_EP1_DZE: Ural_UN_EP1 {
	scope = 2;
	crew = "";
	displayName = "$STR_VEH_NAME_URAL_UN";
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};
	vehicleClass = "DayZ Epoch Vehicles";
	supplyRadius = 2.6;

	class Upgrades {
		ItemTruckORP[] = {"Ural_UN_EP1_DZE1",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckORP",1},{"PartEngine",2},{"PartWheel",6},{"ItemScrews",2}}};
	};
};

class Ural_UN_EP1_DZE1: Ural_UN_EP1_DZE {
	displayName = "$STR_VEH_NAME_URAL_UN+";
	original = "Ural_UN_EP1_DZE";
	maxspeed = 100; //base 80
	terrainCoef = 1.8;  // base 2.0
	turnCoef = 2.0;  // base 3.7
	
	class Upgrades {
		ItemTruckAVE[] = {"Ural_UN_EP1_DZE2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckAVE",1},{"PartGeneric",2},{"equip_metal_sheet",5},{"ItemScrews",4}}};
	};
};

class Ural_UN_EP1_DZE2: Ural_UN_EP1_DZE1 {
	displayName = "$STR_VEH_NAME_URAL_UN++";
	armor = 70; //base 32
	damageResistance = 0.0255; // base 0.00243
	
	class Upgrades {
		ItemTruckLRK[] = {"Ural_UN_EP1_DZE3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class Ural_UN_EP1_DZE3: Ural_UN_EP1_DZE2 {
	displayName = "$STR_VEH_NAME_URAL_UN+++";
	transportMaxWeapons = 100;
	transportMaxMagazines = 400;
	transportmaxbackpacks = 16;
	
	class Upgrades {
		ItemTruckTNK[] = {"Ural_UN_EP1_DZE4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckTNK",1},{"PartGeneric",4},{"PartFueltank",3},{"ItemFuelBarrel",2}}};
	};
};

class Ural_UN_EP1_DZE4: Ural_UN_EP1_DZE3 {
	displayName = "$STR_VEH_NAME_URAL_UN++++";
	fuelCapacity = 615;	
};

class UralCivil;
class UralCivil_DZE : UralCivil {
	scope = 2;
	displayName = "$STR_VEH_NAME_URAL_CIVIL";
	crew = "";
	typicalCargo[] = {};
	class TransportMagazines{};
	class TransportWeapons{};
	vehicleClass = "DayZ Epoch Vehicles";
	supplyRadius = 2.6;

	class Upgrades {
		ItemTruckORP[] = {"UralCivil_DZE1",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckORP",1},{"PartEngine",2},{"PartWheel",6},{"ItemScrews",2}}};
	};
};

class UralCivil_DZE1: UralCivil_DZE {
	displayName = "$STR_VEH_NAME_URAL_CIVIL+";
	original = "UralCivil_DZE";
	maxspeed = 100; //base 80
	terrainCoef = 1.8;  // base 2.0
	turnCoef = 2.0;  // base 3.7
	
	class Upgrades {
		ItemTruckAVE[] = {"UralCivil_DZE2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckAVE",1},{"PartGeneric",2},{"equip_metal_sheet",5},{"ItemScrews",4}}};
	};
};

class UralCivil_DZE2: UralCivil_DZE1 {
	displayName = "$STR_VEH_NAME_URAL_CIVIL++";
	armor = 70; //base 32
	damageResistance = 0.0255; // base 0.00243
	
	class Upgrades {
		ItemTruckLRK[] = {"UralCivil_DZE3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class UralCivil_DZE3: UralCivil_DZE2 {
	displayName = "$STR_VEH_NAME_URAL_CIVIL+++";
	transportMaxWeapons = 100;
	transportMaxMagazines = 400;
	transportmaxbackpacks = 16;
	
	class Upgrades {
		ItemTruckTNK[] = {"UralCivil_DZE4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckTNK",1},{"PartGeneric",4},{"PartFueltank",3},{"ItemFuelBarrel",2}}};
	};
};

class UralCivil_DZE4: UralCivil_DZE3 {
	displayName = "$STR_VEH_NAME_URAL_CIVIL++++";
	fuelCapacity = 615;	
};

class UralCivil2;
class UralCivil2_DZE : UralCivil2 {
	displayName = "$STR_VEH_NAME_URAL_CIVIL_OPEN";
	picture = "\Ca\wheeled\data\ico\Ural_Open_CA.paa";
	scope = 2;
	crew = "";
	typicalCargo[] = {};
	class TransportMagazines{};
	class TransportWeapons{};
	vehicleClass = "DayZ Epoch Vehicles";
	supplyRadius = 2.6;

	class Upgrades {
		ItemTruckORP[] = {"UralCivil2_DZE1",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckORP",1},{"PartEngine",2},{"PartWheel",6},{"ItemScrews",2}}};
	};
};

class UralCivil2_DZE1: UralCivil2_DZE {
	displayName = "$STR_VEH_NAME_URAL_CIVIL_OPEN+";
	original = "UralCivil2_DZE";
	maxspeed = 100; //base 80
	terrainCoef = 1.8;  // base 2.0
	turnCoef = 2.0;  // base 3.7
	
	class Upgrades {
		ItemTruckAVE[] = {"UralCivil2_DZE2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckAVE",1},{"PartGeneric",2},{"equip_metal_sheet",5},{"ItemScrews",4}}};
	};
};

class UralCivil2_DZE2: UralCivil2_DZE1 {
	displayName = "$STR_VEH_NAME_URAL_CIVIL_OPEN++";
	armor = 70; //base 32
	damageResistance = 0.0255; // base 0.00243
	
	class Upgrades {
		ItemTruckLRK[] = {"UralCivil2_DZE3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class UralCivil2_DZE3: UralCivil2_DZE2 {
	displayName = "$STR_VEH_NAME_URAL_CIVIL_OPEN+++";
	transportMaxWeapons = 100;
	transportMaxMagazines = 400;
	transportmaxbackpacks = 16;
	
	class Upgrades {
		ItemTruckTNK[] = {"UralCivil2_DZE4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckTNK",1},{"PartGeneric",4},{"PartFueltank",3},{"ItemFuelBarrel",2}}};
	};
};

class UralCivil2_DZE4: UralCivil2_DZE3 {
	displayName = "$STR_VEH_NAME_URAL_CIVIL_OPEN++++";
	fuelCapacity = 615;	
};

class UralSupply_TK_EP1;
class UralSupply_TK_EP1_DZE : UralSupply_TK_EP1 {
	displayName = "$STR_VEH_NAME_URAL_CIVIL_OPEN";
	scope = 2;
	crew = "";
	typicalCargo[] = {};
	class TransportMagazines{};
	class TransportWeapons{};
	vehicleClass = "DayZ Epoch Vehicles";
	supplyRadius = 2.6;

	class Upgrades {
		ItemTruckORP[] = {"UralSupply_TK_EP1_DZE1",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckORP",1},{"PartEngine",2},{"PartWheel",6},{"ItemScrews",2}}};
	};
};

class UralSupply_TK_EP1_DZE1: UralSupply_TK_EP1_DZE {
	displayName = "$STR_VEH_NAME_URAL_CIVIL_OPEN+";
	original = "UralSupply_TK_EP1_DZE";
	maxspeed = 100; //base 80
	terrainCoef = 1.8;  // base 2.0
	turnCoef = 2.0;  // base 3.7
	
	class Upgrades {
		ItemTruckAVE[] = {"UralSupply_TK_EP1_DZE2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckAVE",1},{"PartGeneric",2},{"equip_metal_sheet",5},{"ItemScrews",4}}};
	};
};

class UralSupply_TK_EP1_DZE2: UralSupply_TK_EP1_DZE1 {
	displayName = "$STR_VEH_NAME_URAL_CIVIL_OPEN++";
	armor = 70; //base 32
	damageResistance = 0.0255; // base 0.00243
	
	class Upgrades {
		ItemTruckLRK[] = {"UralSupply_TK_EP1_DZE3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class UralSupply_TK_EP1_DZE3: UralSupply_TK_EP1_DZE2 {
	displayName = "$STR_VEH_NAME_URAL_CIVIL_OPEN+++";
	transportMaxWeapons = 100;
	transportMaxMagazines = 400;
	transportmaxbackpacks = 16;
	
	class Upgrades {
		ItemTruckTNK[] = {"UralSupply_TK_EP1_DZE4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckTNK",1},{"PartGeneric",4},{"PartFueltank",3},{"ItemFuelBarrel",2}}};
	};
};

class UralSupply_TK_EP1_DZE4: UralSupply_TK_EP1_DZE3 {
	displayName = "$STR_VEH_NAME_URAL_CIVIL_OPEN++++";
	fuelCapacity = 615;	
};

class UralRefuel_TK_EP1;
class UralRefuel_TK_EP1_DZ: UralRefuel_TK_EP1 {
	scope = 2;
	displayName = "$STR_VEH_NAME_URAL_FUEL";
	crew = "";
	typicalCargo[] = {};
	transportMaxWeapons = 10;
	transportMaxMagazines = 50;
	transportmaxbackpacks = 5;	
	class TransportMagazines{};
	class TransportWeapons{};
	transportFuel = 0; //Required to disable A2 built in auto refuel for fuel trucks
	fuelCapacity = 10000;
	vehicleClass = "DayZ Epoch Vehicles";
	supplyRadius = 2.6;
	
	class Upgrades {
		ItemTruckORP[] = {"UralRefuel_TK_EP1_DZE1",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckORP",1},{"PartEngine",2},{"PartWheel",6},{"ItemScrews",2}}};
	};
};
class UralRefuel_TK_EP1_DZE1: UralRefuel_TK_EP1_DZ {
	displayName = "$STR_VEH_NAME_URAL_FUEL+";
	original = "UralRefuel_TK_EP1_DZ";
	maxspeed = 100; //base 80
	terrainCoef = 1.8;  // base 2.0
	turnCoef = 2.0;  // base 3.7
	
	class Upgrades {
		ItemTruckAVE[] = {"UralRefuel_TK_EP1_DZE2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckAVE",1},{"PartGeneric",2},{"equip_metal_sheet",5},{"ItemScrews",4}}};
	};
};
class UralRefuel_TK_EP1_DZE2: UralRefuel_TK_EP1_DZE1 {
	displayName = "$STR_VEH_NAME_URAL_FUEL++";
	armor = 70; //base 32
	damageResistance = 0.0255; // base 0.00243
	
	class Upgrades {
		ItemTruckLRK[] = {"UralRefuel_TK_EP1_DZE3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};
class UralRefuel_TK_EP1_DZE3: UralRefuel_TK_EP1_DZE2 {
	displayName = "$STR_VEH_NAME_URAL_FUEL+++";
	transportMaxWeapons = 20;
	transportMaxMagazines = 100;
	transportmaxbackpacks = 10;	
	
	class Upgrades {
		ItemTruckTNK[] = {"UralRefuel_TK_EP1_DZE4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckTNK",1},{"PartGeneric",2},{"PartFueltank",2},{"ItemFuelBarrel",6}}};
	};
};
class UralRefuel_TK_EP1_DZE4: UralRefuel_TK_EP1_DZE3 {
	displayName = "$STR_VEH_NAME_URAL_FUEL++++";
	fuelCapacity = 20000;
};

class UralRefuel_CDF;
class UralRefuel_CDF_DZ: UralRefuel_CDF {
	scope = 2;
	displayName = "$STR_VEH_NAME_URAL_FUEL_CDF";
	crew = "";
	typicalCargo[] = {};
	transportMaxWeapons = 10;
	transportMaxMagazines = 50;
	transportmaxbackpacks = 5;	
	class TransportMagazines{};
	class TransportWeapons{};
	transportFuel = 0; //Required to disable A2 built in auto refuel for fuel trucks
	fuelCapacity = 10000;
	vehicleClass = "DayZ Epoch Vehicles";
	supplyRadius = 2.6;
	
	class Upgrades {
		ItemTruckORP[] = {"UralRefuel_CDF_DZE1",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckORP",1},{"PartEngine",2},{"PartWheel",6},{"ItemScrews",2}}};
	};
};
class UralRefuel_CDF_DZE1: UralRefuel_CDF_DZ {
	displayName = "$STR_VEH_NAME_URAL_FUEL_CDF+";
	original = "UralRefuel_CDF_DZ";
	maxspeed = 100; //base 80
	terrainCoef = 1.8;  // base 2.0
	turnCoef = 2.0;  // base 3.7
	
	class Upgrades {
		ItemTruckAVE[] = {"UralRefuel_CDF_DZE2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckAVE",1},{"PartGeneric",2},{"equip_metal_sheet",5},{"ItemScrews",4}}};
	};
};
class UralRefuel_CDF_DZE2: UralRefuel_CDF_DZE1 {
	displayName = "$STR_VEH_NAME_URAL_FUEL_CDF++";
	armor = 70; //base 32
	damageResistance = 0.0255; // base 0.00243
	
	class Upgrades {
		ItemTruckLRK[] = {"UralRefuel_CDF_DZE3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};
class UralRefuel_CDF_DZE3: UralRefuel_CDF_DZE2 {
	displayName = "$STR_VEH_NAME_URAL_FUEL_CDF+++";
	transportMaxWeapons = 20;
	transportMaxMagazines = 100;
	transportmaxbackpacks = 10;	
	
	class Upgrades {
		ItemTruckTNK[] = {"UralRefuel_CDF_DZE4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckTNK",1},{"PartGeneric",2},{"PartFueltank",2},{"ItemFuelBarrel",6}}};
	};
};
class UralRefuel_CDF_DZE4: UralRefuel_CDF_DZE3 {
	displayName = "$STR_VEH_NAME_URAL_FUEL_CDF++++";
	fuelCapacity = 20000;
};

class UralReammo_CDF;
class UralReammo_CDF_DZE: UralReammo_CDF {
	scope = 2;
	displayName = "$STR_VEH_NAME_URAL_WEAPONS";
	crew = "";
	typicalCargo[] = {};
	transportMaxWeapons = 75;
	transportMaxMagazines = 100;
	transportmaxbackpacks = 8;
	class TransportMagazines{};
	class TransportWeapons{};
	transportAmmo = 0;
	vehicleClass = "DayZ Epoch Vehicles";
	supplyRadius = 2.6;
	
	class Upgrades {
		ItemTruckORP[] = {"UralReammo_CDF_DZE1",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckORP",1},{"PartEngine",2},{"PartWheel",6},{"ItemScrews",2}}};
	};
};

class UralReammo_CDF_DZE1 : UralReammo_CDF_DZE {
	displayName = "$STR_VEH_NAME_URAL_WEAPONS+";
	original = "UralReammo_CDF_DZE";
	maxspeed = 100;
	terrainCoef = 1.8;
	turnCoef = 2.0;
	
	class Upgrades {
		ItemTruckAVE[] = {"UralReammo_CDF_DZE2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckAVE",1},{"PartGeneric",2},{"equip_metal_sheet",5},{"ItemScrews",4}}};
	};
};

class UralReammo_CDF_DZE2: UralReammo_CDF_DZE1 {
	displayName = "$STR_VEH_NAME_URAL_WEAPONS++";
	armor = 70;
	damageResistance = 0.0255;
	
	class Upgrades {
		ItemTruckLRK[] = {"UralReammo_CDF_DZE3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",6},{"ItemScrews",2}}};
	};
};

class UralReammo_CDF_DZE3: UralReammo_CDF_DZE2 {
	displayName = "$STR_VEH_NAME_URAL_WEAPONS+++";
	transportMaxWeapons = 150;
	transportMaxMagazines = 200;
	transportmaxbackpacks = 16;
	
	class Upgrades {
		ItemTruckTNK[] = {"UralReammo_CDF_DZE4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckTNK",1},{"PartGeneric",4},{"PartFueltank",3},{"ItemFuelBarrel",2}}};
	};
};

class UralReammo_CDF_DZE4: UralReammo_CDF_DZE3 {
	displayName = "$STR_VEH_NAME_URAL_WEAPONS++++";
	fuelCapacity = 615;	
};

class UralRepair_CDF;
class UralRepair_CDF_DZE: UralRepair_CDF {
	scope = 2;
	displayName = "$STR_VEH_NAME_URAL_AMMO";
	crew = "";
	typicalCargo[] = {};
	transportMaxWeapons = 25;
	transportMaxMagazines = 300;
	transportmaxbackpacks = 8;
	class TransportMagazines{};
	class TransportWeapons{};
	transportRepair = 0;
	vehicleClass = "DayZ Epoch Vehicles";
	supplyRadius = 2.6;
	
	class Upgrades {
		ItemTruckORP[] = {"UralRepair_CDF_DZE1",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckORP",1},{"PartEngine",2},{"PartWheel",6},{"ItemScrews",2}}};
	};
};

class UralRepair_CDF_DZE1 : UralRepair_CDF_DZE {
	displayName = "$STR_VEH_NAME_URAL_AMMO+";
	original = "UralRepair_CDF_DZE";
	maxspeed = 100;
	terrainCoef = 1.8;
	turnCoef = 2.0;
	
	class Upgrades {
		ItemTruckAVE[] = {"UralRepair_CDF_DZE2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckAVE",1},{"PartGeneric",2},{"equip_metal_sheet",5},{"ItemScrews",4}}};
	};
};

class UralRepair_CDF_DZE2: UralRepair_CDF_DZE1 {
	displayName = "$STR_VEH_NAME_URAL_AMMO++";
	armor = 70;
	damageResistance = 0.0255;
	
	class Upgrades {
		ItemTruckLRK[] = {"UralRepair_CDF_DZE3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",6},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

class UralRepair_CDF_DZE3: UralRepair_CDF_DZE2 {
	displayName = "$STR_VEH_NAME_URAL_AMMO+++";
	transportMaxWeapons = 50;
	transportMaxMagazines = 600;
	transportmaxbackpacks = 16;
	
	class Upgrades {
		ItemTruckTNK[] = {"UralRepair_CDF_DZE4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckTNK",1},{"PartGeneric",4},{"PartFueltank",3},{"ItemFuelBarrel",2}}};
	};
};

class UralRepair_CDF_DZE4: UralRepair_CDF_DZE3 {
	displayName = "$STR_VEH_NAME_URAL_AMMO++++";
	fuelCapacity = 615;	
};

class Ural_WINTER_DZE: Ural_INS_DZE {
	displayName = "$STR_VEH_NAME_URAL_WINTER";
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\ural\ural_winter_co.paa","\dayz_epoch_c\skins\ural\ural_plachta_winter_co.paa"};

	class Upgrades {
		ItemTruckORP[] = {"Ural_WINTER_DZE1",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckORP",1},{"PartEngine",2},{"PartWheel",6},{"ItemScrews",2}}};
	};
};

class Ural_WINTER_DZE1: Ural_WINTER_DZE {
	displayName = "$STR_VEH_NAME_URAL_WINTER+";
	original = "Ural_WINTER_DZE";
	maxspeed = 100; //base 80
	terrainCoef = 1.8;  // base 2.0
	turnCoef = 2.0;  // base 3.7
	
	class Upgrades {
		ItemTruckAVE[] = {"Ural_WINTER_DZE2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckAVE",1},{"PartGeneric",2},{"equip_metal_sheet",5},{"ItemScrews",4}}};
	};
};

class Ural_WINTER_DZE2: Ural_WINTER_DZE1 {
	displayName = "$STR_VEH_NAME_URAL_WINTER++";
	armor = 70; //base 32
	damageResistance = 0.0255; // base 0.00243
	
	class Upgrades {
		ItemTruckLRK[] = {"Ural_WINTER_DZE3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class Ural_WINTER_DZE3: Ural_WINTER_DZE2 {
	displayName = "$STR_VEH_NAME_URAL_WINTER+++";
	transportMaxWeapons = 100;
	transportMaxMagazines = 400;
	transportmaxbackpacks = 16;
	
	class Upgrades {
		ItemTruckTNK[] = {"Ural_WINTER_DZE4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckTNK",1},{"PartGeneric",4},{"PartFueltank",3},{"ItemFuelBarrel",2}}};
	};
};

class Ural_WINTER_DZE4: Ural_WINTER_DZE3 {
	displayName = "$STR_VEH_NAME_URAL_WINTER++++";
	fuelCapacity = 615;	
};

class UralOpen_WINTER_DZE: UralOpen_CDF_DZE {
	displayName = "$STR_VEH_NAME_URAL_WINTER_OPEN";
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\ural\ural_winter_co.paa","\dayz_epoch_c\skins\ural\ural_open_winter_co.paa"};

	class Upgrades {
		ItemTruckORP[] = {"UralOpen_WINTER_DZE1",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckORP",1},{"PartEngine",2},{"PartWheel",6},{"ItemScrews",2}}};
	};
};

class UralOpen_WINTER_DZE1: UralOpen_WINTER_DZE {
	displayName = "$STR_VEH_NAME_URAL_WINTER_OPEN+";
	original = "UralOpen_WINTER_DZE";
	maxspeed = 100; //base 80
	terrainCoef = 1.8;  // base 2.0
	turnCoef = 2.0;  // base 3.7
	
	class Upgrades {
		ItemTruckAVE[] = {"UralOpen_WINTER_DZE2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckAVE",1},{"PartGeneric",2},{"equip_metal_sheet",5},{"ItemScrews",4}}};
	};
};

class UralOpen_WINTER_DZE2: UralOpen_WINTER_DZE1 {
	displayName = "$STR_VEH_NAME_URAL_WINTER_OPEN++";
	armor = 70; //base 32
	damageResistance = 0.0255; // base 0.00243
	
	class Upgrades {
		ItemTruckLRK[] = {"UralOpen_WINTER_DZE3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class UralOpen_WINTER_DZE3: UralOpen_WINTER_DZE2 {
	displayName = "$STR_VEH_NAME_URAL_WINTER_OPEN+++";
	transportMaxWeapons = 100;
	transportMaxMagazines = 400;
	transportmaxbackpacks = 16;
	
	class Upgrades {
		ItemTruckTNK[] = {"UralOpen_WINTER_DZE4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckTNK",1},{"PartGeneric",4},{"PartFueltank",3},{"ItemFuelBarrel",2}}};
	};
};

class UralOpen_WINTER_DZE4: UralOpen_WINTER_DZE3 {
	displayName = "$STR_VEH_NAME_URAL_WINTER_OPEN++++";
	fuelCapacity = 615;	
};

class UralRefuel_WINTER_DZ: UralRefuel_TK_EP1_DZ {
	displayName = "$STR_VEH_NAME_URAL_FUEL_WINTER";
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\ural\ural_winter_co.paa","\dayz_epoch_c\skins\ural\ural_open_winter_co.paa","\dayz_epoch_c\skins\ural\ural_fuel_winter_co.paa"};
	
	class Upgrades {
		ItemTruckORP[] = {"UralRefuel_WINTER_DZE1",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckORP",1},{"PartEngine",2},{"PartWheel",6},{"ItemScrews",2}}};
	};
};
class UralRefuel_WINTER_DZE1: UralRefuel_WINTER_DZ {
	displayName = "$STR_VEH_NAME_URAL_FUEL_WINTER+";
	original = "UralRefuel_WINTER_DZ";
	maxspeed = 100; //base 80
	terrainCoef = 1.8;  // base 2.0
	turnCoef = 2.0;  // base 3.7
	
	class Upgrades {
		ItemTruckAVE[] = {"UralRefuel_WINTER_DZE2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckAVE",1},{"PartGeneric",2},{"equip_metal_sheet",5},{"ItemScrews",4}}};
	};
};
class UralRefuel_WINTER_DZE2: UralRefuel_WINTER_DZE1 {
	displayName = "$STR_VEH_NAME_URAL_FUEL_WINTER++";
	armor = 70; //base 32
	damageResistance = 0.0255; // base 0.00243
	
	class Upgrades {
		ItemTruckLRK[] = {"UralRefuel_WINTER_DZE3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};
class UralRefuel_WINTER_DZE3: UralRefuel_WINTER_DZE2 {
	displayName = "$STR_VEH_NAME_URAL_FUEL_WINTER+++";
	transportMaxWeapons = 100;
	transportMaxMagazines = 400;
	transportmaxbackpacks = 16;
	
	class Upgrades {
		ItemTruckTNK[] = {"UralRefuel_WINTER_DZE4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckTNK",1},{"PartGeneric",2},{"PartFueltank",2},{"ItemFuelBarrel",6}}};
	};
};
class UralRefuel_WINTER_DZE4: UralRefuel_WINTER_DZE3 {
	displayName = "$STR_VEH_NAME_URAL_FUEL_WINTER++++";
	fuelCapacity = 20000;
};

class UralReammo_WINTER_DZE: UralReammo_CDF_DZE {
	displayName = "$STR_VEH_NAME_URAL_WEAPONS_WINTER";
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\ural\ural_winter_co.paa","\dayz_epoch_c\skins\ural\ural_plachta_winter_co.paa"};
	
	class Upgrades {
		ItemTruckORP[] = {"UralReammo_WINTER_DZE1",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckORP",1},{"PartEngine",2},{"PartWheel",6},{"ItemScrews",2}}};
	};
};

class UralReammo_WINTER_DZE1 : UralReammo_WINTER_DZE {
	displayName = "$STR_VEH_NAME_URAL_WEAPONS_WINTER+";
	original = "UralReammo_WINTER_DZE";
	maxspeed = 100;
	terrainCoef = 1.8;
	turnCoef = 2.0;
	
	class Upgrades {
		ItemTruckAVE[] = {"UralReammo_WINTER_DZE2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckAVE",1},{"PartGeneric",2},{"equip_metal_sheet",5},{"ItemScrews",4}}};
	};
};

class UralReammo_WINTER_DZE2: UralReammo_WINTER_DZE1 {
	displayName = "$STR_VEH_NAME_URAL_WEAPONS_WINTER++";
	armor = 70;
	damageResistance = 0.0255;
	
	class Upgrades {
		ItemTruckLRK[] = {"UralReammo_WINTER_DZE3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",6},{"ItemScrews",2}}};
	};
};

class UralReammo_WINTER_DZE3: UralReammo_WINTER_DZE2 {
	displayName = "$STR_VEH_NAME_URAL_WEAPONS_WINTER+++";
	transportMaxWeapons = 150;
	transportMaxMagazines = 200;
	transportmaxbackpacks = 16;
	
	class Upgrades {
		ItemTruckTNK[] = {"UralReammo_WINTER_DZE4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckTNK",1},{"PartGeneric",4},{"PartFueltank",3},{"ItemFuelBarrel",2}}};
	};
};

class UralReammo_WINTER_DZE4: UralReammo_WINTER_DZE3 {
	displayName = "$STR_VEH_NAME_URAL_WEAPONS_WINTER++++";
	fuelCapacity = 615;	
};

class UralRepair_WINTER_DZE: UralRepair_CDF_DZE {
	displayName = "$STR_VEH_NAME_URAL_AMMO_WINTER";
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\ural\ural_winter_co.paa","\dayz_epoch_c\skins\ural\ural_repair_winter_co.paa"};
	
	class Upgrades {
		ItemTruckORP[] = {"UralRepair_WINTER_DZE1",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckORP",1},{"PartEngine",2},{"PartWheel",6},{"ItemScrews",2}}};
	};
};

class UralRepair_WINTER_DZE1 : UralRepair_WINTER_DZE {
	displayName = "$STR_VEH_NAME_URAL_AMMO_WINTER+";
	original = "UralRepair_WINTER_DZE";
	maxspeed = 100;
	terrainCoef = 1.8;
	turnCoef = 2.0;
	
	class Upgrades {
		ItemTruckAVE[] = {"UralRepair_WINTER_DZE2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckAVE",1},{"PartGeneric",2},{"equip_metal_sheet",5},{"ItemScrews",4}}};
	};
};

class UralRepair_WINTER_DZE2: UralRepair_WINTER_DZE1 {
	displayName = "$STR_VEH_NAME_URAL_AMMO_WINTER++";
	armor = 70;
	damageResistance = 0.0255;
	
	class Upgrades {
		ItemTruckLRK[] = {"UralRepair_WINTER_DZE3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",6},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

class UralRepair_WINTER_DZE3: UralRepair_WINTER_DZE2 {
	displayName = "$STR_VEH_NAME_URAL_AMMO_WINTER+++";
	transportMaxWeapons = 50;
	transportMaxMagazines = 600;
	transportmaxbackpacks = 16;
	
	class Upgrades {
		ItemTruckTNK[] = {"UralRepair_WINTER_DZE4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckTNK",1},{"PartGeneric",4},{"PartFueltank",3},{"ItemFuelBarrel",2}}};
	};
};

class UralRepair_WINTER_DZE4: UralRepair_WINTER_DZE3 {
	displayName = "$STR_VEH_NAME_URAL_AMMO_WINTER++++";
	fuelCapacity = 615;	
};