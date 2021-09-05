class 200Rnd_556x45_M249: CA_Magazine
{
	displayName = $STR_DZ_MAG_200RND_556X45_M249_NAME;
	cartridgeName = "556x45";
	type = 256;
	
	class ItemActions
	{
		COMBINE_MAG
	};
};

class 200Rnd_556x45_L110A1: 200Rnd_556x45_M249
{
	displayName = $STR_DZ_MAG_200RND_556X45_L110_NAME;
	descriptionShort = $STR_BAF_CFGMAGAZINES_200RND_556X45_L110A10_0;
};

class 100Rnd_556x45_M249 : 200Rnd_556x45_M249
{
	model = "z\addons\dayz_communityweapons\magazines\100rnd_m249.p3d";
	displayName = $STR_DZ_MAG_100RND_556X45_M249_NAME;
};

class 100Rnd_556x45_BetaCMag: CA_Magazine {
	scope = 2;
	displayName = $STR_DZ_MAG_100RND_556x45_BetaCMag_NAME;
	ammo = "B_556x45_Ball";
	count = 100;
	initSpeed = 920;
	model = "\z\addons\dayz_epoch_w\magazine\dze_MG36_mag.p3d";
	picture = "\ca\weapons\g36\data\equip\M_MG36_CA.paa";
	type = 256;
	tracersEvery = 4;
	lastRoundsTracer = 4;
	descriptionShort = $STR_DZ_MAG_100RND_BetaCMag_DESC;
	
	class ItemActions
	{
		COMBINE_MAG
	};
};

class 100Rnd_556x45_BetaCMagSD: 100Rnd_556x45_BetaCMag {
	displayName = $STR_DZ_MAG_100RND_556x45_BetaCMagSD_NAME;
	descriptionShort = $STR_DZ_MAG_100RND_BetaCMagSD_DESC;
	cartridgeName = "556x45_SD";
	ammo = "B_556x45_SD";
	initSpeed = 470;
};
/* STANAG <-> G36 */

class 20Rnd_556x45_Stanag : CA_Magazine 
{
	class ItemActions
	{
		COMBINE_MAG
	};
}; 

class 30Rnd_556x45_Stanag : 20Rnd_556x45_Stanag
{
	displayName = $STR_DZ_MAG_30RND_556x45_STANAG_NAME;
	descriptionShort = $STR_DZE_MAG_30RND_556x45_STANAG_DESC;	
	cartridgeName = "556x45";
	
	class ItemActions
	{
		COMBINE_MAG
		
		class ReloadMag
		{
			text=$STR_MAG_CONV_STANAG_G36;
			script="spawn player_reloadMag;";
			use[] =
			{
				"30Rnd_556x45_Stanag"
			};
			output[] =
			{
				"30Rnd_556x45_G36"
			};
		};
	};
};

class 30Rnd_556x45_G36 : 30Rnd_556x45_Stanag
{
	displayName = $STR_DZ_MAG_30RND_556x45_G36_NAME;
	descriptionShort = $STR_DZE_MAG_30RND_556x45_G36_DESC;
	cartridgeName = "556x45";
	model = "\ca\CommunityConfigurationProject_E\Gameplay_ActualModelsOfWeaponMagazinesVisibleOnTheGround\p3d\30Rnd_556x45_G36.p3d";
	
	class ItemActions
	{
		COMBINE_MAG
		
		class ReloadMag
		{
			text=$STR_MAG_CONV_G36_STANAG;
			script="spawn player_reloadMag;";
			use[] =
			{
				"30Rnd_556x45_G36"
			};
			output[] =
			{
				"30Rnd_556x45_Stanag"
			};
		};
	};
};

class 30Rnd_556x45_StanagSD : 30Rnd_556x45_Stanag
{
	picture = "\z\addons\dayz_communityweapons\magazines\data\m_30stanagsd_ca.paa";
	displayName = $STR_DZ_MAG_30RND_556x45_STANAGSD_NAME;	
	descriptionShort = $STR_DZE_MAG_30RND_556x45_STANAGSD_DESC;
	cartridgeName = "556x45_SD";
	initSpeed = 470;
	
	class ItemActions
	{
		COMBINE_MAG
		
		class ReloadMag
		{
			text = $STR_MAG_CONV_STANAG_G36;
			script = "spawn player_reloadMag;";
			use[] =
			{
				"30Rnd_556x45_StanagSD"
			};
			output[] =
			{
				"30Rnd_556x45_G36SD"
			};
		};
	};
};

class 30Rnd_556x45_G36SD : 30Rnd_556x45_G36
{
	picture = "\z\addons\dayz_communityweapons\magazines\data\m_g36sd_ca.paa";
	displayName = $STR_DZ_MAG_30RND_556x45_G36SD_NAME;
	descriptionShort = $STR_DZE_MAG_30RND_556x45_G36SD_DESC;	
	cartridgeName = "556x45_SD";
	model = "\ca\CommunityConfigurationProject_E\Gameplay_ActualModelsOfWeaponMagazinesVisibleOnTheGround\p3d\30Rnd_556x45_G36.p3d";
	initSpeed = 470;
	
	class ItemActions
	{
		COMBINE_MAG
		
		class ReloadMag
		{
			text = $STR_MAG_CONV_G36_STANAG;
			script = "spawn player_reloadMag;";
			use[] =
			{
				"30Rnd_556x45_G36SD"
			};
			output[] =
			{
				"30Rnd_556x45_StanagSD"
			};
		};
	};
};

class 60Rnd_556x45_Stanag_Taped : 30Rnd_556x45_Stanag {
	displayName = $STR_DZE_MAG_60RND_556x45_STANAG_NAME;	
	descriptionShort = $STR_DZE_MAG_60RND_556x45_STANAG_DESC;
	count = 60;
	picture = "\dayz_epoch_c\icons\magazines\m_stanag_taped.paa";
    model = "\z\addons\dayz_epoch_w\magazine\dze_stannag_twinmag.p3d";
	
	class ItemActions
	{
		COMBINE_MAG		
		delete ReloadMag;
	};	
};

class 60Rnd_556x45_StanagSD_Taped : 30Rnd_556x45_StanagSD {
	displayName = $STR_DZE_MAG_60RND_556x45_STANAGSD_NAME;	
	descriptionShort = $STR_DZE_MAG_60RND_556x45_STANAGSD_DESC;
	count = 60;
	picture = "\dayz_epoch_c\icons\magazines\m_stanag_taped_sd.paa";
    model = "\z\addons\dayz_epoch_w\magazine\dze_stannag_twinmag.p3d";
	
	class ItemActions
	{
		COMBINE_MAG		
		delete ReloadMag;
	};	
};

class 30Rnd_556x45_Aug : 30Rnd_556x45_Stanag {
	displayName = $STR_DZ_MAG_30RND_556x45_AUG_NAME;
	descriptionShort = $STR_DZ_MAG_30RND_AUG_DESC;
	picture = "\MIDF_Weapons\aug_a3\pictures\aug_a3_mag.paa";
	model = "\MIDF_Weapons\aug_a3\aug_a3_mag.p3d";	
	
	class ItemActions
	{
		COMBINE_MAG		
		delete ReloadMag;
	};	
};