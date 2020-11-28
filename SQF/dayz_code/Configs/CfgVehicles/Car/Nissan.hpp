class Nissan_base: VWGolf
{
	scope = 0;
	displayname = "Nissun 350z";	
	model = "\z\addons\dayz_epoch_v\vehicles\nissan\nissan350z";
	picture = "\dayz_epoch_c\icons\vehicles\nissan.paa";
	vehicleClass = "DayZ Epoch Vehicles";
	armor = 60;
	damageResistance = 0.01821;
	transportsoldier = 1;
	transportmaxweapons = 10;
	transportmaxmagazines = 50;
	transportmaxbackpacks = 4;
	fuelcapacity = 100;
	maxspeed = 120;
	weapons[] = {minicarhorn};
	driveraction = suv_driver_ep1;
	cargoaction[] = {suv_cargo_ep1,suv_cargo02_ep1,suv_cargo01_ep1,suv_cargo02_ep1,suv_cargo01_ep1};
	typicalcargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};	
	class HitPoints;
	class HitLFWheel;
	class HitLBWheel;
	class HitRFWheel;
	class HitRBWheel;
	class HitFuel;
	class HitEngine;
	class HitGlass1;
	class HitGlass2;
	class HitGlass3;
	class HitGlass4;	
	crew = "";
	terrainCoef = 4;
	turnCoef = 2;
	hiddenselections[] = {"camo1","camo2","camo3"};

	class damage
	{
		tex[]={};
		mat[]=
		{
			"z\addons\dayz_epoch_v\vehicles\nissan\data\nissan350z_atlas.rvmat",
			"z\addons\dayz_epoch_v\vehicles\nissan\data\nissan350z_atlas_damage.rvmat",
			"z\addons\dayz_epoch_v\vehicles\nissan\data\nissan350z_atlas_destruct.rvmat",

			"z\addons\dayz_epoch_v\vehicles\nissan\data\nissan350z_body.rvmat",
			"z\addons\dayz_epoch_v\vehicles\nissan\data\nissan350z_body_damage.rvmat",
			"z\addons\dayz_epoch_v\vehicles\nissan\data\nissan350z_body_destruct.rvmat",

			"ca\wheeled2\vwgolf\data\vwgolf_sklo.rvmat",
			"Ca\wheeled_E\Data\auta_skla_damage.rvmat",
			"Ca\wheeled_E\Data\auta_skla_damage.rvmat"
		};
	};
	class nvgmarkers {};
};

class Nissan_Orange_DZE: Nissan_base
{
	scope = 2;
	displayname = $STR_VEH_NAME_NISSAN_ORANGE;
	hiddenselectionstextures[] = 
	{
		"\z\addons\dayz_epoch_v\vehicles\nissan\data\nissan350z_atlas_co.paa",
		"\z\addons\dayz_epoch_v\vehicles\nissan\data\nissan350z_body_01_co.paa",
		"\z\addons\dayz_epoch_v\vehicles\nissan\data\plates\licence4_co.paa"			
	};
	
	class Upgrades {
		ItemORP[] = {"Nissan_Orange_DZE1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",4},{"ItemScrews",2}}};
	};
};	

// Performance 1
class Nissan_Orange_DZE1: Nissan_Orange_DZE {
	displayname = "$STR_VEH_NAME_NISSAN_ORANGE+";
	original = "Nissan_Orange_DZE";
	maxspeed = 250;
	terrainCoef = 1.0;
	
	class HitPoints: HitPoints {
		class HitLFWheel;
		class HitLBWheel;
		class HitRFWheel;
		class HitRBWheel;
		class HitFuel;
		class HitEngine;
		class HitGlass1;
		class HitGlass2;
		class HitGlass3;
		class HitGlass4;
	};	

	class Upgrades {
		ItemAVE[] = {"Nissan_Orange_DZE2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"PartGeneric",6},{"ItemScrews",4}}};
	};
};

// Armor 2
class Nissan_Orange_DZE2: Nissan_Orange_DZE1 {
	displayname = "$STR_VEH_NAME_NISSAN_ORANGE++";
	armor = 80;
	class HitPoints: HitPoints {
		class HitLFWheel: HitLFWheel {
			armor = 0.5;
		};
		class HitLBWheel: HitLBWheel {
			armor = 0.5;
		};
		class HitRFWheel: HitRFWheel {
			armor = 0.5;
		};
		class HitRBWheel: HitRBWheel {
			armor = 0.5;
		};
		class HitFuel: HitFuel {
			armor = 1;
		};
		class HitEngine: HitEngine {
			armor = 1;
		};
		class HitGlass1: HitGlass1 {
			armor = 1.3;
		};
		class HitGlass2: HitGlass2 {
			armor = 1.3;
		};
	};

