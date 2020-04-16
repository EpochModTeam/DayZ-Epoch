/* MP5 <-> PDW*/

class 30Rnd_9x19_UZI : CA_Magazine
{
	model = "\z\addons\dayz_epoch_w\magazine\dze_pdw_mag.p3d";
	displayName = $STR_DZ_MAG_30RND_9X19_UZI_NAME;
	descriptionShort = $STR_DZ_MAG_30RND_9X19_UZI_DESC;	

	cartridgeName = "9x19";
	
	class ItemActions
	{
		COMBINE_MAG
	};
};

class 30Rnd_9x19_MP5 : CA_Magazine
{
	displayName = $STR_DZ_MAG_30RND_9X19_MP5_NAME;
	descriptionShort = $STR_DZ_MAG_30RND_MP5_DESC;	

	cartridgeName = "9x19";
	
	class ItemActions
	{
		COMBINE_MAG
	};
};

class 30Rnd_9x19_UZI_SD : CA_Magazine
{
	model = "\z\addons\dayz_epoch_w\magazine\dze_pdw_mag.p3d";
	displayName = $STR_DZ_MAG_30RND_9X19_UZISD_NAME;	
	descriptionShort = $STR_DZ_MAG_30RND_9X19_UZISD_DESC;	
	picture = "\dayz_epoch_c\icons\magazines\m_uzisd_ca.paa";

	cartridgeName = "9x19_SD";
	
	class ItemActions
	{
		COMBINE_MAG
	};
};

class 30Rnd_9x19_MP5SD : CA_Magazine
{
	model = "\ca\CommunityConfigurationProject_E\Gameplay_ActualModelsOfWeaponMagazinesVisibleOnTheGround\p3d\30Rnd_9x19_MP5.p3d";
	picture = "\z\addons\dayz_communityweapons\magazines\data\m_mp5sd_ca.paa";
	displayName = $STR_DZ_MAG_30RND_9X19_MP5SD_NAME;
	descriptionShort = $STR_DZ_MAG_30RND_MP5SD_DESC;

	cartridgeName = "9x19_SD";
	
	class ItemActions
	{
		COMBINE_MAG
	};
};



/* M9 <-> G17 */

class 15Rnd_9x19_M9 : CA_Magazine
{
	displayName = $STR_DZ_MAG_15RND_9X19_M9_NAME;
	descriptionShort = $STR_DZ_MAG_15RND_M9_9x19_DESC;
	
	cartridgeName = "9x19";
	
	class ItemActions
	{
		COMBINE_MAG
		
		class ReloadMag
		{
			text=$STR_MAG_CONV_M9_G17;
			script="spawn player_reloadMag;";
			use[]=
			{
				"15Rnd_9x19_M9"
			};
			output[]=
			{
				"17Rnd_9x19_glock17"
			};
		};
	};
};

class 17Rnd_9x19_glock17 : CA_Magazine
{
	model = "z\addons\dayz_communityweapons\magazines\g17.p3d";
	picture = "\z\addons\dayz_communityweapons\magazines\data\m_glock17_ca.paa";
	displayName = $STR_DZ_MAG_17RND_9X19_GLOCK17_NAME;
	descriptionShort = $STR_DZ_MAG_17RND_G17_9x19_DESC;
	
	cartridgeName = "9x19";
	
	class ItemActions
	{
		COMBINE_MAG
		
		class ReloadMag
		{
				text=$STR_MAG_CONV_G17_M9;
				script="spawn player_reloadMag;";
				use[]=
				{
					"17Rnd_9x19_glock17"
				};
				output[]=
				{
					"15Rnd_9x19_M9"
			};
		};
	};
};

class 15Rnd_9x19_M9SD : 15Rnd_9x19_M9
{
	picture = "\z\addons\dayz_communityweapons\magazines\data\m_m9sd_ca.paa";
	displayName = $STR_DZ_MAG_15RND_9X19_M9SD_NAME;
	descriptionShort = $STR_DZ_MAG_15RND_M9SD_9x19_DESC;
	
	cartridgeName = "9x19_SD";
	
	class ItemActions
	{
		COMBINE_MAG
		
		class ReloadMag
		{
			text=$STR_MAG_CONV_M9_G17;
			script="spawn player_reloadMag;";
			use[] =
			{
				"15Rnd_9x19_M9SD"
			};
			output[] =
			{
				"17Rnd_9x19_glock17SD"
			};
		};
	};
};

