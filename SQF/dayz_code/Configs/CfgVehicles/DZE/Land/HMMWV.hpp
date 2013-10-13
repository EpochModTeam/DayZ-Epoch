class HMMWV_M998A2_SOV_DES_EP1;
class HMMWV_M1151_M2_CZ_DES_EP1;

class HMMWV_M998A2_SOV_DZE: HMMWV_M998A2_SOV_DES_EP1 {
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
		class SideTurret: MainTurret {};
	};
};

class HMMWV_M1151_DZE: HMMWV_M1151_M2_CZ_DES_EP1 {
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