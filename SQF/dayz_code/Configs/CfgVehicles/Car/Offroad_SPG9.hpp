class Offroad_SPG9_Gue;
class Offroad_SPG9_Gue_DZ: Offroad_SPG9_Gue {
	scope = 2;
	crew = "";
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};
	displayName = "$STR_VEH_NAME_PICKUP_GUE_SPG9";
	vehicleClass = "DayZ Epoch Vehicles";
	class Turrets;
	class MainTurret;
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
	supplyRadius = 1.3;
};

class Offroad_SPG9_Gue_DZE: Offroad_SPG9_Gue_DZ
{
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			magazines[] = {};
		};
	};
	
	class Upgrades {
		ItemORP[] = {"Offroad_SPG9_Gue_DZE1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

// Performance 1
class Offroad_SPG9_Gue_DZE1: Offroad_SPG9_Gue_DZE
{
	displayName = "$STR_VEH_NAME_PICKUP_GUE_SPG9+";
	original = "Offroad_SPG9_Gue_DZE";
	maxspeed = 170; // Offroad_SPG9_base 150 | car 100
	
	class Upgrades {
		ItemAVE[] = {"Offroad_SPG9_Gue_DZE2",{"ItemToolbox"},{},{{"ItemAVE",1},{"PartGeneric",6},{"ItemScrews",4}}};
	};
};
// Armor 2
class Offroad_SPG9_Gue_DZE2: Offroad_SPG9_Gue_DZE1
{
	displayName = "$STR_VEH_NAME_PICKUP_GUE_SPG9++";
	armor = 55; // car 20
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
		ItemLRK[] = {"Offroad_SPG9_Gue_DZE3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};

};
// Cargo 3
class Offroad_SPG9_Gue_DZE3: Offroad_SPG9_Gue_DZE2
{
	displayName = "$STR_VEH_NAME_PICKUP_GUE_SPG9+++";
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50 
	transportmaxbackpacks = 4; // car 2
	
	class Upgrades	{
		ItemTNK[] = {"Offroad_SPG9_Gue_DZE4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
	};
};

// Fuel 4
class Offroad_SPG9_Gue_DZE4: Offroad_SPG9_Gue_DZE3
{
	displayName = "$STR_VEH_NAME_PICKUP_GUE_SPG9++++";
	fuelCapacity = 210; // car 100
};

class Offroad_SPG9_TK_GUE_EP1;
class Offroad_SPG9_TK_GUE_EP1_DZ: Offroad_SPG9_TK_GUE_EP1 {
	scope = 2;
	crew = "";
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};
	displayName = "$STR_VEH_NAME_PICKUP_TK_GUE_SPG9";
	vehicleClass = "DayZ Epoch Vehicles";
	class Turrets;
	class MainTurret;
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
	supplyRadius = 1.3;
};

class Offroad_SPG9_TK_GUE_EP1_DZE: Offroad_SPG9_TK_GUE_EP1_DZ
{
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			magazines[] = {};
		};
	};
	
	class Upgrades {
		ItemORP[] = {"Offroad_SPG9_TK_GUE_EP1_DZE1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

// Performance 1
class Offroad_SPG9_TK_GUE_EP1_DZE1: Offroad_SPG9_TK_GUE_EP1_DZE
{
	displayName = "$STR_VEH_NAME_PICKUP_TK_GUE_SPG9+";
	original = "Offroad_SPG9_TK_GUE_EP1_DZE";
	maxspeed = 170; // Offroad_SPG9_base 150 | car 100
	
	class Upgrades {
		ItemAVE[] = {"Offroad_SPG9_TK_GUE_EP1_DZE2",{"ItemToolbox"},{},{{"ItemAVE",1},{"PartGeneric",6},{"ItemScrews",4}}};
	};
};
// Armor 2
class Offroad_SPG9_TK_GUE_EP1_DZE2: Offroad_SPG9_TK_GUE_EP1_DZE1
{
	displayName = "$STR_VEH_NAME_PICKUP_TK_GUE_SPG9++";
	armor = 55; // car 20
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
		ItemLRK[] = {"Offroad_SPG9_TK_GUE_EP1_DZE3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};

};
// Cargo 3
class Offroad_SPG9_TK_GUE_EP1_DZE3: Offroad_SPG9_TK_GUE_EP1_DZE2
{
	displayName = "$STR_VEH_NAME_PICKUP_TK_GUE_SPG9+++";
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50 
	transportmaxbackpacks = 4; // car 2
	
	class Upgrades	{
		ItemTNK[] = {"Offroad_SPG9_TK_GUE_EP1_DZE4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
	};
};

// Fuel 4
class Offroad_SPG9_TK_GUE_EP1_DZE4: Offroad_SPG9_TK_GUE_EP1_DZE3
{
	displayName = "$STR_VEH_NAME_PICKUP_TK_GUE_SPG9++++";
	fuelCapacity = 210; // car 100
};
