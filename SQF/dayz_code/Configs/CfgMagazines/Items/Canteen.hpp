class ItemCanteenEmpty : CA_Magazine
{
	scope = public;
	count = 1;
	type = WeaponSlotItem;
	
	model = "\dayz_equip\models\waterbottle_gear.p3d";
	picture = "\dayz_equip\textures\equip_waterbottle_empty_ca.paa";
	displayName = $STR_ITEM_CANTEEN_EMPTY_NAME;
	descriptionShort = $STR_ITEM_CANTEEN_DESC;
	
	//TODO
	/*class ItemActions
	{
		class Fill
		{
			text = $STR_ACTIONS_FILL_W;
			script = "spawn player_fillWater;";
		};
	};*/
};