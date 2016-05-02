class PartOre: CA_Magazine {
	scope = public;
	count = 1;
	type = 256;
	displayName = $STR_ORE_NAME_IRON;
	model = "\z\addons\dayz_epoch\models\iron_ore.p3d";
	picture="\z\addons\dayz_epoch\pictures\equip_iron_ore_CA.paa";
	descriptionShort = $STR_ORE_NAME_IRON_DESC;
	weight = 1;
	class ItemActions {
		class Crafting {
			text = $STR_EPOCH_PLAYER_265;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"fire"};
			requiretools[] = {"ItemSledge"};
			output[] = {{"PartGeneric",1},{"ItemWaterbottleUnfilled",1}};
			input[] = {{"PartOre",4},{"ItemWaterbottle",1}};
		};
	};
};
class PartOreSilver: CA_Magazine {
	scope = public;
	count = 1;
	type = 256;
	displayName = $STR_ORE_NAME_SILVER;
	model = "\z\addons\dayz_epoch\models\silver_ore.p3d";
	picture="\z\addons\dayz_epoch\pictures\equip_silver_ore_CA.paa";
	descriptionShort = $STR_ORE_DESC;
	weight = 1;
	class ItemActions {
		class Crafting {
			text = $STR_EPOCH_PLAYER_266;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"fire"};
			requiretools[] = {"ItemSledge"};
			output[] = {{"ItemSilverBar",1},{"ItemWaterbottleUnfilled",1}};
			input[] = {{"PartOreSilver",1},{"ItemWaterbottle",1}};
		};
	};
};
class PartOreGold: CA_Magazine {
	scope = public;
	count = 1;
	type = 256;
	displayName = $STR_ORE_NAME_GOLD;
	model = "\z\addons\dayz_epoch\models\gold_ore.p3d";
	picture="\z\addons\dayz_epoch\pictures\equip_gold_ore_CA.paa";
	descriptionShort = $STR_ORE_DESC;
	weight = 1;
	class ItemActions {
		class Crafting {
			text = $STR_EPOCH_PLAYER_267;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"fire"};
			requiretools[] = {"ItemSledge"};
			output[] = {{"ItemGoldBar",1},{"ItemWaterbottleUnfilled",1}};
			input[] = {{"PartOreGold",1},{"ItemWaterbottle",1}};
		};
	};
};