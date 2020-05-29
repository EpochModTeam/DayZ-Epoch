class MTVR;
class MTVR_DZE: MTVR {
	scope = 2;
	displayName = $STR_VEH_NAME_MTVR_WOODLAND;
	vehicleClass = "DayZ Epoch Vehicles";
	crew = "";
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};
	supplyRadius = 2.6;
};

class MTVR_DES_EP1;
class MTVR_DES_EP1_DZE : MTVR_DES_EP1 {
	scope = 2;
	displayName = $STR_VEH_NAME_MTVR_DESERT;
	vehicleClass = "DayZ Epoch Vehicles";
	crew = "";
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};
	supplyRadius = 2.6;
};

class MtvrRefuel_DES_EP1;
class MtvrRefuel_DES_EP1_DZ: MtvrRefuel_DES_EP1 {
	scope = 2;
	crew = "";
	displayName = $STR_VEH_NAME_MTVR_DESERT_REFUEL;
	vehicleClass = "DayZ Epoch Vehicles";
	typicalCargo[] = {};
	transportMaxWeapons = 50;
	transportMaxMagazines = 200;
	transportmaxbackpacks = 8;		
	class TransportMagazines{};
	class TransportWeapons{};
	transportFuel = 0; //Required to disable A2 built in auto refuel for fuel trucks
	fuelCapacity = 10000;
	supplyRadius = 2.6;
};

class MtvrRefuel;
class MtvrRefuel_DZ: MtvrRefuel {
	scope = 2;
	crew = "";
	displayName = $STR_VEH_NAME_MTVR_WOODLAND_REFUEL;
	vehicleClass = "DayZ Epoch Vehicles";
	typicalCargo[] = {};
	transportMaxWeapons = 50;
	transportMaxMagazines = 200;
	transportmaxbackpacks = 8;	
	class TransportMagazines{};
	class TransportWeapons{};
	transportFuel = 0; //Required to disable A2 built in auto refuel for fuel trucks
	fuelCapacity = 10000;
	supplyRadius = 2.6;
};

class MtvrRepair;
class MtvrRepair_DZE: MtvrRepair {
	scope = 2;
	crew = "";
	displayName = $STR_VEH_NAME_MTVR_AMMO;
	vehicleClass = "DayZ Epoch Vehicles";
	typicalCargo[] = {};
	transportMaxWeapons = 25;
	transportMaxMagazines = 300;
	transportmaxbackpacks = 8;
	class TransportMagazines{};
	class TransportWeapons{};	
	transportRepair = 0;
	supplyRadius = 2.6;
};

class MtvrReammo;
class MtvrReammo_DZE: MtvrReammo {
	scope = 2;
	crew = "";
	displayName = $STR_VEH_NAME_MTVR_WEAPONS;
	vehicleClass = "DayZ Epoch Vehicles";
	typicalCargo[] = {};
	transportMaxWeapons = 75;
	transportMaxMagazines = 100;
	transportmaxbackpacks = 8;
	class TransportMagazines{};
	class TransportWeapons{};	
	transportAmmo = 0;
	supplyRadius = 2.6;
};