class MtvrRefuel;
class MtvrRefuel_base : MtvrRefuel
{
	scope = 0;
	side = 4;
	expansion = 1;
	crew = "Civilian";
	typicalCargo[] = {};
};

class MtvrRefuel_DES_EP1_DZ : MtvrRefuel_base {
	scope = 2;
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
	scope = 2;
	side = 2;
	crew = "";
	typicalCargo[] = {};
	hiddenSelections[] = {};
	class TransportMagazines{};
	class TransportWeapons{};
	transportFuel = 0;
	fuelCapacity = 10000;
};