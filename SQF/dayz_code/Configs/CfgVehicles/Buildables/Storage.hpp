class Gunrack1;
class GunRack_DZ: Gunrack1
{
	armor = 200;
	scope = 2;
	displayName = $STR_EPOCH_GUNRACK;
	vehicleClass = "DayZ Epoch Buildables";
	transportMaxWeapons = 20;
	transportMaxMagazines = 10;
	transportMaxBackpacks = 0;
	offset[] = {0,2,0};
	removeoutput[] = {{"ItemGunRackKit",1}};
	nounderground = 0;
	upgradeBuilding[] = {"GunRack2_DZ",{"ItemToolbox","Handsaw_DZE","Hammer_DZE"},{{"ItemPlank",4},{"equip_nails",1}}};	
};

class GunRack2_DZ: Gunrack1
{
	armor = 400;
	scope = 2;
	displayName = $STR_EPOCH_GUNRACK2;
	vehicleClass = "DayZ Epoch Buildables";
	transportMaxWeapons = 40;
	transportMaxMagazines = 20;
	transportMaxBackpacks = 0;
	offset[] = {0,2,0};
	removeoutput[] = {{"ItemGunRackKit2",1}};
	nounderground = 0;
	constructioncount = 2;
};

class Fort_Crate_wood;
class WoodCrate_DZ: Fort_Crate_wood
{
	scope = 2;
	destrType = "DestructBuilding";
	offset[] = {0,2,0};
	armor = 200;
	displayName = $STR_EPOCH_WOODCRATE;
	vehicleClass = "DayZ Epoch Buildables";
	transportMaxMagazines = 50;
	transportMaxWeapons = 5;
	transportMaxBackpacks = 1;
	removeoutput[] = {{"ItemWoodCrateKit",1}};
	nounderground = 0;
	upgradeBuilding[] = {"WoodCrate2_DZ",{"ItemToolbox","Handsaw_DZE","Hammer_DZE"},{{"PartWoodPlywood",2},{"ItemPlank",2},{"equip_nails",1}}};	
};

class WoodCrate2_DZ: Fort_Crate_wood
{
	scope = 2;
	destrType = "DestructBuilding";
	offset[] = {0,2,0};
	armor = 400;
	displayName = $STR_EPOCH_WOODCRATE2;
	vehicleClass = "DayZ Epoch Buildables";
	transportMaxMagazines = 100;
	transportMaxWeapons = 10;
	transportMaxBackpacks = 2;
	removeoutput[] = {{"ItemWoodCrateKit2",1}};
	nounderground = 0;
	constructioncount = 2;
};

class Land_KBud;
class OutHouse_DZ: Land_KBud
{
	armor = 200;
	scope = 2;
	offset[] = {0,2,0};
	displayName = $STR_EPOCH_OUTHOUSE;
	vehicleClass = "DayZ Epoch Buildables";
	transportMaxMagazines = 4;
	transportMaxWeapons = 4;
	transportMaxBackpacks = 4;
	removeoutput[] = {{"outhouse_kit",1}};
	nounderground = 0;	// new
	constructioncount = 2;
	class transportmagazines {};
};

class StorageShed_DZ: Land_Shed_M01
{
	armor = 1600;
	scope = 2;
	model = "\z\addons\dayz_epoch_v\base_building\storage\Shed_M02.p3d";
	offset[] = {0,3,0};
	displayName = $STR_EPOCH_STORAGESHED;
	vehicleClass = "DayZ Epoch Buildables";
	transportMaxMagazines = 400;
	transportMaxWeapons = 40;
	transportMaxBackpacks = 20;
	removeoutput[] = {{"storage_shed_kit",1}};
	constructioncount = 6;
	GhostPreview = "StorageShed_Preview_DZ";	
	
	class UserActions
	{
		class CloseDoor
		{
			position = "";
			displayName = $STR_DN_OUT_C_DOOR;
			radius = 4;
			onlyForPlayer = 1;
			condition = "this animationPhase 'open' == 1";
			statement = "this animate ['open', 0];";
		};
		class OpenDoor
		{
			position = "";
			displayName = $STR_DN_OUT_O_DOOR;
			radius = 4;
			onlyForPlayer = 1;
			condition = "this animationPhase 'open' == 0";
			statement = "this animate ['open', 1];";
		};
	};
	
	upgradeBuilding[] = {"StorageShed2_DZ",{"ItemToolbox","ItemCrowbar","ItemSledge"},{{"equip_metal_sheet",4},{"ItemMetalSheet",2},{"ItemScrews",2}}};	
};
class StorageShed2_DZ: Land_Shed_M01
{
	armor = 3200;
	scope = 2;
	model = "\z\addons\dayz_epoch_v\base_building\storage\Shed_M02.p3d";
	offset[] = {0,3,0};
	displayName = $STR_EPOCH_STORAGESHED2;
	vehicleClass = "DayZ Epoch Buildables";
	transportMaxMagazines = 600;
	transportMaxWeapons = 60;
	transportMaxBackpacks = 30;
	removeoutput[] = {{"storage_shed_kit2",1}};
	constructioncount = 12;
	GhostPreview = "StorageShed_Preview_DZ";	
	