class 17Rnd_9x19_glock17SD : 15Rnd_9x19_M9SD
{
	picture = "\z\addons\dayz_communityweapons\magazines\data\m_glock17sd_ca.paa";
	displayName = $STR_DZ_MAG_17RND_9X19_GLOCK17SD_NAME;
	descriptionShort = $STR_DZ_MAG_17RND_G17SD_9x19_DESC;
	
	cartridgeName = "9x19_SD";

	count = 17;
	
	class ItemActions
	{
		COMBINE_MAG
		
		class ReloadMag
		{
			text=$STR_MAG_CONV_G17_M9;
			script="spawn player_reloadMag;";
			use[] =
			{
				"17Rnd_9x19_glock17SD"
			};
			output[] =
			{
				"15Rnd_9x19_M9SD"
			};
		};
	};
};

/* Bizon */

class 64Rnd_9x19_Bizon : CA_Magazine
{
	model = "z\addons\dayz_communityweapons\magazines\bizon.p3d";
	displayName = $STR_DZ_MAG_64RND_9X19_BIZON_NAME;

	cartridgeName = "9x19";
	
	class ItemActions
	{
		COMBINE_MAG
	};
};

class 64Rnd_9x19_SD_Bizon : CA_Magazine
{
	picture = "\z\addons\dayz_communityweapons\magazines\data\m_bizonsd_ca.paa";
	model = "z\addons\dayz_communityweapons\magazines\bizon.p3d";
	displayName = $STR_DZ_MAG_64RND_9X19_BIZONSD_NAME;

	
	cartridgeName = "9x19_SD";
	
	class ItemActions
	{
		COMBINE_MAG
	};
};

/* CZ75 */

class 18Rnd_9x19_Phantom : 15Rnd_9x19_M9
{
	descriptionShort = $STR_DZ_MAG_18RND_CZ75_DESC;
	displayName = $STR_DZ_MAG_18Rnd_9x19_CZ75_NAME;
	picture = "\dayz_epoch_c\icons\magazines\picture_phantom_mag_ca.paa";
	count = 18;
	initSpeed = 400;
	
	class ItemActions
	{
		delete ReloadMag;
		COMBINE_MAG
	};
};

class 18Rnd_9x19_PhantomSD : 15Rnd_9x19_M9SD
{
	descriptionShort = $STR_DZ_MAG_18RND_CZ75_SD_DESC;
	displayName = $STR_DZ_MAG_18Rnd_9x19_SD_CZ75_NAME;	
	picture = "\dayz_epoch_c\icons\magazines\picture_phantomsd_mag_ca.paa";
	count = 18;
	initSpeed = 320;
	
	class ItemActions
	{
		delete ReloadMag;
		COMBINE_MAG
	};
};

/* FN Browning HP */

class 13Rnd_9x19_BHP: 15Rnd_9x19_M9
{
	displayName = $STR_DZ_MAG_13RND_9x19_BHP_NAME;
	descriptionShort = $STR_DZ_MAG_13RND_BHP_9x19_DESC;
	model = "\RH_de\mags\mag_mk22.p3d";
	picture = "\RH_de\inv\m_mk22.paa";
	count = 13;
	
	class ItemActions
	{
		delete ReloadMag;
		COMBINE_MAG
	};	
};

/* SIG Sauer P226 */

class 15Rnd_9x19_P226: 15Rnd_9x19_M9
{
	displayName = $STR_DZ_MAG_15RND_9x19_P226_NAME;
	descriptionShort = $STR_DZ_MAG_15RND_P226_9x19_DESC;
	model = "\RH_de\mags\mag_mk22.p3d";
	picture = "\RH_de\inv\m_mk22.paa";
	count = 15;
	
	class ItemActions
	{
		delete ReloadMag;
		COMBINE_MAG
	};	
};

/* Walther P38 */

class 8Rnd_9x19_P38: 15Rnd_9x19_M9
{
	displayName = $STR_DZ_MAG_8RND_9x19_P38_NAME;
	descriptionShort = $STR_DZ_MAG_8RND_P38_9x19_DESC;
	model = "\RH_de\mags\mag_p38.p3d";
	picture = "\RH_de\inv\m_p38.paa";
	count = 8;
	
	class ItemActions
	{
		delete ReloadMag;
		COMBINE_MAG
	};	
};

/* Mk 22 Mod 0 */

