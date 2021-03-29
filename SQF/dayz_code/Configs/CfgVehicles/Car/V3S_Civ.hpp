class V3S_Base : Truck
{
	class Reflectors
	{
		class Left
		{
			angle = 120;
		};
		class Right
		{
			angle = 120;
		};
	};
};

class V3S_Civ;
class V3S_Civ_DZE : V3S_Civ {
	displayname = "$STR_VEH_NAME_V3S_CAMO_OPEN";
	vehicleClass = "DayZ Epoch Vehicles";
	picture = "\CA\wheeled_e\data\UI\Picture_V3S_open_CA.paa";
	crew = "";
	scope = 2;
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};
	supplyRadius = 2.6;
	
	class Upgrades {
		ItemTruckORP[] = {"V3S_Civ_DZE1",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckORP",1},{"PartEngine",2},{"PartWheel",6},{"ItemScrews",2}}};
	};
};

class V3S_Civ_DZE1: V3S_Civ_DZE {
	displayname = "$STR_VEH_NAME_V3S_CAMO_OPEN+";
	original = "V3S_Civ_DZE";
	maxspeed = 100; //base 80
	terrainCoef = 1.8;  // base 2.5
	turnCoef = 5;  // base 3.7
	
	class Upgrades {
		ItemTruckAVE[] = {"V3S_Civ_DZE2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckAVE",1},{"PartGeneric",2},{"equip_metal_sheet",5},{"ItemScrews",4}}};
	};
};

class V3S_Civ_DZE2: V3S_Civ_DZE1 {
	displayname = "$STR_VEH_NAME_V3S_CAMO_OPEN++";
	armor = 80; //base 40
	damageResistance = 0.0255; // base 0.00231
	
	class Upgrades {
		ItemTruckLRK[] = {"V3S_Civ_DZE3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class V3S_Civ_DZE3: V3S_Civ_DZE2 {
	displayname = "$STR_VEH_NAME_V3S_CAMO_OPEN+++";
	transportMaxWeapons = 100;
	transportMaxMagazines = 400;
	transportmaxbackpacks = 16;
	
	class Upgrades {
		ItemTruckTNK[] = {"V3S_Civ_DZE4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckTNK",1},{"PartGeneric",4},{"PartFueltank",3},{"ItemFuelBarrel",2}}};
	};
};

class V3S_Civ_DZE4: V3S_Civ_DZE3 {
	displayname = "$STR_VEH_NAME_V3S_CAMO_OPEN++++";
	fuelCapacity = 615;	
};

class V3S_Open_TK_CIV_EP1;
class V3S_Open_TK_CIV_EP1_DZE: V3S_Open_TK_CIV_EP1 {
	displayname = "$STR_VEH_NAME_V3S_CIVIL_OPEN";
	vehicleClass = "DayZ Epoch Vehicles";
	crew = "";
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};
	supplyRadius = 2.6;
	
	class Upgrades {
		ItemTruckORP[] = {"V3S_Open_TK_CIV_EP1_DZE1",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckORP",1},{"PartEngine",2},{"PartWheel",6},{"ItemScrews",2}}};
	};
};

class V3S_Open_TK_CIV_EP1_DZE1: V3S_Open_TK_CIV_EP1_DZE {
	displayname = "$STR_VEH_NAME_V3S_CIVIL_OPEN+";
	original = "V3S_Open_TK_CIV_EP1_DZE";
	maxspeed = 100; //base 80
	terrainCoef = 1.8;  // base 2.5
	turnCoef = 5;  // base 3.7
	
	class Upgrades {
		ItemTruckAVE[] = {"V3S_Open_TK_CIV_EP1_DZE2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckAVE",1},{"PartGeneric",2},{"equip_metal_sheet",5},{"ItemScrews",4}}};
	};
};

class V3S_Open_TK_CIV_EP1_DZE2: V3S_Open_TK_CIV_EP1_DZE1 {
	displayname = "$STR_VEH_NAME_V3S_CIVIL_OPEN++";
	armor = 80; //base 40
	damageResistance = 0.0255; // base 0.00231
	
