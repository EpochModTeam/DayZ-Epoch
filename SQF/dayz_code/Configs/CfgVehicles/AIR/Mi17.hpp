class Mi17_base: Helicopter  {
	class Turrets: Turrets {
		class MainTurret: MainTurret {
			class ViewOptics: ViewOptics {};
			class Turrets: Turrets {};
		};
		class BackTurret: MainTurret {
			class Turrets: Turrets {};
		};
	};
};

class Mi17_DZ: Mi17_base	 {
	displayname = "Mi-17";
	displaynameshort = "Mi17_DZ";
	scope = 2;
	side = 2;
	crew = "";
	typicalCargo[] = {};
	hiddenSelections[] = {};
	class TransportMagazines{};
	class TransportWeapons{};
	commanderCanSee = 2+16+32;
	gunnerCanSee = 2+16+32;
	driverCanSee = 2+16+32;
	transportMaxWeapons = 10;
	transportMaxMagazines = 50;
	transportmaxbackpacks = 10;
	fuelCapacity = 1870;

	class Turrets : Turrets  {
		class MainTurret : MainTurret  {
			magazines[] = {"100Rnd_762x54_PK"};
		};
		class BackTurret : BackTurret {
			magazines[] = {"100Rnd_762x54_PK"};
		};
	};
};
class Mi17_DZE: Mi17_DZ	 {
	displaynameshort = "Mi17_DZE";
	class Turrets : Turrets  {
		class MainTurret : MainTurret  {
			magazines[] = {};
		};
		class BackTurret : BackTurret {
			magazines[] = {};
		};
	};
};

class Mi17_Civilian;
class Mi17_Civilian_DZ: Mi17_Civilian	 {
	displayname = "Mi-17 (Civilian)";
	displaynameshort = "Mi-17 (Civ)";
	scope = 2;
	side = 3;
	crew = "";
	typicalCargo[] = {};
	class TransportMagazines{};
	class TransportWeapons{};
	commanderCanSee = 2+16+32;
	gunnerCanSee = 2+16+32;
	driverCanSee = 2+16+32;
	transportMaxWeapons = 10;
	transportMaxMagazines = 50;
	transportmaxbackpacks = 10;
};
