class UH1H_base: Helicopter 
{
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			class ViewOptics: ViewOptics {};
			class Turrets: Turrets {};
		};
		class LeftDoorGun: MainTurret
		{
			class Turrets: Turrets {};
		};
	};
};

class UH1H_DZ: UH1H_base
{
	displayname = "$STR_VEH_NAME_UH1H_GREEN";
	vehicleClass = "DayZ Epoch Vehicles";
	scope = 2;
	crew = "";
	model = "dayz_vehicles\helicopters\huey\huey.p3d";
	typicalCargo[] = {};
	hiddenSelections[] = {};
	class TransportMagazines{};
	class TransportWeapons{};
	weapons[] = {"CMFlareLauncher"};
	magazines[] = {"120Rnd_CMFlareMagazine"};		
	commanderCanSee = 2+16+32;
	gunnerCanSee = 2+16+32;
	driverCanSee = 2+16+32;
	transportMaxWeapons = 15;
	transportMaxMagazines = 80;
	transportmaxbackpacks = 6;
	fuelCapacity = 1333;	
	radartype = 0;
	supplyRadius = 1.3;
	
	class Turrets : Turrets 
	{
		class MainTurret : MainTurret 
		{
			magazines[] = {"100Rnd_762x51_M240"};
		};
		class LeftDoorGun : LeftDoorGun
		{
			magazines[] = {"100Rnd_762x51_M240"};
		};
	};
};

class UH1H_DZE: UH1H_DZ {
	cargoCompartments[] = {"Compartment1","Compartment2","Compartment3"};
	class Turrets : Turrets {
		class MainTurret : MainTurret {
			gunnerCompartments = "compartment3";
			magazines[] = {};
		};
		class LeftDoorGun : LeftDoorGun {
			gunnerCompartments = "compartment3";
			magazines[] = {};
		};
	};
	
	class Upgrades
	{
		ItemHeliAVE[] = {"UH1H_DZE1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};	
};

class UH1H_DZE1: UH1H_DZE
{
	displayName = "$STR_VEH_NAME_UH1H_GREEN+";
	original = "UH1H_DZE";
	armor = 60;
	damageResistance = 0.02078;
	
