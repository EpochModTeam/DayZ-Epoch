class 7Rnd_45ACP_1911: CA_Magazine
{
	model = "\RH_de\mags\mag_kim.p3d";
	picture = "\dayz_epoch_c\icons\magazines\m_colt.paa";
	displayName = $STR_DZ_MAG_7RND_45ACP_1911_NAME;
	descriptionShort = $STR_DZ_MAG_7RND_M1911_45ACP_DESC;
	
	cartridgeName = "45ACP";
	
	class ItemActions
	{
		COMBINE_MAG
		
		class ReloadMag
		{
			text = $STR_MAG_CONV_45ACP_Revolver;
			script = "spawn player_reloadMag;";
			use[] = {"7Rnd_45ACP_1911"};
			output[] = {"6Rnd_45ACP"};
		};
	};
};

class 6Rnd_45ACP: CA_Magazine
{
	model = "\dayz_equip\models\ammo_acp45.p3d";
	displayName = $STR_DZ_MAG_6RND_45ACP_NAME;
	descriptionShort = $STR_DZ_MAG_6RND_45ACP_DESC;
	
	cartridgeName = "45ACP";
	
	class ItemActions
	{
		COMBINE_MAG
		
		class ReloadMag
		{
			text = $STR_MAG_CONV_45ACP_M1911;
			script = "spawn player_reloadMag;";
			use[] = {"6Rnd_45ACP"};
			output[] = {"7Rnd_45ACP_1911"};
		};
	};
};

class 15Rnd_45ACP_USP: 7Rnd_45ACP_1911
{
	displayName = $STR_DZ_MAG_15RND_45ACP_USP_NAME;
	descriptionShort = $STR_DZ_MAG_15RND_USP_45ACP_DESC;
	model = "\RH_de\mags\mag_usp.p3d";
	picture = "\dayz_epoch_c\icons\magazines\m_usp.paa";
	count = 15;	

	class ItemActions
	{
		delete ReloadMag;
		COMBINE_MAG
	};	
};
class 15Rnd_45ACP_USPSD: 15Rnd_45ACP_USP
{
	displayName = $STR_DZ_MAG_15RND_45ACP_USPSD_NAME;
	descriptionShort = $STR_DZ_MAG_15RND_USPSD_45ACP_DESC;
	picture = "\dayz_epoch_c\icons\magazines\m_usp_sd.paa";
	ammo = "B_45ACP_SD";
	initSpeed = 278;
};

class 7Rnd_45ACP_1911SD: 15Rnd_45ACP_USPSD
{
	displayName = $STR_DZ_MAG_7RND_45ACP_KIMBER1911SD_NAME;
	descriptionShort = $STR_DZ_MAG_7RND_KIMBER1911SD_45ACP_DESC;
	model = "\RH_de\mags\mag_kim.p3d";
	picture = "\dayz_epoch_c\icons\magazines\m_colt_sd.paa";
	ammo = "B_45ACP_SD";
	count = 7;
};

class 33Rnd_45ACP_KRISS: 15Rnd_45ACP_USP
{
	displayName = $STR_DZ_MAG_33RND_45ACP_KRISS_NAME;
	descriptionShort = $STR_DZ_MAG_33RND_KRISS_45ACP_DESC;
	model = "\RH_smg\mags\mag_kriss30.p3d";
	picture = "\dayz_epoch_c\icons\magazines\m_kriss30.paa";
	count = 33;
	type = 256;
};
class 33Rnd_45ACP_KRISSSD: 33Rnd_45ACP_KRISS
{
	displayName = $STR_DZ_MAG_33RND_45ACP_KRISSSD_NAME;
	descriptionShort = $STR_DZ_MAG_33RND_KRISSSD_45ACP_DESC;
	picture = "\dayz_epoch_c\icons\magazines\m_kriss30_sd.paa";
	ammo = "B_45ACP_SD";
};

class 25Rnd_45ACP_UMP: 33Rnd_45ACP_KRISS
{
	displayName = $STR_DZ_MAG_25RND_45_UMP_NAME;
	descriptionShort = $STR_DZ_MAG_25RND_UMP_DESC;
	model = "\RH_smg\mags\mag_ump.p3d";
	picture = "\dayz_epoch_c\icons\magazines\m_ump.paa";
	count = 25;
};
class 25Rnd_45ACP_UMPSD: 25Rnd_45ACP_UMP
{
	displayName = $STR_DZ_MAG_25RND_45_UMPSD_NAME;
	descriptionShort = $STR_DZ_MAG_25RND_UMPSD_DESC;
	picture = "\dayz_epoch_c\icons\magazines\m_ump_sd.paa";
	ammo = "B_45ACP_SD";
};