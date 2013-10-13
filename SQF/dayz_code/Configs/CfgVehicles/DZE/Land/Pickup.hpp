class Pickup_PK_TK_GUE_EP1;
class Pickup_PK_GUE;
class Pickup_PK_INS;

class Pickup_PK_1_DZE: Pickup_PK_TK_GUE_EP1 {
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

class Pickup_PK_2_DZE: Pickup_PK_GUE {
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

class Pickup_PK_3_DZE: Pickup_PK_INS {
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
	};
};