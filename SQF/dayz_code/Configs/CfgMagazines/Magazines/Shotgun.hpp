/* Slugs */

//Winchester 1866
class 15Rnd_W1866_Slug : CA_Magazine
{
	scope = public;
	
	model = "\z\addons\dayz_communityassets\models\winammo.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_winammo_ca.paa";
	displayName = $STR_DZ_MAG_15RND_W1866_NAME;
	descriptionShort = $STR_DZ_MAG_15RND_W1866_DESC;
	
	ammo = B_1866_Slug;
	count = 15;
	initSpeed = 396;
	displayNameShort = "Slug";
	
	class ItemActions
	{
		COMBINE_MAG
	};
};

class 8Rnd_B_Beneli_74Slug;
class 8Rnd_12Gauge_Slug : 8Rnd_B_Beneli_74Slug
{
	model = "\z\addons\dayz_communityassets\models\greenshotgunslugs.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_greenshotgunslugs_ca.paa";
	displayName = $STR_DZ_MAG_8RND_12GAUGE_SLUG_NAME;
	descriptionShort = $STR_DZ_MAG_8RND_12GAUGE_SLUG_DESC;
	
	cartridgeName = "12Gauge_Slug";
	
	class ItemActions
	{
		COMBINE_MAG
		
		class ReloadMag
		{
			text = $STR_MAG_SPLIT_8TO2X4;
			script = "spawn player_reloadMag;";
			use[] = {"8Rnd_12Gauge_Slug"};
			output[] =
			{
				"2Rnd_12Gauge_Slug",
				"2Rnd_12Gauge_Slug",
				"2Rnd_12Gauge_Slug",
				"2Rnd_12Gauge_Slug"
			};
		};
	};
};

class 2Rnd_12Gauge_Slug : 8Rnd_12Gauge_Slug
{
	model = "\z\addons\dayz_communityassets\models\2shells_slugshot.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_2shells_slugshot_CA.paa";
	displayName = $STR_DZ_MAG_2RND_12GAUGE_SLUG_NAME;
	descriptionShort = $STR_DZ_MAG_2RND_12GAUGE_SLUG_DESC;
	
	count = 2;
	
	class ItemActions
	{
		COMBINE_MAG
		
		class ReloadMag
		{
			text = $STR_MAG_COMBINE_2X4IN8;
			script = "spawn player_reloadMag;";
			use[] =
			{
				"2Rnd_12Gauge_Slug",
				"2Rnd_12Gauge_Slug",
				"2Rnd_12Gauge_Slug",
				"2Rnd_12Gauge_Slug"
			};
			output[] =
			{
				"8Rnd_12Gauge_Slug"
			};
		};
	};
};



/* Buckshot */

class 8Rnd_B_Beneli_Pellets;
class 8Rnd_12Gauge_Buck : 8Rnd_B_Beneli_Pellets
{
	model = "\z\addons\dayz_communityassets\models\redshotgunpellets.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_redshotgunpellets_ca.paa";
	displayName = $STR_DZ_MAG_8RND_12GAUGE_BUCK_NAME;
	descriptionShort = $STR_DZ_MAG_8RND_12GAUGE_BUCK_DESC;
	
	class ItemActions
	{
		COMBINE_MAG
		
		class ReloadMag
		{
			text = $STR_MAG_SPLIT_8TO2X4;
			script = "spawn player_reloadMag;";
			use[] = {"8Rnd_12Gauge_Buck"};
			output[] =
			{
				"2Rnd_12Gauge_Buck",
				"2Rnd_12Gauge_Buck",
				"2Rnd_12Gauge_Buck",
				"2Rnd_12Gauge_Buck"
			};
		};
	};
};

class 2Rnd_12Gauge_Buck : 8Rnd_12Gauge_Buck
{
	model = "\z\addons\dayz_communityassets\models\2shells_slugshot.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_2shells_pellet_ca.paa";
	displayName = $STR_DZ_MAG_2RND_12GAUGE_BUCK_NAME;
	descriptionShort = $STR_DZ_MAG_2RND_12GAUGE_BUCK_DESC;
	
	count = 2;
	
	class ItemActions
	{
		COMBINE_MAG
		
		class ReloadMag
		{
			text = $STR_MAG_COMBINE_2X4IN8;
			script = "spawn player_reloadMag;";
			use[] =
			{
				"2Rnd_12Gauge_Buck",
				"2Rnd_12Gauge_Buck",
				"2Rnd_12Gauge_Buck",
				"2Rnd_12Gauge_Buck"
			};
			output[] =
			{
				"8Rnd_12Gauge_Buck"
			};
		};
	};
};
//AA12 Ammo
class 20Rnd_B_AA12_74Slug : CA_Magazine
{
	model = "\z\addons\dayz_epoch_w\magazine\dze_AA12_mag.p3d";
	displayName = $STR_DZ_MAG_20Rnd_B_AA12_74Slug_NAME;
	
	cartridgeName = "12Gauge_Slug";
	
	class ItemActions
	{
		COMBINE_MAG
	};
};
class 20Rnd_B_AA12_Pellets : CA_Magazine
{
	model = "\z\addons\dayz_epoch_w\magazine\dze_AA12_mag.p3d";
	displayName = $STR_DZ_MAG_20Rnd_B_AA12_Pellets_NAME;
	
	cartridgeName = "12Gauge_Pellets";
	
	class ItemActions
	{
		COMBINE_MAG
	};
};
class 20Rnd_B_AA12_HE : CA_Magazine
{
	model = "\z\addons\dayz_epoch_w\magazine\dze_AA12_mag.p3d";
	displayName = $STR_DZ_MAG_20Rnd_B_AA12_HE_NAME;
	
	cartridgeName = "19mm_HE";
	
	class ItemActions
	{
		COMBINE_MAG
	};
};
//Saiga12 Ammo
class 8Rnd_B_Saiga12_74Slug: CA_Magazine
{	
	model = "\z\addons\dayz_epoch_w\magazine\dze_Saiga12K_mag.p3d";
	cartridgeName = "12Gauge_Slug";
	
	class ItemActions
	{
		COMBINE_MAG
	};
};

class 8Rnd_B_Saiga12_Pellets: CA_Magazine
{
	model = "\z\addons\dayz_epoch_w\magazine\dze_Saiga12K_mag.p3d";
	cartridgeName = "12Gauge_Pellets";
	
	class ItemActions
	{
		COMBINE_MAG
	};
};