	class Upgrades {
		ItemLRK[] = {"Nissan_Orange_DZE3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

// Cargo 3
class Nissan_Orange_DZE3: Nissan_Orange_DZE2 {
	displayname = "$STR_VEH_NAME_NISSAN_ORANGE+++";
	transportMaxWeapons = 20;
	transportMaxMagazines = 100;
    transportmaxbackpacks = 8;

	class Upgrades {
		ItemTNK[] = {"Nissan_Orange_DZE4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",2},{"ItemJerrycan",4},{"ItemScrews",1}}};
	};
};

// Fuel 4
class Nissan_Orange_DZE4: Nissan_Orange_DZE3 {
	displayname = "$STR_VEH_NAME_NISSAN_ORANGE++++";
	fuelCapacity = 250;
};

class Nissan_Blue_DZE: Nissan_base
{
	scope = 2;
	displayname = "$STR_VEH_NAME_NISSAN_BLUE";
	hiddenselectionstextures[] = 
	{
		"\z\addons\dayz_epoch_v\vehicles\nissan\data\nissan350z_atlas_co.paa",
		"\z\addons\dayz_epoch_v\vehicles\nissan\data\skins\skin_blue.paa",
		"\z\addons\dayz_epoch_v\vehicles\nissan\data\plates\licence_co.paa"			
	};
	
	class Upgrades {
		ItemORP[] = {"Nissan_Blue_DZE1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",4},{"ItemScrews",2}}};
	};	
};

// Performance 1
class Nissan_Blue_DZE1: Nissan_Blue_DZE {
	displayname = "$STR_VEH_NAME_NISSAN_BLUE+";
	original = "Nissan_Blue_DZE";
	maxspeed = 250;
	terrainCoef = 1.0;
	
	class HitPoints: HitPoints {
		class HitLFWheel;
		class HitLBWheel;
		class HitRFWheel;
		class HitRBWheel;
		class HitFuel;
		class HitEngine;
		class HitGlass1;
		class HitGlass2;
		class HitGlass3;
		class HitGlass4;
	};	

	class Upgrades {
		ItemAVE[] = {"Nissan_Blue_DZE2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"PartGeneric",6},{"ItemScrews",4}}};
	};
};

// Armor 2
class Nissan_Blue_DZE2: Nissan_Blue_DZE1 {
	displayname = "$STR_VEH_NAME_NISSAN_BLUE++";
	armor = 80;
	class HitPoints: HitPoints {
		class HitLFWheel: HitLFWheel {
			armor = 0.5;
		};
		class HitLBWheel: HitLBWheel {
			armor = 0.5;
		};
		class HitRFWheel: HitRFWheel {
			armor = 0.5;
		};
		class HitRBWheel: HitRBWheel {
			armor = 0.5;
		};
		class HitFuel: HitFuel {
			armor = 1;
		};
		class HitEngine: HitEngine {
			armor = 1;
		};
		class HitGlass1: HitGlass1 {
			armor = 1.3;
		};
		class HitGlass2: HitGlass2 {
			armor = 1.3;
		};
	};

	class Upgrades {
		ItemLRK[] = {"Nissan_Blue_DZE3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

// Cargo 3
class Nissan_Blue_DZE3: Nissan_Blue_DZE2 {
	displayname = "$STR_VEH_NAME_NISSAN_BLUE+++";
	transportMaxWeapons = 20;
	transportMaxMagazines = 100;
    transportmaxbackpacks = 8;

	class Upgrades {
		ItemTNK[] = {"Nissan_Blue_DZE4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",2},{"ItemJerrycan",4},{"ItemScrews",1}}};
	};
};

// Fuel 4
class Nissan_Blue_DZE4: Nissan_Blue_DZE3 {
	displayname = "$STR_VEH_NAME_NISSAN_BLUE++++";
	fuelCapacity = 250;
};

class Nissan_Mod_DZE: Nissan_base
{
	scope = 2;
	displayname = "$STR_VEH_NAME_NISSAN_MOD";
	hiddenselectionstextures[] = 
	{
		"\z\addons\dayz_epoch_v\vehicles\nissan\data\nissan350z_atlas_co.paa",
		"\z\addons\dayz_epoch_v\vehicles\nissan\data\skins\skin_emery.paa",
		"\z\addons\dayz_epoch_v\vehicles\nissan\data\plates\licence1_co.paa"			
	};
	
