class ItemHatchet_DZE : ItemCore {
		scope = 2;
		displayName = "$STR_EQUIP_NAME_41";
		model = "\dayz_equip\models\hatchet.p3d";
		picture = "\dayz_equip\textures\equip_hatchet_CA.paa";
		descriptionShort = "$STR_EQUIP_DESC_41";
		class ItemActions {
			
			class Toolbelt
			{
				text="Remove from Toolbelt";
				script="spawn player_addToolbelt;";
				use[]=
				{
					"ItemHatchet_DZE"
				};
				output[]=
				{
					"MeleeHatchet"
				};
			};
		};
	};