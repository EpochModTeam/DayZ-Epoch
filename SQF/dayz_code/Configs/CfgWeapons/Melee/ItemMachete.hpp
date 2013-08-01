class ItemMachete: ItemCore
	{
		scope=2;
		displayName="$STR_EQUIP_NAME_MACHETE";
		model="\z\addons\dayz_communityassets\models\machete.p3d";
		picture="\z\addons\dayz_communityassets\pictures\equip_machete_CA.paa";
		descriptionShort="$STR_EQUIP_DESC_MACHETE";
		class ItemActions
		{
			class Toolbelt
			{
				text=$STR_ACTIONS_RFROMTB;
				script="spawn player_addToolbelt;";
				use[]=
				{
					"ItemMachete"
				};
				output[]=
				{
					"MeleeMachete"
				};
			};
		};
	};
	