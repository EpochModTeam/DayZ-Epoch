class FoodBioMeat: FoodEdible {
	scope = public;
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
	class ItemActions
	{
		class Crafting
		{
		text = "Craft Pumpkin Seeds";
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
	displayName = "Bag of Sunflower Seeds";
	descriptionShort = "Bag of Sunflower Seeds";
	weight = 0.1;
	model = "z\addons\dayz_communityassets\models\pistachio.p3d"; // TODO: model + icon
	picture = "\z\addons\dayz_communityassets\pictures\equip_pistachios_CA.paa";
};