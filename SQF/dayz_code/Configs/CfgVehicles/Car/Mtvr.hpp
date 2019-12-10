class MTVR : Truck {
	displayName = $STR_VEH_NAME_MTVR_WOODLAND;
	crew = "";
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};
};

class MTVR_base;
class MTVR_DES_EP1 : MTVR_base {
	displayName = $STR_VEH_NAME_MTVR_DESERT;
	crew = "";
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};
};

class MtvrRefuel;
class MtvrRefuel_base : MtvrRefuel
{
	scope = private;
	side = 4;
	expansion = 1;
	crew = "";
	typicalCargo[] = {};
	transportMaxWeapons = 50;
	transportMaxMagazines = 200;
	transportmaxbackpacks = 8;	
	class TransportMagazines {};
	class TransportWeapons {};
};

class MtvrRefuel_DES_EP1_DZ : MtvrRefuel_base {
	scope = public;
	side = 2;
	crew = "";
	displayName = $STR_VEH_NAME_MTVR_DESERT_REFUEL;
	typicalCargo[] = {};
	hiddenSelectionsTextures[] = { "\CA\wheeled_E\MTVR\Data\MTVR_body_desert_co.paa", "\CA\wheeled_E\MTVR\Data\MTVR_body2_desert_co.paa", "\CA\wheeled_E\MTVR\Data\MTVR_interier_desert_co.paa", "\CA\wheeled_E\MTVR\Data\MTVR_Fuel_desert_CO.paa" };
	class TransportMagazines{};
	class TransportWeapons{};
	transportFuel = 0; //Required to disable A2 built in auto refuel for fuel trucks
	fuelCapacity = 10000;
	supplyRadius = 0;
};

class MtvrRefuel_DZ: MtvrRefuel {
	scope = public;
	side = 2;
	crew = "";
	displayName = $STR_VEH_NAME_MTVR_WOODLAND_REFUEL;
	typicalCargo[] = {};
	hiddenSelections[] = {};
	transportMaxWeapons = 50;
	transportMaxMagazines = 200;
	transportmaxbackpacks = 8;	
	class TransportMagazines{};
	class TransportWeapons{};
	transportFuel = 0; //Required to disable A2 built in auto refuel for fuel trucks
	fuelCapacity = 10000;
	supplyRadius = 0;
};

class MtvrRepair;
class MtvrRepair_DZE: MtvrRepair {
	scope = public;
	side = 2;
	crew = "";
	displayName = $STR_VEH_NAME_MTVR_AMMO;
	typicalCargo[] = {};
	hiddenSelections[] = {};
	transportMaxWeapons = 25;
	transportMaxMagazines = 300;
	transportmaxbackpacks = 8;
	class TransportMagazines{};
	class TransportWeapons{};	
	transportRepair = 0;
	supplyRadius = 0;
};

class MtvrReammo;
class MtvrReammo_DZE: MtvrReammo {
	scope = public;
	side = 2;
	crew = "";
	displayName = $STR_VEH_NAME_MTVR_WEAPONS;
	typicalCargo[] = {};
	hiddenSelections[] = {};
	transportMaxWeapons = 75;
	transportMaxMagazines = 100;
	transportmaxbackpacks = 8;
	class TransportMagazines{};
	class TransportWeapons{};	
	transportAmmo = 0;
	supplyRadius = 0;
};