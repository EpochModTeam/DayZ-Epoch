class pook_H13_base;
class pook_H13_base_DZE: pook_H13_base
{
	scope = 0;
	vehicleClass = "DayZ Epoch Vehicles";
	crew = "";
	enablemanualfire = 0;
	typicalCargo[] = {};
	radarType = 0;
	class TransportMagazines{};
	class TransportWeapons{};
	class Turrets {};
	weapons[] = {"CMFlareLauncher"};
	magazines[] = {"60Rnd_CMFlareMagazine","60Rnd_CMFlareMagazine"};
	threat[] = {0,0,0};
	commanderCanSee = 2+16+32;
	gunnerCanSee = 2+16+32;
	driverCanSee = 2+16+32;
	transportMaxWeapons = 10;
	transportMaxMagazines = 40;
	transportmaxbackpacks = 4;
	attendant = 0;	
	transportAmmo = 0;
	hideWeaponsCargo = 0;
	fuelCapacity = 450;
	supplyRadius = 1.3;
};

class pook_medevac_DZE: pook_H13_base_DZE
{
	scope = 2;
	displayName = "$STR_VEH_NAME_BELLH13_MEDEVAC";
	model = "\pook_H13\pook_H13_medevac.p3d";
	hiddenSelectionsTextures[] = {"pook_h13\data\mi17_body_co.paa","CA\wheeled\data\Signs\red_cross_ca.paa","ca\air\data\clear_empty.paa"};
	transportSoldier = 3;
	cargoAction[] = {"UAZ_Cargo01","M113_Cargo04_EP1","M113_Cargo04_EP1"};
	
