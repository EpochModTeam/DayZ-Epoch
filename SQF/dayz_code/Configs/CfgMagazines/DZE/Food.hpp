class FoodBioMeat: FoodEdible {
	scope = public;
	displayName = $STR_FOOD_NAME_BIOMEAT;
	model = "\z\addons\dayz_epoch\models\biomeat_can.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_biomeat_CA.paa";
	descriptionShort = $STR_FOOD_NAME_BIOMEAT_DESC;
	bloodRegen = 1600;
};
// new DZE harvested food
class FoodPumpkin : FoodEdible {
	scope = public;
	count = 1;
	bloodRegen = 100;
	displayName = $STR_FOOD_NAME_PUMPKIN;
	descriptionShort = $STR_FOOD_NAME_PUMPKIN;
	weight = 1;
	model = "z\addons\dayz_communityassets\models\pistachio.p3d"; // TODO: model + icon
	picture = "\z\addons\dayz_communityassets\pictures\equip_pistachios_CA.paa";
	class ItemActions
	{
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
class FoodSunFlowerSeed : FoodEdible {
	scope = public;
	count = 1;
	bloodRegen = 100;
	displayName = $STR_FOOD_NAME_SUNFLOWER;
	descriptionShort = $STR_FOOD_NAME_SUNFLOWER;
	weight = 0.1;
	model = "z\addons\dayz_communityassets\models\pistachio.p3d"; // TODO: model + icon
	picture = "\z\addons\dayz_communityassets\pictures\equip_pistachios_CA.paa";
};