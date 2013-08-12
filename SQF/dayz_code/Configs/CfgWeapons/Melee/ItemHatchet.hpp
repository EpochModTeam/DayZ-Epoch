class ItemHatchet : ItemCore {
		displayName="$STR_EQUIP_NAME_41";
		descriptionShort="$STR_EQUIP_DESC_41";
	
		class ItemActions {
			
			class Toolbelt
			{
				text="Remove from Toolbelt";
				script="spawn player_addToolbelt;";
				use[]=
				{
					"ItemHatchet"
				};
				output[]=
				{
					"MeleeHatchet"
				};
			};
		};
	};