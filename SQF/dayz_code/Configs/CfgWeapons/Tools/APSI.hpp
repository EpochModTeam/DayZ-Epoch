class ItemAPSI_DZE : ItemCore 
{
	scope = 2;
	displayName = $STR_EQUIP_APSI;
	picture = "\dayz_epoch_c\icons\tools\ItemAPSI.paa";
	descriptionShort = $STR_EQUIP_APSI_DESC;
	
	class ItemActions
	{
		class Power
		{
			text = $STR_APSI_STATE;
			script = "call fnc_apsiState;";
		};
	};
};

class ItemAPSIBroken_DZE : ItemCore
{
	scope = 2;
	displayName = $STR_EQUIP_APSI_BROKEN;
	descriptionShort = $STR_EQUIP_APSI_BROKEN_DESC;
	picture = "\dayz_epoch_c\icons\tools\ItemAPSIBroken.paa";
};