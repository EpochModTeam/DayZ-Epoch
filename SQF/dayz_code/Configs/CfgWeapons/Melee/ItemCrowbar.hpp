class ItemCrowbar: ItemCore
	{
		scope=2;
		displayName=$STR_EQUIP_CROWBAR;
		model="\dayz_equip\models\crowbar.p3d";
		picture="\z\addons\dayz_communityassets\pictures\equip_crowbar_CA.paa";
		descriptionShort=$STR_EQUIP_CROWBAR_DESC;
		class ItemActions
		{
			class Toolbelt
			{
				text = $STR_EPOCH_PLAYER_295;
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
