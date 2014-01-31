class ItemBriefcase_Base: CA_Magazine {
	scope = 2;
	count = 1;
	type = 256;
	displayName = "Briefcase";
	model = "\z\addons\dayz_epoch\models\briefcase.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_briefcase_CA.paa";
};
class ItemBriefcaseEmpty: ItemBriefcase_Base {
	picture = "\z\addons\dayz_epoch\pictures\equip_briefcase_E_CA.paa";
	descriptionShort = "Empty Briefcase";
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
	};
};
class ItemBriefcase10oz: ItemBriefcase_Base {
	picture = "\z\addons\dayz_epoch\pictures\equip_briefcase_10oz_CA.paa";
	descriptionShort = "Briefcase (Contains: 1 x 10oz Gold Bar)";
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
	descriptionShort = "Briefcase (Contains: 2 x 10oz Gold Bar)";
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
	descriptionShort = "Briefcase (Contains: 3 x 10oz Gold Bar)";
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
	descriptionShort = "Briefcase (Contains: 4 x 10oz Gold Bar)";
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
	descriptionShort = "Briefcase (Contains: 5 x 10oz Gold Bar)";
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
	descriptionShort = "Briefcase (Contains: 6 x 10oz Gold Bar)";
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
	descriptionShort = "Briefcase (Contains: 7 x 10oz Gold Bar)";
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
	descriptionShort = "Briefcase (Contains: 8 x 10oz Gold Bar)";
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
	descriptionShort = "Briefcase (Contains: 9 x 10oz Gold Bar)";
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
	descriptionShort = "Briefcase (Contains: 10 x 10oz Gold Bar)";
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