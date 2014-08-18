class ItemFertilizer: CA_Magazine {
	scope = public;
	count = 1;
	displayName = "Fertilizer";
	descriptionShort = "Fertilizer";
	weight = 0.1;
	model = "z\addons\dayz_communityassets\models\mre.p3d";	// TODO: model + icon
	picture = "\z\addons\dayz_communityassets\pictures\equip_mre_CA.paa";
	type = 256;
};

class ItemPumpkinSeed: CA_Magazine {
	scope = public;
	count = 1;
	displayName = "A Pumpkin Seed";
	descriptionShort = "A Pumpkin Seed";
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
	displayName = "A Pumpkin Plant";
	descriptionShort = "A Pumpkin Plant";
	weight = 0.1;
	model = "\z\addons\dayz_epoch\models\doc_child1.p3d";	// TODO: model + icon
	picture = "\z\addons\dayz_epoch\pictures\equip_child1_ca.paa";
	type = 256;
	class ItemActions {
		class Build {
			text = "Plant Pumpkin";
			script = "spawn player_build;";
			require[] = {"ItemEtool"};
			create = "Grave";			// TODO: model for Pumpkin Stage 1
		};
	};
};

class ItemHempSeed: CA_Magazine {
	scope = public;
	count = 1;
	displayName = "A Hemp Seed";
	descriptionShort = "A Hemp Seed";
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
	displayName = "A Hemp Plant";
	descriptionShort = "A Hemp Plant";
	weight = 0.1;
	model = "\z\addons\dayz_epoch\models\doc_child2.p3d";	// TODO: model + icon
	picture = "\z\addons\dayz_epoch\pictures\equip_child2_ca.paa";
	type = 256;
	class ItemActions {
		class Build {
			text = "Plant Hemp";
			script = "spawn player_build;";
			require[] = {"ItemEtool"};
			create = "MAP_c_fern";			// TODO: model for Hemp Stage 1
		};
	};
};

class ItemKiloHemp : CA_Magazine {
	scope = public;
	count = 1;
	displayName = "Kilo of Hemp";
	descriptionShort = "Kilo of Hemp";
	weight = 1;
	model = "z\addons\dayz_epoch\models\kilohemp.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_kilohemp_CA.paa";
	type = 256;
	class ItemActions
	{
		class Crafting
		{
			text = $STR_EPOCH_PLAYER_269b;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox","ItemKnife"};
			output[] = {{"ItemCanvas",1}};
			input[] = {{"ItemKiloHemp",1}};
		};
		class Crafting1
		{
			text = "Craft Hemp Seeds";
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {""};
			requiretools[] = {"ItemKnife"};
			output[] = {{"ItemHempSeed",5}};
			input[] = {{"ItemKiloHemp",1}};
		};
	};
};

class ItemPoppySeed: CA_Magazine {
	scope = public;
	count = 1;
	displayName = "A Poppy Seed";
	descriptionShort = "A Poppy Seed";
	weight = 0.1;
	model = "\z\addons\dayz_epoch\models\doc_child2.p3d";	// TODO: model + icon
	picture = "\z\addons\dayz_epoch\pictures\equip_child2_ca.paa";
	type = 256;
	class ItemActions {
		class Crafting
		{
			text = "Craft Poppy Plant";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {""};
			requiretools[] = {"ItemKnife"};
			output[] = {{"ItemPoppyPlant",1},{"ItemWaterbottleUnfilled",1}};
			input[] = {{"ItemPoppySeed",1},{"ItemFertilizer",1},{"ItemWaterbottle",1}};
		};
	};
};

class ItemPoppyPlant: CA_Magazine {
	scope = public;
	count = 1;
	displayName = "A Poppy Plant";
	descriptionShort = "A Poppy Plant";
	weight = 0.1;
	model = "\z\addons\dayz_epoch\models\doc_child2.p3d";	// TODO: model + icon
	picture = "\z\addons\dayz_epoch\pictures\equip_child2_ca.paa";
	type = 256;
	class ItemActions {
		class Build {
			text = "Plant Poppy";
			script = "spawn player_build;";
			require[] = {"ItemEtool"};
			create = "papaver";			// TODO: model for Hemp Stage 1
		};
	};
};

class ItemPoppyTears: CA_Magazine {
	scope = public;
	count = 1;
	displayName = "Poppy Tears";
	descriptionShort = "Poppy Tears";
	weight = 0.1;
	model = "z\addons\dayz_epoch\models\kilohemp.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_kilohemp_CA.paa";
	type = 256;
	class ItemActions
	{
		class Crafting
		{
			text = "Craft Morphine Auto-Injector";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"fire"};
			requiretools[] = {"ItemKnife"};
			output[] = {{"ItemMorphine",1}};
			input[] = {{"ItemPoppyTears",2}};
		};
	};
};

class ItemWheatSeed: CA_Magazine {
	scope = public;
	count = 1;
	displayName = "A Wheat Seed";
	descriptionShort = "A Wheat Seed";
	weight = 0.1;
	model = "\z\addons\dayz_epoch\models\doc_child2.p3d";	// TODO: model + icon
	picture = "\z\addons\dayz_epoch\pictures\equip_child2_ca.paa";
	type = 256;
	class ItemActions {
		class Crafting
		{
			text = "Craft Wheat Plant";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {""};
			requiretools[] = {"ItemKnife"};
			output[] = {{"ItemWheatPlant",1},{"ItemWaterbottleUnfilled",1}};
			input[] = {{"ItemWheatSeed",1},{"ItemFertilizer",1},{"ItemWaterbottle",1}};
		};
	};
};

class ItemWheatPlant: CA_Magazine {
	scope = public;
	count = 1;
	displayName = "A Wheat Plant";
	descriptionShort = "A Wheat Plant";
	weight = 0.1;
	model = "\z\addons\dayz_epoch\models\doc_child2.p3d";	// TODO: model + icon
	picture = "\z\addons\dayz_epoch\pictures\equip_child2_ca.paa";
	type = 256;
	class ItemActions {
		class Build {
			text = "Plant Wheat";
			script = "spawn player_build;";
			require[] = {"ItemEtool"};
			create = "Wheat";			// TODO: model for Hemp Stage 1
		};
	};
};

class ItemWheatCereal: CA_Magazine {
	scope = public;
	count = 1;
	displayName = "Wheat Tears";
	descriptionShort = "Wheat Tears";
	weight = 0.1;
	model = "z\addons\dayz_epoch\models\kilohemp.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_kilohemp_CA.paa";
	type = 256;
};
