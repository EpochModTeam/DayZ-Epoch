class ItemSledge: ItemCore
{
	scope=2;
	displayName="Sledgehammer";
	model="\z\addons\dayz_epoch\models\sledge_mag.p3d";
	picture="\z\addons\dayz_epoch\pictures\equip_sledge_CA.paa";
	descriptionShort="A tool with a large, flat head attached to a handle. The head is typically made of metal. The sledgehammer can apply more force than other hammers.";
	class ItemActions
	{
		class Toolbelt
		{
			text="Remove from Toolbelt";
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
