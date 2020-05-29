class Ural_INS;
class Ural_INS_DZE: Ural_INS {
	scope = 2;
	crew = "";
	displayName= $STR_VEH_NAME_URAL_INS;
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};
	vehicleClass = "DayZ Epoch Vehicles";
	supplyRadius = 2.6;
};

class Ural_CDF;
class Ural_CDF_DZE: Ural_CDF {
	scope = 2;
	crew = "";
	displayName= $STR_VEH_NAME_URAL_CDF;
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};
	vehicleClass = "DayZ Epoch Vehicles";
	supplyRadius = 2.6;
};

class UralOpen_CDF;
class UralOpen_CDF_DZE: UralOpen_CDF {
	scope = 2;
	crew = "";
	displayName= $STR_VEH_NAME_URAL_CDF_OPEN;
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};
	vehicleClass = "DayZ Epoch Vehicles";
	supplyRadius = 2.6;
};

class Ural_TK_CIV_EP1;
class Ural_TK_CIV_EP1_DZE: Ural_TK_CIV_EP1 {
	scope = 2;
	crew = "";
	displayName= $STR_VEH_NAME_URAL_TK;
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};
	vehicleClass = "DayZ Epoch Vehicles";
	supplyRadius = 2.6;
};

class Ural_UN_EP1;
class Ural_UN_EP1_DZE: Ural_UN_EP1 {
	scope = 2;
	crew = "";
	displayName= $STR_VEH_NAME_URAL_UN;
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};
	vehicleClass = "DayZ Epoch Vehicles";
	supplyRadius = 2.6;
};

class UralCivil;
class UralCivil_DZE : UralCivil {
	scope = 2;
	displayName= $STR_VEH_NAME_URAL_CIVIL;
	crew = "";
	typicalCargo[] = {};
	class TransportMagazines{};
	class TransportWeapons{};
	vehicleClass = "DayZ Epoch Vehicles";
	supplyRadius = 2.6;

};
class UralCivil2;
class UralCivil2_DZE : UralCivil2 {
	displayName = $STR_VEH_NAME_URAL_CIVIL_OPEN;
	scope = 2;
	crew = "";
	typicalCargo[] = {};
	class TransportMagazines{};
	class TransportWeapons{};
	vehicleClass = "DayZ Epoch Vehicles";
	supplyRadius = 2.6;
};

class UralSupply_TK_EP1;
class UralSupply_TK_EP1_DZE : UralSupply_TK_EP1 {
	displayName = $STR_VEH_NAME_URAL_CIVIL_OPEN;
	scope = 2;
	crew = "";
	typicalCargo[] = {};
	class TransportMagazines{};
	class TransportWeapons{};
	vehicleClass = "DayZ Epoch Vehicles";
	supplyRadius = 2.6;
};

class UralRefuel_TK_EP1;
class UralRefuel_TK_EP1_DZ: UralRefuel_TK_EP1 {
	scope = 2;
	displayName = $STR_VEH_NAME_URAL_FUEL;
	crew = "";
	typicalCargo[] = {};
	transportMaxWeapons = 50;
	transportMaxMagazines = 200;
	transportmaxbackpacks = 8;	
	class TransportMagazines{};
	class TransportWeapons{};
	transportFuel = 0; //Required to disable A2 built in auto refuel for fuel trucks
	fuelCapacity = 10000;
	vehicleClass = "DayZ Epoch Vehicles";
	supplyRadius = 2.6;
};

class UralReammo_CDF;
class UralReammo_CDF_DZE: UralReammo_CDF {
	scope = 2;
	displayName = $STR_VEH_NAME_URAL_WEAPONS;
	crew = "";
	typicalCargo[] = {};
	transportMaxWeapons = 75;
	transportMaxMagazines = 100;
	transportmaxbackpacks = 8;
	class TransportMagazines{};
	class TransportWeapons{};
	transportAmmo = 0;
	vehicleClass = "DayZ Epoch Vehicles";
	supplyRadius = 2.6;
};

class UralRepair_CDF;
class UralRepair_CDF_DZE: UralRepair_CDF {
	scope = 2;
	displayName = $STR_VEH_NAME_URAL_AMMO;
	crew = "";
	typicalCargo[] = {};
	transportMaxWeapons = 25;
	transportMaxMagazines = 300;
	transportmaxbackpacks = 8;
	class TransportMagazines{};
	class TransportWeapons{};
	transportRepair = 0;
	vehicleClass = "DayZ Epoch Vehicles";
	supplyRadius = 2.6;
};