//CZ550
class 5x_22_LR_17_HMR;
class 5Rnd_17HMR : 5x_22_LR_17_HMR
{
	displayName = $STR_DZ_MAG_5RND_17HMR_NAME;
	descriptionShort = $STR_DZ_MAG_5RND_17HMR_DESC;
	
	model = "\dayz_equip\models\mag5rnd.p3d";
	
	class ItemActions
	{
		COMBINE_MAG
	};
};

//Lee-Enfield
class 10x_303;
class 10Rnd_303British : 10x_303
{
	model = "\dayz_equip\models\mag10rnd.p3d";
	displayName = $STR_DZ_MAG_10RND_303BRITISH_NAME;
	
	class ItemActions
	{
		COMBINE_MAG
	};
};

//Winchester 1866
class 15Rnd_W1866_Slug : CA_Magazine
{
	scope = public;
	
	model = "\z\addons\dayz_communityassets\models\winammo.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_winammo_ca.paa";
	displayName = $STR_DZ_MAG_15RND_W1866_NAME;
	descriptionShort = $STR_DZ_MAG_15RND_W1866_DESC;
	
	ammo = B_1866_Slug;
	count = 15;
	initSpeed = 396;
	displayNameShort = "Slug";
	
	class ItemActions
	{
		COMBINE_MAG
	};
};

class 10Rnd_127x99_m107 : CA_Magazine
{
	displayName = $STR_DZ_MAG_10Rnd_127x99_m107_NAME;
	
	cartridgeName = "127x99";
	
	class ItemActions
	{
		COMBINE_MAG
	};
};

class 5Rnd_127x108_KSVK : CA_Magazine
{
	displayName = $STR_DZ_MAG_5Rnd_127x108_KSVK_NAME;
	
	cartridgeName = "127x108";
	
	class ItemActions
	{
		COMBINE_MAG
	};
};

class 5Rnd_86x70_L115A1: CA_Magazine
{
	displayName = $STR_DZ_MAG_5Rnd_86x70_L115A1_NAME;
	
	cartridgeName = "86x70";
	
	class ItemActions
	{
		COMBINE_MAG
	};
};
class 10Rnd_9x39_SP5_VSS: CA_Magazine
{
	displayName = $STR_DZ_MAG_10Rnd_9x39_SP5_VSS_NAME;
	
	cartridgeName = "9x39";
	
	class ItemActions
	{
		COMBINE_MAG
	};
};
class 20Rnd_9x39_SP5_VSS: CA_Magazine
{
	displayName = $STR_DZ_MAG_20Rnd_9x39_SP5_VSS_NAME;
	
	cartridgeName = "9x39";
	
	class ItemActions
	{
		COMBINE_MAG
	};
};