	class UserActions
	{
		class CloseDoor
		{
			position = "";
			displayName = $STR_DN_OUT_C_DOOR;
			radius = 4;
			onlyForPlayer = 1;
			condition = "this animationPhase 'open' == 1";
			statement = "this animate ['open', 0];";
		};
		class OpenDoor
		{
			position = "";
			displayName = $STR_DN_OUT_O_DOOR;
			radius = 4;
			onlyForPlayer = 1;
			condition = "this animationPhase 'open' == 0";
			statement = "this animate ['open', 1];";
		};
	};	
};

class Land_kulna;
class WoodShack_DZ: Land_kulna
{
	scope = 2;
	destrType = "DestructBuilding";
	offset[] = {0,3.5,0};
	armor = 800;
	displayName = $STR_EPOCH_WOODSHACK;
	vehicleClass = "DayZ Epoch Buildables";
	transportMaxMagazines = 100;
	transportMaxWeapons = 10;
	transportMaxBackpacks = 5;
	removeoutput[] = {{"wood_shack_kit",1}};
	constructioncount = 4;
	nounderground = 0;
	upgradeBuilding[] = {"WoodShack2_DZ",{"ItemToolbox","Handsaw_DZE","Hammer_DZE"},{{"PartWoodPlywood",4},{"equip_nails",2}}};
};
class WoodShack2_DZ: Land_kulna
{
	scope = 2;
	destrType = "DestructBuilding";
	offset[] = {0,3.5,0};
	armor = 1600;
	displayName = $STR_EPOCH_WOODSHACK2;
	vehicleClass = "DayZ Epoch Buildables";
	transportMaxMagazines = 175;
	transportMaxWeapons = 20;
	transportMaxBackpacks = 10;
	removeoutput[] = {{"wood_shack_kit2",1}};
	constructioncount = 8;
	nounderground = 0;
};

class Land_Shed_wooden;
class Wooden_shed_DZ: Land_Shed_wooden
{
	scope = 2;
	destrType = "DestructBuilding";
	offset[] = {0,4,0};
	armor = 1000;
	displayName = $STR_EPOCH_NICEWOODSHED;
	vehicleClass = "DayZ Epoch Buildables";
	transportMaxMagazines = 200;
	transportMaxWeapons = 20;
	transportMaxBackpacks = 10;
	removeoutput[] = {{"wooden_shed_kit",1}};
	nounderground = 0;
	constructioncount = 5;
	upgradeBuilding[] = {"Wooden_shed2_DZ",{"ItemToolbox","Handsaw_DZE","Hammer_DZE"},{{"PartWoodPlywood",8},{"equip_nails",2}}};
};

class Wooden_shed2_DZ: Land_Shed_wooden
{
	scope = 2;
	destrType = "DestructBuilding";
	offset[] = {0,4,0};
	armor = 2000;
	displayName = $STR_EPOCH_NICEWOODSHED2;
	vehicleClass = "DayZ Epoch Buildables";
	transportMaxMagazines = 300;
	transportMaxWeapons = 30;
	transportMaxBackpacks = 15;
	removeoutput[] = {{"wooden_shed_kit2",1}};
	nounderground = 0;
	constructioncount = 10;
};

class WorkBench_DZE : BuiltItems 
{
    scope = 2;
    destrType = "DestructTree";
    cost = 100;
    offset[] = {0,2,-0.05};
    model = "z\addons\dayz_buildings\models\workbench.p3d";
    icon = "\ca\data\data\Unknown_object.paa";
    mapSize = 2;
    armor = 400;
    displayName = $STR_EPOCH_WORKBENCH;
    vehicleClass = "DayZ Epoch Buildables";
    maintainBuilding[] = {{"PartWoodLumber",1}};
    constructioncount = 1;
    removeoutput[] = {{"ItemWorkBench_DZE",1}};
    requireplot = 0;
    nounderground = 0;
    transportMaxWeapons = 10;
    transportMaxMagazines = 25;
    transportMaxBackpacks = 1;
};

