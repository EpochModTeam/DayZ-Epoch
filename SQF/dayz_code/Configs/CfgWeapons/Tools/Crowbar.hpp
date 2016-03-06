class ItemCrowbar : ItemCore
{
	scope = public;
	
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
	scope = public;
	
	model = "\dayz_equip\models\crowbar.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_crowbar_CA.paa";
	displayName = $STR_EQUIP_NAME_CROWBARBENT;
	descriptionShort = $STR_EQUIP_DESC_CROWBARBENT;
};