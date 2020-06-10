class ItemEtool : ItemCore
{
	scope = 2;
	model = "\dayz_equip\models\etool.p3d";
	picture = "\dayz_equip\textures\equip_etool_ca.paa";
	displayName = $STR_EQUIP_NAME_1;
	descriptionShort = $STR_EQUIP_DESC_1;	
};

class ItemEtoolBroken : ItemCore
{
	scope = 2;
	model = "\dayz_equip\models\etool.p3d";
	picture = "\dayz_epoch_c\icons\tools\ItemEtoolBroken.paa";
	displayName = $STR_EQUIP_NAME_1_BROKEN;
	descriptionShort = $STR_EQUIP_DESC_1_BROKEN;
	
	class ItemActions
	{
		class Repair
		{
			text = $STR_ACTIONS_FIX_ETOOL;
			script = ";['Repair','CfgWeapons', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {};
			outputweapons[] = {"ItemEtool"};
			input[] = {{"equip_duct_tape",1},{"equip_lever",1}};
			inputweapons[] = {"ItemEtoolBroken"};
		};		
	};		
};