class 7Rnd_45ACP_1911: CA_Magazine
{
	model = "\dayz_equip\models\ammo_1911.p3d";
	//picture = "\dayz_equip\textures\equip_1911_ca.paa";
	displayName = $STR_DZ_MAG_7RND_45ACP_1911_NAME;
	
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