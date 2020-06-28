class Smartphone_DZE: ItemCore
{
	scope = 2;
	displayName = $STR_EQUIP_SMARTPHONE;
	descriptionShort = $STR_EQUIP_SMARTPHONE_DESC;
	model = "\z\addons\dayz_epoch_w\items\pda.p3d";
	picture = "\dayz_epoch_c\icons\tools\ItemSmartphone.paa";
};

class SmartphoneBroken_DZE : ItemCore
{
	scope = 2;
	displayName = $STR_EQUIP_SMARTPHONE_BROKEN;
	descriptionShort = $STR_EQUIP_SMARTPHONE_BROKEN_DESC;
	model = "\z\addons\dayz_epoch_w\items\pda.p3d";
	picture = "\dayz_epoch_c\icons\tools\ItemSmartphoneBroken.paa";
	
	class ItemActions
	{
		class Repair
		{
			text = $STR_ACTIONS_FIX_SMARTPHONE;
			script = ";['Repair','CfgWeapons', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"ItemSolder_DZE"};
			output[] = {};
			outputweapons[] = {"Smartphone_DZE"};
			input[] = {{"equip_floppywire",1},{"equip_scrapelectronics",1}};
			inputweapons[] = {"SmartphoneBroken_DZE"};
		};		
	};	
};