class 8Rnd_9x19_MK22: 15Rnd_9x19_M9
{
	displayName = $STR_DZ_MAG_8RND_9x19_MK22_NAME;
	descriptionShort = $STR_DZ_MAG_8RND_MK22_9x19_DESC;
	model = "\RH_de\mags\mag_mk22.p3d";
	picture = "\RH_de\inv\m_mk22.paa";
	count = 8;
	
	class ItemActions
	{
		delete ReloadMag;
		COMBINE_MAG
	};	
};

class 8Rnd_9x19_MK22SD: 15Rnd_9x19_M9SD
{
	displayName = $STR_DZ_MAG_8RND_9x19_MK22SD_NAME;
	descriptionShort = $STR_DZ_MAG_8RND_MK22SD_9x19_DESC;
	model = "\RH_de\mags\mag_mk22.p3d";
	picture = "\RH_de\inv\m_mk22.paa";
	count = 8;
	
	class ItemActions
	{
		delete ReloadMag;
		COMBINE_MAG
	};	
};


/* M93R */

class 20Rnd_9x19_M93R: 15Rnd_9x19_M9
{
	displayName = $STR_DZ_MAG_20RND_9x19mm_M93R_NAME;
	descriptionShort = $STR_DZ_MAG_20RND_9x19mm_M93R_DESC;
	model = "\RH_de\mags\mag_m93r.p3d";
	picture = "\RH_de\inv\m_m93.paa";
	count = 20;
	
	class ItemActions
	{
		delete ReloadMag;
		COMBINE_MAG
	};	
};

/* G18 */

class 33Rnd_9x19_G18: 15Rnd_9x19_M9
{
	displayName = $STR_DZ_MAG_33RND_9x19mm_G18_NAME;
	descriptionShort = $STR_DZ_MAG_33RND_9x19mm_G18_DESC;
	model = "\RH_de\mags\mag_m93r.p3d";
	picture = "\RH_de\inv\m_m93.paa";
	count = 33;
	
	class ItemActions
	{
		delete ReloadMag;
		COMBINE_MAG
	};	
};

/* Tec-9 */

class 32Rnd_9x19_TEC9: 15Rnd_9x19_M9
{
	displayName = $STR_DZ_MAG_32RND_9x19mm_TEC9_NAME;
	descriptionShort = $STR_DZ_MAG_32RND_9x19mm_TEC9_DESC;
	model = "\RH_de\mags\mag_tec9.p3d";
	picture = "\RH_de\inv\m_tec9.paa";
	count = 32;
	
	class ItemActions
	{
		delete ReloadMag;
		COMBINE_MAG
	};	
};

/* TMP */

class 30Rnd_9x19_TMP : 30Rnd_9x19_MP5
{
	displayName = $STR_DZ_MAG_30RND_9X19_TMP_NAME;
	descriptionShort = $STR_DZ_MAG_30RND_TMP_DESC;	
	model = "\RH_smg\mags\mag_uzi.p3d";
	picture = "\RH_smg\inv\m_uzi.paa";	
};

class 30Rnd_9x19_TMPSD : 30Rnd_9x19_MP5SD
{
	model = "\RH_smg\mags\mag_uzi.p3d";
	picture = "\RH_smg\inv\m_uzi.paa";
	displayName = $STR_DZ_MAG_30RND_9X19_TMPSD_NAME;
	descriptionShort = $STR_DZ_MAG_30RND_TMPSD_DESC;
};

/* STEN */

class 32Rnd_9x19_STEN: 30Rnd_9x19_MP5
{
	displayName = $STR_DZ_MAG_32RND_9x19mm_STEN_NAME;
	descriptionShort = $STR_DZ_MAG_32RND_9x19mm_STEN_DESC;
	picture	= "\z\addons\dayz_epoch_w\sten\data\m_sten_CA.paa";
	model = "\z\addons\dayz_epoch_w\sten\h4_sten_mag.p3d";
	initSpeed = 700;
	count = 32;
};

/* MAT 49 */

class 32Rnd_9x19_MAT49: 30Rnd_9x19_MP5
{
	displayName = $STR_DZ_MAG_32RND_9x19mm_MAT49_NAME;
	descriptionShort = $STR_DZ_MAG_32RND_9x19mm_MAT49_DESC;
	picture	= "\z\addons\dayz_epoch_w\sten\data\m_sten_CA.paa";
	model = "\z\addons\dayz_epoch_w\sten\h4_sten_mag.p3d";
	initSpeed = 600;
	count = 32;
};