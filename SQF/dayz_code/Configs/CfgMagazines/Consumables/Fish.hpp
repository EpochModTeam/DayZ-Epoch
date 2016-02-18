class FishRawTrout : FoodRaw
{
	scope = public;
	
	model = "\z\addons\dayz_communityassets\models\trout.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_trout_CA.paa";
	displayName = $STR_FOOD_NAME_TROUT_RAW;
	descriptionShort = $STR_FOOD_EQUIP_TROUT_RAW;
	
	bloodRegen = 500;
	Nutrition[] = {117,350,0,0};
	
	cookOutput = "FishCookedTrout";
};

class FishCookedTrout : FoodCooked
{
	scope = public;
	
	model = "\z\addons\dayz_communityassets\models\trout_cooked.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_trout_cooked_CA.paa";
	displayName = $STR_FOOD_NAME_TROUT_COOKED;
	descriptionShort = $STR_FOOD_EQUIP_TROUT_COOKED;
	
	bloodRegen = 1000;
	Nutrition[] = {117,700,0,0};
};



class FishRawSeaBass : FoodRaw
{
	scope = public;
	
	model = "\z\addons\dayz_communityassets\models\seabass.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_seabass_CA.paa";
	displayName = $STR_FOOD_NAME_SEABASS_RAW;
	descriptionShort = $STR_FOOD_EQUIP_SEABASS_RAW;
	
	bloodRegen = 700;
	Nutrition[] = {110,450,0,0};
	
	cookOutput = "FishCookedSeaBass";
};

class FishCookedSeaBass : FoodCooked
{
	scope = public;
	
	model = "\z\addons\dayz_communityassets\models\seabass_cooked.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_seabass_cooked_CA.paa";
	displayName = $STR_FOOD_NAME_SEABASS_COOKED;
	descriptionShort = $STR_FOOD_EQUIP_SEABASS_COOKED;
	
	bloodRegen = 1400;
	Nutrition[] = {110,900,0,0};
};



class FishRawTuna : FoodRaw
{
	scope = public;
	
	model = "\z\addons\dayz_communityassets\models\tuna.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_tuna_CA.paa";
	displayName = $STR_FOOD_NAME_TUNA_RAW;
	descriptionShort = $STR_FOOD_EQUIP_TUNA_RAW;
	
	bloodRegen = 1000;
	Nutrition[] = {123,550,0,0};
	
	cookOutput = "FishCookedTuna";
};

class FishCookedTuna : FoodCooked
{
	scope = public;
	
	model = "\z\addons\dayz_communityassets\models\tuna_cooked.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_tuna_cooked_CA.paa";
	displayName = $STR_FOOD_NAME_TUNA_COOKED;
	descriptionShort = $STR_FOOD_EQUIP_TUNA_COOKED;
	
	bloodRegen = 2000;
	Nutrition[] = {123,1100,0,0};
};