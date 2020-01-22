class LAV25;
class LAV25_DZ: LAV25 {
	scope = public;
	displayName = $STR_VEH_NAME_LAV25;

	commanderCanSee = 2+16+32;
	gunnerCanSee = 2+16+32;
	driverCanSee = 2+16+32;

	crew = "";
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};

	transportMaxMagazines = 100;
	transportMaxWeapons = 20;
	transportmaxbackpacks = 6;

	class Turrets; // External class reference
	class MainTurret; // External class reference
	supplyRadius = 1.8;
};
class LAV25_HQ;
class LAV25_HQ_DZ: LAV25_HQ {
	scope = public;
	displayName = $STR_VEH_NAME_LAV25_HQ;

	commanderCanSee = 2+16+32;
	gunnerCanSee = 2+16+32;
	driverCanSee = 2+16+32;

	crew = "";
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};

	transportMaxMagazines = 100;
	transportMaxWeapons = 20;
	transportmaxbackpacks = 6;

	class Turrets; // External class reference
	class MainTurret; // External class reference
	supplyRadius = 1.8;
};

// Ammo Less
class LAV25_DZE: LAV25_DZ {
	class Turrets: Turrets {
		class MainTurret : MainTurret {
			magazines[] = {};
		};
	};
};
class LAV25_HQ_DZE: LAV25_HQ_DZ {
	class Turrets: Turrets {
		class MainTurret : MainTurret {
			magazines[] = {};
		};
	};
};