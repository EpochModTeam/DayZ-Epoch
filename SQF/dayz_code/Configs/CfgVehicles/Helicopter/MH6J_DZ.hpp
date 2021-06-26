class MH6J_EP1;
class MH6J_DZ: MH6J_EP1
{
	side = 1;
	faction = "USMC";
	crew = "";
	enablemanualfire = 0;
	typicalCargo[] = {};
	displayname = $STR_VEH_NAME_MH6J;
	vehicleClass = "DayZ Epoch Vehicles";
	radartype = 0;
	class TransportMagazines{};
	class TransportWeapons{};
	weapons[] = {"CMFlareLauncher"};
	magazines[] = {"60Rnd_CMFlareMagazine","60Rnd_CMFlareMagazine"};
	commanderCanSee = 2+16+32;
	gunnerCanSee = 2+16+32;
	driverCanSee = 2+16+32;
	transportMaxWeapons = 10;
	transportMaxMagazines = 40;
	transportmaxbackpacks = 4;
	fuelCapacity = 242;
	class Turrets {};
	supplyRadius = 1.3;
	
	class Upgrades
	{
		ItemHeliAVE[] = {"MH6J_DZE1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class MH6J_DZE1: MH6J_DZ
{
	displayName = "$STR_VEH_NAME_MH6J+";
	original = "MH6J_DZ";
	armor = 70;
	damageResistance = 0.02078;
	
	class Upgrades
	{
		ItemHeliLRK[] = {"MH6J_DZE2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class MH6J_DZE2: MH6J_DZE1
{
	displayName = "$STR_VEH_NAME_MH6J++";
	transportMaxWeapons = 20;
	transportMaxMagazines = 80;
	transportmaxbackpacks = 8;
	
	class Upgrades
	{
		ItemHeliTNK[] = {"MH6J_DZE3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class MH6J_DZE3: MH6J_DZE2
{
	displayName = "$STR_VEH_NAME_MH6J+++";
	fuelCapacity = 500;
};	
