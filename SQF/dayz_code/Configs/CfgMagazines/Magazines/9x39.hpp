//VSS
class 10Rnd_9x39_SP5_VSS: CA_Magazine
{
	picture = "\dayz_epoch_c\icons\magazines\m_vssx10_ca.paa";
	model = "\z\addons\dayz_epoch_w\magazine\dze_VSS_vintorez_mag.p3d";
	displayName = $STR_DZ_MAG_10Rnd_9x39_SP5_VSS_NAME;
	descriptionShort = $STR_DZ_MAG_10RND_939_VSSVAL_DESC;
	initSpeed = 700;
	
	cartridgeName = "9x39";
	
	class ItemActions
	{
		COMBINE_MAG
	};
};

class 20Rnd_9x39_SP5_VSS: CA_Magazine
{
	picture = "\dayz_epoch_c\icons\magazines\m_vssx20_ca.paa";
	model = "\z\addons\dayz_epoch_w\magazine\dze_VSS_vintorez_mag.p3d";
	displayName = $STR_DZ_MAG_20Rnd_9x39_SP5_VSS_NAME;
	descriptionShort = $STR_DZ_MAG_20RND_939_VSSVAL_DESC;
	initSpeed = 700;
	
	cartridgeName = "9x39";
	
	class ItemActions
	{
		COMBINE_MAG
	};
};

//Groza-9
class 20Rnd_9x39_Groza9: CA_Magazine 
{
	scope = 2;
	displayName = $STR_DZ_MAG_20RND_Groza9_NAME;
	descriptionShort = $STR_DZ_MAG_20RND_Groza9_DESC;
	picture = "\RH_aks\inv\m_oc.paa";
	model = "\RH_aks\mags\mag_oc14.p3d";	
	count = 20;
	cartridgeName = "9x39";
	ammo = "B_9x39_OC14_Ball";
	
	class ItemActions
	{
		COMBINE_MAG
	};
};

class 20Rnd_9x39_Groza9SD: 20Rnd_9x39_Groza9 
{
	displayName = $STR_DZ_MAG_20RND_Groza9SD_NAME;
	descriptionShort = $STR_DZ_MAG_20RND_Groza9SD_DESC;
	picture = "\dayz_epoch_c\icons\magazines\m_oc_sd.paa";
	cartridgeName = "9x39_SD";
	ammo = "B_9x39_OC14_SD";
};