class Advanced_WorkBench_DZ: BuiltItems
{
	scope = 2;
	destrType = "DestructBuilding";
	offset[] = {0,2,0};
	model = "\z\addons\dayz_epoch_v\props\workbench\workbench_2.p3d";
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	transportMaxWeapons = 45;	
	transportMaxMagazines = 30;
	transportmaxbackpacks = 1;	
	armor = 400;
	displayName = $STR_EPOCH_WORKBENCH_ADVANCED;
	vehicleClass = "DayZ Epoch Buildables";
	maintainBuilding[] = {{"ItemPlank",2}};
	constructioncount = 3;
	removeoutput[] = {{"PartWoodPlywood",3},{"ItemPlank",3}};
	nounderground = 0;
};

class CookTripod_DZ: BuiltItems
{
	scope = 2;
	displayName = $STR_ITEM_NAME_COOKINGTRIPOD;
	offset[] = {0,2,0};
	destrType = "DestructBuilding";
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	transportMaxWeapons = 0;	
	transportMaxMagazines = 15;
	transportmaxbackpacks = 0;
	armor = 500;
	model = "\z\addons\dayz_epoch_w\items\cook_tripod.p3d";
	vehicleClass = "DayZ Epoch Buildables";
	nounderground = 0;
	requireplot = 0;
	removeoutput[] = {{"cook_tripod_kit",1}};
};

class Stoneoven_DZ: BuiltItems 
{
	scope = 2;
	displayName = $STR_EPOCH_STONEOVEN;
	destrType = "DestructTree";
	offset[] = {0,2,0};
	model = "\z\addons\dayz_epoch_v\props\oven\oven.p3d";
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	armor = 400;
	transportMaxWeapons = 1;	
	transportMaxMagazines = 35;
	transportmaxbackpacks = 0;
	constructioncount = 2;
	removeoutput[] = {{"stoneoven_kit",1}};
	nounderground = 0;
	vehicleClass = "DayZ Epoch Buildables";
};

class Commode_DZ: BuiltItems 
{
	scope = 2;
	model = "\z\addons\dayz_epoch_v\base_building\storage\case_bedroom_b";
	displayName = $STR_EPOCH_COMMODE;
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;	
	constructioncount = 1;
	transportMaxWeapons = 5;	
	transportMaxMagazines = 25;
	transportmaxbackpacks = 3;
	offset[] = {0,2,0};
	removeoutput[] = {{"commode_kit",1}};
	vehicleClass = "DayZ Epoch Buildables";
};
	
class Wardrobe_DZ: BuiltItems 
{
	scope = 2;
	model = "\z\addons\dayz_epoch_v\base_building\storage\Dhangar_whiteskrin";
	displayName = $STR_EPOCH_WARDROBE;
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;	
	constructioncount = 1;
	transportMaxWeapons = 5;	
	transportMaxMagazines = 25;
	transportmaxbackpacks = 3;
	offset[] = {0,2,0};
	removeoutput[] = {{"wardrobe_kit",1}};
	vehicleClass = "DayZ Epoch Buildables";
};	

class Fridge_DZ: BuiltItems 
{
	scope = 2;
	model = "\z\addons\dayz_epoch_v\base_building\storage\fridge";
	displayName = $STR_EPOCH_FRIDGE;
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;	
	constructioncount = 1;
	transportMaxWeapons = 7;	
	transportMaxMagazines = 35;
	transportmaxbackpacks = 3;
	offset[] = {0,2,0};
	removeoutput[] = {{"fridge_kit",1}};
	vehicleClass = "DayZ Epoch Buildables";
};

class Washing_Machine_DZ: BuiltItems 
{
	scope = 2;
	model = "\z\addons\dayz_epoch_v\base_building\storage\washing_machine";
	displayName = $STR_EPOCH_WASHINGMACHINE;
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;	
	constructioncount = 1;
	transportMaxWeapons = 2;	
	transportMaxMagazines = 15;
	transportmaxbackpacks = 3;
	offset[] = {0,2,0};
	removeoutput[] = {{"washing_machine_kit",1}};
	vehicleClass = "DayZ Epoch Buildables";
};	

class Server_Rack_DZ: BuiltItems 
{
	scope = 2;
	model = "\z\addons\dayz_epoch_v\props\server\dze_server";
	displayName = $STR_EPOCH_SERVERRACK;
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;	
	constructioncount = 1;
	transportMaxWeapons = 15;	
	transportMaxMagazines = 25;
	transportmaxbackpacks = 1;
	offset[] = {0,2,0};
	removeoutput[] = {{"server_rack_kit",1}};
	vehicleClass = "DayZ Epoch Buildables";
};	

class ATM_DZ: BuiltItems 
{
	scope = 2;
	model = "\z\addons\dayz_epoch_v\props\atm\dze_atm";
	displayName = $STR_EPOCH_ATM;
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;	
	constructioncount = 1;
	transportMaxWeapons = 5;	
	transportMaxMagazines = 35;
	transportmaxbackpacks = 4;
	offset[] = {0,2,0};
	removeoutput[] = {{"atm_kit",1}};
	vehicleClass = "DayZ Epoch Buildables";
};

