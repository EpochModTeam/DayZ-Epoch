class Hammer_DZE: ItemCore
{
	scope = 2;
	displayName = $STR_EQUIP_HAMMER;
	descriptionShort = $STR_EQUIP_HAMMER_DESC;	
	picture = "\dayz_epoch_c\icons\tools\ItemHammer.paa";
    model = "\z\addons\dayz_epoch_w\items\hammer.p3d";
};

class HammerBroken_DZE: ItemCore
{
	scope = 2;
	displayName = $STR_EQUIP_HAMMER_BROKEN;
	descriptionShort = $STR_EQUIP_HAMMER_BROKEN_DESC;	
	picture = "\dayz_epoch_c\icons\tools\ItemHammerBroken.paa";
    model = "\z\addons\dayz_epoch_w\items\hammer.p3d";
	
	class ItemActions
	{
		class Repair
		{
			text = $STR_ACTIONS_FIX_HAMMER;
			script = ";['Repair','CfgWeapons', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {};
			outputweapons[] = {"Hammer_DZE"};
			input[] = {{"equip_duct_tape",1},{"equip_lever",1}};
			inputweapons[] = {"HammerBroken_DZE"};
		};		
	};
};