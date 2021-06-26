class GNT_C185C;
class GNT_C185C_DZ: GNT_C185C
{
	displayname = $STR_VEH_NAME_CESSNA_WHITE;
	vehicleClass = "DayZ Epoch Vehicles";
	side = 1;
	faction = "USMC";
	crew = "";
	typicalCargo[] = {};
	class TransportMagazines{};
	class TransportWeapons{};
	gunnerHasFlares = false;
	commanderCanSee = 2+16+32;
	gunnerCanSee = 2+16+32;
	driverCanSee = 2+16+32;
	fuelCapacity = 700;
	transportMaxWeapons = 7;
	transportMaxMagazines = 25;
	transportmaxbackpacks = 2;
	soundEngine[]= {"\GNT_C185\engine.wav",5.6234102,1,1000};
};

class GNT_C185R;
class GNT_C185R_DZ: GNT_C185R
{
	displayname = $STR_VEH_NAME_CESSNA_YELLOW;
	vehicleClass = "DayZ Epoch Vehicles";
	side = 1;
	faction = "USMC";
	crew = "";
	typicalCargo[] = {};
	class TransportMagazines{};
	class TransportWeapons{};
	gunnerHasFlares = false;
	commanderCanSee = 2+16+32;
	gunnerCanSee = 2+16+32;
	driverCanSee = 2+16+32;
	fuelCapacity = 700;
	transportMaxWeapons = 7;
	transportMaxMagazines = 25;
	transportmaxbackpacks = 2;	
	soundEngine[]= {"\GNT_C185\engine.wav",5.6234102,1,1000};
};

class GNT_C185;
class GNT_C185_DZ: GNT_C185
{
	displayname = $STR_VEH_NAME_CESSNA_ORANGE;
	vehicleClass = "DayZ Epoch Vehicles";
	side = 1;
	faction = "USMC";
	crew = "";
	typicalCargo[] = {};
	class TransportMagazines{};
	class TransportWeapons{};
	gunnerHasFlares = false;
	commanderCanSee = 2+16+32;
	gunnerCanSee = 2+16+32;
	driverCanSee = 2+16+32;
	fuelCapacity = 700;
	transportMaxWeapons = 7;
	transportMaxMagazines = 25;
	transportmaxbackpacks = 2;
	soundEngine[]= {"\GNT_C185\engine.wav",5.6234102,1,1000};
};

class GNT_C185U;
class GNT_C185U_DZ: GNT_C185U
{
	displayname = $STR_VEH_NAME_CESSNA_CAMO;
	vehicleClass = "DayZ Epoch Vehicles";
	side = 1;
	faction = "USMC";
	crew = "";
	typicalCargo[] = {};
	class TransportMagazines{};
	class TransportWeapons{};
	gunnerHasFlares = false;
	commanderCanSee = 2+16+32;
	gunnerCanSee = 2+16+32;
	driverCanSee = 2+16+32;
	fuelCapacity = 700;
	transportMaxWeapons = 7;
	transportMaxMagazines = 25;
	transportmaxbackpacks = 2;
	soundEngine[]= {"\GNT_C185\engine.wav",5.6234102,1,1000};
};

class GNT_C185T;
class GNT_C185T_DZ: GNT_C185T
{
	displayname = $STR_VEH_NAME_CESSNA_ROCKETS;
	vehicleClass = "DayZ Epoch Vehicles";
	side = 1;
	faction = "USMC";
	crew = "";
	typicalCargo[] = {};
	class TransportMagazines{};
	class TransportWeapons{};
	gunnerHasFlares = false;
	commanderCanSee = 2+16+32;
	gunnerCanSee = 2+16+32;
	driverCanSee = 2+16+32;
	fuelCapacity = 700;
	transportMaxWeapons = 7;
	transportMaxMagazines = 25;
	transportmaxbackpacks = 2;
	soundEngine[]= {"\GNT_C185\engine.wav",5.6234102,1,1000};
	weapons[] = {"FFARLauncher_12"};
	magazines[] = {"12Rnd_FFAR"};
};

class GNT_C185T_DZE: GNT_C185T_DZ
{
	magazines[] = {};
};

class GNT_C185T_TwinM60_DZ: GNT_C185T_DZ
{
	displayname = $STR_VEH_NAME_CESSNA_M60;
	weapons[] = {"pook_M60_dual_DZ"};
	magazines[] = {"pook_1300Rnd_762x51_M60"};
};

class GNT_C185T_TwinM60_DZE: GNT_C185T_TwinM60_DZ
{
	magazines[] = {};
};

class GNT_C185F;
class GNT_C185F_DZ: GNT_C185F
{
	displayname = $STR_VEH_NAME_CESSNA_AMPHIBIAN;
	vehicleClass = "DayZ Epoch Vehicles";
	side = 1;
	faction = "USMC";
	crew = "";
	typicalCargo[] = {};
	class TransportMagazines{};
	class TransportWeapons{};
	gunnerHasFlares = false;
	commanderCanSee = 2+16+32;
	gunnerCanSee = 2+16+32;
	driverCanSee = 2+16+32;
	fuelCapacity = 700;
	transportMaxWeapons = 7;
	transportMaxMagazines = 25;
	transportmaxbackpacks = 2;
	soundEngine[]= {"\GNT_C185\engine.wav",5.6234102,1,1000};
	
	class Eventhandlers: DefaultEventhandlers
	{
		init = "_sxr = _this execvm ""\GNT_C185\scr\C185Init.sqf"";_scr = _this execVM ""\ca\Data\ParticleEffects\SCRIPTS\init.sqf"";";
		engine = "_this execVM ""\GNT_C185\scr\C185_Exhaust.sqf"";[_this select 0] execvm ""\GNT_C185\scr\G_CheckEngine.sqf"";";
	};
};