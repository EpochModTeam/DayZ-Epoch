class LandRover_Special_CZ_EP1;
class LandRover_MG_TK_EP1;

class LandRover_SP_DZE: LandRover_Special_CZ_EP1 {
	scope = 2;
	side = 2;
	crew = "";
	
	class TransportMagazines {};
	class TransportWeapons {};
	
	commanderCanSee = 2+16+32;
	gunnerCanSee = 2+16+32;
	driverCanSee = 2+16+32;
	
	transportMaxWeapons = 5;
	transportMaxMagazines = 25;
    transportmaxbackpacks = 4;
		
	typicalcargo[] = {};
	class Turrets: Turrets {
		class AGS30_Turret: MainTurret {
			magazines[] = {};
		};
		class PK_Turret: MainTurret {};
	};
};

class LandRover_MG_DZE: LandRover_MG_TK_EP1 {
	scope = 2;
	side = 2;
	crew = "";
	
	class TransportMagazines {};
	class TransportWeapons {};
	
	commanderCanSee = 2+16+32;
	gunnerCanSee = 2+16+32;
	driverCanSee = 2+16+32;
	
	transportMaxWeapons = 5;
	transportMaxMagazines = 25;
    transportmaxbackpacks = 4;
		
	typicalcargo[] = {};
	class Turrets: Turrets {
		class MainTurret: MainTurret {
			magazines[] = {};
		};
	};
};