	class Upgrades {
		ItemORP[] = {"Nissan_Mod_DZE1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",4},{"ItemScrews",2}}};
	};	
};

// Performance 1
class Nissan_Mod_DZE1: Nissan_Mod_DZE {
	displayname = "$STR_VEH_NAME_NISSAN_MOD+";
	original = "Nissan_Mod_DZE";
	maxspeed = 250;
	terrainCoef = 1.0;
	
	class HitPoints: HitPoints {
		class HitLFWheel;
		class HitLBWheel;
		class HitRFWheel;
		class HitRBWheel;
		class HitFuel;
		class HitEngine;
		class HitGlass1;
		class HitGlass2;
		class HitGlass3;
		class HitGlass4;
	};	

	class Upgrades {
		ItemAVE[] = {"Nissan_Mod_DZE2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"PartGeneric",6},{"ItemScrews",4}}};
	};
};

// Armor 2
class Nissan_Mod_DZE2: Nissan_Mod_DZE1 {
	displayname = "$STR_VEH_NAME_NISSAN_MOD++";
	armor = 80;
	class HitPoints: HitPoints {
		class HitLFWheel: HitLFWheel {
			armor = 0.5;
		};
		class HitLBWheel: HitLBWheel {
			armor = 0.5;
		};
		class HitRFWheel: HitRFWheel {
			armor = 0.5;
		};
		class HitRBWheel: HitRBWheel {
			armor = 0.5;
		};
		class HitFuel: HitFuel {
			armor = 1;
		};
		class HitEngine: HitEngine {
			armor = 1;
		};
		class HitGlass1: HitGlass1 {
			armor = 1.3;
		};
		class HitGlass2: HitGlass2 {
			armor = 1.3;
		};
	};

	class Upgrades {
		ItemLRK[] = {"Nissan_Mod_DZE3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

// Cargo 3
class Nissan_Mod_DZE3: Nissan_Mod_DZE2 {
	displayname = "$STR_VEH_NAME_NISSAN_MOD+++";
	transportMaxWeapons = 20;
	transportMaxMagazines = 100;
    transportmaxbackpacks = 8;

	class Upgrades {
		ItemTNK[] = {"Nissan_Mod_DZE4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",2},{"ItemJerrycan",4},{"ItemScrews",1}}};
	};
};

// Fuel 4
class Nissan_Mod_DZE4: Nissan_Mod_DZE3 {
	displayname = "$STR_VEH_NAME_NISSAN_MOD++++";
	fuelCapacity = 250;
};

class Nissan_Gold_DZE: Nissan_base
{
	scope = 2;
	displayname = "$STR_VEH_NAME_NISSAN_GOLD";
	hiddenselectionstextures[] = 
	{
		"\z\addons\dayz_epoch_v\vehicles\nissan\data\nissan350z_atlas_co.paa",
		"\z\addons\dayz_epoch_v\vehicles\nissan\data\skins\skin_gold.paa",
		"\z\addons\dayz_epoch_v\vehicles\nissan\data\plates\licence2_co.paa"			
	};
	
	class Upgrades {
		ItemORP[] = {"Nissan_Gold_DZE1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",4},{"ItemScrews",2}}};
	};	
};

// Performance 1
class Nissan_Gold_DZE1: Nissan_Gold_DZE {
	displayname = "$STR_VEH_NAME_NISSAN_GOLD+";
	original = "Nissan_Gold_DZE";
	maxspeed = 250;
	terrainCoef = 1.0;
	
	class HitPoints: HitPoints {
		class HitLFWheel;
		class HitLBWheel;
		class HitRFWheel;
		class HitRBWheel;
		class HitFuel;
		class HitEngine;
		class HitGlass1;
		class HitGlass2;
		class HitGlass3;
		class HitGlass4;
	};	

	class Upgrades {
		ItemAVE[] = {"Nissan_Gold_DZE2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"PartGeneric",6},{"ItemScrews",4}}};
	};
};

// Armor 2
class Nissan_Gold_DZE2: Nissan_Gold_DZE1 {
	displayname = "$STR_VEH_NAME_NISSAN_GOLD++";
	armor = 80;
	class HitPoints: HitPoints {
		class HitLFWheel: HitLFWheel {
			armor = 0.5;
		};
		class HitLBWheel: HitLBWheel {
			armor = 0.5;
		};
		class HitRFWheel: HitRFWheel {
			armor = 0.5;
		};
		class HitRBWheel: HitRBWheel {
			armor = 0.5;
		};
		class HitFuel: HitFuel {
			armor = 1;
		};
		class HitEngine: HitEngine {
			armor = 1;
		};
		class HitGlass1: HitGlass1 {
			armor = 1.3;
		};
		class HitGlass2: HitGlass2 {
			armor = 1.3;
		};
	};

