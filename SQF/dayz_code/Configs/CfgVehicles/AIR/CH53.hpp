class CH53_base: Helicopter  {
	class Turrets: Turrets {
		class MainTurret: MainTurret {
			class ViewOptics: ViewOptics {};
			class Turrets: Turrets {};
		};
	};
};

class CH53_DZ: CH53_base	 {
	displayname = "USEC CH53";
	displaynameshort = "CH53_DZ";
	enablemanualfire = 0;
	scope = 2;
	side = 2;
	crew = "";
	typicalCargo[] = {};
	hiddenSelections[] = {};
	icon = "\ca\air_e\data\UI\Icon_ah6x_CA.paa";
	model = "\ca\air_e\ah6j\ah6x";
	radartype = 0;
	class TransportMagazines{};
	class TransportWeapons{};
	commanderCanSee = 2+16+32;
	gunnerCanSee = 2+16+32;
	driverCanSee = 2+16+32;
	transportMaxWeapons = 25;
	transportMaxMagazines = 80;
	transportmaxbackpacks = 15;

	class Turrets : Turrets  {
		class MainTurret : MainTurret  {
			magazines[] = {"2000Rnd_762x51_M134"};
		};
	};
};
class CH53_DZE: CH53_DZ	 {
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