	class Upgrades
	{
		ItemHeliAVE[] = {"pook_medevac_DZE1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class pook_medevac_DZE1: pook_medevac_DZE
{
	displayName = "$STR_VEH_NAME_BELLH13_MEDEVAC+";
	original = "pook_medevac_DZE";
	armor = 60;
	damageResistance = 0.02078;
	
	class Upgrades
	{
		ItemHeliLRK[] = {"pook_medevac_DZE2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class pook_medevac_DZE2: pook_medevac_DZE1
{
	displayName = "$STR_VEH_NAME_BELLH13_MEDEVAC++";
	transportMaxWeapons = 20;
	transportMaxMagazines = 80;
	transportmaxbackpacks = 8;
	
	class Upgrades
	{
		ItemHeliTNK[] = {"pook_medevac_DZE3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class pook_medevac_DZE3: pook_medevac_DZE2
{
	displayName = "$STR_VEH_NAME_BELLH13_MEDEVAC+++";
	fuelCapacity = 1000;
};

class pook_medevac_CDF_DZE: pook_medevac_DZE
{
	displayName = "$STR_VEH_NAME_BELLH13_MEDEVAC_GREEN";
	hiddenSelectionsTextures[] = {"\CA\air\Data\mi8_body_g_cdf_co.paa","CA\wheeled\data\Signs\red_cross_ca.paa","ca\air\data\clear_empty.paa"};

	class Upgrades
	{
		ItemHeliAVE[] = {"pook_medevac_CDF_DZE1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class pook_medevac_CDF_DZE1: pook_medevac_CDF_DZE
{
	displayName = "$STR_VEH_NAME_BELLH13_MEDEVAC_GREEN+";
	original = "pook_medevac_CDF_DZE";
	armor = 60;
	damageResistance = 0.02078;
	
	class Upgrades
	{
		ItemHeliLRK[] = {"pook_medevac_CDF_DZE2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class pook_medevac_CDF_DZE2: pook_medevac_CDF_DZE1
{
	displayName = "$STR_VEH_NAME_BELLH13_MEDEVAC_GREEN++";
	transportMaxWeapons = 20;
	transportMaxMagazines = 80;
	transportmaxbackpacks = 8;
	
	class Upgrades
	{
		ItemHeliTNK[] = {"pook_medevac_CDF_DZE3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class pook_medevac_CDF_DZE3: pook_medevac_CDF_DZE2
{
	displayName = "$STR_VEH_NAME_BELLH13_MEDEVAC_GREEN+++";
	fuelCapacity = 1000;
};

class pook_medevac_CIV_DZE: pook_medevac_DZE
{
	displayName = "$STR_VEH_NAME_BELLH13_MEDEVAC_ORANGE";
	hiddenSelectionsTextures[] = {"\CA\air2\Chukar\Data\chukar_co.paa","CA\wheeled\data\Signs\red_cross_ca.paa","ca\air\data\clear_empty.paa"};

	class Upgrades
	{
		ItemHeliAVE[] = {"pook_medevac_CIV_DZE1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class pook_medevac_CIV_DZE1: pook_medevac_CIV_DZE
{
	displayName = "$STR_VEH_NAME_BELLH13_MEDEVAC_ORANGE+";
	original = "pook_medevac_CIV_DZE";
	armor = 60;
	damageResistance = 0.02078;
	
	class Upgrades
	{
		ItemHeliLRK[] = {"pook_medevac_CIV_DZE2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class pook_medevac_CIV_DZE2: pook_medevac_CIV_DZE1
{
	displayName = "$STR_VEH_NAME_BELLH13_MEDEVAC_ORANGE++";
	transportMaxWeapons = 20;
	transportMaxMagazines = 80;
	transportmaxbackpacks = 8;
	
	class Upgrades
	{
		ItemHeliTNK[] = {"pook_medevac_CIV_DZE3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class pook_medevac_CIV_DZE3: pook_medevac_CIV_DZE2
{
	displayName = "$STR_VEH_NAME_BELLH13_MEDEVAC_ORANGE+++";
	fuelCapacity = 1000;
};

class pook_gunship_DZ:  pook_H13_base_DZE
{
	scope = 2;
	displayName = "$STR_VEH_NAME_BELLH13_GUNSHIP";
	model = "\pook_H13\pook_H13_gunship.p3d";
	hiddenSelectionsTextures[] = {"pook_h13\data\mi17_body_co.paa","ca\air\data\clear_empty.paa","ca\air\data\clear_empty.paa","ca\a10\data\a10_01_co.paa","ca\a10\data\a10_02_co.paa"};
	transportSoldier = 1;
	threat[] = {0.05,0.1,0.01};
	gunBeg[] = {"muzzle_1","muzzle_2"};
	gunEnd[] = {"chamber_1","chamber_2"};
	memoryPointGun = "machinegun";
	memoryPointLMissile = "Missile_1";
	memoryPointRMissile = "Missile_2";
	memoryPointLRocket = "Rocket_1";
	memoryPointRRocket = "Rocket_2";
	selectionFireAnim = "zasleh";
	weapons[] = {"pook_M60_dual","pook_H13Grenades","CMFlareLauncher"};
	magazines[] = {"pook_1300Rnd_762x51_M60","pook_12Rnd_Grenade_Camel","60Rnd_CMFlareMagazine","60Rnd_CMFlareMagazine"};
};

class pook_gunship_DZE: pook_gunship_DZ
{
	magazines[] = {"60Rnd_CMFlareMagazine","60Rnd_CMFlareMagazine"};
	
	class Upgrades
	{
		ItemHeliAVE[] = {"pook_gunship_DZE1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class pook_gunship_DZE1: pook_gunship_DZE
{
	displayName = "$STR_VEH_NAME_BELLH13_GUNSHIP+";
	original = "pook_gunship_DZE";
	armor = 60;
	damageResistance = 0.02078;
	
	class Upgrades
	{
		ItemHeliLRK[] = {"pook_gunship_DZE2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class pook_gunship_DZE2: pook_gunship_DZE1
{
	displayName = "$STR_VEH_NAME_BELLH13_GUNSHIP++";
	transportMaxWeapons = 20;
	transportMaxMagazines = 80;
	transportmaxbackpacks = 8;
	
	class Upgrades
	{
		ItemHeliTNK[] = {"pook_gunship_DZE3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class pook_gunship_DZE3: pook_gunship_DZE2
{
	displayName = "$STR_VEH_NAME_BELLH13_GUNSHIP+++";
	fuelCapacity = 1000;
};

class pook_gunship_CDF_DZ: pook_gunship_DZ
{
	displayName = "$STR_VEH_NAME_BELLH13_GUNSHIP_GREEN";
	hiddenSelectionsTextures[] = {"\CA\air\Data\mi8_body_g_cdf_co.paa","ca\air\data\clear_empty.paa","ca\air\data\clear_empty.paa"};
};

class pook_gunship_CDF_DZE: pook_gunship_CDF_DZ
{
	magazines[] = {"60Rnd_CMFlareMagazine","60Rnd_CMFlareMagazine"};
	
	class Upgrades
	{
		ItemHeliAVE[] = {"pook_gunship_CDF_DZE1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class pook_gunship_CDF_DZE1: pook_gunship_CDF_DZE
{
	displayName = "$STR_VEH_NAME_BELLH13_GUNSHIP_GREEN+";
	original = "pook_gunship_CDF_DZE";
	armor = 60;
	damageResistance = 0.02078;
	
	class Upgrades
	{
		ItemHeliLRK[] = {"pook_gunship_CDF_DZE2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class pook_gunship_CDF_DZE2: pook_gunship_CDF_DZE1
{
	displayName = "$STR_VEH_NAME_BELLH13_GUNSHIP_GREEN++";
	transportMaxWeapons = 20;
	transportMaxMagazines = 80;
	transportmaxbackpacks = 8;
	
	class Upgrades
	{
		ItemHeliTNK[] = {"pook_gunship_CDF_DZE3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class pook_gunship_CDF_DZE3: pook_gunship_CDF_DZE2
{
	displayName = "$STR_VEH_NAME_BELLH13_GUNSHIP_GREEN+++";
	fuelCapacity = 1000;
};

class pook_H13_transport;
class pook_transport_DZ: pook_H13_transport
{
	scope = 2;
	displayName = "$STR_VEH_NAME_BELLH13_TRANSPORT";
	crew = "";
	typicalCargo[] = {};
	radarType = 0;
	class TransportMagazines{};
	class TransportWeapons{};	
	cargoIsCoDriver[] = {1,0,0};
	cargoAction[] = {"MH6_Cargo01","MH6_Cargo03","MH6_Cargo02"};
	threat[] = {0.01,0.01,0.01};
	commanderCanSee = 2+16+32;
	gunnerCanSee = 2+16+32;
	driverCanSee = 2+16+32;
	transportMaxWeapons = 3;
	transportMaxMagazines = 30;
	transportmaxbackpacks = 2;
	attendant = 0;	
	transportAmmo = 0;
	hideWeaponsCargo = 0;
	fuelCapacity = 450;	
	weapons[] = {"pook_H13Grenades","CMFlareLauncher"};
	magazines[] = {"pook_12Rnd_Grenade_Camel","60Rnd_CMFlareMagazine","60Rnd_CMFlareMagazine"};
	
	class Turrets; // External class reference
	class MainTurret; // External class reference
};

class pook_transport_DZE: pook_transport_DZ
{	
	enableManualFire = 0;
	magazines[] = {"60Rnd_CMFlareMagazine","60Rnd_CMFlareMagazine"};
	class Turrets : Turrets {
		class MainTurret : MainTurret {
			magazines[] = {};
		};
	};	
	
	class Upgrades
	{
		ItemHeliAVE[] = {"pook_transport_DZE1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class pook_transport_DZE1: pook_transport_DZE
{
	displayName = "$STR_VEH_NAME_BELLH13_TRANSPORT+";
	original = "pook_transport_DZE";
	armor = 60;
	damageResistance = 0.02078;
	
	class Upgrades
	{
		ItemHeliLRK[] = {"pook_transport_DZE2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class pook_transport_DZE2: pook_transport_DZE1
{
	displayName = "$STR_VEH_NAME_BELLH13_TRANSPORT++";
	transportMaxWeapons = 20;
	transportMaxMagazines = 80;
	transportmaxbackpacks = 8;
	
	class Upgrades
	{
		ItemHeliTNK[] = {"pook_transport_DZE3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class pook_transport_DZE3: pook_transport_DZE2
{
	displayName = "$STR_VEH_NAME_BELLH13_TRANSPORT+++";
	fuelCapacity = 1000;
};

class pook_transport_CDF_DZ: pook_transport_DZ
{
	displayName = "$STR_VEH_NAME_BELLH13_TRANSPORT_GREEN";
	hiddenSelectionsTextures[] = {"\CA\air\Data\mi8_body_g_cdf_co.paa","ca\air\data\clear_empty.paa","ca\air\data\clear_empty.paa"};
};

class pook_transport_CDF_DZE: pook_transport_CDF_DZ
{
	enableManualFire = 0;
	magazines[] = {"60Rnd_CMFlareMagazine","60Rnd_CMFlareMagazine"};
	class Turrets : Turrets {
		class MainTurret : MainTurret {
			magazines[] = {};
		};
	};	
	
	class Upgrades
	{
		ItemHeliAVE[] = {"pook_transport_CDF_DZE1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class pook_transport_CDF_DZE1: pook_transport_CDF_DZE
{
	displayName = "$STR_VEH_NAME_BELLH13_TRANSPORT_GREEN+";
	original = "pook_transport_CDF_DZE";
	armor = 60;
	damageResistance = 0.02078;
	
	class Upgrades
	{
		ItemHeliLRK[] = {"pook_transport_CDF_DZE2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class pook_transport_CDF_DZE2: pook_transport_CDF_DZE1
{
	displayName = "$STR_VEH_NAME_BELLH13_TRANSPORT_GREEN++";
	transportMaxWeapons = 20;
	transportMaxMagazines = 80;
	transportmaxbackpacks = 8;
	
	class Upgrades
	{
		ItemHeliTNK[] = {"pook_transport_CDF_DZE3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class pook_transport_CDF_DZE3: pook_transport_CDF_DZE2
{
	displayName = "$STR_VEH_NAME_BELLH13_TRANSPORT_GREEN+++";
	fuelCapacity = 1000;
};

class pook_H13_civ_DZE: pook_H13_base_DZE
{
	scope = 2;
	displayName = "$STR_VEH_NAME_BELLH13_CIV";
	hiddenSelectionsTextures[] = {"\CA\air\Data\mi8civil_body_g_co.paa","ca\air\data\clear_empty.paa","ca\air\data\clear_empty.paa"};
	
	class Upgrades
	{
		ItemHeliAVE[] = {"pook_H13_civ_DZE1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class pook_H13_civ_DZE1: pook_H13_civ_DZE
{
	displayName = "$STR_VEH_NAME_BELLH13_CIV+";
	original = "pook_H13_civ_DZE";
	armor = 60;
	damageResistance = 0.02078;
	
	class Upgrades
	{
		ItemHeliLRK[] = {"pook_H13_civ_DZE2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class pook_H13_civ_DZE2: pook_H13_civ_DZE1
{
	displayName = "$STR_VEH_NAME_BELLH13_CIV++";
	transportMaxWeapons = 20;
	transportMaxMagazines = 80;
	transportmaxbackpacks = 8;
	
	class Upgrades
	{
		ItemHeliTNK[] = {"pook_H13_civ_DZE3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class pook_H13_civ_DZE3: pook_H13_civ_DZE2
{
	displayName = "$STR_VEH_NAME_BELLH13_CIV+++";
	fuelCapacity = 1000;
};

class pook_H13_civ_white_DZE: pook_H13_civ_DZE
{
	displayName = "$STR_VEH_NAME_BELLH13_CIV_WHITE";
	hiddenSelectionsTextures[] = {"\CA\air_e\Data\mi17_body_un_co.paa","ca\air\data\clear_empty.paa","ca\air\data\clear_empty.paa"};
	
	class Upgrades
	{
		ItemHeliAVE[] = {"pook_H13_civ_white_DZE1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class pook_H13_civ_white_DZE1: pook_H13_civ_white_DZE
{
	displayName = "$STR_VEH_NAME_BELLH13_CIV_WHITE+";
	original = "pook_H13_civ_white_DZE";
	armor = 60;
	damageResistance = 0.02078;
	
	class Upgrades
	{
		ItemHeliLRK[] = {"pook_H13_civ_white_DZE2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class pook_H13_civ_white_DZE2: pook_H13_civ_white_DZE1
{
	displayName = "$STR_VEH_NAME_BELLH13_CIV_WHITE++";
	transportMaxWeapons = 20;
	transportMaxMagazines = 80;
	transportmaxbackpacks = 8;
	
	class Upgrades
	{
		ItemHeliTNK[] = {"pook_H13_civ_white_DZE3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class pook_H13_civ_white_DZE3: pook_H13_civ_white_DZE2
{
	displayName = "$STR_VEH_NAME_BELLH13_CIV_WHITE+++";
	fuelCapacity = 1000;
};

class pook_H13_civ_slate_DZE: pook_H13_civ_DZE
{
	displayName = "$STR_VEH_NAME_BELLH13_CIV_BLUE";
	hiddenSelectionsTextures[] = {"\CA\water2\Seafox\Data\seafox_co.paa","ca\air\data\clear_empty.paa","ca\air\data\clear_empty.paa"};
	
	class Upgrades
	{
		ItemHeliAVE[] = {"pook_H13_civ_slate_DZE1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class pook_H13_civ_slate_DZE1: pook_H13_civ_slate_DZE
{
	displayName = "$STR_VEH_NAME_BELLH13_CIV_BLUE+";
	original = "pook_H13_civ_slate_DZE";
	armor = 60;
	damageResistance = 0.02078;
	
	class Upgrades
	{
		ItemHeliLRK[] = {"pook_H13_civ_slate_DZE2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class pook_H13_civ_slate_DZE2: pook_H13_civ_slate_DZE1
{
	displayName = "$STR_VEH_NAME_BELLH13_CIV_BLUE++";
	transportMaxWeapons = 20;
	transportMaxMagazines = 80;
	transportmaxbackpacks = 8;
	
	class Upgrades
	{
		ItemHeliTNK[] = {"pook_H13_civ_slate_DZE3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class pook_H13_civ_slate_DZE3: pook_H13_civ_slate_DZE2
{
	displayName = "$STR_VEH_NAME_BELLH13_CIV_BLUE+++";
	fuelCapacity = 1000;
};

class pook_H13_civ_black_DZE: pook_H13_civ_DZE
{
	displayName = "$STR_VEH_NAME_BELLH13_CIV_BLACK";
	hiddenSelectionsTextures[] = {"ca\air\data\clear_empty.paa","ca\air\data\clear_empty.paa","ca\air\data\clear_empty.paa"};
	
	class Upgrades
	{
		ItemHeliAVE[] = {"pook_H13_civ_black_DZE1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class pook_H13_civ_black_DZE1: pook_H13_civ_black_DZE
{
	displayName = "$STR_VEH_NAME_BELLH13_CIV_BLACK+";
	original = "pook_H13_civ_black_DZE";
	armor = 60;
	damageResistance = 0.02078;
	
	class Upgrades
	{
		ItemHeliLRK[] = {"pook_H13_civ_black_DZE2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class pook_H13_civ_black_DZE2: pook_H13_civ_black_DZE1
{
	displayName = "$STR_VEH_NAME_BELLH13_CIV_BLACK++";
	transportMaxWeapons = 20;
	transportMaxMagazines = 80;
	transportmaxbackpacks = 8;
	
	class Upgrades
	{
		ItemHeliTNK[] = {"pook_H13_civ_black_DZE3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class pook_H13_civ_black_DZE3: pook_H13_civ_black_DZE2
{
	displayName = "$STR_VEH_NAME_BELLH13_CIV_BLACK+++";
	fuelCapacity = 1000;
};

class pook_H13_civ_yellow_DZE: pook_H13_civ_DZE
{
	displayName = "$STR_VEH_NAME_BELLH13_CIV_YELLOW";
	hiddenSelectionsTextures[] = {"pook_h13\data\yellow.paa","ca\air\data\clear_empty.paa","ca\air\data\clear_empty.paa"};
	
	class Upgrades
	{
		ItemHeliAVE[] = {"pook_H13_civ_yellow_DZE1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class pook_H13_civ_yellow_DZE1: pook_H13_civ_yellow_DZE
{
	displayName = "$STR_VEH_NAME_BELLH13_CIV_YELLOW+";
	original = "pook_H13_civ_yellow_DZE";
	armor = 60;
	damageResistance = 0.02078;
	
	class Upgrades
	{
		ItemHeliLRK[] = {"pook_H13_civ_yellow_DZE2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class pook_H13_civ_yellow_DZE2: pook_H13_civ_yellow_DZE1
{
	displayName = "$STR_VEH_NAME_BELLH13_CIV_YELLOW++";
	transportMaxWeapons = 20;
	transportMaxMagazines = 80;
	transportmaxbackpacks = 8;
	
	class Upgrades
	{
		ItemHeliTNK[] = {"pook_H13_civ_yellow_DZE3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class pook_H13_civ_yellow_DZE3: pook_H13_civ_yellow_DZE2
{
	displayName = "$STR_VEH_NAME_BELLH13_CIV_YELLOW+++";
	fuelCapacity = 1000;
};