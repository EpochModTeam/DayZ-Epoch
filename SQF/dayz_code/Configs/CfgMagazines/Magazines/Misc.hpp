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