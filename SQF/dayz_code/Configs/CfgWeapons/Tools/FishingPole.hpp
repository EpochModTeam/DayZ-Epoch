class ItemFishingPole: ItemCore
{
	scope = public;
	displayName=$STR_EQUIP_FISHPOLE;
	model="\z\addons\dayz_epoch\models\fishing_rod_loot_item.p3d";
	picture="\z\addons\dayz_epoch\pictures\equip_fishingpole_CA.paa";
	descriptionShort=$STR_EQUIP_FISHPOLE_DESC;
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
