class Saw_DZE: ItemCore
{
	scope = 2;
	displayName = $STR_EQUIP_SAW;
	descriptionShort = $STR_EQUIP_SAW_DESC;	
	picture = "\dayz_epoch_c\icons\tools\ItemSaw.paa";
    model = "\z\addons\dayz_epoch_w\items\handsaw.p3d";
};

class SawBroken_DZE: ItemCore
{
	scope = 2;
	displayName = $STR_EQUIP_SAW_BROKEN;
	descriptionShort = $STR_EQUIP_SAW_BROKEN_DESC;	
	picture = "\dayz_epoch_c\icons\tools\ItemSawBroken.paa";
    model = "\z\addons\dayz_epoch_w\items\handsaw.p3d";
	
	class ItemActions
	{
		class Repair
		{
			text = $STR_ACTIONS_FIX_SAW;
			script = ";['Repair','CfgWeapons', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {};
			outputweapons[] = {"Saw_DZE"};
			input[] = {{"PartGeneric",1}};
			inputweapons[] = {"SawBroken_DZE"};
		};		
	};
};