class 5Rnd_762x67_XM2010: CA_Magazine
{
	scope = public;
	displayName = $STR_DZ_MAG_5RND_XM2010_NAME;
	descriptionShort = $STR_DZ_MAG_5RND_XM2010_DESC;
	count = 5;
	ammo = "Rem_300Win_Ball";	
	initSpeed = 850;	
	picture = "\FHQ_Remington\ammo\ui\i_xm2010.paa";
	model = "\FHQ_Remington\XM2010\magazine.p3d";
	
	cartridgeName = "762x67";
	
	class ItemActions
	{
		COMBINE_MAG
	};	
};

class 5Rnd_762x67_XM2010_SD: 5Rnd_762x67_XM2010
{
	initSpeed = 750;
	displayName = $STR_DZ_MAG_5RND_XM2010SD_NAME;
	descriptionShort = $STR_DZ_MAG_5RND_XM2010SD_DESC;
	ammo = "Rem_300Win_SD";
	picture = "\FHQ_Remington\ammo\ui\i_xm2010_sd.paa";
};