	class Upgrades {
		ItemLRK[] = {"Nissan_Gold_DZE3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

// Cargo 3
class Nissan_Gold_DZE3: Nissan_Gold_DZE2 {
	displayname = "$STR_VEH_NAME_NISSAN_GOLD+++";
	transportMaxWeapons = 20;
	transportMaxMagazines = 100;
    transportmaxbackpacks = 8;

	class Upgrades {
		ItemTNK[] = {"Nissan_Gold_DZE4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",2},{"ItemJerrycan",4},{"ItemScrews",1}}};
	};
};

// Fuel 4
class Nissan_Gold_DZE4: Nissan_Gold_DZE3 {
	displayname = "$STR_VEH_NAME_NISSAN_GOLD++++";
	fuelCapacity = 250;
};

class Nissan_Green_DZE: Nissan_base
{
	scope = 2;
	displayname = "$STR_VEH_NAME_NISSAN_GREEN";
	hiddenselectionstextures[] = 
	{
		"\z\addons\dayz_epoch_v\vehicles\nissan\data\nissan350z_atlas_co.paa",
		"\z\addons\dayz_epoch_v\vehicles\nissan\data\skins\skin_green.paa",
		"\z\addons\dayz_epoch_v\vehicles\nissan\data\plates\licence3_co.paa"			
	};
	
	class Upgrades {
		ItemORP[] = {"Nissan_Green_DZE1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",4},{"ItemScrews",2}}};
	};	
};

// Performance 1
class Nissan_Green_DZE1: Nissan_Green_DZE {
	displayname = "$STR_VEH_NAME_NISSAN_GREEN+";
	original = "Nissan_Green_DZE";
	maxspeed = 250;
	terrainCoef = 1.0;
	
	class HitPoints: HitPoints {
		class HitLFWheel;
		class HitLBWheel;
		class HitRFWheel;
		class HitRBWheel;
		class HitFuel;
		class HitEngine;
		class HitGlass1;
		class HitGlass2;
		class HitGlass3;
		class HitGlass4;
	};	

	class Upgrades {
		ItemAVE[] = {"Nissan_Green_DZE2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"PartGeneric",6},{"ItemScrews",4}}};
	};
};

// Armor 2
class Nissan_Green_DZE2: Nissan_Green_DZE1 {
	displayname = "$STR_VEH_NAME_NISSAN_GREEN++";
	armor = 80;
	class HitPoints: HitPoints {
		class HitLFWheel: HitLFWheel {
			armor = 0.5;
		};
		class HitLBWheel: HitLBWheel {
			armor = 0.5;
		};
		class HitRFWheel: HitRFWheel {
			armor = 0.5;
		};
		class HitRBWheel: HitRBWheel {
			armor = 0.5;
		};
		class HitFuel: HitFuel {
			armor = 1;
		};
		class HitEngine: HitEngine {
			armor = 1;
		};
		class HitGlass1: HitGlass1 {
			armor = 1.3;
		};
		class HitGlass2: HitGlass2 {
			armor = 1.3;
		};
	};

	class Upgrades {
		ItemLRK[] = {"Nissan_Green_DZE3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

// Cargo 3
class Nissan_Green_DZE3: Nissan_Green_DZE2 {
	displayname = "$STR_VEH_NAME_NISSAN_GREEN+++";
	transportMaxWeapons = 20;
	transportMaxMagazines = 100;
    transportmaxbackpacks = 8;

	class Upgrades {
		ItemTNK[] = {"Nissan_Green_DZE4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",2},{"ItemJerrycan",4},{"ItemScrews",1}}};
	};
};

// Fuel 4
class Nissan_Green_DZE4: Nissan_Green_DZE3 {
	displayname = "$STR_VEH_NAME_NISSAN_GREEN++++";
	fuelCapacity = 250;
};

class Nissan_Black_DZE: Nissan_base
{
	scope = 2;
	displayname = "$STR_VEH_NAME_NISSAN_BLACK";
	hiddenselectionstextures[] = 
	{
		"\z\addons\dayz_epoch_v\vehicles\nissan\data\nissan350z_atlas_co.paa",
		"\z\addons\dayz_epoch_v\vehicles\nissan\data\skins\skin_kiwi.paa",
		"\z\addons\dayz_epoch_v\vehicles\nissan\data\plates\licence5_co.paa"			
	};
	
