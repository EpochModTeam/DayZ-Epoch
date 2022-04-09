class FoodSteakWithPotatos : FoodCooked
{
	scope = 2;	
	model = "\z\addons\dayz_communityassets\models\plastic_box.p3d";
	picture = "\dayz_epoch_c\icons\equipment\steak_with_fries.paa";
	displayName = $STR_EQUIP_FOOD_NAME_STEAKWITHFRIES;
	descriptionShort = $STR_EQUIP_FOOD_DESC_STEAKWITHFRIES;	
	bloodRegen = 3200;
	Nutrition[] = {332,500,0,10};	
};

class FoodSushi : FoodCooked
{
	scope = 2;	
	model = "\z\addons\dayz_communityassets\models\plastic_box.p3d";
	picture = "\dayz_epoch_c\icons\equipment\suhsi.paa";
	displayName = $STR_EQUIP_FOOD_NAME_SUSHI;
	descriptionShort = $STR_EQUIP_FOOD_DESC_SUSHI;	
	bloodRegen = 3500;
	Nutrition[] = {332,600,20,5};	
};

class FoodPumpkinSoup : FoodCooked
{
	scope = 2;	
	model = "\z\addons\dayz_communityassets\models\plastic_box.p3d";
	picture = "\dayz_epoch_c\icons\equipment\pumpkin_soup.paa";
	displayName = $STR_EQUIP_FOOD_NAME_PUMPKINSOUP;
	descriptionShort = $STR_EQUIP_FOOD_DESC_PUMPKINSOUP;	
	bloodRegen = 1500;
	Nutrition[] = {332,150,300,20};	
};

class FoodCarrotSoup : FoodCooked
{
	scope = 2;	
	model = "\z\addons\dayz_communityassets\models\plastic_box.p3d";
	picture = "\dayz_epoch_c\icons\equipment\carrot_soup.paa";
	displayName = $STR_EQUIP_FOOD_NAME_CARROTSOUP;
	descriptionShort = $STR_EQUIP_FOOD_DESC_CARROTSOUP;	
	bloodRegen = 1500;
	Nutrition[] = {332,150,300,20};	
};

class FoodPotatoSoup : FoodCooked
{
	scope = 2;	
	model = "\z\addons\dayz_communityassets\models\plastic_box.p3d";
	picture = "\dayz_epoch_c\icons\equipment\potato_soup.paa";
	displayName = $STR_EQUIP_FOOD_NAME_POTATOSOUP;
	descriptionShort = $STR_EQUIP_FOOD_DESC_POTATOSOUP;	
	bloodRegen = 1500;
	Nutrition[] = {332,150,300,20};	
};

class FoodGarlicSoup : FoodCooked
{
	scope = 2;	
	model = "\z\addons\dayz_communityassets\models\plastic_box.p3d";
	picture = "\dayz_epoch_c\icons\equipment\garlic_soup.paa";
	displayName = $STR_EQUIP_FOOD_NAME_GARLICSOUP;
	descriptionShort = $STR_EQUIP_FOOD_DESC_GARLICSOUP;	
	bloodRegen = 1500;
	Nutrition[] = {332,150,300,20};	
};

class FoodVegetablePlate : FoodCooked
{
	scope = 2;	
	model = "\z\addons\dayz_communityassets\models\plastic_box.p3d";
	picture = "\dayz_epoch_c\icons\equipment\vegetable_plate.paa";
	displayName = $STR_EQUIP_FOOD_NAME_VEGYPLATE;
	descriptionShort = $STR_EQUIP_FOOD_DESC_VEGYPLATE;	
	bloodRegen = 2300;
	Nutrition[] = {500,400,20,5};	
};

class ItemHoneyTea : FoodDrink
{
	scope = 2;
	model = "\z\addons\dayz_communityassets\models\waterbottle.p3d";
	picture = "\dayz_epoch_c\icons\equipment\honeytea.paa";
	displayName = $STR_ITEM_HONEYTEA_NAME;
	descriptionShort = $STR_ITEM_HONEYTEA_DESC;	
	Nutrition[] = {200,0,320,20};	
	infectionChance = -1;
};

class ItemHoney : FoodPackaged
{
	scope = 2;
	model = "\z\addons\dayz_communityassets\models\plastic_box.p3d";
	picture = "\dayz_epoch_c\icons\equipment\honey.paa";
	displayName = $STR_EQUIP_FOOD_NAME_HONEYCOMB;
	descriptionShort = $STR_EQUIP_FOOD_DESC_HONEYCOMB;	
	Nutrition[] = {50,50,50,0};	
	bloodRegen = 175;
};