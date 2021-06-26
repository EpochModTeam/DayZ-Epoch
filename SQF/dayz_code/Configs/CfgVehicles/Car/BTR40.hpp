class BTR40_MG_base_EP1;
class BTR40_MG_TK_GUE_EP1_DZ : BTR40_MG_base_EP1 {
	scope = 2;
	side = 1;
	faction = "USMC";	
	vehicleClass = "DayZ Epoch Vehicles";
	displayname = "$STR_VEH_NAME_BTR40_DSHKM_GREEN";
	crew = "";
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};
	class Turrets;
	class MainTurret;
	class HitPoints;
	class HitLFWheel;
	class HitLBWheel;
	class HitRFWheel;
	class HitRBWheel;
	class HitFuel;
	class HitEngine;	
	hiddenSelectionsTextures[] = {"ca\wheeled_e\btr40\data\btr40ext_co.paa"};
	supplyRadius = 1.3;
};

class BTR40_MG_TK_GUE_EP1_DZE : BTR40_MG_TK_GUE_EP1_DZ {
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			magazines[] = {};
		};
	};
	
	class Upgrades
	{
		ItemORP[] = {"BTR40_MG_TK_GUE_EP1_DZE1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",2},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class BTR40_MG_TK_GUE_EP1_DZE1: BTR40_MG_TK_GUE_EP1_DZE
{
	displayName = "$STR_VEH_NAME_BTR40_DSHKM_GREEN+";
	original = "BTR40_MG_TK_GUE_EP1_DZE";
	maxSpeed = 110; //base 90
	terrainCoef = 1.5; //base 2.5
	
	class Upgrades
	{
		ItemAVE[] = {"BTR40_MG_TK_GUE_EP1_DZE2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"equip_metal_sheet",4},{"ItemScrews",4}}};
	};
};

class BTR40_MG_TK_GUE_EP1_DZE2: BTR40_MG_TK_GUE_EP1_DZE1
{
	displayName = "$STR_VEH_NAME_BTR40_DSHKM_GREEN++";
	armor = 65; // base 40
	class HitPoints: HitPoints
	{
		class HitLFWheel: HitLFWheel
		{
			armor = 0.7;
		};
		class HitLBWheel: HitLBWheel
		{
			armor = 0.7;
		};
		class HitRFWheel: HitRFWheel
		{
			armor = 0.7;
		};
		class HitRBWheel: HitRBWheel
		{
			armor = 0.7;
		};
		class HitFuel: HitFuel
		{
			armor = 1.5;
		};
		class HitEngine: HitEngine
		{
			armor = 2.5;
		};
	};
	class Upgrades
	{
		ItemLRK[] = {"BTR40_MG_TK_GUE_EP1_DZE3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",6},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",1}}};
	};
};

class BTR40_MG_TK_GUE_EP1_DZE3: BTR40_MG_TK_GUE_EP1_DZE2
{
	displayName = "$STR_VEH_NAME_BTR40_DSHKM_GREEN+++";
	transportMaxWeapons = 20; 
	transportMaxMagazines = 100; 
	transportmaxbackpacks = 10;
	
	class Upgrades
	{
		ItemTNK[] = {"BTR40_MG_TK_GUE_EP1_DZE4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",4},{"PartFueltank",1},{"ItemFuelBarrel",1}}};
	};
};

class BTR40_MG_TK_GUE_EP1_DZE4: BTR40_MG_TK_GUE_EP1_DZE3
{
	displayName = "$STR_VEH_NAME_BTR40_DSHKM_GREEN++++";
	fuelCapacity = 180; // base 100
};

class BTR40_MG_TK_INS_EP1_DZ : BTR40_MG_TK_GUE_EP1_DZ {
	scope = 2;
	displayname = "$STR_VEH_NAME_BTR40_DSHKM_WOOD";
	hiddenSelectionsTextures[] = {"ca\wheeled_e\btr40\data\btr40extcamo_co.paa"};
};

class BTR40_MG_TK_INS_EP1_DZE : BTR40_MG_TK_INS_EP1_DZ {
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			magazines[] = {};
		};
	};
	
	class Upgrades
	{
		ItemORP[] = {"BTR40_MG_TK_INS_EP1_DZE1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",2},{"PartWheel",4},{"ItemScrews",2}}};
	};
};
	