	class Upgrades {
		ItemORP[] = {"Nissan_Black_DZE1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",4},{"ItemScrews",2}}};
	};	
};

// Performance 1
class Nissan_Black_DZE1: Nissan_Black_DZE {
	displayname = "$STR_VEH_NAME_NISSAN_BLACK+";
	original = "Nissan_Black_DZE";
	maxspeed = 250;
	terrainCoef = 1.0;
	
	class HitPoints: HitPoints {
		class HitLFWheel;
		class HitLBWheel;
		class HitRFWheel;
		class HitRBWheel;
		class HitFuel;
		class HitEngine;
		class HitGlass1;
		class HitGlass2;
		class HitGlass3;
		class HitGlass4;
	};	

	class Upgrades {
		ItemAVE[] = {"Nissan_Black_DZE2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"PartGeneric",6},{"ItemScrews",4}}};
	};
};

// Armor 2
class Nissan_Black_DZE2: Nissan_Black_DZE1 {
	displayname = "$STR_VEH_NAME_NISSAN_BLACK++";
	armor = 80;
	class HitPoints: HitPoints {
		class HitLFWheel: HitLFWheel {
			armor = 0.5;
		};
		class HitLBWheel: HitLBWheel {
			armor = 0.5;
		};
		class HitRFWheel: HitRFWheel {
			armor = 0.5;
		};
		class HitRBWheel: HitRBWheel {
			armor = 0.5;
		};
		class HitFuel: HitFuel {
			armor = 1;
		};
		class HitEngine: HitEngine {
			armor = 1;
		};
		class HitGlass1: HitGlass1 {
			armor = 1.3;
		};
		class HitGlass2: HitGlass2 {
			armor = 1.3;
		};
	};

	class Upgrades {
		ItemLRK[] = {"Nissan_Black_DZE3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

// Cargo 3
class Nissan_Black_DZE3: Nissan_Black_DZE2 {
	displayname = "$STR_VEH_NAME_NISSAN_BLACK+++";
	transportMaxWeapons = 20;
	transportMaxMagazines = 100;
    transportmaxbackpacks = 8;

	class Upgrades {
		ItemTNK[] = {"Nissan_Black_DZE4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",2},{"ItemJerrycan",4},{"ItemScrews",1}}};
	};
};

// Fuel 4
class Nissan_Black_DZE4: Nissan_Black_DZE3 {
	displayname = "$STR_VEH_NAME_NISSAN_BLACK++++";
	fuelCapacity = 250;
};

class Nissan_Pink_DZE: Nissan_base
{
	scope = 2;
	displayname = "$STR_VEH_NAME_NISSAN_PINK";
	hiddenselectionstextures[] = 
	{
		"\z\addons\dayz_epoch_v\vehicles\nissan\data\nissan350z_atlas_co.paa",
		"\z\addons\dayz_epoch_v\vehicles\nissan\data\skins\skin_pink.paa",
		"\z\addons\dayz_epoch_v\vehicles\nissan\data\plates\licence11_co.paa"			
	};
	
	class Upgrades {
		ItemORP[] = {"Nissan_Pink_DZE1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",4},{"ItemScrews",2}}};
	};	
};

// Performance 1
class Nissan_Pink_DZE1: Nissan_Pink_DZE {
	displayname = "$STR_VEH_NAME_NISSAN_PINK+";
	original = "Nissan_Pink_DZE";
	maxspeed = 250;
	terrainCoef = 1.0;
	
	class HitPoints: HitPoints {
		class HitLFWheel;
		class HitLBWheel;
		class HitRFWheel;
		class HitRBWheel;
		class HitFuel;
		class HitEngine;
		class HitGlass1;
		class HitGlass2;
		class HitGlass3;
		class HitGlass4;
	};	

