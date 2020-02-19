class 7Rnd_45ACP_1911: CA_Magazine
{
	model = "\RH_de\mags\mag_kim.p3d";
	picture = "\RH_de\inv\m_colt.paa";
	//model = "\dayz_equip\models\ammo_1911.p3d";
	//picture = "\dayz_equip\textures\equip_1911_ca.paa";
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
	//picture = "\dayz_equip\textures\equip_45acp_ca.paa";
	displayName = $STR_DZ_MAG_6RND_45ACP_NAME;
	
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
	picture = "\RH_de\inv\m_usp.paa";
	count = 15;
};
class 15Rnd_45ACP_USPSD: 15Rnd_45ACP_USP
{
	displayName = $STR_DZ_MAG_15RND_45ACP_USPSD_NAME;
	descriptionShort = $STR_DZ_MAG_15RND_USPSD_45ACP_DESC;
	picture = "\RH_de\inv\m_usp.paa";
	ammo = "B_45ACP_SD";
	initSpeed = 278;
};

class 7Rnd_45ACP_1911SD: 15Rnd_45ACP_USPSD
{
	displayName = $STR_DZ_MAG_7RND_45ACP_KIMBER1911SD_NAME;
	descriptionShort = $STR_DZ_MAG_7RND_KIMBER1911SD_45ACP_DESC;
	model = "\RH_de\mags\mag_kim.p3d";
	picture = "\RH_de\inv\m_colt.paa";
	ammo = "B_45ACP_SD";
	count = 7;
};