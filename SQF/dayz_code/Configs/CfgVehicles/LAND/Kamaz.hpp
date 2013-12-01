class Kamaz_Base;  
class KamazOpen_DZE : Kamaz_Base
{
	// maxSpeed = 80;
	// terrainCoef = 2;

	// truck 
	//transportMaxMagazines = 200;
    //transportMaxWeapons = 50;
	//transportMaxBackpacks = 8;

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
	
	class Library
	{
		libTextDesc = "The Kamaz is a Russian-made 6x6 cargo truck developed in 1973 and still manufactured today. These trucks are very reliable, with powerful V8 engines.<br/>This one serves for  transportation with an open body.";
	};
};