class BAF_Merlin_HC3_D;
class BAF_Merlin_DZE : BAF_Merlin_HC3_D {
	scope = 2; 
	displayName = "$STR_VEH_NAME_AW101";
	vehicleClass = "DayZ Epoch Vehicles";
	magazines[] = {"120Rnd_CMFlareMagazine"};
	crew = ""; 
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};
	commanderCanSee = 2+16+32;
	gunnerCanSee = 2+16+32;
	driverCanSee = 2+16+32;
	transportMaxWeapons = 20;
	transportMaxMagazines = 160;
	transportmaxbackpacks = 6;
	fuelCapacity = 3222;
	radartype = 0;
	supplyRadius = 1.3;
	
	class Upgrades
	{
		ItemHeliAVE[] = {"BAF_Merlin_DZE1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class BAF_Merlin_DZE1: BAF_Merlin_DZE
{
	displayName = "$STR_VEH_NAME_AW101+";
	original = "BAF_Merlin_DZE";
	armor = 120;
	damageResistance = 0.02078;
	
	class Upgrades
	{
		ItemHeliLRK[] = {"BAF_Merlin_DZE2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class BAF_Merlin_DZE2: BAF_Merlin_DZE1
{
	displayName = "$STR_VEH_NAME_AW101++";
	transportMaxWeapons = 40;
	transportMaxMagazines = 320;
	transportmaxbackpacks = 12;
	
	class Upgrades
	{
		ItemHeliTNK[] = {"BAF_Merlin_DZE3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class BAF_Merlin_DZE3: BAF_Merlin_DZE2
{
	displayName = "$STR_VEH_NAME_AW101+++";
	fuelCapacity = 6500;
};