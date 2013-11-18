class ItemCrowbar: ItemCore
	{
		scope=2;
		displayName=$STR_EPOCH_PLAYER_303;
		model="\dayz_equip\models\crowbar.p3d";
		picture="\z\addons\dayz_communityassets\pictures\equip_crowbar_CA.paa";
		descriptionShort=$STR_EPOCH_PLAYER_304;
		class ItemActions
		{
			class Toolbelt
			{
				text = "STR_EPOCH_PLAYER_298";
				script="spawn player_addToolbelt;";
				use[]=
				{
					"ItemCrowbar"
				};
				output[]=
				{
					"MeleeCrowbar"
				};
			};
		};
	};
