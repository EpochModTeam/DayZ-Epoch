class ItemToolbox : ItemCore
{
	scope = public;
	model = "\dayz_equip\models\toolbox.p3d";
	picture = "\dayz_equip\textures\equip_toolbox_ca.paa";
	displayName = $STR_EQUIP_NAME_2;
	descriptionShort = $STR_EQUIP_DESC_2;
	class ItemActions
	{
		class RemoveNet
		{
			text= $STR_EQUIP_TOOLBOX_ACTION_1;
			script=";[['DesertCamoNet_DZ','ForestCamoNet_DZ','DesertLargeCamoNet_DZ','ForestLargeCamoNet_DZ'],5,'str_epoch_player_8'] call player_removeNearby;";
		};
		class RemoveTankTrap
		{
			text= $STR_EQUIP_TOOLBOX_ACTION_2;
			script=";[['Hedgehog_DZ'],1,'STR_EPOCH_ACTIONS_14'] call player_removeNearby;";
		};
	};

};