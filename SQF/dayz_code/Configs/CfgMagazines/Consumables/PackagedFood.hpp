/*class AngelCookies : FoodPackaged
{
	scope = public;
	
	model = "z\addons\dayz_communityassets\models\buiscits_box.p3d";
	picture = "z\addons\dayz_communityassets\CraftingPlaceholders\equip_angel_cookies.paa";
	displayName = $STR_FOODCOOKED_EQUIP_CODE_NAME_5;
	descriptionShort = $STR_FOODCOOKED_EQUIP_CODE_DESC_5;
	
	Nutrition[] = {400,100,0,0};
};*/

class FoodMRE : FoodPackaged
{
	scope = public;
	
	model = "z\addons\dayz_communityassets\models\mre.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_mre_CA.paa";
	displayName = $STR_FOOD_NAME_MRE;
	descriptionShort = $STR_FOOD_DESC_MRE;
	
	bloodRegen = 300;
	Nutrition[] = {150,800,600,0};
};

class FoodPistachio : FoodPackaged
{
	scope = public;
	
	model = "z\addons\dayz_communityassets\models\pistachio.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_pistachios_CA.paa";
	displayName = $STR_FOOD_NAME_PISTACHIO;
	descriptionShort = $STR_FOOD_DESC_PISTACHIO;
	
	bloodRegen = 100;
	Nutrition[] = {0,450,0,0};
};
	
class FoodNutmix : FoodPackaged
{
	scope = public;
	
	model = "z\addons\dayz_communityassets\models\nutmix.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_nutmix_CA.paa";
	displayName = $STR_FOOD_NAME_NUTMIX;
	descriptionShort = $STR_FOOD_DESC_NUTMIX;
	
	bloodRegen = 100;
	Nutrition[] = {0,450,0,0};
};

class FoodCanBeef : FoodPackaged
{
	scope = public;
	
	model = "z\addons\dayz_communityassets\models\can_beef_clean_full.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_can_beef_clean_full_ca.paa";
	displayName = $STR_FOOD_NAME_CAN_BEEF;
	descriptionShort = $STR_FOOD_DESC_CAN_BEEF;
	
	bloodRegen = 100;
	Nutrition[] = {0,600,350,0};
	
	consumeOutput = "FoodCanBeefEmpty";
};

class FoodCanPotatoes : FoodPackaged
{
	scope = public;
	
	model = "z\addons\dayz_communityassets\models\can_pots_clean_full.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_can_pots_clean_full_ca.paa";
	displayName = $STR_FOOD_NAME_CAN_POTATOES;
	descriptionShort = $STR_FOOD_DESC_CAN_POTATOES;
	
	bloodRegen = 100;
	Nutrition[] = {0,750,450,0};
	
	consumeOutput = "FoodCanPotatoesEmpty";
};

class FoodCanGriff : FoodPackaged
{
	scope = public;
	
	model = "z\addons\dayz_communityassets\models\can_griff_clean_full.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_can_griff_clean_full_ca.paa";
	displayName = $STR_FOOD_NAME_CAN_GRIFF;
	descriptionShort = $STR_FOOD_DESC_CAN_GRIFF;
	
	bloodRegen = 100;
	Nutrition[] = {0,500,0,0};
	
	consumeOutput = "FoodCanGriffEmpty";
};

class FoodCanBadguy : FoodPackaged
{
	scope = public;
	
	model = "z\addons\dayz_communityassets\models\can_badguy_clean_full.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_can_badguy_clean_full_ca.paa";
	displayName = $STR_FOOD_NAME_CAN_BADGUY;
	descriptionShort = $STR_FOOD_DESC_CAN_BADGUY;
	
	bloodRegen = 100;
	Nutrition[] = {0,400,0,0};
	
	consumeOutput = "FoodCanBadguyEmpty";
};

class FoodCanBoneboy : FoodPackaged
{
	scope = public;
	
