class UH1_Base: Helicopter {
	class Turrets: Turrets {
		class MainTurret: MainTurret {
			class ViewOptics: ViewOptics {};
			class Turrets: Turrets {};
		};
		class RightDoorGun: MainTurret {
			class Turrets: Turrets {};
		};
		class CoPilotObs: MainTurret {
			class Turrets: Turrets {};
		};
	};
};
class UH1Y_DZ: UH1_Base {
	scope = 2;
	side = 2;
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
	weapons[] = {};
	magazines[] = {};
	fuelCapacity = 1333;
	class Turrets : Turrets {
		class MainTurret : MainTurret {
			magazines[] = {"2000Rnd_762x51_M134"};
		};
		class RightDoorGun : RightDoorGun {
			magazines[] = {"2000Rnd_762x51_M134"};
		};
	};
};
class UH1Y_DZE: UH1Y_DZ {
	class Turrets : Turrets {
		class MainTurret : MainTurret {
			magazines[] = {};
		};
		class RightDoorGun : RightDoorGun {
			magazines[] = {};
		};
	};
};
class UH1H_base: Helicopter {
	class Turrets: Turrets {
		class MainTurret: MainTurret {
			class ViewOptics: ViewOptics {};
			class Turrets: Turrets {};
		};
		class LeftDoorGun: MainTurret {
			class Turrets: Turrets {};
		};
	};
};

class UH1H_DZ: UH1H_base {
	scope = 2;
	side = 2;
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
	fuelCapacity = 1333;
	class Turrets : Turrets {
		class MainTurret : MainTurret {
			magazines[] = {"100Rnd_762x51_M240"};
		};
		class LeftDoorGun : LeftDoorGun {
			magazines[] = {"100Rnd_762x51_M240"};
		};
	};
};
class UH1H_DZE: UH1H_DZ {
	class Turrets : Turrets {
		class MainTurret : MainTurret {
			magazines[] = {};
		};
		class LeftDoorGun : LeftDoorGun {
			magazines[] = {};
		};
	};
};