	class Upgrades {
		ItemAVE[] = {"Nissan_Pink_DZE2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"PartGeneric",6},{"ItemScrews",4}}};
	};
};

// Armor 2
class Nissan_Pink_DZE2: Nissan_Pink_DZE1 {
	displayname = "$STR_VEH_NAME_NISSAN_PINK++";
	armor = 80;
	class HitPoints: HitPoints {
		class HitLFWheel: HitLFWheel {
			armor = 0.5;
		};
		class HitLBWheel: HitLBWheel {
			armor = 0.5;
		};
		class HitRFWheel: HitRFWheel {
			armor = 0.5;
		};
		class HitRBWheel: HitRBWheel {
			armor = 0.5;
		};
		class HitFuel: HitFuel {
			armor = 1;
		};
		class HitEngine: HitEngine {
			armor = 1;
		};
		class HitGlass1: HitGlass1 {
			armor = 1.3;
		};
		class HitGlass2: HitGlass2 {
			armor = 1.3;
		};
	};

	class Upgrades {
		ItemLRK[] = {"Nissan_Pink_DZE3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

// Cargo 3
class Nissan_Pink_DZE3: Nissan_Pink_DZE2 {
	displayname = "$STR_VEH_NAME_NISSAN_PINK+++";
	transportMaxWeapons = 20;
	transportMaxMagazines = 100;
    transportmaxbackpacks = 8;

	class Upgrades {
		ItemTNK[] = {"Nissan_Pink_DZE4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",2},{"ItemJerrycan",4},{"ItemScrews",1}}};
	};
};

// Fuel 4
class Nissan_Pink_DZE4: Nissan_Pink_DZE3 {
	displayname = "$STR_VEH_NAME_NISSAN_PINK++++";
	fuelCapacity = 250;
};

class Nissan_Red_DZE: Nissan_base
{
	scope = 2;
	displayname = "$STR_VEH_NAME_NISSAN_RED";
	hiddenselectionstextures[] = 
	{
		"\z\addons\dayz_epoch_v\vehicles\nissan\data\nissan350z_atlas_co.paa",
		"\z\addons\dayz_epoch_v\vehicles\nissan\data\skins\skin_red.paa",
		"\z\addons\dayz_epoch_v\vehicles\nissan\data\plates\licence7_co.paa"			
	};
	
	class Upgrades {
		ItemORP[] = {"Nissan_Red_DZE1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",4},{"ItemScrews",2}}};
	};	
};

// Performance 1
class Nissan_Red_DZE1: Nissan_Red_DZE {
	displayname = "$STR_VEH_NAME_NISSAN_RED+";
	original = "Nissan_Red_DZE";
	maxspeed = 250;
	terrainCoef = 1.0;
	
	class HitPoints: HitPoints {
		class HitLFWheel;
		class HitLBWheel;
		class HitRFWheel;
		class HitRBWheel;
		class HitFuel;
		class HitEngine;
		class HitGlass1;
		class HitGlass2;
		class HitGlass3;
		class HitGlass4;
	};	

	class Upgrades {
		ItemAVE[] = {"Nissan_Red_DZE2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"PartGeneric",6},{"ItemScrews",4}}};
	};
};

// Armor 2
class Nissan_Red_DZE2: Nissan_Red_DZE1 {
	displayname = "$STR_VEH_NAME_NISSAN_RED++";
	armor = 80;
	class HitPoints: HitPoints {
		class HitLFWheel: HitLFWheel {
			armor = 0.5;
		};
		class HitLBWheel: HitLBWheel {
			armor = 0.5;
		};
		class HitRFWheel: HitRFWheel {
			armor = 0.5;
		};
		class HitRBWheel: HitRBWheel {
			armor = 0.5;
		};
		class HitFuel: HitFuel {
			armor = 1;
		};
		class HitEngine: HitEngine {
			armor = 1;
		};
		class HitGlass1: HitGlass1 {
			armor = 1.3;
		};
		class HitGlass2: HitGlass2 {
			armor = 1.3;
		};
	};

	class Upgrades {
		ItemLRK[] = {"Nissan_Red_DZE3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

// Cargo 3
class Nissan_Red_DZE3: Nissan_Red_DZE2 {
	displayname = "$STR_VEH_NAME_NISSAN_RED+++";
	transportMaxWeapons = 20;
	transportMaxMagazines = 100;
    transportmaxbackpacks = 8;

	class Upgrades {
		ItemTNK[] = {"Nissan_Red_DZE4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",2},{"ItemJerrycan",4},{"ItemScrews",1}}};
	};
};

// Fuel 4
class Nissan_Red_DZE4: Nissan_Red_DZE3 {
	displayname = "$STR_VEH_NAME_NISSAN_RED++++";
	fuelCapacity = 250;
};

class Nissan_Ruben_DZE: Nissan_base
{
	scope = 2;
	displayname = "$STR_VEH_NAME_NISSAN_RUBEN";
	hiddenselectionstextures[] = 
	{
		"\z\addons\dayz_epoch_v\vehicles\nissan\data\nissan350z_atlas_co.paa",
		"\z\addons\dayz_epoch_v\vehicles\nissan\data\skins\skin_ruben.paa",
		"\z\addons\dayz_epoch_v\vehicles\nissan\data\plates\licence10_co.paa"			
	};
	
