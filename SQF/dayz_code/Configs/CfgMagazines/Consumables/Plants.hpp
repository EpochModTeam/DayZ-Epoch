class equip_garlic_bulb : FoodEdible 
{
	scope = 2;
	count = 1;
	displayName = $STR_ITEM_NAME_equip_garlic_bulb;
	descriptionShort = $STR_ITEM_DESC_equip_garlic_bulb;
	model = "\z\addons\dayz_communityassets\models\herb_garlic_bulb.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_garlic_bulb_ca.paa";
	bloodRegen = 80;
};

class FoodPumpkin : FoodEdible 
{
	scope = 2;
	count = 1;
	bloodRegen = 100;
	displayName = $STR_FOOD_NAME_PUMPKIN;
	descriptionShort = $STR_FOOD_NAME_PUMPKIN;
	weight = 1;
	model = "\z\addons\dayz_epoch_w\items\veges\pumpkin.p3d";
	picture = "\dayz_epoch_c\icons\plants\pumpkin.paa";
	
	class ItemActions
	{
		class Consume
		{
			text = $STR_EAT_FOOD;
			script = "spawn player_consume";
		};
		class Crafting
		{
			text = $STR_FOOD_NAME_PUMPKIN_CRAFT;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {""};
			requiretools[] = {"ItemKnife"};
			output[] = {{"ItemPumpkinSeed",5}};
			input[] = {{"FoodPumpkin",1}};
		};
	};
};

class ItemPumpkinSeed: FoodEdible  
{
	scope = 2;
	count = 1;
	bloodRegen = 100;
	displayName = $STR_CRAFT_NAME_PUMPKIN_SEED;
	descriptionShort = $STR_CRAFT_DESC_PUMPKIN_SEED;
	model = "\z\addons\dayz_epoch_w\items\veges\seedbag_01.p3d";
	picture = "\dayz_epoch_c\icons\plants\pumpkinseeds.paa";
	type = 256;
};

class FoodSunFlowerSeed : FoodEdible 
{
	scope = 2;
	count = 1;
	bloodRegen = 100;
	displayName = $STR_FOOD_NAME_SUNFLOWER;
	descriptionShort = $STR_FOOD_NAME_SUNFLOWER;
	model = "\z\addons\dayz_epoch_w\items\veges\seedbag_01.p3d";
	picture = "\dayz_epoch_c\icons\plants\sunflowerseeds.paa";	
};

class FoodPotatoRaw : FoodRaw 
{
	scope = 2;
	count = 1;
	displayName = $STR_FOOD_NAME_POTATO;
	descriptionShort = $STR_FOOD_NAME_POTATO;
	model = "\z\addons\dayz_epoch_w\items\veges\dze_potato.p3d";
	picture = "\dayz_epoch_c\icons\plants\potato.paa";
	bloodRegen = 0;
	Nutrition[] = {0,0,0,0};
	cookOutput = "FoodPotatoBaked";	
};

class FoodPotatoBaked : FoodCooked 
{
	scope = 2;
	count = 1;
	displayName = $STR_FOOD_NAME_POTATO_BAKED;
	descriptionShort = $STR_FOOD_NAME_POTATO_BAKED;
	model = "\z\addons\dayz_epoch_w\items\veges\dze_potato_baked.p3d";
	picture = "\dayz_epoch_c\icons\plants\potatobaked.paa";
	bloodRegen = 200;
	Nutrition[] = {250,0,0,0};
};

class FoodCarrot : FoodCooked 
{
	scope = 2;
	count = 1;
	displayName = $STR_FOOD_NAME_CARROT;
	descriptionShort = $STR_FOOD_NAME_CARROT;
	model = "\z\addons\dayz_epoch_w\items\veges\dze_carrot.p3d";
	picture = "\dayz_epoch_c\icons\plants\carrot.paa";
	bloodRegen = 150;
	Nutrition[] = {120,0,0,0};	
};