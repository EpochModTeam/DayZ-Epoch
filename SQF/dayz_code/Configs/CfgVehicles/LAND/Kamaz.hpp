class Kamaz_Base;
class KamazOpen_DZE : Kamaz_Base {
	scope = 2;
	displayName = "Utility Truck (Open)";
	model = "\ca\wheeled2\Kamaz\Kamaz_Open";
	picture = "\Ca\wheeled2\data\ui\Picture_kamaz_open_CA.paa";
	Icon = "\Ca\wheeled2\data\ui\Icon_kamaz_open_CA.paa";
	castCargoShadow = 1;
	crew = "";
	typicalCargo[] = {};
	class TransportMagazines{};
	class TransportWeapons{};
	class Library {
		libTextDesc = "The Kamaz is a Russian-made 6x6 cargo truck developed in 1973 and still manufactured today. These trucks are very reliable, with powerful V8 engines.<br/>This one serves for  transportation with an open body.";
	};
};
class KamazRefuel;
class KamazRefuel_DZ: KamazRefuel {
	scope = 2;
	side = 2;
	crew = "";
	typicalCargo[] = {};
	hiddenSelections[] = {};
	class TransportMagazines{};
	class TransportWeapons{};
	transportFuel = 0;
	fuelCapacity = 10400;
};
