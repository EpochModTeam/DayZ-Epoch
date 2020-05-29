class V3S_Base : Truck
{
	class Reflectors
	{
		class Left
		{
			angle = 120;
		};
		class Right
		{
			angle = 120;
		};
	};
};

class V3S_Civ;
class V3S_Civ_DZE : V3S_Civ {
	displayname = $STR_VEH_NAME_V3S_CAMO_OPEN;
	vehicleClass = "DayZ Epoch Vehicles";
	crew = "";
	scope = 2;
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};
	supplyRadius = 2.6;
};

class V3S_Open_TK_CIV_EP1;
class V3S_Open_TK_CIV_EP1_DZE: V3S_Open_TK_CIV_EP1 {
	displayname = $STR_VEH_NAME_V3S_CIVIL_OPEN;
	vehicleClass = "DayZ Epoch Vehicles";
	crew = "";
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};
	supplyRadius = 2.6;
};

class V3S_Open_TK_EP1;
class V3S_Open_TK_EP1_DZE: V3S_Open_TK_EP1 {
	displayname = $STR_VEH_NAME_V3S_CAMO_OPEN;
	vehicleClass = "DayZ Epoch Vehicles";
	crew = "";
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};
	supplyRadius = 2.6;
};

class V3S_TK_EP1;
class V3S_TK_EP1_DZE: V3S_TK_EP1 {
	scope = 2;
	displayname = $STR_VEH_NAME_V3S;
	vehicleClass = "DayZ Epoch Vehicles";
	crew = "";
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};
	supplyRadius = 2.6;
};

class V3S_Reammo_TK_GUE_EP1;
class V3S_RA_TK_GUE_EP1_DZE: V3S_Reammo_TK_GUE_EP1 {
	scope = 2;
	crew = "";
	typicalCargo[] = {};
	displayname = $STR_VEH_NAME_V3S_REAMMO;
	vehicleClass = "DayZ Epoch Vehicles";
	class TransportMagazines {};
	class TransportWeapons {};
	transportAmmo = 0;
	supplyRadius = 2.6;
};

class V3S_Refuel_TK_GUE_EP1;
class V3S_Refuel_TK_GUE_EP1_DZ: V3S_Refuel_TK_GUE_EP1 {
	displayname = $STR_VEH_NAME_V3S_FUEL;
	vehicleClass = "DayZ Epoch Vehicles";
	scope = 2;
	crew = "";
	typicalCargo[] = {};
	transportMaxWeapons = 50;
	transportMaxMagazines = 200;
	transportmaxbackpacks = 8;	
	class TransportMagazines{};
	class TransportWeapons{};
	supplyRadius = 2.6;
	transportFuel = 0; //Required to disable A2 built in auto refuel for fuel trucks
	fuelCapacity = 10000;
};
