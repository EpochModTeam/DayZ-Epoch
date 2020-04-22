//P90
class 50Rnd_57x28_P90: CA_Magazine
{
	scope = public;
	displayName = $STR_DZ_MAG_50RND_P90_NAME;
	descriptionShort = $STR_DZ_MAG_50RND_P90_DESC;
	model = "\RH_smg\mags\mag_p90.p3d";
	picture = "\dayz_epoch_c\icons\magazines\m_p90.paa";
	count = 50;	
	ammo = "B_57x28_Ball";
	
	cartridgeName = "5.7x28";
	
	class ItemActions
	{
		COMBINE_MAG
	};
};

class 50Rnd_57x28_P90SD: 50Rnd_57x28_P90
{
	displayName = $STR_DZ_MAG_50RND_P90SD_NAME;
	descriptionShort = $STR_DZ_MAG_50RND_P90SD_DESC;
	picture = "\dayz_epoch_c\icons\magazines\m_p90_sd.paa";
	ammo = "B_57x28_SD";
	
	cartridgeName = "5.7x28_SD";
};