class ItemToolbox : ItemCore
{
	scope = 2;
	model = "\dayz_equip\models\toolbox.p3d";
	picture = "\dayz_equip\textures\equip_toolbox_ca.paa";
	displayName = $STR_EQUIP_NAME_2;
	descriptionShort = $STR_EQUIP_DESC_2;
	
	class ItemActions
	{
		class RemoveNet
		{
			text= $STR_EQUIP_TOOLBOX_ACTION_1;
			script=";[['DesertCamoNet_DZ','ForestCamoNet_DZ','WinterCamoNet_DZ','DesertLargeCamoNet_DZ','ForestLargeCamoNet_DZ','WinterLargeCamoNet_DZ'],10,'str_epoch_player_8'] call player_removeNearby;";
		};
	};
};

class ItemToolboxBroken : ItemCore
{
	scope = 2;
	model = "\dayz_equip\models\toolbox.p3d";
	picture = "\dayz_epoch_c\icons\tools\ItemToolboxBroken.paa";
	displayName = $STR_EQUIP_NAME_2_BROKEN;
	descriptionShort = $STR_EQUIP_DESC_2_BROKEN;
};