	model = "z\addons\dayz_communityassets\models\can_boneboy_clean_full.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_can_boneboy_clean_full_ca.paa";
	displayName = $STR_FOOD_NAME_CAN_BONEBOY;
	descriptionShort = $STR_FOOD_DESC_CAN_BONEBOY;
	
	bloodRegen = 100;
	Nutrition[] = {0,400,0,0};
	
	consumeOutput = "FoodCanBoneboyEmpty";
};

class FoodCanCorn : FoodPackaged
{
	scope = public;
	
	model = "z\addons\dayz_communityassets\models\can_corn_clean_full.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_can_corn_clean_full_ca.paa";
	displayName = $STR_FOOD_NAME_CAN_CORN;
	descriptionShort = $STR_FOOD_DESC_CAN_CORN;
	
	bloodRegen = 100;
	Nutrition[] = {0,600,400,0};
	
	consumeOutput = "FoodCanCornEmpty";
};

class FoodCanCurgon : FoodPackaged
{
	scope = public;
	
	model = "z\addons\dayz_communityassets\models\can_curgon_clean_full.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_can_curgon_clean_full_ca.paa";
	displayName = $STR_FOOD_NAME_CAN_CURGON;
	descriptionShort = $STR_FOOD_DESC_CAN_CURGON;
	
	bloodRegen = 100;
	Nutrition[] = {0,480,0,0};
	
	consumeOutput = "FoodCanCurgonEmpty";
};

class FoodCanDemon : FoodPackaged
{
	scope = public;
	
	model = "z\addons\dayz_communityassets\models\can_demon_clean_full.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_can_demon_clean_full_ca.paa";
	displayName = $STR_FOOD_NAME_CAN_DEMON;
	descriptionShort = $STR_FOOD_DESC_CAN_DEMON;
	
	bloodRegen = 100;
	Nutrition[] = {0,465,0,0};
	
	consumeOutput = "FoodCanDemonEmpty";
};

class FoodCanFraggleos : FoodPackaged
{
	scope = public;
	
	model = "z\addons\dayz_communityassets\models\can_fraggleos_clean_full.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_can_fraggleos_clean_full_ca.paa";
	displayName = $STR_FOOD_NAME_CAN_FRAGGLEOS;
	descriptionShort = $STR_FOOD_DESC_CAN_FRAGGLEOS;
	
	bloodRegen = 100;
	Nutrition[] = {0,550,0,0};
	
	consumeOutput = "FoodCanFraggleosEmpty";
};

class FoodCanHerpy : FoodPackaged
{
	scope = public;
	
	model = "z\addons\dayz_communityassets\models\can_herpy_clean_full.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_can_herpy_clean_full_ca.paa";
	displayName = $STR_FOOD_NAME_CAN_HERPY;
	descriptionShort = $STR_FOOD_DESC_CAN_HERPY;
	
	bloodRegen = 100;
	Nutrition[] = {0,600,0,0};
	
	consumeOutput = "FoodCanHerpyEmpty";
};

class FoodCanDerpy : FoodPackaged
{
	scope = public;
	
	model = "z\addons\dayz_communityassets\models\can_derpy_clean_full.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_can_derpy_clean_full_ca.paa";
	displayName = $STR_FOOD_NAME_CAN_DERPY;
	descriptionShort = $STR_FOOD_DESC_CAN_DERPY;
	
	bloodRegen = 100;
	Nutrition[] = {0,410,0,0};
	
	consumeOutput = "FoodCanDerpyEmpty";
};

class FoodCanOrlok : FoodPackaged
{
	scope = public;
	
	model = "z\addons\dayz_communityassets\models\can_orlok_clean_full.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_can_orlok_clean_full_ca.paa";
	displayName = $STR_FOOD_NAME_CAN_ORLOK;
	descriptionShort = $STR_FOOD_DESC_CAN_ORLOK;
	
