class An2_Base_EP1;
class AN2_DZ: An2_Base_EP1
{
	displayname = $STR_VEH_NAME_AN2_GREEN;
	vehicleClass = "DayZ Epoch Vehicles";
	scope = public;
	side = 2;
	crew = "";
	typicalCargo[] = {};
	hiddenSelections[] = {};
	class TransportMagazines{};
	class TransportWeapons{};
	weapons[] = {};
	magazines[] = {};
	gunnerHasFlares = false;
	commanderCanSee = 2+16+32;
	gunnerCanSee = 2+16+32;
	driverCanSee = 2+16+32;
	transportMaxWeapons = 10;
	transportMaxMagazines = 80;
	transportmaxbackpacks = 15;
	fuelCapacity = 757;
};

class AN2_VICKER_DZ: AN2_DZ 
{
	displayname = $STR_VEH_NAME_AN2_VICKER;
	weapons[] = {"TwinVickers"};
	magazines[] = {"500Rnd_TwinVickers","500Rnd_TwinVickers"};
};

class AN2_VICKER_DZE: AN2_VICKER_DZ
{
	magazines[] = {};
};

class AN2_2_DZ : AN2_DZ
{
	displayname = $STR_VEH_NAME_AN2_WHITERED;	
	hiddenSelections[] ={"Camo1","Camo2","Camo3"};
	hiddenSelectionsTextures[] =
	{
		"ca\Air_E\An2\Data\an2_1_A_CO",
		"ca\Air_E\An2\Data\an2_2_A_CO",
		"ca\Air_E\An2\Data\an2_wings_A_CO"
	};
};

class AN2_M134_DZ: AN2_2_DZ 
{
	displayname = $STR_VEH_NAME_AN2_M134;
	weapons[] = {"TwinM134"};
	magazines[] = {"2000Rnd_762x51_M134"};
};

class AN2_M134_DZE: AN2_M134_DZ
{
	magazines[] = {};
};

class An2_2_TK_CIV_EP1;
class An2_2_TK_CIV_EP1_DZ : An2_2_TK_CIV_EP1
{
	displayname = $STR_VEH_NAME_AN2_WHITEGREEN;
	vehicleClass = "DayZ Epoch Vehicles";
	scope = public;
	side = 2;
	crew = "";
	typicalCargo[] = {};
	class TransportMagazines{};
	class TransportWeapons{};
	weapons[] = {};
	magazines[] = {};
	gunnerHasFlares = false;
	commanderCanSee = 2+16+32;
	gunnerCanSee = 2+16+32;
	driverCanSee = 2+16+32;
	transportMaxWeapons = 10;
	transportMaxMagazines = 80;
	transportmaxbackpacks = 15;
	fuelCapacity = 757;
};