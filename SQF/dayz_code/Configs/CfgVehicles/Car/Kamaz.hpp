class Kamaz_Base;
class KamazOpen_DZE : Kamaz_Base {
	scope = public;
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
	class Upgrades {
	ItemORP[] = {"KamazOpen_DZE1",{},{{"ItemORP",1},{"PartEngine",2}}};
	};
};
class Kamaz_DZE: Kamaz_Base {
	scope = public;
	crew = "";
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};
	cargoAction[] = {"Truck_Cargo01","Truck_Cargo01","Truck_Cargo02","Truck_Cargo03","Truck_Cargo02","Truck_Cargo02","Truck_Cargo03","Truck_Cargo02","Truck_Cargo03","Truck_Cargo02","Truck_Cargo02","Truck_Cargo03"};
	class Upgrades {
	ItemORP[] = {"Kamaz_DZE1",{},{{"ItemORP",1},{"PartEngine",2}}};
	};
};
class KamazOpen_DZE1: KamazOpen_DZE {
	original = "KamazOpen_DZE";
	maxspeed = 100; //base 80
	terrainCoef = 1.8;  // base 2.0
	turnCoef = 2.0;  // base 3.7
	class Upgrades {
	ItemAVE[] = {"KamazOpen_DZE2",{},{{"ItemAVE",1},{"PartGeneric",6},{"ItemTankTrap",4}}};
	};
};
class Kamaz_DZE1: Kamaz_DZE {
	original = "Kamaz_DZE";
	maxspeed = 100; //base 80
	terrainCoef = 1.8;  // base 2.0
	turnCoef = 2.0;  // base 3.7
	class Upgrades {
	ItemAVE[] = {"Kamaz_DZE2",{},{{"ItemAVE",1},{"PartGeneric",6},{"ItemTankTrap",4}}};
	};
};
class KamazOpen_DZE2: KamazOpen_DZE1 {
	armor = 70; //base 32
	damageResistance = 0.0255; // base 0.00243
	class Upgrades {
	ItemLRK[] = {"KamazOpen_DZE3",{},{{"ItemLRK",1},{"PartGeneric",4},{"ItemTent",2}}};
	};
};
class Kamaz_DZE2: Kamaz_DZE1 {
	armor = 70; //base 32
	damageResistance = 0.0255; // base 0.00243
	class Upgrades {
	ItemLRK[] = {"Kamaz_DZE3",{},{{"ItemLRK",1},{"PartGeneric",4},{"ItemTent",2}}};
	};
};
class KamazOpen_DZE3: KamazOpen_DZE2 {
	transportMaxWeapons = 75; // Ural Base 50
	transportMaxMagazines = 300; // Ural Base 200
	transportmaxbackpacks = 12; // Ural Base 8
	class Upgrades {
	ItemTNK[] = {"KamazOpen_DZE4",{},{{"ItemTNK",1},{"PartFueltank",4}}};
	};
};
class Kamaz_DZE3: Kamaz_DZE2 {
	transportMaxWeapons = 75; // Ural Base 50
	transportMaxMagazines = 300; // Ural Base 200
	transportmaxbackpacks = 12; // Ural Base 8
	class Upgrades {
	ItemTNK[] = {"Kamaz_DZE4",{},{{"ItemTNK",1},{"PartFueltank",4}}};
	};
};
class Kamaz_DZE4: Kamaz_DZE3 {
	fuelCapacity = 615; // Ural Base 303	
};
class KamazOpen_DZE4: KamazOpen_DZE3 {
	fuelCapacity = 615; // Ural Base 303	
};
class KamazRefuel;
class KamazRefuel_DZ: KamazRefuel {
	scope = public;
	side = 2;
	crew = "";
	typicalCargo[] = {};
	hiddenSelections[] = {};
	class TransportMagazines{};
	class TransportWeapons{};
	fuelCapacity = 10400;
	//For future Developement = transportFuel = 10400;			// refueltruck
};
class KamazRefuel_DZE1: KamazRefuel_DZ {
	original = "KamazRefuel_DZ";
	maxspeed = 100; //base 80
	terrainCoef = 1.8;  // base 2.0
	turnCoef = 2.0;  // base 3.7
	class Upgrades {
	ItemAVE[] = {"KamazRefuel_DZE2",{},{{"ItemAVE",1},{"PartGeneric",6},{"ItemTankTrap",4}}};
	};
};
class KamazRefuel_DZE2: KamazRefuel_DZE1 {
	armor = 70; //base 32
	damageResistance = 0.0255; // base 0.00243
	class Upgrades {
	ItemLRK[] = {"KamazRefuel_DZE3",{},{{"ItemLRK",1},{"PartGeneric",4},{"ItemTent",2}}};
	};
};
class KamazRefuel_DZE3: KamazRefuel_DZE2 {
	transportMaxWeapons = 75; // Ural Base 50
	transportMaxMagazines = 300; // Ural Base 200
	transportmaxbackpacks = 12; // Ural Base 8
	class Upgrades {
	ItemTNK[] = {"KamazRefuel_DZE4",{},{{"ItemTNK",1},{"PartFueltank",4}}};
	};
};
class KamazRefuel_DZE4: KamazRefuel_DZE3 {
	fuelCapacity = 10700; // Increase the total fuel capacity of the Refuel truck by the additional normal sized fuel tank of a Ural.
};