	class Upgrades
	{
		ItemHeliLRK[] = {"UH1H_DZE2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class UH1H_DZE2: UH1H_DZE1
{
	displayName = "$STR_VEH_NAME_UH1H_GREEN++";
	transportMaxWeapons = 30;
	transportMaxMagazines = 160;
	transportmaxbackpacks = 12;
	
	class Upgrades
	{
		ItemHeliTNK[] = {"UH1H_DZE3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class UH1H_DZE3: UH1H_DZE2
{
	displayName = "$STR_VEH_NAME_UH1H_GREEN+++";
	fuelCapacity = 2700;
};

class UH1H_2_DZ : UH1H_DZ {
	displayname = "$STR_VEH_NAME_UH1H_DESERT";
	hiddenSelections[] = {"Camo1","Camo2","Camo_mlod"};
	hiddenSelectionsTextures[] = {"ca\air_E\UH1H\data\UH1D_TKA_CO.paa","ca\air_E\UH1H\data\UH1D_in_TKA_CO.paa","ca\air_E\UH1H\data\default_TKA_co.paa"};
};

class UH1H_2_DZE: UH1H_DZE {
	displayname = "$STR_VEH_NAME_UH1H_DESERT";
	hiddenSelections[] = {"Camo1","Camo2","Camo_mlod"};
	hiddenSelectionsTextures[] = {"ca\air_E\UH1H\data\UH1D_TKA_CO.paa","ca\air_E\UH1H\data\UH1D_in_TKA_CO.paa","ca\air_E\UH1H\data\default_TKA_co.paa"};
	
	class Upgrades
	{
		ItemHeliAVE[] = {"UH1H_2_DZE1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};	
};

class UH1H_2_DZE1: UH1H_2_DZE
{
	displayName = "$STR_VEH_NAME_UH1H_DESERT+";
	original = "UH1H_2_DZE";
	armor = 60;
	damageResistance = 0.02078;
	
	class Upgrades
	{
		ItemHeliLRK[] = {"UH1H_2_DZE2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class UH1H_2_DZE2: UH1H_2_DZE1
{
	displayName = "$STR_VEH_NAME_UH1H_DESERT++";
	transportMaxWeapons = 30;
	transportMaxMagazines = 160;
	transportmaxbackpacks = 12;
	
	class Upgrades
	{
		ItemHeliTNK[] = {"UH1H_2_DZE3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class UH1H_2_DZE3: UH1H_2_DZE2
{
	displayName = "$STR_VEH_NAME_UH1H_DESERT+++";
	fuelCapacity = 2700;
};

class UH1H_CDF_DZ: UH1H_DZ {
	displayname = "$STR_VEH_NAME_UH1H_CDF";
	hiddenSelections[] = {"Camo1","Camo2","Camo_mlod"};
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\uh1h\uh1d_cdf_co.paa","\dayz_epoch_c\skins\uh1h\uh1d_in_cdf_co.paa","ca\air_E\UH1H\data\default_TKA_co.paa"};	
};

class UH1H_CDF_DZE: UH1H_DZE {
	displayname = "$STR_VEH_NAME_UH1H_CDF";
	hiddenSelections[] = {"Camo1","Camo2","Camo_mlod"};
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\uh1h\uh1d_cdf_co.paa","\dayz_epoch_c\skins\uh1h\uh1d_in_cdf_co.paa","ca\air_E\UH1H\data\default_TKA_co.paa"};	
	
	class Upgrades
	{
		ItemHeliAVE[] = {"UH1H_CDF_DZE1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};	
};

class UH1H_CDF_DZE1: UH1H_CDF_DZE
{
	displayName = "$STR_VEH_NAME_UH1H_CDF+";
	original = "UH1H_CDF_DZE";
	armor = 60;
	damageResistance = 0.02078;
	
	class Upgrades
	{
		ItemHeliLRK[] = {"UH1H_CDF_DZE2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class UH1H_CDF_DZE2: UH1H_CDF_DZE1
{
	displayName = "$STR_VEH_NAME_UH1H_CDF++";
	transportMaxWeapons = 30;
	transportMaxMagazines = 160;
	transportmaxbackpacks = 12;
	
	class Upgrades
	{
		ItemHeliTNK[] = {"UH1H_CDF_DZE3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class UH1H_CDF_DZE3: UH1H_CDF_DZE2
{
	displayName = "$STR_VEH_NAME_UH1H_CDF+++";
	fuelCapacity = 2700;
};

class UH1H_WD_DZ: UH1H_DZ {
	displayname = "$STR_VEH_NAME_UH1H_WOODLAND";
	hiddenSelections[] = {"Camo1","Camo2","Camo_mlod"};
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\uh1h\uh1d_wdl_co.paa","\dayz_epoch_c\skins\uh1h\uh1d_in_wdl_co.paa","\dayz_epoch_c\skins\uh1h\default_wdl_co.paa"};	
};

class UH1H_WD_DZE: UH1H_DZE {
	displayname = "$STR_VEH_NAME_UH1H_WOODLAND";
	hiddenSelections[] = {"Camo1","Camo2","Camo_mlod"};
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\uh1h\uh1d_wdl_co.paa","\dayz_epoch_c\skins\uh1h\uh1d_in_wdl_co.paa","\dayz_epoch_c\skins\uh1h\default_wdl_co.paa"};	
	
	class Upgrades
	{
		ItemHeliAVE[] = {"UH1H_WD_DZE1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};	
};

class UH1H_WD_DZE1: UH1H_WD_DZE
{
	displayName = "$STR_VEH_NAME_UH1H_WOODLAND+";
	original = "UH1H_WD_DZE";
	armor = 60;
	damageResistance = 0.02078;
	
	class Upgrades
	{
		ItemHeliLRK[] = {"UH1H_WD_DZE2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class UH1H_WD_DZE2: UH1H_WD_DZE1
{
	displayName = "$STR_VEH_NAME_UH1H_WOODLAND++";
	transportMaxWeapons = 30;
	transportMaxMagazines = 160;
	transportmaxbackpacks = 12;
	
	class Upgrades
	{
		ItemHeliTNK[] = {"UH1H_WD_DZE3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class UH1H_WD_DZE3: UH1H_WD_DZE2
{
	displayName = "$STR_VEH_NAME_UH1H_WOODLAND+++";
	fuelCapacity = 2700;
};

class UH1H_DES_DZ: UH1H_DZ {
	displayname = "$STR_VEH_NAME_UH1H_DESERT_LIGHT";
	hiddenSelections[] = {"Camo1","Camo2","Camo_mlod"};
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\uh1h\uh1d_racs_2_co.paa","\dayz_epoch_c\skins\uh1h\uh1d_in_racs_co.paa","\dayz_epoch_c\skins\uh1h\default_des_co.paa"};
};

class UH1H_DES_DZE: UH1H_DZE {
	displayname = "$STR_VEH_NAME_UH1H_DESERT_LIGHT";
	hiddenSelections[] = {"Camo1","Camo2","Camo_mlod"};
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\uh1h\uh1d_racs_2_co.paa","\dayz_epoch_c\skins\uh1h\uh1d_in_racs_co.paa","\dayz_epoch_c\skins\uh1h\default_des_co.paa"};
	
	class Upgrades
	{
		ItemHeliAVE[] = {"UH1H_DES_DZE1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};	
};

class UH1H_DES_DZE1: UH1H_DES_DZE
{
	displayName = "$STR_VEH_NAME_UH1H_DESERT_LIGHT+";
	original = "UH1H_DES_DZE";
	armor = 60;
	damageResistance = 0.02078;
	
	class Upgrades
	{
		ItemHeliLRK[] = {"UH1H_DES_DZE2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class UH1H_DES_DZE2: UH1H_DES_DZE1
{
	displayName = "$STR_VEH_NAME_UH1H_DESERT_LIGHT++";
	transportMaxWeapons = 30;
	transportMaxMagazines = 160;
	transportmaxbackpacks = 12;
	
	class Upgrades
	{
		ItemHeliTNK[] = {"UH1H_DES_DZE3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class UH1H_DES_DZE3: UH1H_DES_DZE2
{
	displayName = "$STR_VEH_NAME_UH1H_DESERT_LIGHT+++";
	fuelCapacity = 2700;
};

class UH1H_GREY_DZ: UH1H_DZ {
	displayname = "$STR_VEH_NAME_UH1H_GREY";
	hiddenSelections[] = {"Camo1","Camo2","Camo_mlod"};
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\uh1h\uh1d_sf_co.paa","\dayz_epoch_c\skins\uh1h\uh1d_in_sf_co.paa","\dayz_epoch_c\skins\uh1h\default_grey_co.paa"};
};

class UH1H_GREY_DZE: UH1H_DZE {
	displayname = "$STR_VEH_NAME_UH1H_GREY";
	hiddenSelections[] = {"Camo1","Camo2","Camo_mlod"};
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\uh1h\uh1d_sf_co.paa","\dayz_epoch_c\skins\uh1h\uh1d_in_sf_co.paa","\dayz_epoch_c\skins\uh1h\default_grey_co.paa"};
	
	class Upgrades
	{
		ItemHeliAVE[] = {"UH1H_GREY_DZE1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};	
};

class UH1H_GREY_DZE1: UH1H_GREY_DZE
{
	displayName = "$STR_VEH_NAME_UH1H_GREY+";
	original = "UH1H_GREY_DZE";
	armor = 60;
	damageResistance = 0.02078;
	
	class Upgrades
	{
		ItemHeliLRK[] = {"UH1H_GREY_DZE2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class UH1H_GREY_DZE2: UH1H_GREY_DZE1
{
	displayName = "$STR_VEH_NAME_UH1H_GREY++";
	transportMaxWeapons = 30;
	transportMaxMagazines = 160;
	transportmaxbackpacks = 12;
	
	class Upgrades
	{
		ItemHeliTNK[] = {"UH1H_GREY_DZE3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class UH1H_GREY_DZE3: UH1H_GREY_DZE2
{
	displayName = "$STR_VEH_NAME_UH1H_GREY+++";
	fuelCapacity = 2700;
};

class UH1H_BLACK_DZ: UH1H_DZ {
	displayname = "$STR_VEH_NAME_UH1H_BLACK";
	hiddenSelections[] = {"Camo1","Camo2","Camo_mlod"};
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\uh1h\uh1d_bl_co.paa","\dayz_epoch_c\skins\uh1h\uh1d_in_bl_co.paa","\dayz_epoch_c\skins\uh1h\default_black_co.paa"};
};

class UH1H_BLACK_DZE: UH1H_DZE {
	displayname = "$STR_VEH_NAME_UH1H_BLACK";
	hiddenSelections[] = {"Camo1","Camo2","Camo_mlod"};
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\uh1h\uh1d_bl_co.paa","\dayz_epoch_c\skins\uh1h\uh1d_in_bl_co.paa","\dayz_epoch_c\skins\uh1h\default_black_co.paa"};
	
	class Upgrades
	{
		ItemHeliAVE[] = {"UH1H_BLACK_DZE1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};	
};

class UH1H_BLACK_DZE1: UH1H_BLACK_DZE
{
	displayName = "$STR_VEH_NAME_UH1H_BLACK+";
	original = "UH1H_BLACK_DZE";
	armor = 60;
	damageResistance = 0.02078;
	
	class Upgrades
	{
		ItemHeliLRK[] = {"UH1H_BLACK_DZE2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class UH1H_BLACK_DZE2: UH1H_BLACK_DZE1
{
	displayName = "$STR_VEH_NAME_UH1H_BLACK++";
	transportMaxWeapons = 30;
	transportMaxMagazines = 160;
	transportmaxbackpacks = 12;
	
	class Upgrades
	{
		ItemHeliTNK[] = {"UH1H_BLACK_DZE3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class UH1H_BLACK_DZE3: UH1H_BLACK_DZE2
{
	displayName = "$STR_VEH_NAME_UH1H_BLACK+++";
	fuelCapacity = 2700;
};

class UH1H_SAR_DZ: UH1H_DZ {
	displayname = "$STR_VEH_NAME_UH1H_SAR";
	hiddenSelections[] = {"Camo1","Camo2"};
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\uh1h\uh1d_sar_co.paa","\dayz_epoch_c\skins\uh1h\uh1d_sar_in_co.paa"};
};

class UH1H_SAR_DZE: UH1H_DZE {
	displayname = "$STR_VEH_NAME_UH1H_SAR";
	hiddenSelections[] = {"Camo1","Camo2"};
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\uh1h\uh1d_sar_co.paa","\dayz_epoch_c\skins\uh1h\uh1d_sar_in_co.paa"};
	
	class Upgrades
	{
		ItemHeliAVE[] = {"UH1H_SAR_DZE1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};	
};

class UH1H_SAR_DZE1: UH1H_SAR_DZE
{
	displayName = "$STR_VEH_NAME_UH1H_SAR+";
	original = "UH1H_SAR_DZE";
	armor = 60;
	damageResistance = 0.02078;
	
	class Upgrades
	{
		ItemHeliLRK[] = {"UH1H_SAR_DZE2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class UH1H_SAR_DZE2: UH1H_SAR_DZE1
{
	displayName = "$STR_VEH_NAME_UH1H_SAR++";
	transportMaxWeapons = 30;
	transportMaxMagazines = 160;
	transportmaxbackpacks = 12;
	
	class Upgrades
	{
		ItemHeliTNK[] = {"UH1H_SAR_DZE3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class UH1H_SAR_DZE3: UH1H_SAR_DZE2
{
	displayName = "$STR_VEH_NAME_UH1H_SAR+++";
	fuelCapacity = 2700;
};

class UH1H_WINTER_DZ : UH1H_DZ {
	displayname = "$STR_VEH_NAME_UH1H_WINTER";
	hiddenSelections[] = {"Camo1","Camo2","Camo_mlod"};
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\uh1h\UH1D_winter_CO.paa","\dayz_epoch_c\skins\uh1h\UH1D_in_winter_CO.paa","\dayz_epoch_c\skins\uh1h\default_winter_co.paa"};
};

class UH1H_WINTER_DZE: UH1H_DZE {
	displayname = "$STR_VEH_NAME_UH1H_WINTER";
	hiddenSelections[] = {"Camo1","Camo2","Camo_mlod"};
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\uh1h\UH1D_winter_CO.paa","\dayz_epoch_c\skins\uh1h\UH1D_in_winter_CO.paa","\dayz_epoch_c\skins\uh1h\default_winter_co.paa"};
	
	class Upgrades
	{
		ItemHeliAVE[] = {"UH1H_WINTER_DZE1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};	
};

class UH1H_WINTER_DZE1: UH1H_WINTER_DZE
{
	displayName = "$STR_VEH_NAME_UH1H_WINTER+";
	original = "UH1H_WINTER_DZE";
	armor = 60;
	damageResistance = 0.02078;
	
	class Upgrades
	{
		ItemHeliLRK[] = {"UH1H_WINTER_DZE2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class UH1H_WINTER_DZE2: UH1H_WINTER_DZE1
{
	displayName = "$STR_VEH_NAME_UH1H_WINTER++";
	transportMaxWeapons = 30;
	transportMaxMagazines = 160;
	transportmaxbackpacks = 12;
	
	class Upgrades
	{
		ItemHeliTNK[] = {"UH1H_WINTER_DZE3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class UH1H_WINTER_DZE3: UH1H_WINTER_DZE2
{
	displayName = "$STR_VEH_NAME_UH1H_WINTER+++";
	fuelCapacity = 2700;
};