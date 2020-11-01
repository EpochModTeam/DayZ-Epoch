class Mini_Cooper_base: VWGolf
{
	scope = 0;
	displayname = "Mini Cooper";
	model = "\z\addons\dayz_epoch_v\vehicles\mini\dze_cooper_s";
	picture = "\dayz_epoch_c\icons\vehicles\minicooper.paa";
	vehicleClass = "DayZ Epoch Vehicles";
	transportsoldier = 2;
	fuelCapacity = 100;
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
	maxspeed = 110;
	weapons[] = {"SportCarHorn"};
	driverAction = "Golf_Driver";
	cargoaction[] = {"Hatchback_Cargo01","suv_cargo02_ep1","Hatchback_Cargo01","suv_cargo02_ep1","Hatchback_Cargo01"};
	typicalcargo[] = {};
	crew = "";
	hiddenselections[] = {"camo1"};
	hiddenselectionstextures[]= {"\z\addons\dayz_epoch_v\vehicles\mini\data\dze_mini_co.paa"};
	
	class damage
	{
		tex[]={};
		mat[]=
		{
			"z\addons\dayz_epoch_v\vehicles\mini\data\dze_mini.rvmat",
			"z\addons\dayz_epoch_v\vehicles\mini\data\dze_mini_damage.rvmat",
			"z\addons\dayz_epoch_v\vehicles\mini\data\dze_mini_destruct.rvmat",

			"z\addons\dayz_epoch_v\vehicles\mini\data\dze_mini_glass.rvmat",
			"Ca\wheeled_E\Data\auta_skla_damage.rvmat",
			"Ca\wheeled_E\Data\auta_skla_damage.rvmat"
		};
	};
};

class Mini_Cooper_DZE: Mini_Cooper_base
{
	scope = 2;
	displayname = "$STR_VEH_NAME_MINI_COOPER";	
};

// Performance 1
class Mini_Cooper_DZE1: Mini_Cooper_DZE {
	displayname = "$STR_VEH_NAME_MINI_COOPER+";
	original = "Mini_Cooper_DZE";
	maxSpeed = 260;
	terrainCoef = 2.5;

	class Upgrades {
		ItemAVE[] = {"Mini_Cooper_DZE2",{"ItemToolbox"},{},{{"ItemAVE",1},{"PartGeneric",6},{"ItemScrews",4}}};
	};
};

// Armor 2
class Mini_Cooper_DZE2: Mini_Cooper_DZE1 {
	displayname = "$STR_VEH_NAME_MINI_COOPER++";
	armor = 55;
	damageResistance = 0.02099;
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
			armor = 0.3;
		};
		class HitGlass2: HitGlass2 {
			armor = 0.3;
		};
		class HitGlass3: HitGlass3 {
			armor = 0.3;
		};
		class HitGlass4: HitGlass4 {
			armor = 0.3;
		};
	};

	class Upgrades {
		ItemLRK[] = {"Mini_Cooper_DZE3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

// Cargo 3
class Mini_Cooper_DZE3: Mini_Cooper_DZE2 {
	displayname = "$STR_VEH_NAME_MINI_COOPER+++";
	transportMaxWeapons = 20;
	transportMaxMagazines = 100;
    transportmaxbackpacks = 4;

	class Upgrades {
		ItemTNK[] = {"Mini_Cooper_DZE4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
	};
};

// Fuel 4
class Mini_Cooper_DZE4: Mini_Cooper_DZE3 {
	displayname = "$STR_VEH_NAME_MINI_COOPER++++";
	fuelCapacity = 150;
};