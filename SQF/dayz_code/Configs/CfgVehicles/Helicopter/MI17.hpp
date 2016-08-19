class Mi17_base: Helicopter  {
	class Turrets: Turrets {

		class MainTurret: MainTurret {
			class ViewOptics: ViewOptics {};
			class Turrets: Turrets {};
		};
		class BackTurret: MainTurret {
			class Turrets: Turrets {};
		};
	};
};
//Armed
class Mi17_DZ: Mi17_base	 {
	displayname = $STR_VEH_NAME_MI17;
	displaynameshort = "Mi17_DZ";
	scope = public;
	side = 2;
	crew = "";
	typicalCargo[] = {};
	hiddenSelections[] = {};
	class TransportMagazines{};
	class TransportWeapons{};
	commanderCanSee = 2+16+32;
	gunnerCanSee = 2+16+32;
	driverCanSee = 2+16+32;
	transportMaxWeapons = 10;
	transportMaxMagazines = 50;
	transportmaxbackpacks = 10;
	fuelCapacity = 1870;
	class Turrets : Turrets  {
		class MainTurret : MainTurret  {
			magazines[] = {"100Rnd_762x54_PK"};
		};
		class BackTurret : BackTurret {
			magazines[] = {"100Rnd_762x54_PK"};
		};
	};
};
class Mi17_DZE: Mi17_DZ	 {
	displaynameshort = "Mi17_DZE";
	class Turrets : Turrets  {
		class MainTurret : MainTurret  {
			magazines[] = {};
		};
		class BackTurret : BackTurret {
			magazines[] = {};
		};
	};
};

class Mi17_TK_EP1: Mi17_base  {};
class Mi17_TK_EP1_DZ: Mi17_TK_EP1  {
	displayname = "Mi17_TK_DZ";
	displaynameshort = "Mi17_TK_DZ";
	scope = public;
	side = 2;
	crew = "";
	typicalCargo[] = {};
	class TransportMagazines{};
	class TransportWeapons{};
	commanderCanSee = 2+16+32;
	gunnerCanSee = 2+16+32;
	driverCanSee = 2+16+32;
	transportMaxWeapons = 10;
	transportMaxMagazines = 50;
	transportmaxbackpacks = 10;
	fuelCapacity = 1870;

	class Turrets : Turrets  {
		class MainTurret : MainTurret  {
			magazines[] = {"100Rnd_762x54_PK"};
		};
		class BackTurret : BackTurret {
			magazines[] = {"100Rnd_762x54_PK"};
		};
	};
};
class Mi17_TK_EP1_DZE: Mi17_TK_EP1_DZ	 {
	displaynameshort = "Mi17_TK_DZE";
	class Turrets : Turrets  {
		class MainTurret : MainTurret  {
			magazines[] = {};
		};
		class BackTurret : BackTurret {
			magazines[] = {};
		};
	};
};

class Mi17_UN_CDF_EP1: Mi17_base  {};
class Mi17_UN_CDF_EP1_DZ: Mi17_UN_CDF_EP1  {
	displayname = "Mi17_UN_CDF_EP1_DZ";
	displaynameshort = "Mi17_UN_CDF_EP1_DZ";
	scope = public;
	side = 2;
	crew = "";
	typicalCargo[] = {};
	class TransportMagazines{};
	class TransportWeapons{};
	commanderCanSee = 2+16+32;
	gunnerCanSee = 2+16+32;
	driverCanSee = 2+16+32;
	transportMaxWeapons = 10;
	transportMaxMagazines = 50;
	transportmaxbackpacks = 10;
	fuelCapacity = 1870;

	class Turrets : Turrets  {
		class MainTurret : MainTurret  {
			magazines[] = {"100Rnd_762x54_PK"};
		};
		class BackTurret : BackTurret {
			magazines[] = {"100Rnd_762x54_PK"};
		};
	};
};

class Mi17_UN_CDF_EP1_DZE: Mi17_UN_CDF_EP1_DZ	 {
	displaynameshort = "Mi17_UN_CDF_EP1_DZE";
	class Turrets : Turrets  {
		class MainTurret : MainTurret  {
			magazines[] = {};
		};
		class BackTurret : BackTurret {
			magazines[] = {};
		};
	};
};

