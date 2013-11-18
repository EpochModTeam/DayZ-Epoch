class ItemSledge: ItemCore
{
	scope=2;
	displayName=$STR_EPOCH_PLAYER_297;
	model="\z\addons\dayz_epoch\models\sledge_mag.p3d";
	picture="\z\addons\dayz_epoch\pictures\equip_sledge_CA.paa";
	descriptionShort=$STR_EPOCH_PLAYER_298;
	class ItemActions
	{
		class Toolbelt
		{
			text="STR_EPOCH_PLAYER_299";
			script="spawn player_addToolbelt;";
			use[]=
			{
				"ItemSledge"
			};
			output[]=
			{
				"MeleeSledge"
			};	
		};
		/* Lets take this out for now and see how it goes.
		class MineOre
		{
			text="Mine Ore";
			script="spawn player_mineOre;";
		};
		*/
	};
};
