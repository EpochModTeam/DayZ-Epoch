class ItemGoldBar: CA_Magazine {
	scope = public;
	count = 1;
	worth = 100;
	type = 256;
	displayName = $STR_EPOCH_GOLD;
	model = "\z\addons\dayz_epoch\models\ItemGoldBar1oz.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_gold_bar_CA.paa";
	descriptionShort = $STR_EPOCH_GOLD_DESC;
	class ItemActions {
		class Crafting {
			text = $STR_EPOCH_PLAYER_210_1;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemGoldBar2oz",1}};
			input[] = {{"ItemGoldBar",2}};

		};
		class Crafting1 {
			text = $STR_EPOCH_PLAYER_210_9;
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemGoldBar10oz",1}};
			input[] = {{"ItemGoldBar",10}};
		};
	};
};
class ItemGoldBar2oz: CA_Magazine {
	scope = public;
	count = 1;
	worth = 200;
	type = 256;
	displayName = $STR_EPOCH_2OZGOLD;
	model = "\z\addons\dayz_epoch\models\ItemGoldBar2oz.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_gold_bar_CA.paa";
	descriptionShort = $STR_EPOCH_2OZGOLD_DESC;
	class ItemActions {
		class Crafting {
			text = $STR_EPOCH_PLAYER_210_1;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemGoldBar3oz",1}};
			input[] = {{"ItemGoldBar2oz",1},{"ItemGoldBar",1}};

		};
		class Crafting1 {
			text = $STR_EPOCH_PLAYER_211_1;
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemGoldBar",2}};
			input[] = {{"ItemGoldBar2oz",1}};

		};
		class Crafting2 {
			text = $STR_EPOCH_PLAYER_210_8;
			script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemGoldBar10oz",1}};
			input[] = {{"ItemGoldBar2oz",1},{"ItemGoldBar",8}};
		};
	};
};
class ItemGoldBar3oz: CA_Magazine {
	scope = public;
	count = 1;
	worth = 300;
	type = 256;
	displayName = $STR_EPOCH_3OZGOLD;
	model = "\z\addons\dayz_epoch\models\ItemGoldBar3oz.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_gold_bar_CA.paa";
	descriptionShort = $STR_EPOCH_3OZGOLD_DESC;
	class ItemActions {
		class Crafting {
			text = $STR_EPOCH_PLAYER_210_1;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemGoldBar4oz",1}};
			input[] = {{"ItemGoldBar3oz",1},{"ItemGoldBar",1}};

		};
		class Crafting1 {
			text = $STR_EPOCH_PLAYER_211_1;
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemGoldBar2oz",1},{"ItemGoldBar",1}};
			input[] = {{"ItemGoldBar3oz",1}};

		};
		class Crafting2 {
			text = $STR_EPOCH_PLAYER_210_7;
			script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemGoldBar10oz",1}};
			input[] = {{"ItemGoldBar3oz",1},{"ItemGoldBar",7}};
		};
		class Crafting3 {
			text = $STR_EPOCH_PLAYER_211;
			script = ";['Crafting3','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemGoldBar",3}};
			input[] = {{"ItemGoldBar3oz",1}};
		};
	};
};
class ItemGoldBar4oz: CA_Magazine {
	scope = public;
	count = 1;
	worth = 400;
	type = 256;
	displayName = $STR_EPOCH_4OZGOLD;
	model = "\z\addons\dayz_epoch\models\ItemGoldBar4oz.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_gold_bar_CA.paa";
	descriptionShort = $STR_EPOCH_4OZGOLD_DESC;
	class ItemActions {
		class Crafting {
			text = $STR_EPOCH_PLAYER_210_1;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemGoldBar5oz",1}};
			input[] = {{"ItemGoldBar4oz",1},{"ItemGoldBar",1}};

		};
		class Crafting1 {
			text = $STR_EPOCH_PLAYER_211_1;
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemGoldBar3oz",1},{"ItemGoldBar",1}};
			input[] = {{"ItemGoldBar4oz",1}};

		};
		class Crafting2 {
			text = $STR_EPOCH_PLAYER_210_6;
			script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemGoldBar10oz",1}};
			input[] = {{"ItemGoldBar4oz",1},{"ItemGoldBar",6}};
		};
		class Crafting3 {
			text = $STR_EPOCH_PLAYER_211;
			script = ";['Crafting3','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemGoldBar",4}};
			input[] = {{"ItemGoldBar4oz",1}};
		};
	};
};
class ItemGoldBar5oz: CA_Magazine {
	scope = public;
	count = 1;
	worth = 500;
	type = 256;
	displayName = $STR_EPOCH_5OZGOLD;
	model = "\z\addons\dayz_epoch\models\ItemGoldBar5oz.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_gold_bar_CA.paa";
	descriptionShort = $STR_EPOCH_5OZGOLD_DESC;
	class ItemActions {
		class Crafting {
			text = $STR_EPOCH_PLAYER_210_1;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemGoldBar6oz",1}};
			input[] = {{"ItemGoldBar5oz",1},{"ItemGoldBar",1}};

		};
		class Crafting1 {
			text = $STR_EPOCH_PLAYER_211_1;
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemGoldBar4oz",1},{"ItemGoldBar",1}};
			input[] = {{"ItemGoldBar5oz",1}};

		};
		class Crafting2 {
			text = $STR_EPOCH_PLAYER_210_5;
			script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemGoldBar10oz",1}};
			input[] = {{"ItemGoldBar5oz",1},{"ItemGoldBar",5}};
		};
		class Crafting3 {
			text = $STR_EPOCH_PLAYER_211;
			script = ";['Crafting3','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemGoldBar",5}};
			input[] = {{"ItemGoldBar5oz",1}};
		};
	};
};
class ItemGoldBar6oz: CA_Magazine {
	scope = public;
	count = 1;
	worth = 600;
	type = 256;
	displayName = $STR_EPOCH_6OZGOLD;
	model = "\z\addons\dayz_epoch\models\ItemGoldBar6oz.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_gold_bar_CA.paa";
	descriptionShort = $STR_EPOCH_6OZGOLD_DESC;
	class ItemActions {
		class Crafting {
			text = $STR_EPOCH_PLAYER_210_1;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemGoldBar7oz",1}};
			input[] = {{"ItemGoldBar6oz",1},{"ItemGoldBar",1}};

		};
		class Crafting1 {
			text = $STR_EPOCH_PLAYER_211_1;
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemGoldBar5oz",1},{"ItemGoldBar",1}};
			input[] = {{"ItemGoldBar6oz",1}};

		};
		class Crafting2 {
			text = $STR_EPOCH_PLAYER_210_4;
			script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemGoldBar10oz",1}};
			input[] = {{"ItemGoldBar6oz",1},{"ItemGoldBar",4}};
		};
		class Crafting3 {
			text = $STR_EPOCH_PLAYER_211;
			script = ";['Crafting3','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemGoldBar",6}};
			input[] = {{"ItemGoldBar6oz",1}};
		};
	};
};
class ItemGoldBar7oz: CA_Magazine {
	scope = public;
	count = 1;
	worth = 700;
	type = 256;
	displayName = $STR_EPOCH_7OZGOLD;
	model = "\z\addons\dayz_epoch\models\ItemGoldBar7oz.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_gold_bar_CA.paa";
	descriptionShort = $STR_EPOCH_7OZGOLD_DESC;
	class ItemActions {
		class Crafting {
			text = $STR_EPOCH_PLAYER_210_1;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemGoldBar8oz",1}};
			input[] = {{"ItemGoldBar7oz",1},{"ItemGoldBar",1}};

		};
		class Crafting1 {
			text = $STR_EPOCH_PLAYER_211_1;
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemGoldBar6oz",1},{"ItemGoldBar",1}};
			input[] = {{"ItemGoldBar7oz",1}};

		};
		class Crafting2 {
			text = $STR_EPOCH_PLAYER_210_3;
			script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemGoldBar10oz",1}};
			input[] = {{"ItemGoldBar7oz",1},{"ItemGoldBar",3}};
		};
		class Crafting3 {
			text = $STR_EPOCH_PLAYER_211;
			script = ";['Crafting3','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemGoldBar",7}};
			input[] = {{"ItemGoldBar7oz",1}};
		};
	};
};
class ItemGoldBar8oz: CA_Magazine {
	scope = public;
	count = 1;
	worth = 800;
	type = 256;
	displayName = $STR_EPOCH_8OZGOLD;
	model = "\z\addons\dayz_epoch\models\ItemGoldBar8oz.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_gold_bar_CA.paa";
	descriptionShort = $STR_EPOCH_8OZGOLD_DESC;
	class ItemActions {
		class Crafting {
			text = $STR_EPOCH_PLAYER_210_1;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemGoldBar9oz",1}};
			input[] = {{"ItemGoldBar8oz",1},{"ItemGoldBar",1}};

		};
		class Crafting1 {
			text = $STR_EPOCH_PLAYER_211_1;
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemGoldBar7oz",1},{"ItemGoldBar",1}};
			input[] = {{"ItemGoldBar8oz",1}};

		};
		class Crafting2 {
			text = $STR_EPOCH_PLAYER_210_2;
			script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemGoldBar10oz",1}};
			input[] = {{"ItemGoldBar8oz",1},{"ItemGoldBar",2}};
		};
		class Crafting3 {
			text = $STR_EPOCH_PLAYER_211;
			script = ";['Crafting3','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemGoldBar",8}};
			input[] = {{"ItemGoldBar8oz",1}};
		};
	};
};
class ItemGoldBar9oz: CA_Magazine {
	scope = public;
	count = 1;
	worth = 900;
	type = 256;
	displayName = $STR_EPOCH_9OZGOLD;
	model = "\z\addons\dayz_epoch\models\ItemGoldBar9oz.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_gold_bar_CA.paa";
	descriptionShort = $STR_EPOCH_9OZGOLD_DESC;
	class ItemActions {
		class Crafting {
			text = $STR_EPOCH_PLAYER_210_1;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemGoldBar10oz",1}};
			input[] = {{"ItemGoldBar9oz",1},{"ItemGoldBar",1}};

		};
		class Crafting1 {
			text = $STR_EPOCH_PLAYER_211_1;
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemGoldBar8oz",1},{"ItemGoldBar",1}};
			input[] = {{"ItemGoldBar9oz",1}};

		};
		class Crafting3 {
			text = $STR_EPOCH_PLAYER_211;
			script = ";['Crafting3','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemGoldBar",9}};
			input[] = {{"ItemGoldBar9oz",1}};
		};
	};
};
class ItemGoldBar10oz: CA_Magazine {
	scope = public;
	count = 1;
	worth = 1000;
	type = 256;
	displayName = $STR_EPOCH_10OZGOLD;
	model = "\z\addons\dayz_epoch\models\ItemGoldBar10oz.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_gold_bar_10oz_CA.paa";
	descriptionShort = $STR_EPOCH_10OZGOLD_DESC;
	class ItemActions {
		class Crafting {
			text = $STR_EPOCH_PLAYER_211_1;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemGoldBar9oz",1},{"ItemGoldBar",1}};
			input[] = {{"ItemGoldBar10oz",1}};

		};
		class Crafting1 {
			text = $STR_EPOCH_PLAYER_211;
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemGoldBar",10}};
			input[] = {{"ItemGoldBar10oz",1}};
		};
	};
};