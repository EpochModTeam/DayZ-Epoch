class Offroad_DSHKM_Gue;
class Offroad_DSHKM_Gue_DZ: Offroad_DSHKM_Gue {
	scope = 2;
	crew = "";
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};
	displayName = $STR_VEH_NAME_PICKUP_DSHKM;
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

class Offroad_DSHKM_Gue_DZE: Offroad_DSHKM_Gue_DZ
{
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			magazines[] = {};
		};
	};
	
	class Upgrades {
		ItemORP[] = {"Offroad_DSHKM_Gue_DZE1",{},{{"ItemORP",1},{ "PartEngine",2}}};
	};
};

// Performance 1
class Offroad_DSHKM_Gue_DZE1: Offroad_DSHKM_Gue_DZE
{
	original = "Offroad_DSHKM_Gue_DZE";
	maxspeed = 170; // Offroad_DSHKM_base 150 | car 100
	
	class Upgrades {
		ItemAVE[] = {"Offroad_DSHKM_Gue_DZE2",{},{{"ItemAVE",1},{"PartGeneric",2},{"ItemTent",1}}};
	};
};
// Armmor 2
class Offroad_DSHKM_Gue_DZE2: Offroad_DSHKM_Gue_DZE1
{
	armor = 55; // car 20
	damageResistance = 0.02099;
	class HitPoints: HitPoints
	{
		class HitLFWheel: HitLFWheel
		{
			armor = 0.3;
		};
		class HitLBWheel: HitLBWheel
		{
			armor = 0.3;
		};
		class HitRFWheel: HitRFWheel
		{
			armor = 0.3;
		};
		class HitRBWheel: HitRBWheel
		{
			armor = 0.3;
		};
		class HitFuel
		{
			armor = 0.28;
			material = -1;
			name = "palivo";
			visual = "";
			passThrough = 1;
		};
		class HitEngine
		{
			armor = 1;
			material = -1;
			name = "motor";
			visual = "";
			passThrough = 1;
		};
		class HitGlass1: HitGlass1
		{
			armor = 0.1;
		};
		class HitGlass2: HitGlass2
		{
			armor = 0.1;
		};
		class HitGlass3: HitGlass3
		{
			armor = 0.1;
		};
		class HitGlass4: HitGlass4
		{
			armor = 0.1;
		};
	};
	
	class Upgrades {
		ItemLRK[] = {"Offroad_DSHKM_Gue_DZE3",{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemTent",1}}};
	};

};
// Cargo 3
class Offroad_DSHKM_Gue_DZE3: Offroad_DSHKM_Gue_DZE2
{
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50 
	transportmaxbackpacks = 4; // car 2
	
	class Upgrades	{
		ItemTNK[] = {"Offroad_DSHKM_Gue_DZE4",{},{{"ItemTNK",1},{"PartFueltank",2}}};
	};
};

// Fuel 4
class Offroad_DSHKM_Gue_DZE4: Offroad_DSHKM_Gue_DZE3
{
	fuelCapacity = 210; // car 100
};
