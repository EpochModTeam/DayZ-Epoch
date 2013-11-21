class ItemSledge: ItemCore
{
	scope=2;
	displayName=$STR_EQUIP_SLEDGE;
	model="\z\addons\dayz_epoch\models\sledge_mag.p3d";
	picture="\z\addons\dayz_epoch\pictures\equip_sledge_CA.paa";
	descriptionShort=$STR_EQUIP_SLEDGE_DESC;
	class ItemActions
	{
		class Toolbelt
		{
			text=$STR_EPOCH_PLAYER_295;
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