class Armchair_DZ: BuiltItems 
{
	scope = 2;
	model = "\z\addons\dayz_epoch_v\base_building\storage\armchair";
	displayName = $STR_EPOCH_ARMCHAIR;
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;		
	constructioncount = 1;
	transportMaxWeapons = 1;	
	transportMaxMagazines = 5;
	transportmaxbackpacks = 1;	
	offset[] = {0,2.5,0};
	removeoutput[] = {{"armchair_kit",1}};
	vehicleClass = "DayZ Epoch Buildables";
};	

class Sofa_DZ: BuiltItems 
{
	scope = 2;
	model = "\z\addons\dayz_epoch_v\props\sofa\sofa";
	displayName = $STR_EPOCH_SOFA;
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;	
	constructioncount = 1;
	transportMaxWeapons = 5;	
	transportMaxMagazines = 35;
	transportmaxbackpacks = 3;
	offset[] = {0,2.5,0};
	removeoutput[] = {{"sofa_kit",1}};
	vehicleClass = "DayZ Epoch Buildables";
};	
	
class Arcade_DZ: BuiltItems 
{
	scope = 2;
	model = "\z\addons\dayz_epoch_v\props\arcade\neagea";
	displayName = $STR_EPOCH_ARCADE;
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;	
	constructioncount = 1;
	transportMaxWeapons = 15;	
	transportMaxMagazines = 35;
	transportmaxbackpacks = 5;	
	offset[] = {0,2,0};
	removeoutput[] = {{"arcade_kit",1}};
	vehicleClass = "DayZ Epoch Buildables";
};

class Vendmachine1_DZ: BuiltItems 
{
	scope = 2;
	model = "\z\addons\dayz_epoch_v\props\vending\vendmachine_2";
	displayName = $STR_EPOCH_VENDINGMACHINE1;
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;	
	constructioncount = 1;
	transportMaxWeapons = 15;	
	transportMaxMagazines = 45;
	transportmaxbackpacks = 5;
	offset[] = {0,2,0};
	removeoutput[] = {{"vendmachine1_kit",1}};
	vehicleClass = "DayZ Epoch Buildables";
};

class Vendmachine2_DZ: BuiltItems 
{
	scope = 2;
	model = "\z\addons\dayz_epoch_v\base_building\storage\vending_machine";
	displayName = $STR_EPOCH_VENDINGMACHINE2;
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;	
	constructioncount = 1;
	offset[] = {0,2,0};
	transportMaxWeapons = 15;	
	transportMaxMagazines = 45;
	transportmaxbackpacks = 5;
	removeoutput[] = {{"vendmachine2_kit",1}};
	vehicleClass = "DayZ Epoch Buildables";
};

class StorageCrate_DZ: BuiltItems 
{
	scope = 2;
	model = "z\addons\dayz_buildings\models\item_storage.p3d";
	displayName = $STR_EPOCH_STORAGECRATE;
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;	
	constructioncount = 1;
	offset[] = {0,2,-0.05};
	transportMaxWeapons = 3;	
	transportMaxMagazines = 60;
	transportmaxbackpacks = 1;
	removeoutput[] = {{"storage_crate_kit",1}};
	nounderground = 0;	// new
	vehicleClass = "DayZ Epoch Buildables";
};

class CamoStorageCrate_DZ: BuiltItems 
{
	scope = 2;
	model = "\z\addons\dayz_epoch_v\base_building\storage\dze_camo_ammobednaX.p3d";
	displayName = $STR_EPOCH_CAMO_STORAGE_CRATE;
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;	
	constructioncount = 3;
	offset[] = {0,2,-0.15};
	transportMaxWeapons = 15;	
	transportMaxMagazines = 55;
	transportmaxbackpacks = 6;
	requireplot = 0;
	removeoutput[] = {{"camo_storage_crate_kit",1}};
	nounderground = 0;	// new
	vehicleClass = "DayZ Epoch Buildables";
};

class StorageBarrelRed1_DZ: BuiltItems
{
	scope = 2;
	cost = 100;
	offset[] = {0,1.5,0};
	displayName = $STR_EPOCH_STORAGEBARRELRED;	
    model = "\CA\misc\Barel1.p3d";
	icon = "\z\addons\dayz_epoch\pictures\equip_oil_drum_model_ca.paa";
	mapSize = 2;
	armor = 400;
	vehicleClass = "DayZ Epoch Buildables";
	constructioncount = 2;
	removeoutput[] = {{"ItemStorageBarrel1_kit",1}};
	nounderground = 0;
	transportMaxWeapons = 7;
	transportMaxMagazines = 70;
	transportMaxBackpacks = 2;
	upgradeBuilding[] = {"StorageBarrelRed2_DZ",{"ItemToolbox","Handsaw_DZE","Hammer_DZE"},{{"equip_metal_sheet",3},{"ItemScrews",1}}};
	
};

