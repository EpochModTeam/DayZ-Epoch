class CH_47F_EP1;

class CH_47_DZE: CH_47F_EP1 {
	scope = 2;
	side = 2;
	crew = "";
	
	class TransportMagazines{};
	class TransportWeapons{};
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
		class RightDoorGun: MainTurret {};
		class BackDoorGun: MainTurret {
			magazines[] = {};
		};
	};
};