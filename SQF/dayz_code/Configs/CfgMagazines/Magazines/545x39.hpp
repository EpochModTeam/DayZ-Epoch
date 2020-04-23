class 30Rnd_545x39_AK : CA_Magazine
{
	picture = "\z\addons\dayz_communityweapons\magazines\data\m_ak74_ca.paa";
	displayName = $STR_DZ_MAG_30RND_545x39_AK_NAME;
	descriptionShort = $STR_DZ_MAG_30RND_AK74_DESC;
	cartridgeName = "545x39";
	
	class ItemActions
	{
		COMBINE_MAG
	};
};

class 60Rnd_545x39_AK_Taped : 30Rnd_545x39_AK {
	displayName = $STR_DZE_MAG_60RND_545x39_AK74_NAME;	
	descriptionShort = $STR_DZE_MAG_60RND_545x39_AK74_DESC;
	count = 60;
	picture = "\dayz_epoch_c\icons\magazines\m_ak74_taped.paa";
    model = "\z\addons\dayz_epoch_w\magazine\dze_ak47_twinmag.p3d";
};

class 30Rnd_545x39_AKSD : 30Rnd_545x39_AK
{
	picture = "\z\addons\dayz_communityweapons\magazines\data\m_ak74sd_ca.paa";
	displayName = $STR_DZ_MAG_30RND_545x39_AKSD_NAME;
	descriptionShort = $STR_DZ_MAG_30RND_AK74SD_DESC;
	cartridgeName = "545x39_SD";
	
	class ItemActions
	{
		COMBINE_MAG
	};
};

class 60Rnd_545x39_AKSD_Taped : 30Rnd_545x39_AKSD {
	displayName = $STR_DZE_MAG_60RND_545x39_AK74SD_NAME;	
	descriptionShort = $STR_DZE_MAG_60RND_545x39_AK74SD_DESC;
	count = 60;
	picture = "\dayz_epoch_c\icons\magazines\m_ak74_taped_sd.paa";
    model = "\z\addons\dayz_epoch_w\magazine\dze_ak47_twinmag.p3d";
};

class 75Rnd_545x39_RPK : CA_Magazine
{
	model = "\z\addons\dayz_epoch_w\magazine\dze_RPK_mag.p3d";
	picture = "\CA\weapons\AK\data\equip\M_RPK_74_CA.paa";
	displayName = $STR_DZ_MAG_75RND_545X39_RPK_NAME;
	descriptionShort = $STR_DZ_MAG_75RND_RPK74_DESC;
	
	count = 75;
	tracersEvery = 4;
	lastRoundsTracer = 4;
	
	cartridgeName = "545x39";
	
	class ItemActions
	{
		COMBINE_MAG
	};
};