class StorageBarrelRed2_DZ: BuiltItems
{
	scope = 2;
	cost = 100;
	offset[] = {0,1.5,0};
	displayName = $STR_EPOCH_STORAGEBARRELRED2;	
    model = "\CA\misc\Barel1.p3d";
	icon = "\z\addons\dayz_epoch\pictures\equip_oil_drum_model_ca.paa";
	mapSize = 2;
	armor = 400;
	vehicleClass = "DayZ Epoch Buildables";
	constructioncount = 2;
	removeoutput[] = {{"ItemStorageBarrel1_kit",1}};
	nounderground = 0;
	transportMaxWeapons = 10;
	transportMaxMagazines = 100;
	transportMaxBackpacks = 4;
};

class StorageBarrelEpoch1_DZ: BuiltItems
{
	scope = 2;
	cost = 100;
	offset[] = {0,1.5,0};
	displayName = $STR_EPOCH_STORAGEBARRELEPOCH;	
	model = "\z\addons\dayz_epoch\models\oil_drum_model.p3d";
	icon = "\z\addons\dayz_epoch\pictures\equip_oil_drum_model_ca.paa";
	mapSize = 2;
	armor = 400;
	vehicleClass = "DayZ Epoch Buildables";
	constructioncount = 2;
	removeoutput[] = {{"ItemStorageBarrel2_kit",1}};
	nounderground = 0;
	transportMaxWeapons = 8;
	transportMaxMagazines = 80;
	transportMaxBackpacks = 2;
	upgradeBuilding[] = {"StorageBarrelEpoch2_DZ",{"ItemToolbox","Handsaw_DZE","Hammer_DZE"},{{"equip_metal_sheet",3},{"ItemScrews",1}}};
};

class StorageBarrelEpoch2_DZ: BuiltItems
{
	scope = 2;
	cost = 100;
	offset[] = {0,1.5,0};
	displayName = $STR_EPOCH_STORAGEBARRELEPOCH2;	
	model = "\z\addons\dayz_epoch\models\oil_drum_model.p3d";
	icon = "\z\addons\dayz_epoch\pictures\equip_oil_drum_model_ca.paa";
	mapSize = 2;
	armor = 400;
	vehicleClass = "DayZ Epoch Buildables";
	constructioncount = 2;
	removeoutput[] = {{"ItemStorageBarrel2_kit",1}};
	nounderground = 0;
	transportMaxWeapons = 12;
	transportMaxMagazines = 120;
	transportMaxBackpacks = 4;
};

class StorageBarrelYellow1_DZ: BuiltItems
{
	scope = 2;
	cost = 100;
	offset[] = {0,1.5,0};
	displayName = $STR_EPOCH_STORAGEBARRELYELLOW;	
    model = "\CA\misc\Barel3.p3d";
	icon = "\z\addons\dayz_epoch\pictures\equip_oil_drum_model_ca.paa";
	mapSize = 2;
	armor = 400;
	vehicleClass = "DayZ Epoch Buildables";
	constructioncount = 2;
	removeoutput[] = {{"ItemStorageBarrel3_kit",1}};
	nounderground = 0;
	transportMaxWeapons = 8;
	transportMaxMagazines = 80;
	transportMaxBackpacks = 2;
	upgradeBuilding[] = {"StorageBarrelYellow2_DZ",{"ItemToolbox","Hammer_DZE"},{{"equip_metal_sheet",3},{"ItemScrews",1}}};
};

class StorageBarrelYellow2_DZ: BuiltItems
{
	scope = 2;
	cost = 100;
	offset[] = {0,1.5,0};
	displayName = $STR_EPOCH_STORAGEBARRELYELLOW2;	
    model = "\CA\misc\Barel3.p3d";
	icon = "\z\addons\dayz_epoch\pictures\equip_oil_drum_model_ca.paa";
	mapSize = 2;
	armor = 400;
	vehicleClass = "DayZ Epoch Buildables";
	constructioncount = 2;
	removeoutput[] = {{"ItemStorageBarrel3_kit",1}};
	nounderground = 0;
	transportMaxWeapons = 12;
	transportMaxMagazines = 120;
	transportMaxBackpacks = 4;
};