class Mi17_CDF: Mi17_base  {};
class Mi17_CDF_DZ: Mi17_CDF  {
	displayname = "Mi17_CDF_DZ";
	displaynameshort = "Mi17_CDF_DZ";
	scope = public;
	side = 2;
	crew = "";
	typicalCargo[] = {};
	class TransportMagazines{};
	class TransportWeapons{};
	commanderCanSee = 2+16+32;
	gunnerCanSee = 2+16+32;
	driverCanSee = 2+16+32;
	transportMaxWeapons = 10;
	transportMaxMagazines = 50;
	transportmaxbackpacks = 10;
	fuelCapacity = 1870;

	class Turrets : Turrets  {
		class MainTurret : MainTurret  {
			magazines[] = {"100Rnd_762x54_PK"};
		};
		class BackTurret : BackTurret {
			magazines[] = {"100Rnd_762x54_PK"};
		};
	};
};
class Mi17_CDF_DZE: Mi17_CDF_DZ	 {
	displaynameshort = "Mi17_CDF_DZE";
	class Turrets : Turrets  {
		class MainTurret : MainTurret  {
			magazines[] = {};
		};
		class BackTurret : BackTurret {
			magazines[] = {};
		};
	};
};

//Unarmed
class Mi17_Civilian;
class Mi17_Civilian_DZ: Mi17_Civilian	 {
	displayname = "Mi-17 (Civilian)";
	displaynameshort = "Mi-17 (Civ)";
	scope = public;
	side = 3;
	crew = "";
	typicalCargo[] = {};
	class TransportMagazines{};
	class TransportWeapons{};
	commanderCanSee = 2+16+32;
	gunnerCanSee = 2+16+32;
	driverCanSee = 2+16+32;
	transportMaxWeapons = 10;
	transportMaxMagazines = 50;
	transportmaxbackpacks = 10;
};

class Mi17_medevac_CDF;
class Mi17_medevac_CDF_DZ: Mi17_medevac_CDF {
	displayname = "Mi-17 MedEvac (CDF)";
	displaynameshort = "Mi-17 MedEvac (CDF)";
	scope = public;
	side = 3;
	crew = "";
	typicalCargo[] = {};
	class TransportMagazines{};
	class TransportWeapons{};
	commanderCanSee = 2+16+32;
	gunnerCanSee = 2+16+32;
	driverCanSee = 2+16+32;
	transportMaxWeapons = 10;
	transportMaxMagazines = 50;
	transportmaxbackpacks = 10;
	fuelCapacity = 1500;
};

class Mi17_medevac_Ins;
class Mi17_medevac_Ins_DZ: Mi17_medevac_Ins {
	displayname = "Mi-17 MedEvac (Ins)";
	displaynameshort = "Mi-17 MedEvac (Ins)";
	scope = public;
	side = 3;
	crew = "";
	typicalCargo[] = {};
	class TransportMagazines{};
	class TransportWeapons{};
	commanderCanSee = 2+16+32;
	gunnerCanSee = 2+16+32;
	driverCanSee = 2+16+32;
	transportMaxWeapons = 10;
	transportMaxMagazines = 50;
	transportmaxbackpacks = 10;
	fuelCapacity = 1500;
};

class Mi17_medevac_RU;
class Mi17_medevac_RU_DZ: Mi17_medevac_RU {
	displayname = "Mi-17 MedEvac (RU)";
	displaynameshort = "Mi-17 MedEvac (RU)";
	scope = public;
	side = 3;
	crew = "";
	typicalCargo[] = {};
	class TransportMagazines{};
	class TransportWeapons{};
	commanderCanSee = 2+16+32;
	gunnerCanSee = 2+16+32;
	driverCanSee = 2+16+32;
	transportMaxWeapons = 10;
	transportMaxMagazines = 50;
	transportmaxbackpacks = 10;
	fuelCapacity = 1500;
};
