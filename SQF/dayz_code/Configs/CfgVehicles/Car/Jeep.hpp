class Jeep_base : HMMWV_DZE_Base
{
	scope = 0;
	displayname = "Old Jeep";
	model = "\z\addons\dayz_epoch_v\vehicles\jeep\h4_jeep";
	armor = 25;
	transportsoldier = 2;
	transportmaxweapons = 15;
	transportmaxmagazines = 50;
	transportmaxbackpacks = 5;
	fuelcapacity = 115;
	maxspeed = 110;
	terraincoef	= 2.0;
	weapons[] = {minicarhorn};
	driveraction = suv_driver_ep1;
	cargoaction[] = {Skodovka_Cargo01,suv_cargo02_ep1,Skodovka_Cargo01,suv_cargo02_ep1,Skodovka_Cargo01};
	typicalcargo[] = {};
	crew = "";
	class Turrets {};
	class HitPoints;
	hiddenselectionstextures[]= 
	{
		"\z\addons\dayz_epoch_v\vehicles\jeep\data\jeep_main_co.paa",
		"\z\addons\dayz_epoch_v\vehicles\jeep\data\jeep_parts_co.paa"
	};
	class damage
	{
		tex[]={};
		mat[]=
		{
			"\z\addons\dayz_epoch_v\vehicles\jeep\data\jeep_main.rvmat",
			"\z\addons\dayz_epoch_v\vehicles\jeep\data\jeep_main_damage.rvmat",
			"\z\addons\dayz_epoch_v\vehicles\jeep\data\jeep_main_destruct.rvmat",

			"\z\addons\dayz_epoch_v\vehicles\jeep\data\jeep_parts.rvmat",
			"\z\addons\dayz_epoch_v\vehicles\jeep\data\jeep_parts_damage.rvmat",
			"\z\addons\dayz_epoch_v\vehicles\jeep\data\jeep_parts_destruct.rvmat",

			"\z\addons\dayz_epoch_v\vehicles\jeep\data\jeep_dash.rvmat",
			"\z\addons\dayz_epoch_v\vehicles\jeep\data\jeep_dash_damage.rvmat",
			"\z\addons\dayz_epoch_v\vehicles\jeep\data\jeep_dash_destruct.rvmat",

			"\z\addons\dayz_epoch_v\vehicles\jeep\data\jeep_glass.rvmat",
			"\Ca\wheeled_E\Data\auta_skla_damage.rvmat",
			"\Ca\wheeled_E\Data\auta_skla_damage.rvmat",
							
			"\z\addons\dayz_epoch_v\vehicles\jeep\data\jeep_in_glass.rvmat",
			"\Ca\wheeled_E\Data\auta_skla_in_damage.rvmat",
			"\Ca\wheeled_E\Data\auta_skla_in_damage.rvmat"

		};
	};
	class NVGMarkers {};
};

class Jeep_DZE: Jeep_base
{
	scope = 2;
	displayname = "$STR_VEH_NAME_OLD_JEEP";
	
	class HitPoints: HitPoints {
		class HitLFWheel;
		class HitLBWheel;
		class HitRFWheel;
		class HitRBWheel;
		class HitFuel;
		class HitEngine;
		class HitGlass1;
		class HitGlass2;
	};	
	
	class Upgrades {
		ItemORP[] = {"Jeep_DZE1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",4},{"ItemScrews",2}}};
	};
};	

// Performance 1
class Jeep_DZE1: Jeep_DZE {
	displayname = "$STR_VEH_NAME_OLD_JEEP+";
	original = "Jeep_DZE";
	maxspeed = 150;
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
		ItemAVE[] = {"Jeep_DZE2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"PartGeneric",6},{"ItemScrews",4}}};
	};
};

// Armor 2
class Jeep_DZE2: Jeep_DZE1 {
	displayname = "$STR_VEH_NAME_OLD_JEEP++";
	armor = 65;
	class HitPoints: HitPoints {
		class HitLFWheel: HitLFWheel {
			armor = 0.3;
		};
		class HitLBWheel: HitLBWheel {
			armor = 0.3;
		};
		class HitRFWheel: HitRFWheel {
			armor = 0.3;
		};
		class HitRBWheel: HitRBWheel {
			armor = 0.3;
		};
		class HitFuel: HitFuel {
			armor = 0.5;
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
		ItemLRK[] = {"Jeep_DZE3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

// Cargo 3
class Jeep_DZE3: Jeep_DZE2 {
	displayname = "$STR_VEH_NAME_OLD_JEEP+++";
	transportMaxWeapons = 30;
	transportMaxMagazines = 100;
    transportmaxbackpacks = 10;

	class Upgrades {
		ItemTNK[] = {"Jeep_DZE4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",2},{"ItemJerrycan",4},{"ItemScrews",1}}};
	};
};

// Fuel 4
class Jeep_DZE4: Jeep_DZE3 {
	displayname = "$STR_VEH_NAME_OLD_JEEP++++";
	fuelCapacity = 250;
};