class StorageBarrelBlack1_DZ: BuiltItems
{
	scope = 2;
	cost = 100;
	offset[] = {0,1.5,0};
	displayName = $STR_EPOCH_STORAGEBARRELBLACK;	
    model = "\CA\misc\Barel4.p3d";
	icon = "\z\addons\dayz_epoch\pictures\equip_oil_drum_model_ca.paa";
	mapSize = 2;
	armor = 400;
	vehicleClass = "DayZ Epoch Buildables";
	constructioncount = 2;
	removeoutput[] = {{"ItemStorageBarrel4_kit",1}};
	nounderground = 0;
	transportMaxWeapons = 8;
	transportMaxMagazines = 80;
	transportMaxBackpacks = 2;
	upgradeBuilding[] = {"StorageBarrelBlack2_DZ",{"ItemToolbox","Hammer_DZE"},{{"equip_metal_sheet",3},{"ItemScrews",1}}};
};

class StorageBarrelBlack2_DZ: BuiltItems
{
	scope = 2;
	cost = 100;
	offset[] = {0,1.5,0};
	displayName = $STR_EPOCH_STORAGEBARRELBLACK2;	
    model = "\CA\misc\Barel4.p3d";
	icon = "\z\addons\dayz_epoch\pictures\equip_oil_drum_model_ca.paa";
	mapSize = 2;
	armor = 400;
	vehicleClass = "DayZ Epoch Buildables";
	constructioncount = 2;
	removeoutput[] = {{"ItemStorageBarrel4_kit",1}};
	nounderground = 0;
	transportMaxWeapons = 12;
	transportMaxMagazines = 120;
	transportMaxBackpacks = 4;
};

class StorageBarrelGreenDark1_DZ: BuiltItems
{
	scope = 2;
	cost = 100;
	offset[] = {0,1.5,0};
	displayName = $STR_EPOCH_STORAGEBARRELGREENDARK;	
    model = "\CA\misc\Barel5.p3d";
	icon = "\z\addons\dayz_epoch\pictures\equip_oil_drum_model_ca.paa";
	mapSize = 2;
	armor = 400;
	vehicleClass = "DayZ Epoch Buildables";
	constructioncount = 2;
	removeoutput[] = {{"ItemStorageBarrel5_kit",1}};
	nounderground = 0;
	transportMaxWeapons = 8;
	transportMaxMagazines = 80;
	transportMaxBackpacks = 2;
	upgradeBuilding[] = {"StorageBarrelGreenDark2_DZ",{"ItemToolbox","Hammer_DZE"},{{"equip_metal_sheet",3},{"ItemScrews",1}}};
};

class StorageBarrelGreenDark2_DZ: BuiltItems
{
	scope = 2;
	cost = 100;
	offset[] = {0,1.5,0};
	displayName = $STR_EPOCH_STORAGEBARRELGREENDARK2;	
    model = "\CA\misc\Barel5.p3d";
	icon = "\z\addons\dayz_epoch\pictures\equip_oil_drum_model_ca.paa";
	mapSize = 2;
	armor = 400;
	vehicleClass = "DayZ Epoch Buildables";
	constructioncount = 2;
	removeoutput[] = {{"ItemStorageBarrel5_kit",1}};
	nounderground = 0;
	transportMaxWeapons = 12;
	transportMaxMagazines = 120;
	transportMaxBackpacks = 4;
};

class StorageBarrelMilk1_DZ: BuiltItems
{
	scope = 2;
	cost = 100;
	offset[] = {0,1.5,0};
	displayName = $STR_EPOCH_STORAGEBARRELMILK;	
    model = "\CA\misc\Barel6.p3d";
	icon = "\z\addons\dayz_epoch\pictures\equip_oil_drum_model_ca.paa";
	mapSize = 2;
	armor = 400;
	vehicleClass = "DayZ Epoch Buildables";
	constructioncount = 2;
	removeoutput[] = {{"ItemStorageBarrel6_kit",1}};
	nounderground = 0;
	transportMaxWeapons = 8;
	transportMaxMagazines = 80;
	transportMaxBackpacks = 2;
	upgradeBuilding[] = {"StorageBarrelMilk2_DZ",{"ItemToolbox","Hammer_DZE"},{{"equip_metal_sheet",3},{"ItemScrews",1}}};
};

class StorageBarrelMilk2_DZ: BuiltItems
{
	scope = 2;
	cost = 100;
	offset[] = {0,1.5,0};
	displayName = $STR_EPOCH_STORAGEBARRELMILK2;	
    model = "\CA\misc\Barel6.p3d";
	icon = "\z\addons\dayz_epoch\pictures\equip_oil_drum_model_ca.paa";
	mapSize = 2;
	armor = 400;
	vehicleClass = "DayZ Epoch Buildables";
	constructioncount = 2;
	removeoutput[] = {{"ItemStorageBarrel6_kit",1}};
	nounderground = 0;
	transportMaxWeapons = 12;
	transportMaxMagazines = 120;
	transportMaxBackpacks = 4;
};