	class Upgrades {
		ItemORP[] = {"Nissan_Ruben_DZE1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",4},{"ItemScrews",2}}};
	};	
};

// Performance 1
class Nissan_Ruben_DZE1: Nissan_Ruben_DZE {
	displayname = "$STR_VEH_NAME_NISSAN_RUBEN+";
	original = "Nissan_Ruben_DZE";
	maxspeed = 250;
	terrainCoef = 1.0;
	
	class HitPoints: HitPoints {
		class HitLFWheel;
		class HitLBWheel;
		class HitRFWheel;
		class HitRBWheel;
		class HitFuel;
		class HitEngine;
		class HitGlass1;
		class HitGlass2;
		class HitGlass3;
		class HitGlass4;
	};	

	class Upgrades {
		ItemAVE[] = {"Nissan_Ruben_DZE2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"PartGeneric",6},{"ItemScrews",4}}};
	};
};

// Armor 2
class Nissan_Ruben_DZE2: Nissan_Ruben_DZE1 {
	displayname = "$STR_VEH_NAME_NISSAN_RUBEN++";
	armor = 80;
	class HitPoints: HitPoints {
		class HitLFWheel: HitLFWheel {
			armor = 0.5;
		};
		class HitLBWheel: HitLBWheel {
			armor = 0.5;
		};
		class HitRFWheel: HitRFWheel {
			armor = 0.5;
		};
		class HitRBWheel: HitRBWheel {
			armor = 0.5;
		};
		class HitFuel: HitFuel {
			armor = 1;
		};
		class HitEngine: HitEngine {
			armor = 1;
		};
		class HitGlass1: HitGlass1 {
			armor = 1.3;
		};
		class HitGlass2: HitGlass2 {
			armor = 1.3;
		};
	};

	class Upgrades {
		ItemLRK[] = {"Nissan_Ruben_DZE3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

// Cargo 3
class Nissan_Ruben_DZE3: Nissan_Ruben_DZE2 {
	displayname = "$STR_VEH_NAME_NISSAN_RUBEN+++";
	transportMaxWeapons = 20;
	transportMaxMagazines = 100;
    transportmaxbackpacks = 8;

	class Upgrades {
		ItemTNK[] = {"Nissan_Ruben_DZE4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",2},{"ItemJerrycan",4},{"ItemScrews",1}}};
	};
};

// Fuel 4
class Nissan_Ruben_DZE4: Nissan_Ruben_DZE3 {
	displayname = "$STR_VEH_NAME_NISSAN_RUBEN++++";
	fuelCapacity = 250;
};

class Nissan_V_DZE: Nissan_base
{
	scope = 2;
	displayname = "$STR_VEH_NAME_NISSAN_V";
	hiddenselectionstextures[] = 
	{
		"\z\addons\dayz_epoch_v\vehicles\nissan\data\nissan350z_atlas_co.paa",
		"\z\addons\dayz_epoch_v\vehicles\nissan\data\skins\skin_v.paa",
		"\z\addons\dayz_epoch_v\vehicles\nissan\data\plates\licence12_co.paa"			
	};
	
	class Upgrades {
		ItemORP[] = {"Nissan_V_DZE1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",4},{"ItemScrews",2}}};
	};	
};

// Performance 1
class Nissan_V_DZE1: Nissan_V_DZE {
	displayname = "$STR_VEH_NAME_NISSAN_V+";
	original = "Nissan_V_DZE";
	maxspeed = 250;
	terrainCoef = 1.0;
	
	class HitPoints: HitPoints {
		class HitLFWheel;
		class HitLBWheel;
		class HitRFWheel;
		class HitRBWheel;
		class HitFuel;
		class HitEngine;
		class HitGlass1;
		class HitGlass2;
		class HitGlass3;
		class HitGlass4;
	};	

