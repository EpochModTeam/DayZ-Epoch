class BMP2_HQ_CDF;
class BMP2_HQ_CDF_DZ: BMP2_HQ_CDF {
	scope = 2;
	displayName = $STR_VEH_NAME_BMP2_CDF;
	vehicleClass = "DayZ Epoch Vehicles";

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
	enableGPS = 0;
	supplyRadius = 1.8;

	class Turrets; // External class reference
	class MainTurret; // External class reference
};

class BMP2_HQ_CDF_DZE: BMP2_HQ_CDF_DZ {
	scope = 2;
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			magazines[] = {"SmokeLauncherMag","SmokeLauncherMag","SmokeLauncherMag"};
		};
	};	
};

class BMP2_HQ_INS;
class BMP2_HQ_INS_DZ: BMP2_HQ_INS {
	scope = 2;
	displayName = $STR_VEH_NAME_BMP2_INS;
	vehicleClass = "DayZ Epoch Vehicles";

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
	enableGPS = 0;
	supplyRadius = 1.8;

	class Turrets; // External class reference
	class MainTurret; // External class reference
};

class BMP2_HQ_INS_DZE: BMP2_HQ_INS_DZ {
	scope = 2;
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			magazines[] = {"SmokeLauncherMag","SmokeLauncherMag","SmokeLauncherMag"};
		};
	};	
};

class BMP2_HQ_TK_EP1;
class BMP2_HQ_TK_EP1_DZ: BMP2_HQ_TK_EP1 {
	scope = 2;
	displayName = $STR_VEH_NAME_BMP2_TK;
	vehicleClass = "DayZ Epoch Vehicles";

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
	enableGPS = 0;
	supplyRadius = 1.8;

	class Turrets; // External class reference
	class MainTurret; // External class reference
};

class BMP2_HQ_TK_EP1_DZE: BMP2_HQ_TK_EP1_DZ {
	scope = 2;
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			magazines[] = {"SmokeLauncherMag","SmokeLauncherMag","SmokeLauncherMag"};
		};
	};	
};
class BMP2_Ambul_INS;
class BMP2_Ambul_INS_DZE: BMP2_Ambul_INS {
	scope = 2;
	displayName = $STR_VEH_NAME_BMP2_AMBULANCE_INS;
	vehicleClass = "DayZ Epoch Vehicles";

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
	enableGPS = 0;
	supplyRadius = 1.8;
	attendant = 0;
};

class BMP2_Ambul_CDF;
class BMP2_Ambul_CDF_DZE: BMP2_Ambul_CDF {
	scope = 2;
	displayName = $STR_VEH_NAME_BMP2_AMBULANCE_CDF;
	vehicleClass = "DayZ Epoch Vehicles";

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
	enableGPS = 0;
	supplyRadius = 1.8;
	attendant = 0;
};