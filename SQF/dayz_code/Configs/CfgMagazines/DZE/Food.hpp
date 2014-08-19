class ItemTrout : FoodEdible {
	scope = 2;
	displayName = "Rainbow Trout";
	descriptionShort = "Rainbow Trout: A small fish that can be fairly easy to catch.";
	model = "\z\addons\dayz_epoch\models\trout.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_rainbowtrout_CA.paa";
	bloodRegen = 400;
};
class ItemSeaBass : FoodEdible {
	scope = 2;
	displayName = "Sea Bass";
	descriptionShort = "Sea Bass: A medium sized fish that is fairly rare.";
	model = "\z\addons\dayz_epoch\models\seabass.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_seabass_CA.paa";
	bloodRegen = 800;
};
class ItemTuna : FoodEdible {
	scope = 2;
	displayName = "Blue Fin Tuna";
	descriptionShort = "Blue Fin Tuna: A very large and hard to catch fish. Sushi anyone?";
	model = "\z\addons\dayz_epoch\models\tuna.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_tuna_CA.paa";
	bloodRegen = 2500;
};
class ItemTroutCooked : FoodEdible {
	scope = 2;
	displayName = "Rainbow Trout (Cooked)";
	descriptionShort = "Rainbow Trout: A small fish that can be fairly easy to catch.";
	model = "\z\addons\dayz_epoch\models\trout_cooked.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_trout_cooked_CA.paa";
	bloodRegen = 800;
};
class ItemSeaBassCooked : FoodEdible {
	scope = 2;
	displayName = "Sea Bass (Cooked)";
	descriptionShort = "Sea Bass: A medium sized fish that is fairly rare.";
	model = "\z\addons\dayz_epoch\models\seabass_cooked.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_seabass_cooked_CA.paa";
	bloodRegen = 1600;
};
class ItemTunaCooked : FoodEdible {
	scope = 2;
	displayName = "Blue Fin Tuna (Cooked)";
	descriptionShort = "Blue Fin Tuna: A very large and hard to catch fish. Sushi anyone?";
	model = "\z\addons\dayz_epoch\models\tuna_cooked.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_tuna_cooked_CA.paa";
	bloodRegen = 5000;
};
class FoodBioMeat: FoodEdible {
	scope = 2;
	displayName = "Bio Meat";
	model = "\z\addons\dayz_epoch\models\biomeat_can.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_biomeat_CA.paa";
	descriptionShort = "Bio Meat: A very good source of nutrition, and a very high chance of infection. Eat at own risk.";
	bloodRegen = 1600;
};
// new DZE harvested food
class FoodPumpkin : FoodEdible {
	scope = public;
	count = 1;
	bloodRegen = 100;
	displayName = "Pumpkin";
	descriptionShort = "Pumpkin";
	weight = 1;
	model = "z\addons\dayz_communityassets\models\pistachio.p3d"; // TODO: model + icon
	picture = "\z\addons\dayz_communityassets\pictures\equip_pistachios_CA.paa";
};
class FoodSunFlowerSeed : FoodEdible {
	scope = public;
	count = 1;
	bloodRegen = 100;
	displayName = "Bag of Sunflower Seeds";
	descriptionShort = "Bag of Sunflower Seeds";
	weight = 0.1;
	model = "z\addons\dayz_communityassets\models\pistachio.p3d"; // TODO: model + icon
	picture = "\z\addons\dayz_communityassets\pictures\equip_pistachios_CA.paa";
};