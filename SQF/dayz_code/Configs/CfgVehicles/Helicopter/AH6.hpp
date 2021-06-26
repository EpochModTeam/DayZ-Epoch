class AH6J_EP1;
class AH6J_EP1_DZ: AH6J_EP1
{
	side = 1;
	faction = "USMC";
	displayName = "$STR_VEH_NAME_AH6J";
	vehicleClass = "DayZ Epoch Vehicles";
	crew = "";
	typicalCargo[] = {};
	weapons[] = {"TwinM134","CMFlareLauncher"};
	magazines[] = {"4000Rnd_762x51_M134","60Rnd_CMFlareMagazine","60Rnd_CMFlareMagazine"};
	class TransportMagazines {};
	class TransportWeapons {};
	class Turrets {};
	commanderCanSee = 2+16+32;
	gunnerCanSee = 2+16+32;
	driverCanSee = 2+16+32;
	transportMaxWeapons = 10;
	transportMaxMagazines = 40;
	transportmaxbackpacks = 4;
	fuelCapacity = 242;
	supplyRadius = 1.3;
	radartype = 0;
};

class AH6J_EP1_DZE: AH6J_EP1_DZ
{
	scope = 2;
	displayName = "$STR_VEH_NAME_AH6J";
	magazines[] = {"60Rnd_CMFlareMagazine","60Rnd_CMFlareMagazine"};
	
	class Upgrades
	{
		ItemHeliAVE[] = {"AH6J_EP1_DZE1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class AH6J_EP1_DZE1: AH6J_EP1_DZE
{
	displayName = "$STR_VEH_NAME_AH6J+";
	original = "AH6J_EP1_DZE";
	armor = 70;
	damageResistance = 0.02078;
	
	class Upgrades
	{
		ItemHeliLRK[] = {"AH6J_EP1_DZE2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class AH6J_EP1_DZE2: AH6J_EP1_DZE1
{
	displayName = "$STR_VEH_NAME_AH6J++";
	transportMaxWeapons = 20;
	transportMaxMagazines = 80;
	transportmaxbackpacks = 8;
	
	class Upgrades
	{
		ItemHeliTNK[] = {"AH6J_EP1_DZE3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class AH6J_EP1_DZE3: AH6J_EP1_DZE2
{
	displayName = "$STR_VEH_NAME_AH6J+++";
	fuelCapacity = 500;
};

class AH6X_EP1;
class AH6X_DZ: AH6X_EP1 {
	displayname = "$STR_VEH_NAME_AH6X";
	vehicleClass = "DayZ Epoch Vehicles";
	model = "dayz_vehicles\helicopters\greybird\greybird.p3d";
	side = 1;
	faction = "USMC";
	crew = "";
	typicalCargo[] = {};
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
	radartype = 0;
	supplyRadius = 1.3;
	class Turrets {};
	
	class Upgrades
	{
		ItemHeliAVE[] = {"AH6X_DZE1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class AH6X_DZE1: AH6X_DZ
{
	displayName = "$STR_VEH_NAME_AH6X+";
	original = "AH6X_DZ";
	armor = 70;
	damageResistance = 0.02078;
	
	class Upgrades
	{
		ItemHeliLRK[] = {"AH6X_DZE2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class AH6X_DZE2: AH6X_DZE1
{
	displayName = "$STR_VEH_NAME_AH6X++";
	transportMaxWeapons = 20;
	transportMaxMagazines = 80;
	transportmaxbackpacks = 8;
	
	class Upgrades
	{
		ItemHeliTNK[] = {"AH6X_DZE3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class AH6X_DZE3: AH6X_DZE2
{
	displayName = "$STR_VEH_NAME_AH6X+++";
	fuelCapacity = 500;
};