class BTR40_MG_TK_INS_EP1_DZE1: BTR40_MG_TK_INS_EP1_DZE
{
	displayName = "$STR_VEH_NAME_BTR40_DSHKM_WOOD+";
	original = "BTR40_MG_TK_INS_EP1_DZE";
	maxSpeed = 110; //base 90
	terrainCoef = 1.5; //base 2.5
	
	class Upgrades
	{
		ItemAVE[] = {"BTR40_MG_TK_INS_EP1_DZE2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"equip_metal_sheet",4},{"ItemScrews",4}}};
	};
};

class BTR40_MG_TK_INS_EP1_DZE2: BTR40_MG_TK_INS_EP1_DZE1
{
	displayName = "$STR_VEH_NAME_BTR40_DSHKM_WOOD++";
	armor = 65; // base 40
	class HitPoints: HitPoints
	{
		class HitLFWheel: HitLFWheel
		{
			armor = 0.7;
		};
		class HitLBWheel: HitLBWheel
		{
			armor = 0.7;
		};
		class HitRFWheel: HitRFWheel
		{
			armor = 0.7;
		};
		class HitRBWheel: HitRBWheel
		{
			armor = 0.7;
		};
		class HitFuel: HitFuel
		{
			armor = 1.5;
		};
		class HitEngine: HitEngine
		{
			armor = 2.5;
		};
	};
	class Upgrades
	{
		ItemLRK[] = {"BTR40_MG_TK_INS_EP1_DZE3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",6},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",1}}};
	};
};

class BTR40_MG_TK_INS_EP1_DZE3: BTR40_MG_TK_INS_EP1_DZE2
{
	displayName = "$STR_VEH_NAME_BTR40_DSHKM_WOOD+++";
	transportMaxWeapons = 20; 
	transportMaxMagazines = 100; 
	transportmaxbackpacks = 10;
	
	class Upgrades
	{
		ItemTNK[] = {"BTR40_MG_TK_INS_EP1_DZE4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",4},{"PartFueltank",1},{"ItemFuelBarrel",1}}};
	};
};

class BTR40_MG_TK_INS_EP1_DZE4: BTR40_MG_TK_INS_EP1_DZE3
{
	displayName = "$STR_VEH_NAME_BTR40_DSHKM_WOOD++++";
	fuelCapacity = 180; // base 100
};	


class BTR40_base_EP1;
class BTR40_TK_GUE_EP1_DZE: BTR40_base_EP1
{
	scope = 2;
	side = 1;
	faction = "USMC";	
	vehicleClass = "DayZ Epoch Vehicles";
	displayname = "$STR_VEH_NAME_BTR40_GREEN";
	crew = "";
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};
	class HitPoints;
	class HitLFWheel;
	class HitLBWheel;
	class HitRFWheel;
	class HitRBWheel;
	class HitFuel;
	class HitEngine;	
	hiddenSelectionsTextures[] = {"ca\wheeled_e\btr40\data\btr40ext_co.paa"};
	supplyRadius = 1.3;
	
	class Upgrades
	{
		ItemORP[] = {"BTR40_TK_GUE_EP1_DZE1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",2},{"PartWheel",4},{"ItemScrews",2}}};
	};	
};

class BTR40_TK_GUE_EP1_DZE1: BTR40_TK_GUE_EP1_DZE
{
	displayName = "$STR_VEH_NAME_BTR40_GREEN+";
	original = "BTR40_TK_GUE_EP1_DZE";
	maxSpeed = 110; //base 90
	terrainCoef = 1.5; //base 2.5
	
