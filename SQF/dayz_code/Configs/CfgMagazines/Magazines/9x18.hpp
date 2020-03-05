class 8Rnd_9x18_Makarov : CA_Magazine
{
	displayName = $STR_DZ_MAG_8RND_9X18_PM_NAME;
	class ItemActions
	{
		COMBINE_MAG
	};
};

class 8Rnd_9x18_MakarovSD : 8Rnd_9x18_Makarov
{
	picture = "\z\addons\dayz_communityweapons\magazines\data\m_makarovsd_ca.paa";
	displayName = $STR_DZ_MAG_8RND_9X18_PMSD_NAME;
	
	class ItemActions
	{
		COMBINE_MAG
	};
};

class 20Rnd_9x18_APS : 8Rnd_9x18_Makarov
{
	displayName = $STR_DZ_MAG_20RND_APS_NAME;
	descriptionShort = $STR_DZ_MAG_20RND_APS_DESC;
	count = 20;
};

class 20Rnd_9x18_APSSD : 8Rnd_9x18_MakarovSD
{
	displayName = $STR_DZ_MAG_20RND_APSSD_NAME;
	descriptionShort = $STR_DZ_MAG_20RND_APSSD_DESC;
	count = 20;
};