	class Upgrades {
		ItemTruckLRK[] = {"V3S_Open_TK_CIV_EP1_DZE3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class V3S_Open_TK_CIV_EP1_DZE3: V3S_Open_TK_CIV_EP1_DZE2 {
	displayname = "$STR_VEH_NAME_V3S_CIVIL_OPEN+++";
	transportMaxWeapons = 100;
	transportMaxMagazines = 400;
	transportmaxbackpacks = 16;
	
	class Upgrades {
		ItemTruckTNK[] = {"V3S_Open_TK_CIV_EP1_DZE4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckTNK",1},{"PartGeneric",4},{"PartFueltank",3},{"ItemFuelBarrel",2}}};
	};
};

class V3S_Open_TK_CIV_EP1_DZE4: V3S_Open_TK_CIV_EP1_DZE3 {
	displayname = "$STR_VEH_NAME_V3S_CIVIL_OPEN++++";
	fuelCapacity = 615;	
};

class V3S_Open_TK_EP1;
class V3S_Open_TK_EP1_DZE: V3S_Open_TK_EP1 {
	displayname = "$STR_VEH_NAME_V3S_CAMO_OPEN";
	vehicleClass = "DayZ Epoch Vehicles";
	crew = "";
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};
	supplyRadius = 2.6;
	
	class Upgrades {
		ItemTruckORP[] = {"V3S_Open_TK_EP1_DZE1",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckORP",1},{"PartEngine",2},{"PartWheel",6},{"ItemScrews",2}}};
	};
};

class V3S_Open_TK_EP1_DZE1: V3S_Open_TK_EP1_DZE {
	displayname = "$STR_VEH_NAME_V3S_CAMO_OPEN+";
	original = "V3S_Open_TK_EP1_DZE";
	maxspeed = 100; //base 80
	terrainCoef = 1.8;  // base 2.5
	turnCoef = 5;  // base 3.7
	
	class Upgrades {
		ItemTruckAVE[] = {"V3S_Open_TK_EP1_DZE2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckAVE",1},{"PartGeneric",2},{"equip_metal_sheet",5},{"ItemScrews",4}}};
	};
};

class V3S_Open_TK_EP1_DZE2: V3S_Open_TK_EP1_DZE1 {
	displayname = "$STR_VEH_NAME_V3S_CAMO_OPEN++";
	armor = 80; //base 40
	damageResistance = 0.0255; // base 0.00231
	
	class Upgrades {
		ItemTruckLRK[] = {"V3S_Open_TK_EP1_DZE3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class V3S_Open_TK_EP1_DZE3: V3S_Open_TK_EP1_DZE2 {
	displayname = "$STR_VEH_NAME_V3S_CAMO_OPEN+++";
	transportMaxWeapons = 100;
	transportMaxMagazines = 400;
	transportmaxbackpacks = 16;
	
	class Upgrades {
		ItemTruckTNK[] = {"V3S_Open_TK_EP1_DZE4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckTNK",1},{"PartGeneric",4},{"PartFueltank",3},{"ItemFuelBarrel",2}}};
	};
};

class V3S_Open_TK_EP1_DZE4: V3S_Open_TK_EP1_DZE3 {
	displayname = "$STR_VEH_NAME_V3S_CAMO_OPEN++++";
	fuelCapacity = 615;	
};

class V3S_TK_EP1;
class V3S_TK_EP1_DZE: V3S_TK_EP1 {
	scope = 2;
	displayname = "$STR_VEH_NAME_V3S_WHITE";
	vehicleClass = "DayZ Epoch Vehicles";
	crew = "";
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};
	supplyRadius = 2.6;
	
	class Upgrades {
		ItemTruckORP[] = {"V3S_TK_EP1_DZE1",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckORP",1},{"PartEngine",2},{"PartWheel",6},{"ItemScrews",2}}};
	};
};

class V3S_TK_EP1_DZE1: V3S_TK_EP1_DZE {
	displayname = "$STR_VEH_NAME_V3S_WHITE+";
	original = "V3S_TK_EP1_DZE";
	maxspeed = 100; //base 80
	terrainCoef = 1.8;  // base 2.5
	turnCoef = 5;  // base 3.7
	
	class Upgrades {
		ItemTruckAVE[] = {"V3S_TK_EP1_DZE2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckAVE",1},{"PartGeneric",2},{"equip_metal_sheet",5},{"ItemScrews",4}}};
	};
};

class V3S_TK_EP1_DZE2: V3S_TK_EP1_DZE1 {
	displayname = "$STR_VEH_NAME_V3S_WHITE++";
	armor = 80; //base 40
	damageResistance = 0.0255; // base 0.00231
	
