class ItemGPS : ItemCore
{
	model = "z\addons\dayz_communityassets\models\gps.p3d";
};

class ItemGPSBroken_DZE : ItemCore 
{
	scope = 2;
	displayName = $STR_EQUIP_BROKEN_GPS;
	model = "z\addons\dayz_communityassets\models\gps.p3d";
	picture = "\dayz_epoch_c\icons\tools\ItemGPSBroken.paa";
	descriptionShort = $STR_EQUIP_BROKEN_GPS_DESC;
	
	class ItemActions
	{
		class Repair
		{
			text = $STR_ACTIONS_FIX_GPS;
			script = ";['Repair','CfgWeapons', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"ItemSolder_DZE"};
			output[] = {};
			outputweapons[] = {"ItemGPS"};
			input[] = {{"equip_floppywire",1},{"equip_scrapelectronics",1}};
			inputweapons[] = {"ItemGPSBroken_DZE"};
		};		
	};	
};