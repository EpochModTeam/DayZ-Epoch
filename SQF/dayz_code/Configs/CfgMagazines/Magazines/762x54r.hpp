class 100Rnd_762x54_PK : CA_Magazine
{
	model = "z\addons\dayz_communityweapons\magazines\pk.p3d";
	displayName = $STR_DZ_MAG_100RND_762x54_PK_NAME;
	
	cartridgeName = "762x54";
	type = WeaponSlotItem; // Only takes up one gear slot in Epoch
	
	class ItemActions
	{
		COMBINE_MAG
	};
};

class 50Rnd_762x54_UK59 : 100Rnd_762x54_PK
{
	count = 50;
	
	model = "z\addons\dayz_communityweapons\magazines\uk59.p3d";
	picture = "\z\addons\dayz_communityweapons\magazines\data\m_uk59_ca.paa";
	displayName = $STR_DZ_MAG_50RND_762X54_UK59_NAME;
	descriptionShort = $STR_DZ_MAG_50RND_762X54_UK59_DESC;
};

class 10Rnd_762x54_SVD : CA_Magazine
{
	displayName = $STR_DZ_MAG_10RND_762x54_SVD_NAME;
	
	cartridgeName = "762x54";
	
	class ItemActions
	{
		COMBINE_MAG
	};
};

class 5Rnd_762x54_Mosin : 10Rnd_762x54_SVD
{
	count = 5;
	model = "\dayz_equip\models\mag5rnd.p3d";
	picture = "\z\addons\dayz_communityweapons\models\mosin_nagant\images\ammo.paa";
	displayName = $STR_DZ_MAG_5RND_762X54_MOSIN_NAME;
	descriptionShort = $STR_DZ_MAG_5RND_762X54_MOSIN_DESC;
	
	cartridgeName = "762x54";
	
	class ItemActions
	{
		COMBINE_MAG
	};
};