class ItemSilverBar: CA_Magazine {
	scope = public;
	count = 1;
	worth = 1;
	type = 256;
	displayName = $STR_EPOCH_SILVER;
	model = "\z\addons\dayz_epoch\models\ItemSilverBar1oz.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_silver_bar_CA.paa";
	descriptionShort = $STR_EPOCH_SILVER_DESC;
	class ItemActions {
		class Crafting {
			text = $STR_EPOCH_PLAYER_210_1;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemSilverBar2oz",1}};
			input[] = {{"ItemSilverBar",2}};

		};
		class Crafting1 {
			text = $STR_EPOCH_PLAYER_210_9;
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemSilverBar10oz",1}};
			input[] = {{"ItemSilverBar",10}};
		};
	};
};
class ItemSilverBar2oz: CA_Magazine {
	scope = public;
	count = 1;
	worth = 2;
	type = 256;
	displayName = $STR_EPOCH_2OZSILVER;
	model = "\z\addons\dayz_epoch\models\ItemSilverBar2oz.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_silver_bar_CA.paa";
	descriptionShort = $STR_EPOCH_2OZSILVER_DESC;
	class ItemActions {
		class Crafting {
			text = $STR_EPOCH_PLAYER_210_1;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemSilverBar3oz",1}};
			input[] = {{"ItemSilverBar2oz",1},{"ItemSilverBar",1}};

		};
		class Crafting1 {
			text = $STR_EPOCH_PLAYER_211_1;
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemSilverBar",2}};
			input[] = {{"ItemSilverBar2oz",1}};

		};
		class Crafting2 {
			text = $STR_EPOCH_PLAYER_210_8;
			script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemSilverBar10oz",1}};
			input[] = {{"ItemSilverBar2oz",1},{"ItemSilverBar",8}};
		};
	};
};
class ItemSilverBar3oz: CA_Magazine {
	scope = public;
	count = 1;
	worth = 3;
	type = 256;
	displayName = $STR_EPOCH_3OZSILVER;
	model = "\z\addons\dayz_epoch\models\ItemSilverBar3oz.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_silver_bar_CA.paa";
	descriptionShort = $STR_EPOCH_3OZSILVER_DESC;
	class ItemActions {
		class Crafting {
			text = $STR_EPOCH_PLAYER_210_1;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemSilverBar4oz",1}};
			input[] = {{"ItemSilverBar3oz",1},{"ItemSilverBar",1}};

		};
		class Crafting1 {
			text = $STR_EPOCH_PLAYER_211_1;
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemSilverBar2oz",1},{"ItemSilverBar",1}};
			input[] = {{"ItemSilverBar3oz",1}};

		};
		class Crafting2 {
			text = $STR_EPOCH_PLAYER_210_7;
			script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemSilverBar10oz",1}};
			input[] = {{"ItemSilverBar3oz",1},{"ItemSilverBar",7}};
		};
		class Crafting3 {
			text = $STR_EPOCH_PLAYER_211;
			script = ";['Crafting3','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemSilverBar",3}};
			input[] = {{"ItemSilverBar3oz",1}};
		};
	};
};
class ItemSilverBar4oz: CA_Magazine {
	scope = public;
	count = 1;
	worth = 4;
	type = 256;
	displayName = $STR_EPOCH_4OZSILVER;
	model = "\z\addons\dayz_epoch\models\ItemSilverBar4oz.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_silver_bar_CA.paa";
	descriptionShort = $STR_EPOCH_4OZSILVER_DESC;
	class ItemActions {
		class Crafting {
			text = $STR_EPOCH_PLAYER_210_1;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemSilverBar5oz",1}};
			input[] = {{"ItemSilverBar4oz",1},{"ItemSilverBar",1}};

		};
		class Crafting1 {
			text = $STR_EPOCH_PLAYER_211_1;
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemSilverBar3oz",1},{"ItemSilverBar",1}};
			input[] = {{"ItemSilverBar4oz",1}};

		};
		class Crafting2 {
			text = $STR_EPOCH_PLAYER_210_6;
			script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemSilverBar10oz",1}};
			input[] = {{"ItemSilverBar4oz",1},{"ItemSilverBar",6}};
		};
		class Crafting3 {
			text = $STR_EPOCH_PLAYER_211;
			script = ";['Crafting3','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemSilverBar",4}};
			input[] = {{"ItemSilverBar4oz",1}};
		};
	};
};
class ItemSilverBar5oz: CA_Magazine {
	scope = public;
	count = 1;
	worth = 5;
	type = 256;
	displayName = $STR_EPOCH_5OZSILVER;
	model = "\z\addons\dayz_epoch\models\ItemSilverBar5oz.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_silver_bar_CA.paa";
	descriptionShort = $STR_EPOCH_5OZSILVER_DESC;
	class ItemActions {
		class Crafting {
			text = $STR_EPOCH_PLAYER_210_1;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemSilverBar6oz",1}};
			input[] = {{"ItemSilverBar5oz",1},{"ItemSilverBar",1}};

		};
		class Crafting1 {
			text = $STR_EPOCH_PLAYER_211_1;
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemSilverBar4oz",1},{"ItemSilverBar",1}};
			input[] = {{"ItemSilverBar5oz",1}};

		};
		class Crafting2 {
			text = $STR_EPOCH_PLAYER_210_5;
			script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemSilverBar10oz",1}};
			input[] = {{"ItemSilverBar5oz",1},{"ItemSilverBar",5}};
		};
		class Crafting3 {
			text = $STR_EPOCH_PLAYER_211;
			script = ";['Crafting3','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemSilverBar",5}};
			input[] = {{"ItemSilverBar5oz",1}};
		};
	};
};
class ItemSilverBar6oz: CA_Magazine {
	scope = public;
	count = 1;
	worth = 6;
	type = 256;
	displayName = $STR_EPOCH_6OZSILVER;
	model = "\z\addons\dayz_epoch\models\ItemSilverBar6oz.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_silver_bar_CA.paa";
	descriptionShort = $STR_EPOCH_6OZSILVER_DESC;
	class ItemActions {
		class Crafting {
			text = $STR_EPOCH_PLAYER_210_1;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemSilverBar7oz",1}};
			input[] = {{"ItemSilverBar6oz",1},{"ItemSilverBar",1}};

		};
		class Crafting1 {
			text = $STR_EPOCH_PLAYER_211_1;
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemSilverBar5oz",1},{"ItemSilverBar",1}};
			input[] = {{"ItemSilverBar6oz",1}};

		};
		class Crafting2 {
			text = $STR_EPOCH_PLAYER_210_4;
			script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemSilverBar10oz",1}};
			input[] = {{"ItemSilverBar6oz",1},{"ItemSilverBar",4}};
		};
		class Crafting3 {
			text = $STR_EPOCH_PLAYER_211;
			script = ";['Crafting3','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemSilverBar",6}};
			input[] = {{"ItemSilverBar6oz",1}};
		};
	};
};
class ItemSilverBar7oz: CA_Magazine {
	scope = public;
	count = 1;
	worth = 7;
	type = 256;
	displayName = $STR_EPOCH_7OZSILVER;
	model = "\z\addons\dayz_epoch\models\ItemSilverBar7oz.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_silver_bar_CA.paa";
	descriptionShort = $STR_EPOCH_7OZSILVER_DESC;
	class ItemActions {
		class Crafting {
			text = $STR_EPOCH_PLAYER_210_1;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemSilverBar8oz",1}};
			input[] = {{"ItemSilverBar7oz",1},{"ItemSilverBar",1}};

		};
		class Crafting1 {
			text = $STR_EPOCH_PLAYER_211_1;
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemSilverBar6oz",1},{"ItemSilverBar",1}};
			input[] = {{"ItemSilverBar7oz",1}};

		};
		class Crafting2 {
			text = $STR_EPOCH_PLAYER_210_3;
			script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemSilverBar10oz",1}};
			input[] = {{"ItemSilverBar7oz",1},{"ItemSilverBar",3}};
		};
		class Crafting3 {
			text = $STR_EPOCH_PLAYER_211;
			script = ";['Crafting3','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemSilverBar",7}};
			input[] = {{"ItemSilverBar7oz",1}};
		};
	};
};
class ItemSilverBar8oz: CA_Magazine {
	scope = public;
	count = 1;
	worth = 8;
	type = 256;
	displayName = $STR_EPOCH_8OZSILVER;
	model = "\z\addons\dayz_epoch\models\ItemSilverBar8oz.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_silver_bar_CA.paa";
	descriptionShort = $STR_EPOCH_8OZSILVER_DESC;
	class ItemActions {
		class Crafting {
			text = $STR_EPOCH_PLAYER_210_1;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemSilverBar9oz",1}};
			input[] = {{"ItemSilverBar8oz",1},{"ItemSilverBar",1}};

		};
		class Crafting1 {
			text = $STR_EPOCH_PLAYER_211_1;
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemSilverBar7oz",1},{"ItemSilverBar",1}};
			input[] = {{"ItemSilverBar8oz",1}};

		};
		class Crafting2 {
			text = $STR_EPOCH_PLAYER_210_2;
			script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemSilverBar10oz",1}};
			input[] = {{"ItemSilverBar8oz",1},{"ItemSilverBar",2}};
		};
		class Crafting3 {
			text = $STR_EPOCH_PLAYER_211;
			script = ";['Crafting3','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemSilverBar",8}};
			input[] = {{"ItemSilverBar8oz",1}};
		};
	};
};
class ItemSilverBar9oz: CA_Magazine {
	scope = public;
	count = 1;
	worth = 9;
	type = 256;
	displayName = $STR_EPOCH_9OZSILVER;
	model = "\z\addons\dayz_epoch\models\ItemSilverBar9oz.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_silver_bar_CA.paa";
	descriptionShort = $STR_EPOCH_9OZSILVER_DESC;
	class ItemActions {
		class Crafting {
			text = $STR_EPOCH_PLAYER_210_1;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemSilverBar10oz",1}};
			input[] = {{"ItemSilverBar9oz",1},{"ItemSilverBar",1}};

		};
		class Crafting1 {
			text = $STR_EPOCH_PLAYER_211_1;
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemSilverBar8oz",1},{"ItemSilverBar",1}};
			input[] = {{"ItemSilverBar9oz",1}};

		};
		class Crafting3 {
			text = $STR_EPOCH_PLAYER_211;
			script = ";['Crafting3','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemSilverBar",9}};
			input[] = {{"ItemSilverBar9oz",1}};
		};
	};
};
class ItemSilverBar10oz: CA_Magazine {
	scope = public;
	count = 1;
	worth = 10;
	type = 256;
	displayName = $STR_EPOCH_10OZSILVER;
	model = "\z\addons\dayz_epoch\models\ItemSilverBar10oz.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_Silver_bar_10oz_CA.paa";
	descriptionShort = $STR_EPOCH_10OZSILVER_DESC;
	class ItemActions {
		class Crafting {
			text = $STR_EPOCH_PLAYER_211_1;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemSilverBar9oz",1},{"ItemSilverBar",1}};
			input[] = {{"ItemSilverBar10oz",1}};

		};
		class Crafting1 {
			text = $STR_EPOCH_PLAYER_211;
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemSilverBar",10}};
			input[] = {{"ItemSilverBar10oz",1}};
		};
	};
};