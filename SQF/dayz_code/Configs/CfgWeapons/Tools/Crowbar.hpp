class ItemCrowbar : ItemCore
{
	scope = 2;	
	model = "\dayz_equip\models\crowbar.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_crowbar_CA.paa";
	displayName = $STR_EQUIP_NAME_CROWBAR;
	descriptionShort = $STR_EQUIP_DESC_CROWBAR;
	
	class ItemActions
	{
		class Toolbelt
		{
			text = $STR_ACTIONS_RFROMTB;
			script = "spawn player_addToolbelt;";
			use[] =
			{
				"ItemCrowbar"
			};
			output[] =
			{
				"MeleeCrowbar"
			};
		};
		
		class ToBack
		{
			text = $STR_ACTIONS_2BACK;
			script = "spawn player_addtoBack;";
			use[] =
			{
				"ItemCrowbar"
			};
			output[] =
			{
				"MeleeCrowbar"
			};
		};
	};
};

class ItemCrowbarBent : ItemCore
{
	scope = 2;	
	model = "\dayz_equip\models\crowbar.p3d";
	picture = "\dayz_epoch_c\icons\tools\ItemCrowbarBroken.paa";
	displayName = $STR_EQUIP_NAME_CROWBARBENT;
	descriptionShort = $STR_EQUIP_DESC_CROWBARBENT;
	
	class ItemActions
	{
		class Repair
		{
			text = $STR_ACTIONS_FIX_CROWBAR;
			script = ";['Repair','CfgWeapons', _id] spawn player_craftItem;";
			neednearby[] = {"fire"};
			requiretools[] = {"ItemToolbox"};
			output[] = {};
			outputweapons[] = {"ItemCrowbar"};
			input[] = {{"PartGeneric",1}};
			inputweapons[] = {"ItemCrowbarBent"};
		};		
	};	
};