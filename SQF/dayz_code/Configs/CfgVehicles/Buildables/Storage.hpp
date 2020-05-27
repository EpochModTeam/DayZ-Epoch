class Gunrack1;
class GunRack_DZ: Gunrack1
{
	armor = 200;
	scope = public;
	displayName = $STR_EPOCH_GUNRACK;
	vehicleClass = "DayZ Epoch Buildables";
	transportMaxWeapons = 20;
	transportMaxMagazines = 10;
	transportMaxBackpacks = 0;
	offset[] = {0,2.5,0.5};
	removeoutput[] = {{"ItemGunRackKit",1}};
	nounderground = 0;
	upgradeBuilding[] = {"GunRack2_DZ",{"ItemToolbox"},{{"ItemPlank",4},{"equip_nails",1}}};	
};

class GunRack2_DZ: Gunrack1
{
	armor = 400;
	scope = public;
	displayName = $STR_EPOCH_GUNRACK2;
	vehicleClass = "DayZ Epoch Buildables";
	transportMaxWeapons = 40;
	transportMaxMagazines = 20;
	transportMaxBackpacks = 0;
	offset[] = {0,2.5,0.5};
	removeoutput[] = {{"ItemGunRackKit2",1}};
	nounderground = 0;
	constructioncount = 2;
};

class Fort_Crate_wood;
class WoodCrate_DZ: Fort_Crate_wood
{
	scope = public;
	destrType = "DestructBuilding";
	offset[] = {0,2.5,0.5};
	armor = 200;
	displayName = $STR_EPOCH_WOODCRATE;
	vehicleClass = "DayZ Epoch Buildables";
	transportMaxMagazines = 50;
	transportMaxWeapons = 5;
	transportMaxBackpacks = 1;
	removeoutput[] = {{"ItemWoodCrateKit",1}};
	nounderground = 0;
	upgradeBuilding[] = {"WoodCrate2_DZ",{"ItemToolbox"},{{"PartWoodPlywood",2},{"ItemPlank",2},{"equip_nails",1}}};	
};

class WoodCrate2_DZ: Fort_Crate_wood
{
	scope = public;
	destrType = "DestructBuilding";
	offset[] = {0,2.5,0.5};
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
	scope = public;
	offset[] = {0,2.5,1};
	displayName = $STR_EPOCH_OUTHOUSE;
	vehicleClass = "DayZ Epoch Buildables";
	transportMaxMagazines = 4;
	transportMaxWeapons = 4;
	transportMaxBackpacks = 4;
	constructioncount = 2;
	class transportmagazines {};
};
class Land_Shed_M01;
class StorageShed_DZ: Land_Shed_M01
{
	armor = 1600;
	scope = public;
	offset[] = {0,4,1};
	displayName = $STR_EPOCH_STORAGESHED;
	vehicleClass = "DayZ Epoch Buildables";
	transportMaxMagazines = 400;
	transportMaxWeapons = 40;
	transportMaxBackpacks = 20;
	constructioncount = 6;
	upgradeBuilding[] = {"StorageShed2_DZ",{"ItemToolbox","ItemCrowbar","ItemSledge"},{{"equip_metal_sheet",4},{"ItemMetalSheet",2},{"ItemScrews",2}}};	
};
class StorageShed2_DZ: Land_Shed_M01
{
	armor = 3200;
	scope = public;
	offset[] = {0,4,1};
	displayName = $STR_EPOCH_STORAGESHED2;
	vehicleClass = "DayZ Epoch Buildables";
	transportMaxMagazines = 800;
	transportMaxWeapons = 80;
	transportMaxBackpacks = 40;
	constructioncount = 12;
};

class Land_kulna;
class WoodShack_DZ: Land_kulna
{
	scope = public;
	destrType = "DestructBuilding";
	offset[] = {0,4,1.3};
	armor = 800;
	displayName = $STR_EPOCH_WOODSHACK;
	vehicleClass = "DayZ Epoch Buildables";
	transportMaxMagazines = 100;
	transportMaxWeapons = 10;
	transportMaxBackpacks = 5;
	constructioncount = 4;
	nounderground = 0;
	upgradeBuilding[] = {"WoodShack2_DZ",{"ItemToolbox"},{{"PartWoodPlywood",4},{"equip_nails",2}}};
};
class WoodShack2_DZ: Land_kulna
{
	scope = public;
	destrType = "DestructBuilding";
	offset[] = {0,4,1.3};
	armor = 1600;
	displayName = $STR_EPOCH_WOODSHACK2;
	vehicleClass = "DayZ Epoch Buildables";
	transportMaxMagazines = 200;
	transportMaxWeapons = 20;
	transportMaxBackpacks = 10;
	constructioncount = 8;
	nounderground = 0;
};

class Land_Shed_wooden;
class Wooden_shed_DZ: Land_Shed_wooden
{
	scope = public;
	destrType = "DestructBuilding";
	offset[] = {0,5,1};
	armor = 1000;
	displayName = $STR_EPOCH_NICEWOODSHED;
	vehicleClass = "DayZ Epoch Buildables";
	transportMaxMagazines = 200;
	transportMaxWeapons = 20;
	transportMaxBackpacks = 10;
	nounderground = 0;
	constructioncount = 5;
	upgradeBuilding[] = {"Wooden_shed2_DZ",{"ItemToolbox"},{{"PartWoodPlywood",8},{"equip_nails",2}}};
};

class Wooden_shed2_DZ: Land_Shed_wooden
{
	scope = public;
	destrType = "DestructBuilding";
	offset[] = {0,5,1};
	armor = 2000;
	displayName = $STR_EPOCH_NICEWOODSHED2;
	vehicleClass = "DayZ Epoch Buildables";
	transportMaxMagazines = 400;
	transportMaxWeapons = 40;
	transportMaxBackpacks = 20;
	nounderground = 0;
	constructioncount = 10;
};