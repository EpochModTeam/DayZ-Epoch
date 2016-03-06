class equip_brick : CA_Magazine
{
	scope = public;
	count = 1;
	type = WeaponSlotItem;
	
	model = "\z\addons\dayz_communityassets\models\brick.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_brick.paa";
	displayName = $STR_ITEM_NAME_equip_brick;
	descriptionShort = "Maybe this could be used to sharpen a knife."; //TODO: move to stringtable
	
	class ItemActions
	{
		class FixKnife
		{
			text = "Sharpen Knife";
			script = "; ['ItemKnifeBlunt','ItemKnife'] spawn player_sharpen;";
		};
	};
};