class ItemFishingPole : ItemCore
{
	scope = 2;	
	model = "\z\addons\dayz_communityassets\models\fishing_rod_loot_item.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_fishingpole_CA.paa";
	displayName = $STR_ITEM_NAME_FISHINGPOLE;
	descriptionShort = $STR_ITEM_DESC_FISHINGPOLE;
	
	class ItemActions
	{
		class Toolbelt
		{
			text = $STR_ACTIONS_RFROMTB;
			script = "spawn player_addToolbelt;";
			use[] =
			{
				"ItemFishingPole"
			};
			output[] =
			{
				"MeleeFishingPole"
			};
		};
		
		class ToBack
		{
			text = $STR_ACTIONS_2BACK;
			script = "spawn player_addtoBack;";
			use[] =
			{
				"ItemFishingPole"
			};
			output[] =
			{
				"MeleeFishingPole"
			};
		};
	};
};

class ItemFishingPoleBroken : ItemCore
{
	scope = 2;	
	model = "\z\addons\dayz_communityassets\models\fishing_rod_loot_item.p3d";
	picture = "\dayz_epoch_c\icons\tools\ItemFishingpoleBroken.paa";
	displayName = $STR_ITEM_NAME_FISHINGPOLEBROKEN;
	descriptionShort = $STR_ITEM_DESC_FISHINGPOLE_BROKEN;
};