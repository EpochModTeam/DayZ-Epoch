class BTR90;
class BTR90_DZ: BTR90 {
	scope = public;
	side = TGuerrila;
	displayName = $STR_VEH_NAME_BTR90;

	commanderCanSee = 2+16+32;
	gunnerCanSee = 2+16+32;
	driverCanSee = 2+16+32;

	crew = "";
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};

	transportMaxMagazines = 100; // Default: 100
	transportMaxWeapons = 10; // Default: 10
	//transportmaxbackpacks = ; // Default:

	class Turrets; // External class reference
	class MainTurret; // External class reference
};
class BTR90_HQ;
class BTR90_HQ_DZ: BTR90_HQ {
	scope = public;
	side = TGuerrila;
	displayName = $STR_VEH_NAME_BTR90_HQ;

	commanderCanSee = 2+16+32;
	gunnerCanSee = 2+16+32;
	driverCanSee = 2+16+32;

	crew = "";
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};

	transportSoldier = 6;

	transportMaxMagazines = 100; // Default: 100
	transportMaxWeapons = 10; // Default: 10
	//transportmaxbackpacks = ; // Default:

	class Turrets; // External class reference
	class MainTurret; // External class reference
};

// Ammo Less
class BTR90_DZE: BTR90_DZ {
	displayName = $STR_VEH_NAME_BTR90;
	class Turrets: Turrets {
		class MainTurret: MainTurret {
			magazines[] = {};
		};
	};
};
class BTR90_HQ_DZE: BTR90_HQ_DZ {
	displayName = $STR_VEH_NAME_BTR90_HQ;
	class Turrets: Turrets {
		class MainTurret: MainTurret {
			magazines[] = {};
		};
	};
};