// Armed
class M113_UN_EP1;
class M113_UN_EP1_DZ: M113_UN_EP1 {
	scope = public;
	side = TGuerrila;
	displayName = "M113 DZ";

	commanderCanSee = 2+16+32;
	gunnerCanSee = 2+16+32;
	driverCanSee = 2+16+32;

	crew = "";
	typicalCargo[] = {};
	class TransportMagazines{};

	transportMaxMagazines = 100; // Default: 100
	transportMaxWeapons = 20; // Default: 20
	//transportmaxbackpacks = ; // Default:

	class Turrets; // External class reference
	class MainTurret; // External class reference
};
class M113_TK_EP1;
class M113_TK_EP1_DZ: M113_TK_EP1 {
	scope = public;
	side = TGuerrila;
	displayName = "M113 DZ";

	commanderCanSee = 2+16+32;
	gunnerCanSee = 2+16+32;
	driverCanSee = 2+16+32;

	crew = "";
	typicalCargo[] = {};
	class TransportMagazines{};

	transportMaxMagazines = 100; // Default: 100
	transportMaxWeapons = 20; // Default: 20
	//transportmaxbackpacks = ; // Default:

	class Turrets; // External class reference
	class MainTurret; // External class reference
};

// Ammo Less
class M113_UN_EP1_DZE: M113_UN_EP1_DZ {
	displayName = "M113 AL";
	class Turrets: Turrets {
		class MainTurret: MainTurret {
			magazines[] = {};
		};
	};
};
class M113_TK_EP1_DZE: M113_TK_EP1_DZ {
	displayName = "M113 AL";
	class Turrets: Turrets {
		class MainTurret: MainTurret {
			magazines[] = {};
		};
	};
};

// Unarmed
class M113Ambul_UN_EP1;
class M113Ambul_UN_EP1_DZ: M113Ambul_UN_EP1 {
	scope = public;
	side = TGuerrila;
	crew = "";
	typicalCargo[] = {};
	hiddenSelections[] = {};
	class TransportMagazines{};
	class TransportWeapons{};
	commanderCanSee = 2+16+32;
	gunnerCanSee = 2+16+32;
	driverCanSee = 2+16+32;
	transportMaxWeapons = 5;
	transportMaxMagazines = 25;
	transportmaxbackpacks = 4;
};
class M113Ambul_TK_EP1;
class M113Ambul_TK_EP1_DZ: M113Ambul_TK_EP1 {
	scope = public;
	side = TGuerrila;
	crew = "";
	typicalCargo[] = {};
	hiddenSelections[] = {};
	class TransportMagazines{};
	class TransportWeapons{};
	commanderCanSee = 2+16+32;
	gunnerCanSee = 2+16+32;
	driverCanSee = 2+16+32;
	transportMaxWeapons = 5;
	transportMaxMagazines = 25;
	transportmaxbackpacks = 4;
};