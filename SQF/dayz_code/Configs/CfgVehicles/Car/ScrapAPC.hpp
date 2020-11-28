class ScrapAPC_base : BTR60_TK_EP1_DZE
{
	scope = 0;
	displayname = "Scrap APC";	
	model = "\z\addons\dayz_epoch_v\vehicles\scrap_apc\scrap_apc";
	picture = "\dayz_epoch_c\icons\vehicles\ScrapAPC.paa";
	vehicleClass = "DayZ Epoch Vehicles";
	armor = 80;
	damageResistance = 0.032;
	transportsoldier = 4;
	transportmaxweapons = 12;
	transportmaxmagazines = 60;
	transportmaxbackpacks = 5;	
	fuelcapacity = 350;
	maxspeed = 60;
	terraincoef	= 2.8;
	turnCoef = 1;
	driveraction = suv_driver_ep1;
	cargoAction[] = {BTR40_Cargo_EP1,UAZ_Cargo01};
	typicalcargo[] = {};
	class Turrets {};
	hiddenselections[] = {"camo1","camo2"};
	hiddenselectionstextures[]= 
	{
		"\z\addons\dayz_epoch_v\vehicles\scrap_apc\data\apc_main_co.paa",
		"\z\addons\dayz_epoch_v\vehicles\scrap_apc\data\apc_details_co.paa"			
	};
	class damage
	{
		tex[]={};
		mat[]=
		{
			"z\addons\dayz_epoch_v\vehicles\scrap_apc\data\apc_main.rvmat",
			"z\addons\dayz_epoch_v\vehicles\scrap_apc\data\apc_main_damage.rvmat",
			"z\addons\dayz_epoch_v\vehicles\scrap_apc\data\apc_main_destruct.rvmat",

			"z\addons\dayz_epoch_v\vehicles\scrap_apc\data\apc_details.rvmat",
			"z\addons\dayz_epoch_v\vehicles\scrap_apc\data\apc_details_damage.rvmat",
			"z\addons\dayz_epoch_v\vehicles\scrap_apc\data\apc_details_destruct.rvmat"
		};
	};
};

class ScrapAPC_DZE: ScrapAPC_base {
	scope = 2;
	displayName = "$STR_VEH_NAME_SCRAP_APC";
	
	class Upgrades {
		ItemTankORP[] = {"ScrapAPC_DZE1",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankORP",1},{"PartEngine",6},{"PartGeneric",2},{"ItemScrews",2}}};
	};
};

class ScrapAPC_DZE1: ScrapAPC_DZE {
	displayName = "$STR_VEH_NAME_SCRAP_APC+";
	original = "ScrapAPC_DZE";
	maxspeed = 95; // base 60
	turnCoef = 0.5;  // base 1
	terraincoef	= 1.2; // base 2.8
	
	class Upgrades {
		ItemTankAVE[] = {"ScrapAPC_DZE2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankAVE",1},{"equip_metal_sheet",8},{"ItemScrews",2}}};
	};
};

class ScrapAPC_DZE2: ScrapAPC_DZE1 {
	displayName = "$STR_VEH_NAME_SCRAP_APC++";
	armor = 160;
	damageResistance = 0.064;
	
	class Upgrades {
		ItemTankLRK[] = {"ScrapAPC_DZE3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class ScrapAPC_DZE3: ScrapAPC_DZE2 {
	displayName = "$STR_VEH_NAME_SCRAP_APC+++";
	transportMaxWeapons = 24;
	transportMaxMagazines = 120;
	transportmaxbackpacks = 10;
	
	class Upgrades {
		ItemTankTNK[] = {"ScrapAPC_DZE4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankTNK",1},{"PartFueltank",6},{"ItemFuelBarrel",4}}};
	};
};

class ScrapAPC_DZE4: ScrapAPC_DZE3 {
	displayName = "$STR_VEH_NAME_SCRAP_APC++++";
	fuelCapacity = 800;	
};