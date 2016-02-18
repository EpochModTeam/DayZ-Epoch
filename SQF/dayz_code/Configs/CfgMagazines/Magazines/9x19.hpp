/* MP5 <-> PDW*/

class 30Rnd_9x19_UZI : CA_Magazine
{
	cartridgeName = "9x19";
	
	class ItemActions
	{
		COMBINE_MAG
	};
};

class 30Rnd_9x19_MP5 : CA_Magazine
{
	cartridgeName = "9x19";
	
	class ItemActions
	{
		COMBINE_MAG
	};
};

class 30Rnd_9x19_UZI_SD : CA_Magazine
{
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
	
	cartridgeName = "9x19_SD";
	
	class ItemActions
	{
		COMBINE_MAG
	};
};



/* M9 <-> G17 */

class 15Rnd_9x19_M9 : CA_Magazine
{
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
	cartridgeName = "9x19_SD";
	
	picture = "\z\addons\dayz_communityweapons\magazines\data\m_m9sd_ca.paa";
	
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
	
	displayName = $STR_DZ_MAG_17RND_9X19_GLOCK17SD;
	
	count = 17;
	
	cartridgeName = "9x19_SD";
	
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
	
	cartridgeName = "9x19";
	
	class ItemActions
	{
		COMBINE_MAG
	};
};

class 64Rnd_9x19_SD_Bizon : CA_Magazine
{
	picture = "\z\addons\dayz_communityweapons\magazines\data\m_bizonsd_ca.paa";
	
	cartridgeName = "9x19_SD";
	
	class ItemActions
	{
		COMBINE_MAG
	};
};