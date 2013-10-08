class ItemCrowbar: ItemCore
	{
		scope=2;
		displayName="Crowbar";
		model="\dayz_equip\models\crowbar.p3d";
		picture="\z\addons\dayz_communityassets\pictures\equip_crowbar_CA.paa";
		descriptionShort="A tool consisting of a metal bar with a single curved end and flattened points, often with a small fissure on one or both ends for removing nails.";
		class ItemActions
		{
			class Toolbelt
			{
				text = "Remove from toolbelt";
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
			class ToBack
			{
				text="Add to back";
				script="spawn player_addtoBack;";
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