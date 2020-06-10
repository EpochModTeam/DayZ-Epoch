class ItemRadio : ItemCore
{
	model = "\nst\ns_dayz\items\radio\radio_dzn.p3d";
	class ItemActions
	{
		class Groups
		{
			text = $STR_EPOCH_GROUPS_KEY;
			script = ";if (!isNil 'dayz_groupInit') then {[] spawn dayz_openGroupDialog;};";
		};
	};
};

class ItemRadioBroken_DZE : ItemCore 
{
	scope = 2;
	displayName = $STR_EQUIP_BROKEN_RADIO;
	model = "\nst\ns_dayz\items\radio\radio_dzn.p3d";
	picture = "\dayz_epoch_c\icons\tools\ItemRadioBroken.paa";
	descriptionShort = $STR_EQUIP_BROKEN_RADIO_DESC;
	
	class ItemActions
	{
		class Repair
		{
			text = $STR_ACTIONS_FIX_RADIO;
			script = ";['Repair','CfgWeapons', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"ItemSolder_DZE"};
			output[] = {};
			outputweapons[] = {"ItemRadio"};
			input[] = {{"equip_floppywire",1},{"equip_scrapelectronics",1}};
			inputweapons[] = {"ItemRadioBroken_DZE"};
		};		
	};	
};