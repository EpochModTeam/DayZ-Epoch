class M113Ambul_UN_EP1;
class M113Ambul_UN_EP1_DZ : M113Ambul_UN_EP1 {
	scope = 2;
	displayName = $STR_VEH_NAME_M113_AMBULANCE_UN;
	vehicleClass = "DayZ Epoch Vehicles";
	crew = "";
	typicalCargo[] = {};
	class TransportMagazines{};
	class TransportWeapons{};
	commanderCanSee = 2+16+32;
	gunnerCanSee = 2+16+32;
	driverCanSee = 2+16+32;
	transportMaxWeapons = 20;
	transportMaxMagazines = 100;
	transportmaxbackpacks = 6;
	enableGPS = 0;
	attendant = 0;
	supplyRadius = 1.8;
};

class M113Ambul_TK_EP1_DZ : M113Ambul_UN_EP1_DZ {
	scope = 2;
	displayName = $STR_VEH_NAME_M113_AMBULANCE_TK;
	hiddenSelectionsTextures[] = {"\ca\Tracked_E\M113\Data\m113a3_01_TK_co.paa"};
};

class M113_UN_EP1;
class M113_UN_EP1_DZ : M113_UN_EP1 {
	scope = 2;
	displayName = $STR_VEH_NAME_M113_UN;
	vehicleClass = "DayZ Epoch Vehicles";
	crew = "";
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};
	class Turrets;
	class MainTurret;
	transportMaxWeapons = 20;
	transportMaxMagazines = 100;
	transportmaxbackpacks = 6;
	commanderCanSee = 2+16+32;
	gunnerCanSee = 2+16+32;
	driverCanSee = 2+16+32;
	enableGPS = 0;
	supplyRadius = 1.8;
};

class M113_TK_EP1_DZ : M113_UN_EP1_DZ {
	scope = 2;
	displayName = $STR_VEH_NAME_M113_TK;
	hiddenSelectionsTextures[] = {"\ca\Tracked_E\M113\Data\m113a3_01_TK_co.paa"};	
};

// Ammo Less
class M113_UN_EP1_DZE: M113_UN_EP1_DZ {
	class Turrets: Turrets {
		class MainTurret: MainTurret {
			magazines[] = {};
		};
	};
};
class M113_TK_EP1_DZE: M113_TK_EP1_DZ {
	class Turrets: Turrets {
		class MainTurret: MainTurret {
			magazines[] = {};
		};
	};
};