class ItemBriefcase_Base: CA_Magazine {
	scope = public;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_BRIEFCASE;
	model = "\z\addons\dayz_epoch\models\briefcase.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_briefcase_E_CA.paa";
};
// Gold
class ItemBriefcaseEmpty: ItemBriefcase_Base {
	picture = "\z\addons\dayz_epoch\pictures\equip_briefcase_E_CA.paa";
	descriptionShort = $STR_EPOCH_BRIEFCASE_EMPTY;
	weight = 1;
	class ItemActions {
		class Crafting {
			text = $STR_EPOCH_PLAYER_197;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemBriefcase10oz",1}};
			input[] = {{"ItemBriefcaseEmpty",1},{"ItemGoldBar10oz",1}};
		};
		class Crafting1 {
			text = $STR_EPOCH_PLAYER_198;
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemBriefcase100oz",1}};
			input[] = {{"ItemBriefcaseEmpty",1},{"ItemGoldBar10oz",10}};
		};
		class Crafting2 {
			text = $STR_EPOCH_PLAYER_S_197;
			script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemBriefcaseS10oz",1}};
			input[] = {{"ItemBriefcaseEmpty",1},{"ItemSilverBar10oz",1}};
		};
		class Crafting3 {
			text = $STR_EPOCH_PLAYER_S_198;
			script = ";['Crafting3','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemBriefcaseS100oz",1}};
			input[] = {{"ItemBriefcaseEmpty",1},{"ItemSilverBar10oz",10}};
		};
	};
};
class ItemBriefcase10oz: ItemBriefcase_Base {
	picture = "\z\addons\dayz_epoch\pictures\equip_briefcase_10oz_CA.paa";
	descriptionShort = $STR_EPOCH_BRIEFCASE_1X10OZGOLD;
	weight = 1.2;
	worth = 1000;
	class ItemActions {
		class Crafting {
			text = $STR_EPOCH_PLAYER_197;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemBriefcase20oz",1}};
			input[] = {{"ItemBriefcase10oz",1},{"ItemGoldBar10oz",1}};
		};
		class Crafting1 {
			text = $STR_EPOCH_PLAYER_199;
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemBriefcase100oz",1}};
			input[] = {{"ItemBriefcase10oz",1},{"ItemGoldBar10oz",9}};
		};
		class Crafting2 {
			text = $STR_EPOCH_PLAYER_200;
			script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemGoldBar10oz",1},{"ItemBriefcaseEmpty",1}};
			input[] = {{"ItemBriefcase10oz",1}};
		};
	};
};
class ItemBriefcase20oz: ItemBriefcase_Base {
	picture = "\z\addons\dayz_epoch\pictures\equip_briefcase_20oz_CA.paa";
	descriptionShort = $STR_EPOCH_BRIEFCASE_2X10OZGOLD;
	weight = 1.5;
	worth = 2000;
	class ItemActions {
		class Crafting {
			text = $STR_EPOCH_PLAYER_197;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemBriefcase30oz",1}};
			input[] = {{"ItemBriefcase20oz",1},{"ItemGoldBar10oz",1}};
		};
		class Crafting1 {
			text = $STR_EPOCH_PLAYER_202;
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemBriefcase100oz",1}};
			input[] = {{"ItemBriefcase20oz",1},{"ItemGoldBar10oz",8}};
		};
		class Crafting2 {
			text = $STR_EPOCH_PLAYER_200;
			script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemGoldBar10oz",1},{"ItemBriefcase10oz",1}};
			input[] = {{"ItemBriefcase20oz",1}};
		};
		class Crafting3 {
			text = $STR_EPOCH_PLAYER_201;
			script = ";['Crafting3','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemGoldBar10oz",2},{"ItemBriefcaseEmpty",1}};
			input[] = {{"ItemBriefcase20oz",1}};
		};
	};
};
class ItemBriefcase30oz: ItemBriefcase_Base {
	picture = "\z\addons\dayz_epoch\pictures\equip_briefcase_30oz_CA.paa";
	descriptionShort = $STR_EPOCH_BRIEFCASE_3X10OZGOLD;
	weight = 1.8;
	worth = 3000;
	class ItemActions {
		class Crafting {
			text = $STR_EPOCH_PLAYER_197;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemBriefcase40oz",1}};
			input[] = {{"ItemBriefcase30oz",1},{"ItemGoldBar10oz",1}};
		};
		class Crafting1 {
			text = $STR_EPOCH_PLAYER_203;
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemBriefcase100oz",1}};
			input[] = {{"ItemBriefcase30oz",1},{"ItemGoldBar10oz",7}};
		};
		class Crafting2 {
			text = $STR_EPOCH_PLAYER_200;
			script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemGoldBar10oz",1},{"ItemBriefcase20oz",1}};
			input[] = {{"ItemBriefcase30oz",1}};
		};
		class Crafting3 {
			text = $STR_EPOCH_PLAYER_201;
			script = ";['Crafting3','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemGoldBar10oz",3},{"ItemBriefcaseEmpty",1}};
			input[] = {{"ItemBriefcase30oz",1}};
		};
	};
};
class ItemBriefcase40oz: ItemBriefcase_Base {
	picture = "\z\addons\dayz_epoch\pictures\equip_briefcase_40oz_CA.paa";
	descriptionShort = $STR_EPOCH_BRIEFCASE_4X10OZGOLD;
	weight = 2.1;
	worth = 4000;
	class ItemActions {
		class Crafting {
			text = $STR_EPOCH_PLAYER_197;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemBriefcase50oz",1}};
			input[] = {{"ItemBriefcase40oz",1},{"ItemGoldBar10oz",1}};
		};
		class Crafting1 {
			text = $STR_EPOCH_PLAYER_204;
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemBriefcase100oz",1}};
			input[] = {{"ItemBriefcase40oz",1},{"ItemGoldBar10oz",6}};
		};
		class Crafting2 {
			text = $STR_EPOCH_PLAYER_200;
			script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemGoldBar10oz",1},{"ItemBriefcase30oz",1}};
			input[] = {{"ItemBriefcase40oz",1}};
		};
		class Crafting3 {
			text = $STR_EPOCH_PLAYER_201;
			script = ";['Crafting3','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemGoldBar10oz",4},{"ItemBriefcaseEmpty",1}};
			input[] = {{"ItemBriefcase40oz",1}};
		};
	};
};
class ItemBriefcase50oz: ItemBriefcase_Base {
	picture = "\z\addons\dayz_epoch\pictures\equip_briefcase_50oz_CA.paa";
	descriptionShort = $STR_EPOCH_BRIEFCASE_5X10OZGOLD;
	weight = 2.4;
	worth = 5000;
	class ItemActions {
		class Crafting {
			text = $STR_EPOCH_PLAYER_197;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemBriefcase60oz",1}};
			input[] = {{"ItemBriefcase50oz",1},{"ItemGoldBar10oz",1}};
		};
		class Crafting1 {
			text = $STR_EPOCH_PLAYER_205;
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemBriefcase100oz",1}};
			input[] = {{"ItemBriefcase50oz",1},{"ItemGoldBar10oz",5}};
		};
		class Crafting2 {
			text = $STR_EPOCH_PLAYER_200;
			script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemGoldBar10oz",1},{"ItemBriefcase40oz",1}};
			input[] = {{"ItemBriefcase50oz",1}};
		};
		class Crafting3 {
			text = $STR_EPOCH_PLAYER_201;
			script = ";['Crafting3','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemGoldBar10oz",5},{"ItemBriefcaseEmpty",1}};
			input[] = {{"ItemBriefcase50oz",1}};
		};
	};
};
class ItemBriefcase60oz: ItemBriefcase_Base {
	picture = "\z\addons\dayz_epoch\pictures\equip_briefcase_60oz_CA.paa";
	descriptionShort = $STR_EPOCH_BRIEFCASE_6X10OZGOLD;
	weight = 2.7;
	worth = 6000;
	class ItemActions {
		class Crafting {
			text = $STR_EPOCH_PLAYER_197;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemBriefcase70oz",1}};
			input[] = {{"ItemBriefcase60oz",1},{"ItemGoldBar10oz",1}};
		};
		class Crafting1 {
			text = $STR_EPOCH_PLAYER_206;
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemBriefcase100oz",1}};
			input[] = {{"ItemBriefcase60oz",1},{"ItemGoldBar10oz",4}};
		};
		class Crafting2 {
			text = $STR_EPOCH_PLAYER_200;
			script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemGoldBar10oz",1},{"ItemBriefcase50oz",1}};
			input[] = {{"ItemBriefcase60oz",1}};
		};
		class Crafting3 {
			text = $STR_EPOCH_PLAYER_201;
			script = ";['Crafting3','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemGoldBar10oz",6},{"ItemBriefcaseEmpty",1}};
			input[] = {{"ItemBriefcase60oz",1}};
		};
	};
};
class ItemBriefcase70oz: ItemBriefcase_Base {
	picture = "\z\addons\dayz_epoch\pictures\equip_briefcase_70oz_CA.paa";
	descriptionShort = $STR_EPOCH_BRIEFCASE_7X10OZGOLD;
	weight = 2.9;
	worth = 7000;
	class ItemActions {
		class Crafting {
			text = $STR_EPOCH_PLAYER_197;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemBriefcase80oz",1}};
			input[] = {{"ItemBriefcase70oz",1},{"ItemGoldBar10oz",1}};
		};
		class Crafting1 {
			text = $STR_EPOCH_PLAYER_207;
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemBriefcase100oz",1}};
			input[] = {{"ItemBriefcase70oz",1},{"ItemGoldBar10oz",3}};
		};
		class Crafting2 {
			text = $STR_EPOCH_PLAYER_200;
			script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemGoldBar10oz",1},{"ItemBriefcase60oz",1}};
			input[] = {{"ItemBriefcase70oz",1}};
		};
		class Crafting3 {
			text = $STR_EPOCH_PLAYER_201;
			script = ";['Crafting3','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemGoldBar10oz",7},{"ItemBriefcaseEmpty",1}};
			input[] = {{"ItemBriefcase70oz",1}};
		};
	};
};
class ItemBriefcase80oz: ItemBriefcase_Base {
	picture = "\z\addons\dayz_epoch\pictures\equip_briefcase_80oz_CA.paa";
	descriptionShort = $STR_EPOCH_BRIEFCASE_8X10OZGOLD;
	weight = 3.2;
	worth = 8000;
	class ItemActions {
		class Crafting {
			text = $STR_EPOCH_PLAYER_197;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemBriefcase90oz",1}};
			input[] = {{"ItemBriefcase80oz",1},{"ItemGoldBar10oz",1}};
		};
		class Crafting1 {
			text = $STR_EPOCH_PLAYER_208;
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemBriefcase100oz",1}};
			input[] = {{"ItemBriefcase80oz",1},{"ItemGoldBar10oz",2}};
		};
		class Crafting2 {
			text = $STR_EPOCH_PLAYER_200;
			script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemGoldBar10oz",1},{"ItemBriefcase70oz",1}};
			input[] = {{"ItemBriefcase80oz",1}};
		};
		class Crafting3 {
			text = $STR_EPOCH_PLAYER_201;
			script = ";['Crafting3','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemGoldBar10oz",8},{"ItemBriefcaseEmpty",1}};
			input[] = {{"ItemBriefcase80oz",1}};
		};
	};
};
class ItemBriefcase90oz: ItemBriefcase_Base {
	picture = "\z\addons\dayz_epoch\pictures\equip_briefcase_90oz_CA.paa";
	descriptionShort = $STR_EPOCH_BRIEFCASE_9X10OZGOLD;
	weight = 3.5;
	worth = 9000;
	class ItemActions {
		class Crafting {
			text = $STR_EPOCH_PLAYER_197;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemBriefcase100oz",1}};
			input[] = {{"ItemBriefcase90oz",1},{"ItemGoldBar10oz",1}};
		};
		class Crafting1 {
			text = $STR_EPOCH_PLAYER_200;
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemGoldBar10oz",1},{"ItemBriefcase80oz",1}};
			input[] = {{"ItemBriefcase90oz",1}};
		};
		class Crafting2 {
			text = $STR_EPOCH_PLAYER_201;
			script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemGoldBar10oz",9},{"ItemBriefcaseEmpty",1}};
			input[] = {{"ItemBriefcase90oz",1}};
		};
	};
};
class ItemBriefcase100oz: ItemBriefcase_Base {
	picture = "\z\addons\dayz_epoch\pictures\equip_briefcase_100oz_CA.paa";
	descriptionShort = $STR_EPOCH_BRIEFCASE_10X10OZGOLD;
	weight = 3.8;
	worth = 10000;
	class ItemActions {
		class Crafting {
			text = $STR_EPOCH_PLAYER_200;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemGoldBar10oz",1},{"ItemBriefcase90oz",1}};
			input[] = {{"ItemBriefcase100oz",1}};
		};
		class Crafting1 {
			text = $STR_EPOCH_PLAYER_201;
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemGoldBar10oz",10},{"ItemBriefcaseEmpty",1}};
			input[] = {{"ItemBriefcase100oz",1}};
		};
	};
};
// Silver
class ItemSilvercase_Base: ItemBriefcase_Base {
	model = "\z\addons\dayz_epoch\models\silvercase.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_briefcase_E_CA.paa";
};
class ItemBriefcaseS10oz: ItemSilvercase_Base {
	picture = "\z\addons\dayz_epoch\pictures\equip_silvercase_10oz_CA.paa";
	descriptionShort = $STR_EPOCH_BRIEFCASE_1X10OZSILVER;
	weight = 1.2;
	worth = 10;
	class ItemActions {
		class Crafting {
			text = $STR_EPOCH_PLAYER_S_197;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemBriefcaseS20oz",1}};
			input[] = {{"ItemBriefcaseS10oz",1},{"ItemSilverBar10oz",1}};
		};
		class Crafting1 {
			text = $STR_EPOCH_PLAYER_S_199;
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemBriefcaseS100oz",1}};
			input[] = {{"ItemBriefcaseS10oz",1},{"ItemSilverBar10oz",9}};
		};
		class Crafting2 {
			text = $STR_EPOCH_PLAYER_S_200;
			script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemSilverBar10oz",1},{"ItemBriefcaseEmpty",1}};
			input[] = {{"ItemBriefcaseS10oz",1}};
		};
	};
};
class ItemBriefcaseS20oz: ItemSilvercase_Base {
	picture = "\z\addons\dayz_epoch\pictures\equip_silvercase_20oz_CA.paa";
	descriptionShort = $STR_EPOCH_BRIEFCASE_2X10OZSILVER;
	weight = 1.5;
	worth = 20;
	class ItemActions {
		class Crafting {
			text = $STR_EPOCH_PLAYER_S_197;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemBriefcaseS30oz",1}};
			input[] = {{"ItemBriefcaseS20oz",1},{"ItemSilverBar10oz",1}};
		};
		class Crafting1 {
			text = $STR_EPOCH_PLAYER_S_202;
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemBriefcaseS100oz",1}};
			input[] = {{"ItemBriefcaseS20oz",1},{"ItemSilverBar10oz",8}};
		};
		class Crafting2 {
			text = $STR_EPOCH_PLAYER_S_200;
			script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemSilverBar10oz",1},{"ItemBriefcaseS10oz",1}};
			input[] = {{"ItemBriefcaseS20oz",1}};
		};
		class Crafting3 {
			text = $STR_EPOCH_PLAYER_201;
			script = ";['Crafting3','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemSilverBar10oz",2},{"ItemBriefcaseEmpty",1}};
			input[] = {{"ItemBriefcaseS20oz",1}};
		};
	};
};
class ItemBriefcaseS30oz: ItemSilvercase_Base {
	picture = "\z\addons\dayz_epoch\pictures\equip_silvercase_30oz_CA.paa";
	descriptionShort = $STR_EPOCH_BRIEFCASE_3X10OZSILVER;
	weight = 1.8;
	worth = 30;
	class ItemActions {
		class Crafting {
			text = $STR_EPOCH_PLAYER_S_197;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemBriefcaseS40oz",1}};
			input[] = {{"ItemBriefcaseS30oz",1},{"ItemSilverBar10oz",1}};
		};
		class Crafting1 {
			text = $STR_EPOCH_PLAYER_S_203;
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemBriefcaseS100oz",1}};
			input[] = {{"ItemBriefcaseS30oz",1},{"ItemSilverBar10oz",7}};
		};
		class Crafting2 {
			text = $STR_EPOCH_PLAYER_S_200;
			script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemSilverBar10oz",1},{"ItemBriefcaseS20oz",1}};
			input[] = {{"ItemBriefcaseS30oz",1}};
		};
		class Crafting3 {
			text = $STR_EPOCH_PLAYER_201;
			script = ";['Crafting3','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemSilverBar10oz",3},{"ItemBriefcaseEmpty",1}};
			input[] = {{"ItemBriefcaseS30oz",1}};
		};
	};
};
class ItemBriefcaseS40oz: ItemSilvercase_Base {
	picture = "\z\addons\dayz_epoch\pictures\equip_silvercase_40oz_CA.paa";
	descriptionShort = $STR_EPOCH_BRIEFCASE_4X10OZSILVER;
	weight = 2.1;
	worth = 40;
	class ItemActions {
		class Crafting {
			text = $STR_EPOCH_PLAYER_S_197;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemBriefcaseS50oz",1}};
			input[] = {{"ItemBriefcaseS40oz",1},{"ItemSilverBar10oz",1}};
		};
		class Crafting1 {
			text = $STR_EPOCH_PLAYER_S_204;
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemBriefcaseS100oz",1}};
			input[] = {{"ItemBriefcaseS40oz",1},{"ItemSilverBar10oz",6}};
		};
		class Crafting2 {
			text = $STR_EPOCH_PLAYER_S_200;
			script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemSilverBar10oz",1},{"ItemBriefcaseS30oz",1}};
			input[] = {{"ItemBriefcaseS40oz",1}};
		};
		class Crafting3 {
			text = $STR_EPOCH_PLAYER_201;
			script = ";['Crafting3','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemSilverBar10oz",4},{"ItemBriefcaseEmpty",1}};
			input[] = {{"ItemBriefcaseS40oz",1}};
		};
	};
};
class ItemBriefcaseS50oz: ItemSilvercase_Base {
	picture = "\z\addons\dayz_epoch\pictures\equip_silvercase_50oz_CA.paa";
	descriptionShort = $STR_EPOCH_BRIEFCASE_5X10OZSILVER;
	weight = 2.4;
	worth = 50;
	class ItemActions {
		class Crafting {
			text = $STR_EPOCH_PLAYER_S_197;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemBriefcaseS60oz",1}};
			input[] = {{"ItemBriefcaseS50oz",1},{"ItemSilverBar10oz",1}};
		};
		class Crafting1 {
			text = $STR_EPOCH_PLAYER_S_205;
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemBriefcaseS100oz",1}};
			input[] = {{"ItemBriefcaseS50oz",1},{"ItemSilverBar10oz",5}};
		};
		class Crafting2 {
			text = $STR_EPOCH_PLAYER_S_200;
			script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemSilverBar10oz",1},{"ItemBriefcaseS40oz",1}};
			input[] = {{"ItemBriefcaseS50oz",1}};
		};
		class Crafting3 {
			text = $STR_EPOCH_PLAYER_201;
			script = ";['Crafting3','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemSilverBar10oz",5},{"ItemBriefcaseEmpty",1}};
			input[] = {{"ItemBriefcaseS50oz",1}};
		};
	};
};
class ItemBriefcaseS60oz: ItemSilvercase_Base {
	picture = "\z\addons\dayz_epoch\pictures\equip_silvercase_60oz_CA.paa";
	descriptionShort = $STR_EPOCH_BRIEFCASE_6X10OZSILVER;
	weight = 2.7;
	worth = 60;
	class ItemActions {
		class Crafting {
			text = $STR_EPOCH_PLAYER_S_197;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemBriefcaseS70oz",1}};
			input[] = {{"ItemBriefcaseS60oz",1},{"ItemSilverBar10oz",1}};
		};
		class Crafting1 {
			text = $STR_EPOCH_PLAYER_S_206;
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemBriefcaseS100oz",1}};
			input[] = {{"ItemBriefcaseS60oz",1},{"ItemSilverBar10oz",4}};
		};
		class Crafting2 {
			text = $STR_EPOCH_PLAYER_S_200;
			script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemSilverBar10oz",1},{"ItemBriefcaseS50oz",1}};
			input[] = {{"ItemBriefcaseS60oz",1}};
		};
		class Crafting3 {
			text = $STR_EPOCH_PLAYER_201;
			script = ";['Crafting3','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemSilverBar10oz",6},{"ItemBriefcaseEmpty",1}};
			input[] = {{"ItemBriefcaseS60oz",1}};
		};
	};
};
class ItemBriefcaseS70oz: ItemSilvercase_Base {
	picture = "\z\addons\dayz_epoch\pictures\equip_silvercase_70oz_CA.paa";
	descriptionShort = $STR_EPOCH_BRIEFCASE_7X10OZSILVER;
	weight = 2.9;
	worth = 70;
	class ItemActions {
		class Crafting {
			text = $STR_EPOCH_PLAYER_S_197;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemBriefcaseS80oz",1}};
			input[] = {{"ItemBriefcaseS70oz",1},{"ItemSilverBar10oz",1}};
		};
		class Crafting1 {
			text = $STR_EPOCH_PLAYER_S_207;
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemBriefcaseS100oz",1}};
			input[] = {{"ItemBriefcaseS70oz",1},{"ItemSilverBar10oz",3}};
		};
		class Crafting2 {
			text = $STR_EPOCH_PLAYER_S_200;
			script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemSilverBar10oz",1},{"ItemBriefcaseS60oz",1}};
			input[] = {{"ItemBriefcaseS70oz",1}};
		};
		class Crafting3 {
			text = $STR_EPOCH_PLAYER_201;
			script = ";['Crafting3','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemSilverBar10oz",7},{"ItemBriefcaseEmpty",1}};
			input[] = {{"ItemBriefcaseS70oz",1}};
		};
	};
};
class ItemBriefcaseS80oz: ItemSilvercase_Base {
	picture = "\z\addons\dayz_epoch\pictures\equip_silvercase_80oz_CA.paa";
	descriptionShort = $STR_EPOCH_BRIEFCASE_8X10OZSILVER;
	weight = 3.2;
	worth = 80;
	class ItemActions {
		class Crafting {
			text = $STR_EPOCH_PLAYER_S_197;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemBriefcaseS90oz",1}};
			input[] = {{"ItemBriefcaseS80oz",1},{"ItemSilverBar10oz",1}};
		};
		class Crafting1 {
			text = $STR_EPOCH_PLAYER_S_208;
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemBriefcaseS100oz",1}};
			input[] = {{"ItemBriefcaseS80oz",1},{"ItemSilverBar10oz",2}};
		};
		class Crafting2 {
			text = $STR_EPOCH_PLAYER_S_200;
			script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemSilverBar10oz",1},{"ItemBriefcaseS70oz",1}};
			input[] = {{"ItemBriefcaseS80oz",1}};
		};
		class Crafting3 {
			text = $STR_EPOCH_PLAYER_201;
			script = ";['Crafting3','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemSilverBar10oz",8},{"ItemBriefcaseEmpty",1}};
			input[] = {{"ItemBriefcaseS80oz",1}};
		};
	};
};
class ItemBriefcaseS90oz: ItemSilvercase_Base {
	picture = "\z\addons\dayz_epoch\pictures\equip_silvercase_90oz_CA.paa";
	descriptionShort = $STR_EPOCH_BRIEFCASE_9X10OZSILVER;
	weight = 3.5;
	worth = 90;
	class ItemActions {
		class Crafting {
			text = $STR_EPOCH_PLAYER_S_197;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemBriefcaseS100oz",1}};
			input[] = {{"ItemBriefcaseS90oz",1},{"ItemSilverBar10oz",1}};
		};
		class Crafting1 {
			text = $STR_EPOCH_PLAYER_S_200;
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemSilverBar10oz",1},{"ItemBriefcaseS80oz",1}};
			input[] = {{"ItemBriefcaseS90oz",1}};
		};
		class Crafting2 {
			text = $STR_EPOCH_PLAYER_201;
			script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemSilverBar10oz",9},{"ItemBriefcaseEmpty",1}};
			input[] = {{"ItemBriefcaseS90oz",1}};
		};
	};
};
class ItemBriefcaseS100oz: ItemSilvercase_Base {
	picture = "\z\addons\dayz_epoch\pictures\equip_silvercase_100oz_CA.paa";
	descriptionShort = $STR_EPOCH_BRIEFCASE_10X10OZSILVER;
	weight = 3.8;
	worth = 100;
	class ItemActions {
		class Crafting {
			text = $STR_EPOCH_PLAYER_S_200;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemSilverBar10oz",1},{"ItemBriefcaseS90oz",1}};
			input[] = {{"ItemBriefcaseS100oz",1}};
		};
		class Crafting1 {
			text = $STR_EPOCH_PLAYER_201;
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemSilverBar10oz",10},{"ItemBriefcaseEmpty",1}};
			input[] = {{"ItemBriefcaseS100oz",1}};
		};
	};
};