class ItemMachete : ItemCore
{
	scope = 2;	
	model = "\z\addons\dayz_communityassets\models\machete.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_machete_CA.paa";
	displayName = $STR_EQUIP_NAME_MACHETE;
	descriptionShort = $STR_EQUIP_DESC_MACHETE;
	
	class ItemActions
	{
		class Toolbelt
		{
			text = $STR_ACTIONS_RFROMTB;
			script = "spawn player_addToolbelt;";
			use[] = {"ItemMachete"};
			output[] = {"MeleeMachete"};
		};
		
		class ToBack
		{
			text = $STR_ACTIONS_2BACK;
			script = "spawn player_addtoBack;";
			use[] = {"ItemMachete"};
			output[] = {"MeleeMachete"};
		};
	};
};

class ItemMacheteBroken : ItemCore
{	
	scope = 2;	
	model = "\z\addons\dayz_communityassets\models\machete.p3d";
	picture = "\dayz_epoch_c\icons\tools\ItemMacheteBroken.paa";
	displayName = $STR_EQUIP_NAME_MACHETE_BROKEN;	
	descriptionShort = $STR_EQUIP_DESC_MACHETE_BROKEN;
};