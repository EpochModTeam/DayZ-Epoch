class 7Rnd_45ACP_1911: CA_Magazine
{
	model = "\dayz_equip\models\ammo_1911.p3d";
	//picture = "\dayz_equip\textures\equip_1911_ca.paa";
	
	cartridgeName = "45ACP";
	
	class ItemActions
	{
		COMBINE_MAG
		
		class ReloadMag
		{
			text = "Combine for Revolver"; //TODO: move to stringtable
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
	
	cartridgeName = "45ACP";
	
	class ItemActions
	{
		COMBINE_MAG
		
		class ReloadMag
		{
			text = "Combine for M1911"; //TODO: move to stringtable
			script = "spawn player_reloadMag;";
			use[] = {"6Rnd_45ACP"};
			output[] = {"7Rnd_45ACP_1911"};
		};
	};
};