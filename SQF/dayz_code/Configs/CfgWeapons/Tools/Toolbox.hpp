class ItemToolbox : ItemCore
{
	scope = 2;
	model = "\dayz_equip\models\toolbox.p3d";
	picture = "\dayz_equip\textures\equip_toolbox_ca.paa";
	displayName = $STR_EQUIP_NAME_TOOLBOX;
	descriptionShort = $STR_EQUIP_DESC_TOOLBOX;
	
	class ItemActions
	{
		class RemoveNet
		{
			text= $STR_EQUIP_TOOLBOX_ACTION_1;
			script=";[DZE_CamoNets,10,'str_epoch_player_8'] call player_removeNearby;";
		};
	};
};

class ItemToolboxBroken : ItemCore
{
	scope = 2;
	model = "\dayz_equip\models\toolbox.p3d";
	picture = "\dayz_epoch_c\icons\tools\ItemToolboxBroken.paa";
	displayName = $STR_EQUIP_NAME_TOOLBOX_BROKEN;
	descriptionShort = $STR_EQUIP_DESC_TOOLBOX_BROKEN;
};