	bloodRegen = 100;
	Nutrition[] = {0,460,0,0};
	
	consumeOutput = "FoodCanOrlokEmpty";
};

class FoodCanPowell : FoodPackaged
{
	scope = public;
	
	model = "z\addons\dayz_communityassets\models\can_powell_clean_full.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_can_powell_clean_full_ca.paa";
	displayName = $STR_FOOD_NAME_CAN_POWELL;
	descriptionShort = $STR_FOOD_DESC_CAN_POWELL;
	
	bloodRegen = 100;
	Nutrition[] = {0,600,0,0};
	
	consumeOutput = "FoodCanPowellEmpty";
};

class FoodCanTylers : FoodPackaged
{
	scope = public;
	
	model = "z\addons\dayz_communityassets\models\can_tylers_clean_full.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_can_tylers_clean_full_ca.paa";
	displayName = $STR_FOOD_NAME_CAN_TYLERS;
	descriptionShort = $STR_FOOD_DESC_CAN_TYLERS;
	
	bloodRegen = 100;
	Nutrition[] = {0,330,0,0};
	
	consumeOutput = "FoodCanTylersEmpty";
};

class FoodCanUnlabeled : FoodPackaged
{
	scope = public;
	
	model = "z\addons\dayz_communityassets\models\can_unlabeled_clean_full.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_can_unlabeled_clean_full_ca.paa";
	displayName = $STR_FOOD_NAME_CAN_UNLABELED;
	descriptionShort = $STR_FOOD_DESC_CAN_UNLABELED;
	
	bloodRegen = 100;
	Nutrition[] = {0,550,0,0};
	
	consumeOutput = "FoodCanUnlabeledEmpty";
};

class FoodCanRusUnlabeled : FoodPackaged
{
	scope = public;
	
	model = "z\addons\dayz_communityassets\models\can_small_unlabeled_full.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_can_small_rus_unlabeled_clean_full_ca.paa";
	displayName = $STR_FOOD_NAME_CAN_UNLABELED;
	descriptionShort = $STR_FOOD_DESC_CAN_UNLABELED;
	
	bloodRegen = 100;
	Nutrition[] = {0,450,0,0};
	
	consumeOutput = "FoodCanRusUnlabeledEmpty";
};

class FoodCanRusStew : FoodPackaged
{
	scope = public;
	
	model = "z\addons\dayz_communityassets\models\can_small_rus_stew_full.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_can_small_rus_stew_clean_full_ca.paa";
	displayName = $STR_FOOD_NAME_CAN_RUS_STEW;
	descriptionShort = $STR_FOOD_DESC_CAN_RUS_STEW;
	
	bloodRegen = 100;
	Nutrition[] = {0,700,350,0};
	
	consumeOutput = "FoodCanRusStewEmpty";
};

class FoodCanRusPork : FoodPackaged
{
	scope = public;
	
	model = "z\addons\dayz_communityassets\models\can_small_rus_pork_full.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_can_small_rus_pork_clean_full_ca.paa";
	displayName = $STR_FOOD_NAME_CAN_RUS_PORK;
	descriptionShort = $STR_FOOD_DESC_CAN_RUS_PORK;
	
	bloodRegen = 100;
	Nutrition[] = {0,700,350,0};
	
	consumeOutput = "FoodCanRusPorkEmpty";
};

class FoodCanRusPeas : FoodPackaged
{
	scope = public;
	
	model = "z\addons\dayz_communityassets\models\can_small_rus_peas_full.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_can_small_rus_peas_clean_full_ca.paa";
	displayName = $STR_FOOD_NAME_CAN_RUS_PEAS;
	descriptionShort = $STR_FOOD_DESC_CAN_RUS_PEAS;
	
	bloodRegen = 100;
	Nutrition[] = {0,450,0,0};
	
	consumeOutput = "FoodCanRusPeasEmpty";
};

class FoodCanRusMilk : FoodPackaged
{
	scope = public;
	
