class ItemMachete: ItemCore
	{
		scope=2;
		displayName="Machete";
		model="\z\addons\dayz_communityassets\models\machete.p3d";
		picture="\z\addons\dayz_communityassets\pictures\equip_machete_CA.paa";
		descriptionShort="An agricultural tool turned into a weapon, the Machete may be less versatile than the common hatchet, but it packs a punch.";
		class ItemActions
		{
			class Toolbelt
			{
				text="Remove from Toolbelt";
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
			class ToBack
			{
				text="Add to back";
				script="spawn player_addtoBack;";
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
	