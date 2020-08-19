class UAZ_MG_TK_EP1;
class UAZ_MG_TK_EP1_DZ: UAZ_MG_TK_EP1
{
	scope = 2;
	displayName = "$STR_VEH_NAME_UAZ_DSHKM";
	vehicleClass = "DayZ Epoch Vehicles";
	crew = "";
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};
	class Turrets;
	class MainTurret;
	supplyRadius = 1.3;	
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
};

class UAZ_MG_TK_EP1_DZE: UAZ_MG_TK_EP1_DZ
{
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			magazines[] = {};
		};
	};
	
	class Upgrades {
		ItemORP[] = {"UAZ_MG_TK_EP1_DZE1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class UAZ_MG_TK_EP1_DZE1: UAZ_MG_TK_EP1_DZE {
	displayName = "$STR_VEH_NAME_UAZ_DSHKM+";
	original = "UAZ_MG_TK_EP1_DZE";
	maxspeed = 190;
	terrainCoef = 1;

	class Upgrades {
		ItemAVE[] = {"UAZ_MG_TK_EP1_DZE2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"PartGeneric",6},{"ItemScrews",4}}};
	};
};

class UAZ_MG_TK_EP1_DZE2: UAZ_MG_TK_EP1_DZE1 {
	displayName = "$STR_VEH_NAME_UAZ_DSHKM++";
	armor = 75; // UAZ 40
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
		ItemLRK[] = {"UAZ_MG_TK_EP1_DZE3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

class UAZ_MG_TK_EP1_DZE3: UAZ_MG_TK_EP1_DZE2 {
	displayName = "$STR_VEH_NAME_UAZ_DSHKM+++";
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportmaxbackpacks = 9; // car 2, UAZ 7

	class Upgrades {
		ItemTNK[] = {"UAZ_MG_TK_EP1_DZE4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
	};
};

class UAZ_MG_TK_EP1_DZE4: UAZ_MG_TK_EP1_DZE3 {
	displayName = "$STR_VEH_NAME_UAZ_DSHKM++++";
	fuelCapacity = 210; // car 100
};