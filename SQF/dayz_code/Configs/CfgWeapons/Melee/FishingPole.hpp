class MeleeFishingPole : MeleeWeapon
{
	scope = public;
	
	model = "\z\addons\dayz_communityassets\models\fishing_rod_weaponized.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_fishingpole_CA.paa";
	displayName = $STR_ITEM_NAME_FISHINGPOLE;
	descriptionShort = $STR_ITEM_DESC_FISHINGPOLE;
	
	magazines[] = {"Fishing_Swing"};
	
	class ItemActions
	{
		class Toolbelt
		{
			text = $STR_ACTIONS_2TB;
			script = "spawn player_addToolbelt";
			use[] = {"MeleeFishingPole"};
			output[] = {"ItemFishingPole"};
		};
	};
	
	class Library
	{
		libTextDesc = $STR_ITEM_DESC_FISHINGPOLE;
	};
};	