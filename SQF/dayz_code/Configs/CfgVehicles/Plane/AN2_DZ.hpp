class AN2_DZ: An2_Base_EP1
{
	displayname = $STR_VEH_NAME_AN2;
	displaynameshort = $STR_EP1_DN_AN2_TK;
	scope = 2;
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
};

class AN2_2_DZ : AN2_DZ
{
	hiddenSelections[] ={"Camo1","Camo2","Camo3"};
	hiddenSelectionsTextures[] =
	{
		"ca\Air_E\An2\Data\an2_1_A_CO",
		"ca\Air_E\An2\Data\an2_2_A_CO",
		"ca\Air_E\An2\Data\an2_wings_A_CO"
	};
};