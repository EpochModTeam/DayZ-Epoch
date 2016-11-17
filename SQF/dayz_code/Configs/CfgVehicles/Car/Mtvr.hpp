class MTVR : Truck {
	crew = "";
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};
};

class MTVR_base;
class MTVR_DES_EP1 : MTVR_base {
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
	class TransportMagazines {};
	class TransportWeapons {};
};

class MtvrRefuel_DES_EP1_DZ : MtvrRefuel_base {
	scope = public;
	side = 2;
	crew = "";
	displayName = "MTVR (Fuel)";
	typicalCargo[] = {};
	hiddenSelectionsTextures[] = { "\CA\wheeled_E\MTVR\Data\MTVR_body_desert_co.paa", "\CA\wheeled_E\MTVR\Data\MTVR_body2_desert_co.paa", "\CA\wheeled_E\MTVR\Data\MTVR_interier_desert_co.paa", "\CA\wheeled_E\MTVR\Data\MTVR_Fuel_desert_CO.paa" };
	class TransportMagazines{};
	class TransportWeapons{};
	transportFuel = 0;
	fuelCapacity = 10000;
};

class MtvrRefuel_DZ: MtvrRefuel {
	scope = public;
	side = 2;
	crew = "";
	typicalCargo[] = {};
	hiddenSelections[] = {};
	class TransportMagazines{};
	class TransportWeapons{};
	transportFuel = 0;
	fuelCapacity = 10000;
};