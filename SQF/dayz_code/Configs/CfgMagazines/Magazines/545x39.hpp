class 30Rnd_545x39_AK : CA_Magazine
{
	picture = "\z\addons\dayz_communityweapons\magazines\data\m_ak74_ca.paa";
	displayName = $STR_DZ_MAG_30RND_545x39_AK_NAME;
	cartridgeName = "545x39";
	
	class ItemActions
	{
		COMBINE_MAG
	};
};

class 30Rnd_545x39_AKSD : 30Rnd_545x39_AK
{
	picture = "\z\addons\dayz_communityweapons\magazines\data\m_ak74sd_ca.paa";
	displayName = $STR_DZ_MAG_30RND_545x39_AKSD_NAME;
	cartridgeName = "545x39_SD";
	
	class ItemActions
	{
		COMBINE_MAG
	};
};

class 75Rnd_545x39_RPK : CA_Magazine
{
	model = "\ca\weapons\mag_univ.p3d";
	picture = "\CA\weapons\AK\data\equip\M_RPK_74_CA.paa";
	displayName = $STR_DZ_MAG_75RND_545X39_RPK_NAME;
	descriptionShort = $STR_DSS_75Rnd_RPK;
	
	count = 75;
	tracersEvery = 4;
	lastRoundsTracer = 4;
	
	cartridgeName = "545x39";
	
	class ItemActions
	{
		COMBINE_MAG
	};
};