	model = "z\addons\dayz_communityassets\models\can_small_rus_milk_full.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_can_small_rus_milk_clean_full_ca.paa";
	displayName = $STR_FOOD_NAME_CAN_RUS_MILK;
	descriptionShort = $STR_FOOD_DESC_CAN_RUS_MILK;
	
	bloodRegen = 100;
	Nutrition[] = {0,380,320,0};
	
	consumeOutput = "FoodCanRusMilkEmpty";
};

class FoodCanRusCorn : FoodPackaged
{
	scope = public;
	
	model = "z\addons\dayz_communityassets\models\can_small_rus_corn_full.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_can_small_rus_corn_clean_full_ca.paa";
	displayName = $STR_FOOD_NAME_CAN_RUS_CORN;
	descriptionShort = $STR_FOOD_DESC_CAN_RUS_CORN;
	
	bloodRegen = 100;
	Nutrition[] = {0,380,0,0};
	
	consumeOutput = "FoodCanRusCornEmpty";
};

class FoodChipsSulahoops : FoodPackaged
{
	scope = public;
	
	model = "z\addons\dayz_communityassets\models\bag_chips_small_sulahoops_full.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_bag_chips_small_sulahoops_full_ca.paa";
	displayName = $STR_FOOD_NAME_CHIPS_SULAHOOPS;
	descriptionShort = $STR_FOOD_DESC_CHIPS_SULAHOOPS;
	
	bloodRegen = 100;
	Nutrition[] = {0,450,0,0};
	
	consumeOutput = "FoodChipsSulahoopsEmpty";
	consumeSound = "eat_chips";
};

class FoodChipsMysticales : FoodPackaged
{
	scope = public;
	
	model = "z\addons\dayz_communityassets\models\bag_chips_small_mysticales_full.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_bag_chips_small_mysticales_full_ca.paa";
	displayName = $STR_FOOD_NAME_CHIPS_MYSTICALES;
	descriptionShort = $STR_FOOD_DESC_CHIPS_MYSTICALES;
	
	bloodRegen = 100;
	Nutrition[] = {0,460,0,0};
	
	consumeOutput = "FoodChipsMysticalesEmpty";
	consumeSound = "eat_chips";
};

class FoodChipsChocolate : FoodPackaged
{
	scope = public;
	
	model = "z\addons\dayz_communityassets\models\bag_chips_small_chocolate_full.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_bag_chips_small_chocolate_full_ca.paa";
	displayName = $STR_FOOD_NAME_CHIPS_CHOCOLATE;
	descriptionShort = $STR_FOOD_DESC_CHIPS_CHOCOLATE;
	
	bloodRegen = 100;
	Nutrition[] = {300,500,0,0};
	
	consumeSound = "eat_chips";
};

class FoodCandyChubby : FoodPackaged
{
	scope = public;
	
	model = "z\addons\dayz_communityassets\models\candybar_chubby_full.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_candybar_chubby_full_ca.paa";
	displayName = $STR_FOOD_NAME_CANDY_CHUBBY;
	descriptionShort = $STR_FOOD_DESC_CANDY_CHUBBY;
	
	bloodRegen = 100;
	Nutrition[] = {0,400,0,0};
	
	//consumeSound = "eat_chips";
};

class FoodCandyAnders : FoodPackaged
{
	scope = public;
	
	model = "z\addons\dayz_communityassets\models\candybar_anders_full.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_candybar_anders_ca.paa";
	displayName = $STR_FOOD_NAME_CANDY_ANDERS;
	descriptionShort = $STR_FOOD_DESC_CANDY_ANDERS;
	
	bloodRegen = 100;
	Nutrition[] = {0,400,0,0};
	
	//consumeSound = "eat_chips";
};

class FoodCandyLegacys : FoodPackaged
{
	scope = public;
	
