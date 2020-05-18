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
	constructioncount = 5;
	nounderground = 0;
};
class Land_Shed_wooden;
class Wooden_shed_DZ: Land_Shed_wooden
{
	scope = public;
	destrType = "DestructBuilding";
	//cost = 100;
	offset[] = {0,5,1};
	armor = 800;
	displayName = $STR_EPOCH_NICEWOODSHED;
	vehicleClass = "DayZ Epoch Buildables";
	transportMaxMagazines = 200;
	transportMaxWeapons = 20;
	transportMaxBackpacks = 10;
	nounderground = 0;
};