	class Upgrades {
		ItemAVE[] = {"Nissan_V_DZE2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"PartGeneric",6},{"ItemScrews",4}}};
	};
};

// Armor 2
class Nissan_V_DZE2: Nissan_V_DZE1 {
	displayname = "$STR_VEH_NAME_NISSAN_V++";
	armor = 80;
	class HitPoints: HitPoints {
		class HitLFWheel: HitLFWheel {
			armor = 0.5;
		};
		class HitLBWheel: HitLBWheel {
			armor = 0.5;
		};
		class HitRFWheel: HitRFWheel {
			armor = 0.5;
		};
		class HitRBWheel: HitRBWheel {
			armor = 0.5;
		};
		class HitFuel: HitFuel {
			armor = 1;
		};
		class HitEngine: HitEngine {
			armor = 1;
		};
		class HitGlass1: HitGlass1 {
			armor = 1.3;
		};
		class HitGlass2: HitGlass2 {
			armor = 1.3;
		};
	};

	class Upgrades {
		ItemLRK[] = {"Nissan_V_DZE3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

// Cargo 3
class Nissan_V_DZE3: Nissan_V_DZE2 {
	displayname = "$STR_VEH_NAME_NISSAN_V+++";
	transportMaxWeapons = 20;
	transportMaxMagazines = 100;
    transportmaxbackpacks = 8;

	class Upgrades {
		ItemTNK[] = {"Nissan_V_DZE4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",2},{"ItemJerrycan",4},{"ItemScrews",1}}};
	};
};

// Fuel 4
class Nissan_V_DZE4: Nissan_V_DZE3 {
	displayname = "$STR_VEH_NAME_NISSAN_V++++";
	fuelCapacity = 250;
};

class Nissan_Yellow_DZE: Nissan_base
{
	scope = 2;
	displayname = "$STR_VEH_NAME_NISSAN_YELLOW";
	hiddenselectionstextures[] = 
	{
		"\z\addons\dayz_epoch_v\vehicles\nissan\data\nissan350z_atlas_co.paa",
		"\z\addons\dayz_epoch_v\vehicles\nissan\data\skins\skin_yellow.paa",
		"\z\addons\dayz_epoch_v\vehicles\nissan\data\plates\licence13_co.paa"			
	};
	
	class Upgrades {
		ItemORP[] = {"Nissan_Yellow_DZE1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",4},{"ItemScrews",2}}};
	};	
};

// Performance 1
class Nissan_Yellow_DZE1: Nissan_Yellow_DZE {
	displayname = "$STR_VEH_NAME_NISSAN_YELLOW+";
	original = "Nissan_Yellow_DZE";
	maxspeed = 250;
	terrainCoef = 1.0;
	
	class HitPoints: HitPoints {
		class HitLFWheel;
		class HitLBWheel;
		class HitRFWheel;
		class HitRBWheel;
		class HitFuel;
		class HitEngine;
		class HitGlass1;
		class HitGlass2;
		class HitGlass3;
		class HitGlass4;
	};	

	class Upgrades {
		ItemAVE[] = {"Nissan_Yellow_DZE2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"PartGeneric",6},{"ItemScrews",4}}};
	};
};

// Armor 2
class Nissan_Yellow_DZE2: Nissan_Yellow_DZE1 {
	displayname = "$STR_VEH_NAME_NISSAN_YELLOW++";
	armor = 80;
	class HitPoints: HitPoints {
		class HitLFWheel: HitLFWheel {
			armor = 0.5;
		};
		class HitLBWheel: HitLBWheel {
			armor = 0.5;
		};
		class HitRFWheel: HitRFWheel {
			armor = 0.5;
		};
		class HitRBWheel: HitRBWheel {
			armor = 0.5;
		};
		class HitFuel: HitFuel {
			armor = 1;
		};
		class HitEngine: HitEngine {
			armor = 1;
		};
		class HitGlass1: HitGlass1 {
			armor = 1.3;
		};
		class HitGlass2: HitGlass2 {
			armor = 1.3;
		};
	};

	class Upgrades {
		ItemLRK[] = {"Nissan_Yellow_DZE3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

// Cargo 3
class Nissan_Yellow_DZE3: Nissan_Yellow_DZE2 {
	displayname = "$STR_VEH_NAME_NISSAN_YELLOW+++";
	transportMaxWeapons = 20;
	transportMaxMagazines = 100;
    transportmaxbackpacks = 8;

	class Upgrades {
		ItemTNK[] = {"Nissan_Yellow_DZE4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",2},{"ItemJerrycan",4},{"ItemScrews",1}}};
	};
};

// Fuel 4
class Nissan_Yellow_DZE4: Nissan_Yellow_DZE3 {
	displayname = "$STR_VEH_NAME_NISSAN_YELLOW++++";
	fuelCapacity = 250;
};