	class Upgrades {
		ItemTruckLRK[] = {"V3S_TK_EP1_DZE3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class V3S_TK_EP1_DZE3: V3S_TK_EP1_DZE2 {
	displayname = "$STR_VEH_NAME_V3S_WHITE+++";
	transportMaxWeapons = 100;
	transportMaxMagazines = 400;
	transportmaxbackpacks = 16;
	
	class Upgrades {
		ItemTruckTNK[] = {"V3S_TK_EP1_DZE4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckTNK",1},{"PartGeneric",4},{"PartFueltank",3},{"ItemFuelBarrel",2}}};
	};
};

class V3S_TK_EP1_DZE4: V3S_TK_EP1_DZE3 {
	displayname = "$STR_VEH_NAME_V3S_WHITE++++";
	fuelCapacity = 615;	
};

class V3S_Refuel_TK_GUE_EP1;
class V3S_Refuel_TK_GUE_EP1_DZ: V3S_Refuel_TK_GUE_EP1 {
	displayname = "$STR_VEH_NAME_V3S_FUEL";
	vehicleClass = "DayZ Epoch Vehicles";
	scope = 2;
	crew = "";
	typicalCargo[] = {};
	transportMaxWeapons = 10;
	transportMaxMagazines = 50;
	transportmaxbackpacks = 5;	
	class TransportMagazines{};
	class TransportWeapons{};
	supplyRadius = 2.6;
	transportFuel = 0; //Required to disable A2 built in auto refuel for fuel trucks
	fuelCapacity = 10000;
	
	class Upgrades {
		ItemTruckORP[] = {"V3S_Refuel_TK_GUE_EP1_DZE1",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckORP",1},{"PartEngine",2},{"PartWheel",6},{"ItemScrews",2}}};
	};
};
class V3S_Refuel_TK_GUE_EP1_DZE1: V3S_Refuel_TK_GUE_EP1_DZ {
	displayname = "$STR_VEH_NAME_V3S_FUEL+";
	original = "V3S_Refuel_TK_GUE_EP1_DZ";
	maxspeed = 100; //base 80
	terrainCoef = 1.8;  // base 2.0
	turnCoef = 5;  // base 3.7
	
	class Upgrades {
		ItemTruckAVE[] = {"V3S_Refuel_TK_GUE_EP1_DZE2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckAVE",1},{"PartGeneric",2},{"equip_metal_sheet",5},{"ItemScrews",4}}};
	};
};
class V3S_Refuel_TK_GUE_EP1_DZE2: V3S_Refuel_TK_GUE_EP1_DZE1 {
	displayname = "$STR_VEH_NAME_V3S_FUEL++";
	armor = 80; //base 40
	damageResistance = 0.0255; // base 0.00231
	
	class Upgrades {
		ItemTruckLRK[] = {"V3S_Refuel_TK_GUE_EP1_DZE3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};
class V3S_Refuel_TK_GUE_EP1_DZE3: V3S_Refuel_TK_GUE_EP1_DZE2 {
	displayname = "$STR_VEH_NAME_V3S_FUEL+++";
	transportMaxWeapons = 20;
	transportMaxMagazines = 100;
	transportmaxbackpacks = 10;
	
	class Upgrades {
		ItemTruckTNK[] = {"V3S_Refuel_TK_GUE_EP1_DZE4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckTNK",1},{"PartGeneric",2},{"PartFueltank",2},{"ItemFuelBarrel",6}}};
	};
};
class V3S_Refuel_TK_GUE_EP1_DZE4: V3S_Refuel_TK_GUE_EP1_DZE3 {
	displayname = "$STR_VEH_NAME_V3S_FUEL++++";
	fuelCapacity = 20000;
};

class V3S_Reammo_TK_GUE_EP1;
class V3S_RA_TK_GUE_EP1_DZE: V3S_Reammo_TK_GUE_EP1 {
	scope = 2;
	crew = "";
	typicalCargo[] = {};
	displayname = "$STR_VEH_NAME_V3S_ARMORED";
	vehicleClass = "DayZ Epoch Vehicles";
	class TransportMagazines {};
	class TransportWeapons {};
	transportAmmo = 0;
	supplyRadius = 2.6;
	armor = 120; //base 40
	damageResistance = 0.0555; // base 0.00231
	