	model = "z\addons\dayz_communityassets\models\candybar_legacys_full.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_candybar_legacys_ca.paa";
	displayName = $STR_FOOD_NAME_CANDY_LEGACYS;
	descriptionShort = $STR_FOOD_DESC_CANDY_LEGACYS;
	
	bloodRegen = 100;
	Nutrition[] = {350,380,320,0};
	
	//consumeSound = "eat_chips";
};

class FoodCakeCremeCakeClean : FoodPackaged
{
	scope = public;
	
	model = "z\addons\dayz_communityassets\models\twinkie.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_bag_twinkie_clean.paa";
	displayName = $STR_FOOD_NAME_CAKE_Creme_Cake_CLEAN;
	descriptionShort = $STR_FOOD_DESC_CAKE_Creme_Cake_CLEAN;
	
	bloodRegen = 100;
	Nutrition[] = {350,380,320,0};
	
	//consumeSound = "eat_chips";
};

class FoodCandyMintception : FoodPackaged
{
	scope = public;
	
	model = "z\addons\dayz_communityassets\models\candybar_mintception_full.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_candybar_mintception_ca.paa";
	displayName = $STR_FOOD_NAME_CANDY_MINTCEPTION;
	descriptionShort = $STR_FOOD_DESC_CANDY_MINTCEPTION;
	
	bloodRegen = 100;
	Nutrition[] = {300,380,340,0};
	
	//consumeSound = "eat_chips";
};

/*class FoodCanLongSprats : FoodPackaged
{
	scope = public;
	
	model = "z\addons\dayz_communityassets\models\can_long_sprat_clean_full_co.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_can_long_sprat_clean_full_ca.paa";
	displayName = $STR_FOOD_NAME_CAN_LONG_SPRATS;
	descriptionShort = $STR_FOOD_DESC_CAN_LONG_SPRATS;
	
	bloodRegen = 100;
	Nutrition[] = {50,100,20,0};
};*/

class FoodCanBakedBeans : FoodPackaged
{
	scope = public;
	
	model = "\dayz_equip\models\food_bbtin.p3d";
	picture = "\dayz_equip\textures\equip_bbtin_ca.paa";
	displayName = $STR_EQUIP_NAME_26;
	descriptionShort = $STR_EQUIP_DESC_26;
	
	bloodRegen = 100;
	Nutrition[] = {0,400,320,0};
	
	consumeOutput = "FoodCanUnlabeledEmpty";
};

class FoodCanSardines : FoodPackaged
{
	scope = public;
	
	model = "\dayz_equip\models\food_sardinestin.p3d";
	picture = "\dayz_equip\textures\equip_Sardinestin_ca.paa";
	displayName = $STR_EQUIP_NAME_27;
	descriptionShort = $STR_EQUIP_DESC_27;
	
	bloodRegen = 100;
	Nutrition[] = {0,450,320,0};
	
	consumeOutput = "FoodCanUnlabeledEmpty";
};

class FoodCanFrankBeans : FoodPackaged
{
	scope = public;
	
	model = "\dayz_equip\models\food_fbtin.p3d";
	picture = "\dayz_equip\textures\equip_fbtin_ca.paa";
	displayName = $STR_EQUIP_NAME_28;
	descriptionShort = $STR_EQUIP_DESC_28;
	
	bloodRegen = 100;
	Nutrition[] = {0,450,320,0};
	
	consumeOutput = "FoodCanUnlabeledEmpty";
};

class FoodCanPasta : FoodPackaged
{
	scope = public;
	
	model = "\dayz_equip\models\food_pastatin.p3d";
	picture = "\dayz_equip\textures\equip_pastatin_ca.paa";
	displayName = $STR_EQUIP_NAME_29;
	descriptionShort = $STR_EQUIP_DESC_29;
	
	bloodRegen = 100;
	Nutrition[] = {0,500,0,0};
	
	consumeOutput = "FoodCanUnlabeledEmpty";
};