	class Upgrades
	{
		ItemAVE[] = {"BTR40_TK_GUE_EP1_DZE2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"equip_metal_sheet",4},{"ItemScrews",4}}};
	};
};

class BTR40_TK_GUE_EP1_DZE2: BTR40_TK_GUE_EP1_DZE1
{
	displayName = "$STR_VEH_NAME_BTR40_GREEN++";
	armor = 65; // base 40
	class HitPoints: HitPoints
	{
		class HitLFWheel: HitLFWheel
		{
			armor = 0.7;
		};
		class HitLBWheel: HitLBWheel
		{
			armor = 0.7;
		};
		class HitRFWheel: HitRFWheel
		{
			armor = 0.7;
		};
		class HitRBWheel: HitRBWheel
		{
			armor = 0.7;
		};
		class HitFuel: HitFuel
		{
			armor = 1.5;
		};
		class HitEngine: HitEngine
		{
			armor = 2.5;
		};
	};
	class Upgrades
	{
		ItemLRK[] = {"BTR40_TK_GUE_EP1_DZE3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",6},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",1}}};
	};
};

class BTR40_TK_GUE_EP1_DZE3: BTR40_TK_GUE_EP1_DZE2
{
	displayName = "$STR_VEH_NAME_BTR40_GREEN+++";
	transportMaxWeapons = 20; 
	transportMaxMagazines = 100; 
	transportmaxbackpacks = 10;
	
	class Upgrades
	{
		ItemTNK[] = {"BTR40_TK_GUE_EP1_DZE4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",4},{"PartFueltank",1},{"ItemFuelBarrel",1}}};
	};
};

class BTR40_TK_GUE_EP1_DZE4: BTR40_TK_GUE_EP1_DZE3
{
	displayName = "$STR_VEH_NAME_BTR40_GREEN++++";
	fuelCapacity = 180; // base 100
};

class BTR40_TK_INS_EP1_DZE: BTR40_TK_GUE_EP1_DZE
{
	displayname = "$STR_VEH_NAME_BTR40_WOOD";
	hiddenSelectionsTextures[] = {"ca\wheeled_e\btr40\data\btr40extcamo_co.paa"};
	
	class Upgrades
	{
		ItemORP[] = {"BTR40_TK_INS_EP1_DZE1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",2},{"PartWheel",4},{"ItemScrews",2}}};
	};	
};

class BTR40_TK_INS_EP1_DZE1: BTR40_TK_INS_EP1_DZE
{
	displayName = "$STR_VEH_NAME_BTR40_WOOD+";
	original = "BTR40_TK_INS_EP1_DZE";
	maxSpeed = 110; //base 90
	terrainCoef = 1.5; //base 2.5
	
	class Upgrades
	{
		ItemAVE[] = {"BTR40_TK_INS_EP1_DZE2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"equip_metal_sheet",4},{"ItemScrews",4}}};
	};
};

class BTR40_TK_INS_EP1_DZE2: BTR40_TK_INS_EP1_DZE1
{
	displayName = "$STR_VEH_NAME_BTR40_WOOD++";
	armor = 65; // base 40
	class HitPoints: HitPoints
	{
		class HitLFWheel: HitLFWheel
		{
			armor = 0.7;
		};
		class HitLBWheel: HitLBWheel
		{
			armor = 0.7;
		};
		class HitRFWheel: HitRFWheel
		{
			armor = 0.7;
		};
		class HitRBWheel: HitRBWheel
		{
			armor = 0.7;
		};
		class HitFuel: HitFuel
		{
			armor = 1.5;
		};
		class HitEngine: HitEngine
		{
			armor = 2.5;
		};
	};
	class Upgrades
	{
		ItemLRK[] = {"BTR40_TK_INS_EP1_DZE3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",6},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",1}}};
	};
};

class BTR40_TK_INS_EP1_DZE3: BTR40_TK_INS_EP1_DZE2
{
	displayName = "$STR_VEH_NAME_BTR40_WOOD+++";
	transportMaxWeapons = 20; 
	transportMaxMagazines = 100; 
	transportmaxbackpacks = 10;
	
	class Upgrades
	{
		ItemTNK[] = {"BTR40_TK_INS_EP1_DZE4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",4},{"PartFueltank",1},{"ItemFuelBarrel",1}}};
	};
};

class BTR40_TK_INS_EP1_DZE4: BTR40_TK_INS_EP1_DZE3
{
	displayName = "$STR_VEH_NAME_BTR40_WOOD++++";
	fuelCapacity = 180; // base 100
};