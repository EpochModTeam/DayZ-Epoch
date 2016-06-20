class ItemCopperBar: CA_Magazine {
	scope = public;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_COPPER;
	model = "\z\addons\dayz_epoch\models\copper_bar.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_copper_bar_CA.paa";
	descriptionShort = $STR_EPOCH_COPPER_DESC;
	class ItemActions {
		class Crafting {
			text = $STR_EPOCH_PLAYER_210_9;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemCopperBar10oz",1}};
			input[] = {{"ItemCopperBar",10}};
		};
	};
};
class ItemCopperBar10oz: CA_Magazine {
	scope = public;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_10OZCOPPER;
	model = "\z\addons\dayz_epoch\models\copper_bar_10oz.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_copper_bar_10oz_CA.paa";
	descriptionShort = $STR_EPOCH_10OZCOPPER_DESC;
	class ItemActions {
		class Crafting {
			text = $STR_EPOCH_PLAYER_211;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemCopperBar",10}};
			input[] = {{"ItemCopperBar10oz",1}};
		};
	};
};
