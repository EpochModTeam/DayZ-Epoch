class ItemFishingPole: ItemCore
{
	scope=2;
	displayName=$STR_EQUIP_FISHPOLE;
	model="\z\addons\dayz_epoch\models\fishing_rod_loot_item.p3d";
	picture="\z\addons\dayz_epoch\pictures\equip_fishingpole_CA.paa";
	descriptionShort=$STR_EQUIP_FISHPOLE_DESC;
	class ItemActions
	{
		class Toolbelt
		{
			text=$STR_EPOCH_PLAYER_295;
			script="spawn player_addToolbelt;";
			use[]=
			{
				"ItemFishingPole"
			};
			output[]=
			{
				"MeleeFishingPole"
			};
		};
	};
};
