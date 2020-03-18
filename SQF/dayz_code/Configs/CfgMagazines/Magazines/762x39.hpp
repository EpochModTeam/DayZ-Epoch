/* AK47 <-> SA58 */

class 30Rnd_762x39_AK47 : CA_Magazine
{
	model = "z\addons\dayz_communityweapons\magazines\ak47.p3d";
	picture = "\z\addons\dayz_communityweapons\magazines\data\m_ak47_ca.paa";
	displayName = $STR_DZ_MAG_30RND_762X39_AK47_NAME;
	descriptionShort = $STR_DZ_MAG_30RND_AK47M_DESC;
	
	cartridgeName = "762x39";
	
	class ItemActions
	{
		COMBINE_MAG
		
		class ReloadMag
		{
			text = $STR_MAG_CONV_AK47_SA58;
			script = "spawn player_reloadMag;";
			use[] = {30Rnd_762x39_AK47};
			output[] = {30Rnd_762x39_SA58};
		};
	};
};

class 75Rnd_762x39_RPK : 30Rnd_762x39_AK47
{
	model = "dayz_epoch_c\models\magazines\RPK_mag.p3d";
	picture = "\z\addons\dayz_communityweapons\magazines\data\m_rpk_ca.paa";
	displayName = $STR_DZ_MAG_75RND_762X39_RPK_NAME;
	descriptionShort = $STR_DZ_MAG_75RND_762X39_RPK_DESC;
	
	count = 75;
	tracersEvery = 4;
	lastRoundsTracer = 4;
	
	class ItemActions
	{
		COMBINE_MAG
	};
};

class 30Rnd_762x39_SA58 : CA_Magazine
{
	model = "z\addons\dayz_communityweapons\magazines\vz58.p3d";
	displayName = $STR_DZ_MAG_30RND_762X39_SA58_NAME;
	descriptionShort = $STR_DZ_MAG_30RND_SA58_DESC;
	
	cartridgeName = "762x39";
	
	class ItemActions
	{
		COMBINE_MAG
		
		class ReloadMag
		{
			text = $STR_MAG_CONV_SA58_AK47;
			script = "spawn player_reloadMag;";
			use[] = {30Rnd_762x39_SA58};
			output[] = {30Rnd_762x39_AK47};
		};
	};
};

class 30Rnd_762x39_RK95 : 30Rnd_762x39_AK47
{
	model = "\RH_aks\mags\mag_ak47.p3d";
	picture = "\RH_aks\inv\m_ak.paa";
	displayName = $STR_DZ_MAG_30RND_RK95_NAME;
	descriptionShort = $STR_DZ_MAG_30RND_RK95_DESC;
	
	cartridgeName = "762x39";
	
	class ItemActions
	{
		COMBINE_MAG
		
		delete ReloadMag;
	};	
};

class 30Rnd_762x39_RK95SD : 30Rnd_762x39_RK95
{
	picture = "\RH_aks\inv\m_ak.paa";	
	displayName = $STR_DZ_MAG_30RND_RK95SD_NAME;
	descriptionShort = $STR_DZ_MAG_30RND_RK95SD_DESC;
	ammo = "B_762x39_SD";
	
	cartridgeName = "762x39_SD";
};

class 30Rnd_762x39_Groza1: 30Rnd_762x39_RK95 {
	displayName = $STR_DZ_MAG_30RND_Groza1_NAME;
	descriptionShort = $STR_DZ_MAG_30RND_Groza1_DESC;	
};

class 30Rnd_762x39_Groza1SD: 30Rnd_762x39_RK95SD {
	displayName = $STR_DZ_MAG_30RND_Groza1SD_NAME;
	descriptionShort = $STR_DZ_MAG_30RND_Groza1SD_DESC;	
};