class StorageBarrelGreen1_DZ: BuiltItems
{
	scope = 2;
	cost = 100;
	offset[] = {0,1.5,0};
	displayName = $STR_EPOCH_STORAGEBARRELGREEN;	
    model = "\CA\misc\Barel7.p3d";
	icon = "\z\addons\dayz_epoch\pictures\equip_oil_drum_model_ca.paa";
	mapSize = 2;
	armor = 400;
	vehicleClass = "DayZ Epoch Buildables";
	constructioncount = 2;
	removeoutput[] = {{"ItemStorageBarrel7_kit",1}};
	nounderground = 0;
	transportMaxWeapons = 8;
	transportMaxMagazines = 80;
	transportMaxBackpacks = 2;
	upgradeBuilding[] = {"StorageBarrelGreen2_DZ",{"ItemToolbox","Hammer_DZE"},{{"equip_metal_sheet",3},{"ItemScrews",1}}};
};

class StorageBarrelGreen2_DZ: BuiltItems
{
	scope = 2;
	cost = 100;
	offset[] = {0,1.5,0};
	displayName = $STR_EPOCH_STORAGEBARRELGREEN2;	
    model = "\CA\misc\Barel7.p3d";
	icon = "\z\addons\dayz_epoch\pictures\equip_oil_drum_model_ca.paa";
	mapSize = 2;
	armor = 400;
	vehicleClass = "DayZ Epoch Buildables";
	constructioncount = 2;
	removeoutput[] = {{"ItemStorageBarrel7_kit",1}};
	nounderground = 0;
	transportMaxWeapons = 12;
	transportMaxMagazines = 120;
	transportMaxBackpacks = 4;
};

class StorageBarrelGreenRusty1_DZ: BuiltItems
{
	scope = 2;
	cost = 100;
	offset[] = {0,1.5,0};
	displayName = $STR_EPOCH_STORAGEBARRELGREENRUSTY;	
    model = "\CA\misc\Barel8.p3d";
	icon = "\z\addons\dayz_epoch\pictures\equip_oil_drum_model_ca.paa";
	mapSize = 2;
	armor = 400;
	vehicleClass = "DayZ Epoch Buildables";
	constructioncount = 2;
	removeoutput[] = {{"ItemStorageBarrel8_kit",1}};
	nounderground = 0;
	transportMaxWeapons = 8;
	transportMaxMagazines = 80;
	transportMaxBackpacks = 2;
	upgradeBuilding[] = {"StorageBarrelGreenRusty2_DZ",{"ItemToolbox","Hammer_DZE"},{{"equip_metal_sheet",3},{"ItemScrews",1}}};
};

class StorageBarrelGreenRusty2_DZ: BuiltItems
{
	scope = 2;
	cost = 100;
	offset[] = {0,1.5,0};
	displayName = $STR_EPOCH_STORAGEBARRELGREENRUSTY2;	
    model = "\CA\misc\Barel8.p3d";
	icon = "\z\addons\dayz_epoch\pictures\equip_oil_drum_model_ca.paa";
	mapSize = 2;
	armor = 400;
	vehicleClass = "DayZ Epoch Buildables";
	constructioncount = 2;
	removeoutput[] = {{"ItemStorageBarrel8_kit",1}};
	nounderground = 0;
	transportMaxWeapons = 12;
	transportMaxMagazines = 120;
	transportMaxBackpacks = 4;
};

class Rabbit_Hutch_DZE : BuiltItems 
{
	scope = 2;
	destrType = "DestructTree";
	offset[] = {0,3,0}; 
    model = "\CA\Structures\Misc\Hutch\Misc_Hutch.p3d";
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	armor = 800;
	displayName = $STR_EQUIP_NAME_RABBIT_HUTCH;
	vehicleClass = "DayZ Epoch Buildables";
	maintainBuilding[] = {{"PartWoodLumber",1}};
	constructioncount = 1;
	removeoutput[] = {{"rabbit_hutch_kit",1}};
	transportMaxWeapons = 5;
	transportMaxMagazines = 25;
	transportMaxBackpacks = 1;
};

class Chicken_Coop_DZE : BuiltItems 
{
	scope = 2;
	destrType = "DestructTree";
	offset[] = {0,3,0}; 
    model = "\CA\Structures\Misc\ChickenCoop\Misc_ChickenCoop.p3d";
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	armor = 800;
	displayName = $STR_EQUIP_NAME_CHICKEN_COOP;
	vehicleClass = "DayZ Epoch Buildables";
	maintainBuilding[] = {{"PartWoodLumber",1}};
	constructioncount = 1;
	removeoutput[] = {{"chicken_coop_kit",1}};
	transportMaxWeapons = 5;
	transportMaxMagazines = 25;
	transportMaxBackpacks = 1;
};

