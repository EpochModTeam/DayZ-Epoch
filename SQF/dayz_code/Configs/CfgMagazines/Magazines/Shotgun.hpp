/* Slugs */

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