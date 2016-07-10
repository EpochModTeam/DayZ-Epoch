class 200Rnd_556x45_M249: CA_Magazine
{
	displayName = $STR_DZ_MAG_200RND_556X45_M249_NAME;

	cartridgeName = "556x45";
	type = WeaponSlotItem; // Only takes up one gear slot in Epoch
	
	class ItemActions
	{
		COMBINE_MAG
	};
};

class 100Rnd_556x45_M249 : 200Rnd_556x45_M249
{
	model = "z\addons\dayz_communityweapons\magazines\100rnd_m249.p3d";
	displayName = $STR_DZ_MAG_100RND_556X45_M249_NAME;
};

class 100Rnd_556x45_BetaCMag: CA_Magazine {
	scope = public;
	displayName = "MG36 Mag.";
	ammo = "B_556x45_Ball";
	count = 100;
	initSpeed = 920;
	picture = "\ca\weapons\g36\data\equip\M_MG36_CA.paa";
	type="256";
	tracersEvery = 4;
	lastRoundsTracer = 4;
	descriptionShort = "Caliber: 5.56x45 mm NATO Rounds: 100 Used in: MG36, X8 SAW";
};


/* STANAG <-> G36 */

class 20Rnd_556x45_Stanag; 
class 30Rnd_556x45_Stanag : 20Rnd_556x45_Stanag
{
	//model = "\dayz_equip\models\mag30.p3d";
	displayName = $STR_DZ_MAG_30RND_556x45_STANAG_NAME;
	
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

	cartridgeName = "556x45";
	
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

	cartridgeName = "556x45_SD";
	
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
	
	cartridgeName = "556x45_SD";
	
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