class Doghouse_DZE : BuiltItems 
{
	scope = 2;
	destrType = "DestructTree";
	offset[] = {0,3,0}; 
    model = "\CA\buildings\psi_bouda.p3d";
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	armor = 800;
	displayName = $STR_EQUIP_NAME_DOG_HOUSE;
	vehicleClass = "DayZ Epoch Buildables";
	maintainBuilding[] = {{"PartWoodLumber",1}};
	constructioncount = 1;
	removeoutput[] = {{"doghouse_kit",1}};
	transportMaxWeapons = 5;
	transportMaxMagazines = 25;
	transportMaxBackpacks = 1;
};

class Postbox_DZE : BuiltItems 
{
	scope = 2;
	destrType = "DestructTree";
	offset[] = {0,3,0}; 
    model = "\CA\Structures\Misc\Misc_PostBox\Misc_PostBox.p3d";
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	armor = 800;
	displayName = $STR_EQUIP_NAME_POSTBOX;
	vehicleClass = "DayZ Epoch Buildables";
	maintainBuilding[] = {{"PartWoodLumber",1}};
	constructioncount = 1;
	removeoutput[] = {{"postbox_kit",1}};
	transportMaxWeapons = 1;
	transportMaxMagazines = 5;
	transportMaxBackpacks = 1;
};

class Wild_Bee_Hive_DZE : BuiltItems  
{
	scope = 2;
	displayName = $STR_EQUIP_NAME_WILD_BEE_HIVE;
	vehicleClass = "DayZ Epoch Buildables";
	model = "\ca\buildings\misc\drevo_hromada";
	icon = "\Ca\Structures\Data\Icons\i_timbers_ca.paa";
	offset[] = {0,3,0}; 
	mapSize = 2;
	armor = 800;
	maintainBuilding[] = {{"ItemLog",1}};
	constructioncount = 1;
	removeoutput[] = {{"wild_bee_hive_kit",1}};
	transportMaxWeapons = 1;
	transportMaxMagazines = 15;
	transportMaxBackpacks = 1;	
};

class Cow_Stable_DZE : BuiltItems 
{
	scope = 2;
	displayName = $STR_EQUIP_NAME_COW_STABLE;
	vehicleClass = "DayZ Epoch Buildables";	
	model = "\ca\Buildings2\Shed_small\Shed_M03";
	icon = "\ca\data\data\Unknown_object.paa";
	offset[] = {0,4,0}; 
	mapSize = 2;
	armor = 1000;
	maintainBuilding[] = {{"PartWoodLumber",1}};
	constructioncount = 1;
	removeoutput[] = {{"cow_stable_kit",1}};
	transportMaxWeapons = 5;
	transportMaxMagazines = 25;
	transportMaxBackpacks = 4;		
};

class Goat_Stable_DZE : BuiltItems 
{
	scope = 2;
	displayName = $STR_EQUIP_NAME_GOAT_STABLE;
	vehicleClass = "DayZ Epoch Buildables";	
	model = "\ca\Buildings2\Shed_small\Shed_M03";
	icon = "\ca\data\data\Unknown_object.paa";
	offset[] = {0,4,0}; 
	mapSize = 2;
	armor = 1000;
	maintainBuilding[] = {{"PartWoodLumber",1}};
	constructioncount = 1;
	removeoutput[] = {{"goat_stable_kit",1}};
	transportMaxWeapons = 5;
	transportMaxMagazines = 25;
	transportMaxBackpacks = 4;		
};

class Sheep_Stable_DZE : BuiltItems 
{
	scope = 2;
	displayName = $STR_EQUIP_NAME_SHEEP_STABLE;
	vehicleClass = "DayZ Epoch Buildables";	
	model = "\ca\Buildings2\Shed_small\Shed_M03";
	icon = "\ca\data\data\Unknown_object.paa";
	offset[] = {0,4,0}; 
	mapSize = 2;
	armor = 1000;
	maintainBuilding[] = {{"PartWoodLumber",1}};
	constructioncount = 1;
	removeoutput[] = {{"sheep_stable_kit",1}};
	transportMaxWeapons = 5;
	transportMaxMagazines = 25;
	transportMaxBackpacks = 4;		
};

class Boar_Stable_DZE : BuiltItems 
{
	scope = 2;
	displayName = $STR_EQUIP_NAME_BOAR_STABLE;
	vehicleClass = "DayZ Epoch Buildables";	
	model = "\ca\Buildings2\Shed_small\Shed_M03";
	icon = "\ca\data\data\Unknown_object.paa";
	offset[] = {0,4,0}; 
	mapSize = 2;
	armor = 1000;
	maintainBuilding[] = {{"PartWoodLumber",1}};
	constructioncount = 1;
	removeoutput[] = {{"boar_stable_kit",1}};
	transportMaxWeapons = 5;
	transportMaxMagazines = 25;
	transportMaxBackpacks = 4;		
};