	class Upgrades {
		ItemTruckORP[] = {"V3S_RA_TK_GUE_EP1_DZE1",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckORP",1},{"PartEngine",2},{"PartWheel",6},{"ItemScrews",2}}};
	};
};

class V3S_RA_TK_GUE_EP1_DZE1: V3S_RA_TK_GUE_EP1_DZE {
	displayname = "$STR_VEH_NAME_V3S_ARMORED+";
	original = "V3S_RA_TK_GUE_EP1_DZE";
	maxspeed = 100; //base 80
	terrainCoef = 1.8;  // base 2.5
	turnCoef = 5;  // base 3.7
	
	class Upgrades {
		ItemTruckAVE[] = {"V3S_RA_TK_GUE_EP1_DZE2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckAVE",1},{"equip_metal_sheet",8},{"ItemScrews",3}}};
	};
};

class V3S_RA_TK_GUE_EP1_DZE2: V3S_RA_TK_GUE_EP1_DZE1 {
	displayname = "$STR_VEH_NAME_V3S_ARMORED++";
	armor = 180; //base 120
	damageResistance = 0.0855; // base 0.0555
	
	class Upgrades {
		ItemTruckLRK[] = {"V3S_RA_TK_GUE_EP1_DZE3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class V3S_RA_TK_GUE_EP1_DZE3: V3S_RA_TK_GUE_EP1_DZE2 {
	displayname = "$STR_VEH_NAME_V3S_ARMORED+++";
	transportMaxWeapons = 100;
	transportMaxMagazines = 400;
	transportmaxbackpacks = 16;
	
	class Upgrades {
		ItemTruckTNK[] = {"V3S_RA_TK_GUE_EP1_DZE4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckTNK",1},{"PartGeneric",4},{"PartFueltank",3},{"ItemFuelBarrel",2}}};
	};
};

class V3S_RA_TK_GUE_EP1_DZE4: V3S_RA_TK_GUE_EP1_DZE3 {
	displayname = "$STR_VEH_NAME_V3S_ARMORED++++";
	fuelCapacity = 615;	
};

class V3S_Camper_DZE : V3S_RA_TK_GUE_EP1_DZE {
	vehicleClass = "DayZ Epoch Vehicles";
	model = "\z\addons\dayz_epoch_v\vehicles\V3S\dze_v3s_noback";
	picture = "\CA\wheeled_e\data\UI\Picture_V3S_open_CA.paa";
	displayname = "$STR_VEH_NAME_V3S_CAMPER";
	armor = 40;
	damageResistance = 0.00231;
	transportsoldier = 1;
	
	transportMaxWeapons = 10;
	transportMaxMagazines = 50;
	transportmaxbackpacks = 6;
	
	class Upgrades {
		ItemTruckORP[] = {"V3S_Camper_DZE1",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckORP",1},{"PartEngine",2},{"PartWheel",6},{"ItemScrews",2}}};
	};	
};

class V3S_Camper_DZE1: V3S_Camper_DZE {
	displayname = "$STR_VEH_NAME_V3S_CAMPER+";
	original = "V3S_Camper_DZE";
	maxspeed = 100; //base 80
	terrainCoef = 1.8;  // base 2.5
	turnCoef = 5;  // base 3.7
	
	class Upgrades {
		ItemTruckAVE[] = {"V3S_Camper_DZE2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckAVE",1},{"PartGeneric",2},{"equip_metal_sheet",5},{"ItemScrews",4}}};
	};
};

class V3S_Camper_DZE2: V3S_Camper_DZE1 {
	displayname = "$STR_VEH_NAME_V3S_CAMPER++";
	armor = 80; //base 40
	damageResistance = 0.0255; // base 0.00231
	
	class Upgrades {
		ItemTruckLRK[] = {"V3S_Camper_DZE3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class V3S_Camper_DZE3: V3S_Camper_DZE2 {
	displayname = "$STR_VEH_NAME_V3S_CAMPER+++";
	transportMaxWeapons = 20;
	transportMaxMagazines = 100;
	transportmaxbackpacks = 12;
	
	class Upgrades {
		ItemTruckTNK[] = {"V3S_Camper_DZE4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckTNK",1},{"PartGeneric",4},{"PartFueltank",3},{"ItemFuelBarrel",2}}};
	};
};

class V3S_Camper_DZE4: V3S_Camper_DZE3 {
	displayname = "$STR_VEH_NAME_V3S_CAMPER++++";
	fuelCapacity = 615;	
};
