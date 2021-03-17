class NVGoggles: Binocular 
{
	model = "\dayz_epoch_c\items\nvg\nvg_dzn.p3d";
};

class ItemNVGBroken_DZE : Default 
{
	scope = 2;
	type = 4096;
	displayName = $STR_EQUIP_BROKEN_NV;
	model = "\dayz_epoch_c\items\nvg\nvg_dzn.p3d";
	picture = "\dayz_epoch_c\icons\tools\ItemNightVisionBroken.paa";
	descriptionShort = $STR_EQUIP_BROKEN_NV_DESC;
	
	class ItemActions
	{
		class Repair
		{
			text = $STR_ACTIONS_FIX_NIGHTVISION;
			script = ";['Repair','CfgWeapons', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"ItemSolder_DZE"};
			output[] = {};
			outputweapons[] = {"NVGoggles"};
			input[] = {{"equip_floppywire",1},{"equip_scrapelectronics",1}};
			inputweapons[] = {"ItemNVGBroken_DZE"};
		};		
	};	
};

class NVGoggles_DZE: NVGoggles
{
	displayName = $STR_EQUIP_NV_FULL;
	modelOptics = "";
	descriptionShort = $STR_EQUIP_NV_FULL_DESC;
	model = "\dayz_epoch_c\items\nvg\nvg_dzn.p3d";
};

class ItemNVGFullBroken_DZE : Default 
{
	scope = 2;
	type = 4096;
	displayName = $STR_EQUIP_BROKEN_NV_FULL;
	descriptionShort = $STR_EQUIP_BROKEN_NV_FULL_DESC;
	model = "\dayz_epoch_c\items\nvg\nvg_dzn.p3d";
	picture = "\dayz_epoch_c\icons\tools\ItemNightVisionBroken.paa";
	
	class ItemActions
	{
		class Repair
		{
			text = $STR_ACTIONS_FIX_NIGHTVISION;
			script = ";['Repair','CfgWeapons', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"ItemSolder_DZE"};
			output[] = {};
			outputweapons[] = {"NVGoggles_DZE"};
			input[] = {{"equip_floppywire",1},{"equip_scrapelectronics",1}};
			inputweapons[] = {"ItemNVGFullBroken_DZE"};
		};		
	};	
};

