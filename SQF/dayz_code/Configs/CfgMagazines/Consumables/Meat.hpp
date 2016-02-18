class FoodGoatRaw : FoodRaw
{
	scope = public;
	
	model = "\dayz_equip\models\food_steak_gear.p3d";
	picture = "\dayz_equip\textures\equip_steak_ca.paa";
	displayName = $STR_FOOD_NAME_GOAT_RAW;
	descriptionShort = $STR_FOOD_EQUIP_GOAT_RAW;
	
	bloodRegen = 300;
	Nutrition[] = {143,300,0,0};
	
	cookOutput = "FoodGoatCooked";
};

class FoodGoatCooked : FoodCooked
{
	scope = public;
	
	model = "\dayz_equip\models\food_steak_cooked_gear.p3d";
	picture = "\dayz_equip\textures\equip_steak_cooked_ca.paa";
	displayName = $STR_FOOD_NAME_GOAT_COOKED;
	descriptionShort = $STR_FOOD_EQUIP_GOAT_COOKED;
	
	bloodRegen = 600;
	Nutrition[] = {143,600,0,0};
};

class FoodMuttonRaw : FoodRaw
{
	scope = public;
	
	model = "z\addons\dayz_communityassets\models\mutton_raw.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_mutton_raw_CA.paa";
	displayName = $STR_FOOD_EQUIP_CODE_NAME_1;
	descriptionShort = $STR_FOOD_EQUIP_CODE_DESC_1;
	
	bloodRegen = 400;
	Nutrition[] = {294,350,0,0};
	
	cookOutput = "FoodMuttonCooked";
};

class FoodMuttonCooked : FoodCooked
{
	scope = public;
	
	model = "z\addons\dayz_communityassets\models\mutton_cooked.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_mutton_cooked_CA.paa";
	displayName = $STR_FOODCOOKED_EQUIP_CODE_NAME_1;
	descriptionShort = $STR_FOODCOOKED_EQUIP_CODE_DESC_1;
	
	bloodRegen = 800;
	Nutrition[] = {294,700,0,0};
};



class FoodChickenRaw : FoodRaw
{
	scope = public;
	
	model = "\dayz_equip\models\food_steak_gear.p3d";
	picture = "\dayz_equip\textures\equip_steak_ca.paa";
	displayName = $STR_FOOD_EQUIP_CODE_NAME_2;
	descriptionShort = $STR_FOOD_EQUIP_CODE_DESC_2;
	
	bloodRegen = 400;	
	Nutrition[] = {219,350,0,0};
	
	cookOutput = "FoodChickenCooked";
};

class FoodChickenCooked : FoodCooked
{
	scope = public;
	
	model = "\dayz_equip\models\food_steak_cooked_gear.p3d";
	picture = "\dayz_equip\textures\equip_steak_cooked_ca.paa";
	displayName = $STR_FOODCOOKED_EQUIP_CODE_NAME_2;
	descriptionShort = $STR_FOODCOOKED_EQUIP_CODE_DESC_2;
	
	bloodRegen = 800;
	Nutrition[] = {219,700,0,0};
};



class FoodBaconRaw : FoodRaw
{
	scope = public;
	
	model = "z\addons\dayz_communityassets\models\bacon_raw.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_bacon_raw_CA.paa";
	displayName = $STR_FOOD_EQUIP_CODE_NAME_4;
	descriptionShort = $STR_FOOD_EQUIP_CODE_DESC_4;
	
	bloodRegen = 300;
	Nutrition[] = {417,350,0,0};
	
	cookOutput = "FoodBaconCooked";
};

class FoodBaconCooked : FoodCooked
{
	scope = public;
	
	model = "z\addons\dayz_communityassets\models\bacon_fried.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_bacon_fried_CA.paa";
	displayName = $STR_FOODCOOKED_EQUIP_CODE_NAME_4;
	descriptionShort = $STR_FOODCOOKED_EQUIP_CODE_DESC_4;
	
	bloodRegen = 600;
	Nutrition[] = {417,700,0,0};
};



class FoodRabbitRaw : FoodRaw
{
	scope = public;
	
	model = "\dayz_equip\models\food_steak_gear.p3d";
	picture = "\dayz_equip\textures\equip_steak_ca.paa";
	displayName = $STR_FOOD_EQUIP_CODE_NAME_3;
	descriptionShort = $STR_FOOD_EQUIP_CODE_DESC_3;
	
	bloodRegen = 500;
	Nutrition[] = {517,450,0,0};
	
	cookOutput = "FoodRabbitCooked";
};

class FoodRabbitCooked : FoodCooked
{
	scope = public;
	
	model = "\dayz_equip\models\food_steak_cooked_gear.p3d";
	picture = "\dayz_equip\textures\equip_steak_cooked_ca.paa";
	displayName = $STR_FOODCOOKED_EQUIP_CODE_NAME_3;
	descriptionShort = $STR_FOODCOOKED_EQUIP_CODE_DESC_3;
	
	bloodRegen = 1000;
	Nutrition[] = {517,900,0,0};
};



class FoodBeefRaw : FoodRaw
{
	scope = public;
	
	model = "\dayz_equip\models\food_steak_gear.p3d";
	picture = "\dayz_equip\textures\equip_steak_ca.paa";
	displayName = $STR_FOOD_EQUIP_CODE_NAME_6;
	descriptionShort = $STR_FOOD_EQUIP_CODE_DESC_6;
	
	bloodRegen = 400;
	Nutrition[] = {332,350,0,0};
	
	cookOutput = "FoodBeefCooked";
};

class FoodBeefCooked : FoodCooked
{
	scope = public;
	
	model = "\dayz_equip\models\food_steak_cooked_gear.p3d";
	picture = "\dayz_equip\textures\equip_steak_cooked_ca.paa";
	displayName = $STR_FOODCOOKED_EQUIP_CODE_NAME_6;
	descriptionShort = $STR_FOODCOOKED_EQUIP_CODE_DESC_6;
	
	bloodRegen = 800;
	Nutrition[] = {332,700,0,0};
};