class ItemToolbox ItemCore
{
	scope = 2;
	displayName = $STR_EQUIP_NAME_2;
	model = dayz_equipmodelstoolbox.p3d;
	picture = dayz_equiptexturesequip_toolbox_ca.paa;
	descriptionShort = $STR_EQUIP_DESC_2;
	class ItemActions
	{
		class RemoveNet
		{
			text="Remove Camo Net";
			script="spawn player_removeNet;";
		};
	};
};