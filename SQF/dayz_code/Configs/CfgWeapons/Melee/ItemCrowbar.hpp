class ItemCrowbar: ItemCore
	{
		scope=2;
		displayName=$STR_EQUIP_NAME_CROWBAR;
		model="\dayz_equip\models\crowbar.p3d";
		picture="\z\addons\dayz_communityassets\pictures\equip_crowbar_CA.paa";
		descriptionShort=$STR_EQUIP_DESC_CROWBAR;
		class ItemActions
		{
			class Toolbelt
			{
				text=$STR_ACTIONS_RFROMTB;
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