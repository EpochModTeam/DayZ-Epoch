class ItemShovel : ItemCore
{
	scope = 2;	
	model = "\z\addons\dayz_communityassets\models\shovel.p3d";
	picture = "\dayz_epoch_c\icons\tools\ItemShovel.paa";
	displayName = $STR_EQUIP_NAME_1b;
	descriptionShort = $STR_EQUIP_DESC_1b;	
};

class ItemShovelBroken : ItemCore
{
	scope = 2;	
	model = "\z\addons\dayz_communityassets\models\shovel.p3d";
	picture = "\dayz_epoch_c\icons\tools\ItemShovelBroken.paa";
	displayName = $STR_EQUIP_NAME_1b_BROKEN;
	descriptionShort = $STR_EQUIP_DESC_1b_BROKEN;
	
	class ItemActions
	{
		class Repair
		{
			text = $STR_ACTIONS_FIX_SHOVEL;
			script = ";['Repair','CfgWeapons', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {};
			outputweapons[] = {"ItemShovel"};
			input[] = {{"equip_duct_tape",1},{"equip_lever",1}};
			inputweapons[] = {"ItemShovelBroken"};
		};		
	};	
};