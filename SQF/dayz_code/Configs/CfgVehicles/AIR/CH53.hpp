#include "\usec_ch53\config.cpp"

class CH53_base: USEC_ch53_E {
	class Turrets: Turrets {
		class MainTurret: MainTurret {
			class ViewOptics: ViewOptics {};
			class Turrets: Turrets {};
		};
	};
};

class CH53_DZ: CH53_base {
	displayname = "USEC CH53E";
	displaynameshort = "CH53_DZ";
	enablemanualfire = 0;
	scope = 2;
	side = 2;
	crew = "";
	typicalCargo[] = {};
	hiddenSelections[] = {};
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
	displaynameshort = "CH53_DZE";
	class Turrets : Turrets  {
		class MainTurret : MainTurret  {
			magazines[] = {};
		};
	};
};
