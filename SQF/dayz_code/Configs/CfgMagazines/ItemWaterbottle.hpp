class FoodDrink;
class ItemWaterbottle: FoodDrink {
	scope = 2;
	refillable = 1;
	sfx = "drink";
	wateroz = 10;
	displayName = "$STR_EQUIP_NAME_12";
	model = "\dayz_equip\models\waterbottle_gear.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_waterbottle10oz_ca.paa";
	descriptionShort = "$STR_EQUIP_DESC_12";
};
class ItemWaterbottleUnfilled: CA_Magazine {
	scope = 2;
	count = 1;
	type = 256;
	displayName = "$STR_EQUIP_NAME_13";
	model = "\dayz_equip\models\waterbottle_gear.p3d";
	picture = "\dayz_equip\textures\equip_waterbottle_empty_ca.paa";
	descriptionShort = "$STR_EQUIP_DESC_13";
	class ItemActions {
		class Fill {
			text = "$STR_ACTIONS_FILL_W";
			script = "spawn player_fillWater;";
		};
	};
};
class ItemWaterbottleBoiled : ItemWaterbottle {
	displayName = $STR_ITEMWATERBOTTLEBOILED_CODE_NAME;
	descriptionShort = $STR_ITEMWATERBOTTLEBOILED_CODE_DESC;
};