class ItemCopperBar: CA_Magazine {
	scope = 2;
	count = 1;
	type = 256;
	displayName = "Copper";
	model = "\z\addons\dayz_epoch\models\copper_bar.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_copper_bar_CA.paa";
	descriptionShort = "Copper Bar";
	class ItemActions {
		class Crafting {
			text = $STR_EPOCH_PLAYER_210;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemCopperBar10oz",1}};
			input[] = {{"ItemCopperBar",10}};
		};
	};
};
class ItemCopperBar10oz: CA_Magazine {
	scope = 2;
	count = 1;
	type = 256;
	displayName = "10oz Copper";
	model = "\z\addons\dayz_epoch\models\copper_bar_10oz.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_copper_bar_10oz_CA.paa";
	descriptionShort = "10oz Copper Bar";
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