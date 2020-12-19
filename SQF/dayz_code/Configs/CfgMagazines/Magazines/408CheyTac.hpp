class 5Rnd_408_CheyTac : CA_Magazine {
	scope = 2;
	displayName = $STR_DZ_MAG_5RND_408_CHEYTAC_NAME;
	descriptionShort = $STR_DZ_MAG_5RND_CHEYTAC_DESC;
	picture	="\dayz_epoch_c\icons\magazines\m_m200.paa";
	model ="\z\addons\dayz_epoch_w\m200\h4_cheytac_mag.p3d";
	ammo = "B_408_CheyTac_Ball";	
	count = 5;
	
	class ItemActions
	{
		COMBINE_MAG
	};
};

class 5Rnd_408_CheyTac_SD : 5Rnd_408_CheyTac {
	displayName = $STR_DZ_MAG_5RND_408_CHEYTAC_SD_NAME;
	descriptionShort = $STR_DZ_MAG_5RND_CHEYTAC_SD_DESC;
	picture	="\dayz_epoch_c\icons\magazines\m_m200.paa";
	ammo = "B_408_CheyTac_SD";		
};