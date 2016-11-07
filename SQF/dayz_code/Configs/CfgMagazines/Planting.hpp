class ItemFertilizer: CA_Magazine {
	scope = public;
	count = 1;
	displayName = $STR_CRAFT_NAME_FERTILIZER;
	descriptionShort = $STR_CRAFT_DESC_FERTILIZER;
	weight = 0.1;
	model = "z\addons\dayz_communityassets\models\mre.p3d";	// TODO: model + icon
	picture = "\z\addons\dayz_communityassets\pictures\equip_mre_CA.paa";
	type = 256;
};

class ItemPumpkinSeed: CA_Magazine {
	scope = public;
	count = 1;
	displayName = $STR_CRAFT_NAME_PUMPKIN_SEED;
	descriptionShort = $STR_CRAFT_DESC_PUMPKIN_SEED;
	weight = 0.1;
	model = "\z\addons\dayz_epoch\models\doc_child1.p3d";	// TODO: model + icon
	picture = "\z\addons\dayz_epoch\pictures\equip_child1_ca.paa";
	type = 256;
	class ItemActions {
		class Crafting
		{
			text = "Craft Pumpkin Plant";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {""};
			requiretools[] = {"ItemKnife"};
			output[] = {{"ItemPumpkinPlant",1},{"ItemWaterbottleUnfilled",1}};
			input[] = {{"ItemPumpkinSeed",1},{"ItemFertilizer",1},{"ItemWaterbottle",1}};
		};
	};
};

class ItemPumpkinPlant: CA_Magazine {
	scope = public;
	count = 1;
	displayName = $STR_CRAFT_NAME_PUMPKIN_PLANT;
	descriptionShort = $STR_CRAFT_DESC_PUMPKIN_PLANT;
	weight = 0.1;
	model = "\z\addons\dayz_epoch\models\doc_child1.p3d";	// TODO: model + icon
	picture = "\z\addons\dayz_epoch\pictures\equip_child1_ca.paa";
	type = 256;
	class ItemActions {
		class Build {
			text = "Plant Pumpkin";
			buildText = "pumpkin plant";
			script = "spawn player_build;";
			require[] = {"ItemEtool"};
			create = "Grave";			// TODO: model for Pumpkin Stage 1
		};
	};
};

class ItemHempSeed: CA_Magazine {
	scope = public;
	count = 1;
	displayName = $STR_CRAFT_NAME_HEMP_SEED;
	descriptionShort = $STR_CRAFT_DESC_HEMP_SEED;
	weight = 0.1;
	model = "\z\addons\dayz_epoch\models\doc_child2.p3d";	// TODO: model + icon
	picture = "\z\addons\dayz_epoch\pictures\equip_child2_ca.paa";
	type = 256;
	class ItemActions {
		class Crafting
		{
			text = "Craft Hemp Plant";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {""};
			requiretools[] = {"ItemKnife"};
			output[] = {{"ItemHempPlant",1},{"ItemWaterbottleUnfilled",1}};
			input[] = {{"ItemHempSeed",1},{"ItemFertilizer",1},{"ItemWaterbottle",1}};
		};
	};
};

class ItemHempPlant: CA_Magazine {
	scope = public;
	count = 1;
	displayName = $STR_CRAFT_NAME_HEMP_PLANT;
	descriptionShort = $STR_CRAFT_DESC_HEMP_PLANT;
	weight = 0.1;
	model = "\z\addons\dayz_epoch\models\doc_child2.p3d";	// TODO: model + icon
	picture = "\z\addons\dayz_epoch\pictures\equip_child2_ca.paa";
	type = 256;
	class ItemActions {
		class Build {
			text = "Plant Hemp";
			buildText = "hemp plant";
			script = "spawn player_build;";
			require[] = {"ItemEtool"};
			create = "MAP_c_fern";			// TODO: model for Hemp Stage 1
		};
	};
};
