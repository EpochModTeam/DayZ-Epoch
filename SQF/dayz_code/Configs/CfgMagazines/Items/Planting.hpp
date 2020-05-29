class ItemFertilizer: CA_Magazine 
{
	scope = 2;
	count = 1;
	displayName = $STR_CRAFT_NAME_FERTILIZER;
	descriptionShort = $STR_CRAFT_DESC_FERTILIZER;
	picture = "\z\addons\dayz_epoch_w\magazine\ui\m_fertilizer_ca.paa";
    model = "\z\addons\dayz_epoch_w\magazine\dze_fertilizer.p3d";
	type = 256;
};

class ItemPumpkinSeed: CA_Magazine 
{
	scope = 2;
	count = 1;
	displayName = $STR_CRAFT_NAME_PUMPKIN_SEED;
	descriptionShort = $STR_CRAFT_DESC_PUMPKIN_SEED;
	model = "\z\addons\dayz_epoch\models\doc_child1.p3d";	// TODO: model + icon
	picture = "\z\addons\dayz_epoch\pictures\equip_child1_ca.paa";
	type = 256;
	
	class ItemActions 
	{
		class Crafting
		{
			text = $STR_CRAFT_PUMPKIN_PLANT;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {""};
			requiretools[] = {"ItemKnife"};
			output[] = {{"ItemPumpkinPlant",1},{"ItemWaterbottleUnfilled",1}};
			input[] = {{"ItemPumpkinSeed",1},{"ItemFertilizer",1},{"ItemWaterbottle",1}};
		};
	};
};

class ItemPumpkinPlant: CA_Magazine 
{
	scope = 2;
	count = 1;
	displayName = $STR_CRAFT_NAME_PUMPKIN_PLANT;
	descriptionShort = $STR_CRAFT_DESC_PUMPKIN_PLANT;
	model = "\z\addons\dayz_epoch\models\doc_child1.p3d";	// TODO: model + icon
	picture = "\z\addons\dayz_epoch\pictures\equip_child1_ca.paa";
	type = 256;
	
	class ItemActions 
	{
		class Build 
		{
			text = $STR_CRAFT_PLANT_PUMPKIN_PLANT;
			buildText = $STR_CRAFT_NAME_PUMPKIN_PLANT;
			script = "spawn player_build;";
			require[] = {"ItemEtool"};
			create = "Grave";			// TODO: model for Pumpkin Stage 1
		};
	};
};

class ItemHempSeed: CA_Magazine 
{
	scope = 2;
	count = 1;
	displayName = $STR_CRAFT_NAME_HEMP_SEED;
	descriptionShort = $STR_CRAFT_DESC_HEMP_SEED;
	model = "\z\addons\dayz_epoch\models\doc_child2.p3d";	// TODO: model + icon
	picture = "\z\addons\dayz_epoch\pictures\equip_child2_ca.paa";
	type = 256;
	
	class ItemActions
	{
		class Crafting
		{
			text = $STR_CRAFT_HEMP_PLANT;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {""};
			requiretools[] = {"ItemKnife"};
			output[] = {{"ItemHempPlant",1},{"ItemWaterbottleUnfilled",1}};
			input[] = {{"ItemHempSeed",1},{"ItemFertilizer",1},{"ItemWaterbottle",1}};
		};
	};
};

class ItemHempPlant: CA_Magazine 
{
	scope = 2;
	count = 1;
	displayName = $STR_CRAFT_NAME_HEMP_PLANT;
	descriptionShort = $STR_CRAFT_DESC_HEMP_PLANT;
	model = "\z\addons\dayz_epoch\models\doc_child2.p3d";	// TODO: model + icon
	picture = "\z\addons\dayz_epoch\pictures\equip_child2_ca.paa";
	type = 256;
	
	class ItemActions 
	{
		class Build 
		{
			text = $STR_CRAFT_PLANT_HEMP_PLANT;
			buildText = $STR_CRAFT_NAME_HEMP_PLANT;
			script = "spawn player_build;";
			require[] = {"ItemEtool"};
			create = "MAP_c_fern";			// TODO: model for Hemp Stage 1
		};
	};
};

class ItemKiloHemp : CA_Magazine
{
	scope = 2;
	count = 1;
	displayName = $STR_EPOCH_KILOOFHEMP;
	descriptionShort = $STR_EPOCH_KILOOFHEMP_DESC;
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
			text = $STR_EPOCH_PLAYER_269a;
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {""};
			requiretools[] = {"ItemKnife"};
			output[] = {{"ItemHempSeed",5}};
			input[] = {{"ItemKiloHemp",1}};
		};
	};
};

class ItemKiloTobacco : CA_Magazine
{
	scope = 2;
	count = 1;
	displayName = $STR_EPOCH_KILOTOBACCO;
	descriptionShort = $STR_EPOCH_KILOTOBACCO_DESC;
	model = "z\addons\dayz_epoch\models\kilohemp.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_kilohemp_CA.paa";
	type = 256;
};

class ItemKiloBlackTea : CA_Magazine
{
	scope = 2;
	count = 1;
	displayName = $STR_EPOCH_KILOBLACKTEA;
	descriptionShort = $STR_EPOCH_KILOBLACKTEA_DESC;
	model = "z\addons\dayz_epoch\models\kilohemp.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_kilohemp_CA.paa";
	type = 256;	
};

class ItemTobaccoLeafs : CA_Magazine
{
	scope = 2;
	count = 1;
	displayName = $STR_EPOCH_TOBACCO_LEAF;
	descriptionShort = $STR_EPOCH_TOBACCO_LEAF_DESC;
	model = "\z\addons\dayz_communityassets\models\comfrey.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_comfrey_CA.paa";
	type = 256;
};

class equip_comfreyleafs : CA_Magazine 
{
	scope = 2;
	count = 1;
	displayName = $STR_ITEM_NAME_equip_comfreyleafs;
	descriptionShort = $STR_ITEM_DESC_equip_comfreyleafs;
	model = "\z\addons\dayz_communityassets\models\comfrey.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_comfrey_CA.paa";
	type = 256;
};