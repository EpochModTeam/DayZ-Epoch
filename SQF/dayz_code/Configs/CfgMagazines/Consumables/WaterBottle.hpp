class ItemWaterBottle : FoodDrink
{
	scope = 2;	
	model = "\dayz_equip\models\waterbottle_gear.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_waterbottle10oz_ca.paa";
	displayName = $STR_EQUIP_NAME_12;
	descriptionShort = $STR_EQUIP_DESC_12;
	
	Nutrition[] = {0,0,1000,0};
	
	infectionChance = 0.3;
	
	consumeOutput = "ItemWaterBottleUnfilled";
	
	containerEmpty = "ItemWaterBottleUnfilled";
	
	class ItemActions : ItemActions
	{
		class Consume : Consume	{};
		
		class Empty
		{
			text = $STR_EQUIP_NAME_13_EMPTY;
			script = "spawn player_emptyContainer";
		};
	};
	wateroz = 10; //Custom Epoch value
};

class ItemWaterBottleInfected : ItemWaterBottle
{
	infectionChance = 1;
};

class ItemWaterBottleSafe : ItemWaterBottle
{
	infectionChance = 0;
};

class ItemWaterBottleBoiled : ItemWaterBottle
{
	displayName = $STR_ITEMWATERBOTTLEBOILED_CODE_NAME;
	descriptionShort = $STR_ITEMWATERBOTTLEBOILED_CODE_DESC;	
	infectionChance = 0;
	
	class ItemActions
	{
		class Consume
		{
			text = $STR_ACTIONS_DRINK2;
			script = "spawn player_consume";
		};
		class Crafting
		{
			text = $STR_CRAFTING_HERBALDRINK;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemWaterBottleHerbal",1}};
			input[] = {{"equip_herb_box",1},{"ItemWaterBottleBoiled",1}};
		};
		class Empty
		{
			text = $STR_EQUIP_NAME_13_EMPTY;
			script = "spawn player_emptyContainer";
		};
	};	
 };

class ItemWaterBottleHerbal : ItemWaterBottle
{
	displayName = $STR_ITEM_NAME_HerbalDrink;
	descriptionShort = $STR_ITEM_DESC_HerbalDrink;	
	infectionChance = -0.5;
};

class ItemWaterBottleUnfilled : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;	
	model = "\dayz_equip\models\waterbottle_gear.p3d";
	picture = "\dayz_equip\textures\equip_waterbottle_empty_ca.paa";
	displayName = $STR_EQUIP_NAME_13;
	descriptionShort = $STR_EQUIP_DESC_13;	
	containerWater = "ItemWaterBottle";
	containerWaterSafe = "ItemWaterBottleSafe";
	containerWaterInfected = "ItemWaterBottleInfected";
	
	class ItemActions
	{
		class Fill
		{
			text = $STR_ACTIONS_FILL_W;
			script = "spawn player_fillWater;";
		};
	};
};

class ItemWaterBottleDmg : CA_Magazine //We don't have a damaged canteen image/model , so the regular bottle image is used for now
{
	scope = 2;
	count = 1;
	type = 256;	
	model = "\dayz_equip\models\waterbottle_gear.p3d";
	picture = "\dayz_equip\textures\equip_waterbottle_empty_ca.paa";
	displayName = $STR_ITEMWATERBOTTLEDMG_CODE_NAME;
	descriptionShort = $STR_ITEMWATERBOTTLEDMG_CODE_DESC;
	sfx = "bandage";
	
	class ItemActions
	{
		class Crafting 
		{
			text = $STR_ACTIONS_FIX_W;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemWaterbottleUnfilled",1}};
			input[] = {{"ItemWaterBottleDmg",1},{"equip_duct_tape",1}};
		};
	};
};

class ItemWaterbottle1oz : ItemWaterbottle 
{
	displayName = $STR_EPOCH_WATERBOTTLE1OZ;
	descriptionShort = $STR_EPOCH_WATERBOTTLE1OZ_DESC;
	picture = "\z\addons\dayz_epoch\pictures\equip_waterbottle_1oz_ca.paa";
	wateroz = 1;
	containerWater = "ItemWaterBottle";
	containerWaterSafe = "ItemWaterBottleSafe";
	containerWaterInfected = "ItemWaterBottleInfected";
	Nutrition[] = {0,0,100,0};
	infectionChance = 0.03;
	consumeOutput = "ItemWaterBottleUnfilled";
	containerEmpty = "ItemWaterBottleUnfilled";
	
	class ItemActions 
	{
		class Consume
		{
			text = $STR_ACTIONS_DRINK2;
			script = "spawn player_consume";
		};
		class Empty
		{
			text = $STR_EQUIP_NAME_13_EMPTY;
			script = "spawn player_emptyContainer";
		};
		class Fill 
		{
			text = "$STR_ACTIONS_FILL_W";
			script = "spawn player_fillWater;";
		};
	};
};
class ItemWaterbottle2oz : ItemWaterbottle 
{
	displayName = $STR_EPOCH_WATERBOTTLE2OZ;
	descriptionShort = $STR_EPOCH_WATERBOTTLE2OZ_DESC;
	picture = "\z\addons\dayz_epoch\pictures\equip_waterbottle_2oz_ca.paa";
	wateroz = 2;
	containerWater = "ItemWaterBottle";
	containerWaterSafe = "ItemWaterBottleSafe";
	containerWaterInfected = "ItemWaterBottleInfected";
	Nutrition[] = {0,0,200,0};
	infectionChance = 0.06;
	consumeOutput = "ItemWaterBottleUnfilled";
	containerEmpty = "ItemWaterBottleUnfilled";
	
	class ItemActions 
	{
		class Consume
		{
			text = $STR_ACTIONS_DRINK2;
			script = "spawn player_consume";
		};
		class Empty
		{
			text = $STR_EQUIP_NAME_13_EMPTY;
			script = "spawn player_emptyContainer";
		};
		class Fill 
		{
			text = "$STR_ACTIONS_FILL_W";
			script = "spawn player_fillWater;";
		};
	};

};
class ItemWaterbottle3oz : ItemWaterbottle 
{
	displayName = $STR_EPOCH_WATERBOTTLE3OZ;
	descriptionShort = $STR_EPOCH_WATERBOTTLE3OZ_DESC;
	picture = "\z\addons\dayz_epoch\pictures\equip_waterbottle_3oz_ca.paa";
	wateroz = 3;
	containerWater = "ItemWaterBottle";
	containerWaterSafe = "ItemWaterBottleSafe";
	containerWaterInfected = "ItemWaterBottleInfected";
	Nutrition[] = {0,0,300,0};
	infectionChance = 0.09;
	consumeOutput = "ItemWaterBottleUnfilled";
	containerEmpty = "ItemWaterBottleUnfilled";
	
	class ItemActions 
	{
		class Consume
		{
			text = $STR_ACTIONS_DRINK2;
			script = "spawn player_consume";
		};
		class Empty
		{
			text = $STR_EQUIP_NAME_13_EMPTY;
			script = "spawn player_emptyContainer";
		};
		class Fill 
		{
			text = "$STR_ACTIONS_FILL_W";
			script = "spawn player_fillWater;";
		};
	};

};
class ItemWaterbottle4oz : ItemWaterbottle 
{
	displayName = $STR_EPOCH_WATERBOTTLE4OZ;
	descriptionShort = $STR_EPOCH_WATERBOTTLE4OZ_DESC;
	picture = "\z\addons\dayz_epoch\pictures\equip_waterbottle_4oz_ca.paa";
	wateroz = 4;
	containerWater = "ItemWaterBottle";
	containerWaterSafe = "ItemWaterBottleSafe";
	containerWaterInfected = "ItemWaterBottleInfected";
	Nutrition[] = {0,0,400,0};
	infectionChance = 0.12;
	consumeOutput = "ItemWaterBottleUnfilled";
	containerEmpty = "ItemWaterBottleUnfilled";
	
	class ItemActions 
	{
		class Consume
		{
			text = $STR_ACTIONS_DRINK2;
			script = "spawn player_consume";
		};
		class Empty
		{
			text = $STR_EQUIP_NAME_13_EMPTY;
			script = "spawn player_emptyContainer";
		};
		class Fill 
		{
			text = "$STR_ACTIONS_FILL_W";
			script = "spawn player_fillWater;";
		};
	};

};
class ItemWaterbottle5oz : ItemWaterbottle 
{
	displayName = $STR_EPOCH_WATERBOTTLE5OZ;
	descriptionShort = $STR_EPOCH_WATERBOTTLE5OZ_DESC;
	picture = "\z\addons\dayz_epoch\pictures\equip_waterbottle_5oz_ca.paa";
	wateroz = 5;
	containerWater = "ItemWaterBottle";
	containerWaterSafe = "ItemWaterBottleSafe";
	containerWaterInfected = "ItemWaterBottleInfected";
	Nutrition[] = {0,0,500,0};
	infectionChance = 0.15;
	consumeOutput = "ItemWaterBottleUnfilled";
	containerEmpty = "ItemWaterBottleUnfilled";
	
	class ItemActions 
	{
		class Consume
		{
			text = $STR_ACTIONS_DRINK2;
			script = "spawn player_consume";
		};
		class Empty
		{
			text = $STR_EQUIP_NAME_13_EMPTY;
			script = "spawn player_emptyContainer";
		};
		class Fill 
		{
			text = "$STR_ACTIONS_FILL_W";
			script = "spawn player_fillWater;";
		};
	};

};
class ItemWaterbottle6oz : ItemWaterbottle 
{
	displayName = $STR_EPOCH_WATERBOTTLE6OZ;
	descriptionShort = $STR_EPOCH_WATERBOTTLE6OZ_DESC;
	picture = "\z\addons\dayz_epoch\pictures\equip_waterbottle_6oz_ca.paa";
	wateroz = 6;
	containerWater = "ItemWaterBottle";
	containerWaterSafe = "ItemWaterBottleSafe";
	containerWaterInfected = "ItemWaterBottleInfected";
	Nutrition[] = {0,0,600,0};
	infectionChance = 0.18;
	consumeOutput = "ItemWaterBottleUnfilled";
	containerEmpty = "ItemWaterBottleUnfilled";
	
	class ItemActions 
	{
		class Consume
		{
			text = $STR_ACTIONS_DRINK2;
			script = "spawn player_consume";
		};
		class Empty
		{
			text = $STR_EQUIP_NAME_13_EMPTY;
			script = "spawn player_emptyContainer";
		};
		class Fill 
		{
			text = "$STR_ACTIONS_FILL_W";
			script = "spawn player_fillWater;";
		};
	};

};
class ItemWaterbottle7oz : ItemWaterbottle 
{
	displayName = $STR_EPOCH_WATERBOTTLE7OZ;
	descriptionShort = $STR_EPOCH_WATERBOTTLE7OZ_DESC;
	picture = "\z\addons\dayz_epoch\pictures\equip_waterbottle_7oz_ca.paa";
	wateroz = 7;
	containerWater = "ItemWaterBottle";
	containerWaterSafe = "ItemWaterBottleSafe";
	containerWaterInfected = "ItemWaterBottleInfected";
	Nutrition[] = {0,0,700,0};
	infectionChance = 0.21;
	consumeOutput = "ItemWaterBottleUnfilled";
	containerEmpty = "ItemWaterBottleUnfilled";
	
	class ItemActions 
	{
		class Consume
		{
			text = $STR_ACTIONS_DRINK2;
			script = "spawn player_consume";
		};
		class Empty
		{
			text = $STR_EQUIP_NAME_13_EMPTY;
			script = "spawn player_emptyContainer";
		};
		class Fill 
		{
			text = "$STR_ACTIONS_FILL_W";
			script = "spawn player_fillWater;";
		};
	};
};
class ItemWaterbottle8oz : ItemWaterbottle 
{
	displayName = $STR_EPOCH_WATERBOTTLE8OZ;
	descriptionShort = $STR_EPOCH_WATERBOTTLE8OZ_DESC;
	picture = "\z\addons\dayz_epoch\pictures\equip_waterbottle_8oz_ca.paa";
	wateroz = 8;
	containerWater = "ItemWaterBottle";
	containerWaterSafe = "ItemWaterBottleSafe";
	containerWaterInfected = "ItemWaterBottleInfected";
	Nutrition[] = {0,0,800,0};
	infectionChance = 0.24;
	consumeOutput = "ItemWaterBottleUnfilled";
	containerEmpty = "ItemWaterBottleUnfilled";
	
	class ItemActions 
	{
		class Consume
		{
			text = $STR_ACTIONS_DRINK2;
			script = "spawn player_consume";
		};
		class Empty
		{
			text = $STR_EQUIP_NAME_13_EMPTY;
			script = "spawn player_emptyContainer";
		};
		class Fill 
		{
			text = "$STR_ACTIONS_FILL_W";
			script = "spawn player_fillWater;";
		};
	};

};
class ItemWaterbottle9oz : ItemWaterbottle 
{
	displayName = $STR_EPOCH_WATERBOTTLE9OZ;
	descriptionShort = $STR_EPOCH_WATERBOTTLE9OZ_DESC;
	picture = "\z\addons\dayz_epoch\pictures\equip_waterbottle_9oz_ca.paa";
	wateroz = 9;
	containerWater = "ItemWaterBottle";
	containerWaterSafe = "ItemWaterBottleSafe";
	containerWaterInfected = "ItemWaterBottleInfected";
	Nutrition[] = {0,0,900,0};
	infectionChance = 0.27;
	consumeOutput = "ItemWaterBottleUnfilled";
	containerEmpty = "ItemWaterBottleUnfilled";
	
	class ItemActions 
	{
		class Consume
		{
			text = $STR_ACTIONS_DRINK2;
			script = "spawn player_consume";
		};
		class Empty
		{
			text = $STR_EQUIP_NAME_13_EMPTY;
			script = "spawn player_emptyContainer";
		};
		class Fill 
		{
			text = "$STR_ACTIONS_FILL_W";
			script = "spawn player_fillWater;";
		};
	};
};

//inherit from ItemWaterbottle because that's how the crafting script checks required input
class ItemWaterbottle1ozBoiled : ItemWaterbottle 
{
	displayName = $STR_EPOCH_WATERBOTTLE1OZBOILED;
	descriptionShort = $STR_EPOCH_WATERBOTTLE1OZBOILED_DESC;
	infectionChance = 0;
	picture = "\z\addons\dayz_epoch\pictures\equip_waterbottle_1oz_ca.paa";
	wateroz = 1;
	containerWater = "ItemWaterBottle";
	containerWaterSafe = "ItemWaterBottleSafe";
	containerWaterInfected = "ItemWaterBottleInfected";
	Nutrition[] = {0,0,100,0};
	consumeOutput = "ItemWaterBottleUnfilled";
	containerEmpty = "ItemWaterBottleUnfilled";
	
	class ItemActions 
	{
		class Consume
		{
			text = $STR_ACTIONS_DRINK2;
			script = "spawn player_consume";
		};
		class Empty
		{
			text = $STR_EQUIP_NAME_13_EMPTY;
			script = "spawn player_emptyContainer";
		};
		class Fill 
		{
			text = "$STR_ACTIONS_FILL_W";
			script = "spawn player_fillWater;";
		};
	};
};
class ItemWaterbottle2ozBoiled : ItemWaterbottle 
{
	displayName = $STR_EPOCH_WATERBOTTLE2OZBOILED;
	descriptionShort = $STR_EPOCH_WATERBOTTLE2OZBOILED_DESC;
	infectionChance = 0;
	picture = "\z\addons\dayz_epoch\pictures\equip_waterbottle_2oz_ca.paa";
	wateroz = 2;
	containerWater = "ItemWaterBottle";
	containerWaterSafe = "ItemWaterBottleSafe";
	containerWaterInfected = "ItemWaterBottleInfected";
	Nutrition[] = {0,0,200,0};
	consumeOutput = "ItemWaterBottleUnfilled";
	containerEmpty = "ItemWaterBottleUnfilled";
	
	class ItemActions 
	{
		class Consume
		{
			text = $STR_ACTIONS_DRINK2;
			script = "spawn player_consume";
		};
		class Empty
		{
			text = $STR_EQUIP_NAME_13_EMPTY;
			script = "spawn player_emptyContainer";
		};
		class Fill
		{
			text = "$STR_ACTIONS_FILL_W";
			script = "spawn player_fillWater;";
		};
	};
};
class ItemWaterbottle3ozBoiled : ItemWaterbottle 
{
	displayName = $STR_EPOCH_WATERBOTTLE3OZBOILED;
	descriptionShort = $STR_EPOCH_WATERBOTTLE3OZBOILED_DESC;
	infectionChance = 0;
	picture = "\z\addons\dayz_epoch\pictures\equip_waterbottle_3oz_ca.paa";
	wateroz = 3;
	containerWater = "ItemWaterBottle";
	containerWaterSafe = "ItemWaterBottleSafe";
	containerWaterInfected = "ItemWaterBottleInfected";
	Nutrition[] = {0,0,300,0};
	consumeOutput = "ItemWaterBottleUnfilled";
	containerEmpty = "ItemWaterBottleUnfilled";
	
	class ItemActions 
	{
		class Consume
		{
			text = $STR_ACTIONS_DRINK2;
			script = "spawn player_consume";
		};
		class Empty
		{
			text = $STR_EQUIP_NAME_13_EMPTY;
			script = "spawn player_emptyContainer";
		};
		class Fill 
		{
			text = "$STR_ACTIONS_FILL_W";
			script = "spawn player_fillWater;";
		};
	};
};
class ItemWaterbottle4ozBoiled : ItemWaterbottle 
{
	displayName = $STR_EPOCH_WATERBOTTLE4OZBOILED;
	descriptionShort = $STR_EPOCH_WATERBOTTLE4OZBOILED_DESC;
	infectionChance = 0;
	picture = "\z\addons\dayz_epoch\pictures\equip_waterbottle_4oz_ca.paa";
	wateroz = 4;
	containerWater = "ItemWaterBottle";
	containerWaterSafe = "ItemWaterBottleSafe";
	containerWaterInfected = "ItemWaterBottleInfected";
	Nutrition[] = {0,0,400,0};
	consumeOutput = "ItemWaterBottleUnfilled";
	containerEmpty = "ItemWaterBottleUnfilled";
	
	class ItemActions 
	{
		class Consume
		{
			text = $STR_ACTIONS_DRINK2;
			script = "spawn player_consume";
		};
		class Empty
		{
			text = $STR_EQUIP_NAME_13_EMPTY;
			script = "spawn player_emptyContainer";
		};
		class Fill 
		{
			text = "$STR_ACTIONS_FILL_W";
			script = "spawn player_fillWater;";
		};
	};
};
class ItemWaterbottle5ozBoiled : ItemWaterbottle 
{
	displayName = $STR_EPOCH_WATERBOTTLE5OZBOILED;
	descriptionShort = $STR_EPOCH_WATERBOTTLE5OZBOILED_DESC;
	infectionChance = 0;
	picture = "\z\addons\dayz_epoch\pictures\equip_waterbottle_5oz_ca.paa";
	wateroz = 5;
	containerWater = "ItemWaterBottle";
	containerWaterSafe = "ItemWaterBottleSafe";
	containerWaterInfected = "ItemWaterBottleInfected";
	Nutrition[] = {0,0,500,0};
	consumeOutput = "ItemWaterBottleUnfilled";
	containerEmpty = "ItemWaterBottleUnfilled";
	
	class ItemActions 
	{
		class Consume
		{
			text = $STR_ACTIONS_DRINK2;
			script = "spawn player_consume";
		};
		class Empty
		{
			text = $STR_EQUIP_NAME_13_EMPTY;
			script = "spawn player_emptyContainer";
		};
		class Fill 
		{
			text = "$STR_ACTIONS_FILL_W";
			script = "spawn player_fillWater;";
		};
	};
};
class ItemWaterbottle6ozBoiled : ItemWaterbottle 
{
	displayName = $STR_EPOCH_WATERBOTTLE6OZBOILED;
	descriptionShort = $STR_EPOCH_WATERBOTTLE6OZBOILED_DESC;
	infectionChance = 0;
	picture = "\z\addons\dayz_epoch\pictures\equip_waterbottle_6oz_ca.paa";
	wateroz = 6;
	containerWater = "ItemWaterBottle";
	containerWaterSafe = "ItemWaterBottleSafe";
	containerWaterInfected = "ItemWaterBottleInfected";
	Nutrition[] = {0,0,600,0};
	consumeOutput = "ItemWaterBottleUnfilled";
	containerEmpty = "ItemWaterBottleUnfilled";
	
	class ItemActions 
	{
		class Consume
		{
			text = $STR_ACTIONS_DRINK2;
			script = "spawn player_consume";
		};
		class Empty
		{
			text = $STR_EQUIP_NAME_13_EMPTY;
			script = "spawn player_emptyContainer";
		};
		class Fill 
		{
			text = "$STR_ACTIONS_FILL_W";
			script = "spawn player_fillWater;";
		};
	};
};
class ItemWaterbottle7ozBoiled : ItemWaterbottle 
{
	displayName = $STR_EPOCH_WATERBOTTLE7OZBOILED;
	descriptionShort = $STR_EPOCH_WATERBOTTLE7OZBOILED_DESC;
	infectionChance = 0;
	picture = "\z\addons\dayz_epoch\pictures\equip_waterbottle_7oz_ca.paa";
	wateroz = 7;
	containerWater = "ItemWaterBottle";
	containerWaterSafe = "ItemWaterBottleSafe";
	containerWaterInfected = "ItemWaterBottleInfected";
	Nutrition[] = {0,0,700,0};
	consumeOutput = "ItemWaterBottleUnfilled";
	containerEmpty = "ItemWaterBottleUnfilled";
	
	class ItemActions 
	{
		class Consume
		{
			text = $STR_ACTIONS_DRINK2;
			script = "spawn player_consume";
		};
		class Empty
		{
			text = $STR_EQUIP_NAME_13_EMPTY;
			script = "spawn player_emptyContainer";
		};
		class Fill 
		{
			text = "$STR_ACTIONS_FILL_W";
			script = "spawn player_fillWater;";
		};
	};
};
class ItemWaterbottle8ozBoiled : ItemWaterbottle 
{
	displayName = $STR_EPOCH_WATERBOTTLE8OZBOILED;
	descriptionShort = $STR_EPOCH_WATERBOTTLE8OZBOILED_DESC;
	infectionChance = 0;
	picture = "\z\addons\dayz_epoch\pictures\equip_waterbottle_8oz_ca.paa";
	wateroz = 8;
	containerWater = "ItemWaterBottle";
	containerWaterSafe = "ItemWaterBottleSafe";
	containerWaterInfected = "ItemWaterBottleInfected";
	Nutrition[] = {0,0,800,0};
	consumeOutput = "ItemWaterBottleUnfilled";
	containerEmpty = "ItemWaterBottleUnfilled";
	
	class ItemActions 
	{
		class Consume
		{
			text = $STR_ACTIONS_DRINK2;
			script = "spawn player_consume";
		};
		class Empty
		{
			text = $STR_EQUIP_NAME_13_EMPTY;
			script = "spawn player_emptyContainer";
		};
		class Fill 
		{
			text = "$STR_ACTIONS_FILL_W";
			script = "spawn player_fillWater;";
		};
	};
};
class ItemWaterbottle9ozBoiled : ItemWaterbottle 
{
	displayName = $STR_EPOCH_WATERBOTTLE9OZBOILED;
	descriptionShort = $STR_EPOCH_WATERBOTTLE9OZBOILED_DESC;
	infectionChance = 0;
	picture = "\z\addons\dayz_epoch\pictures\equip_waterbottle_9oz_ca.paa";
	wateroz = 9;
	containerWater = "ItemWaterBottle";
	containerWaterSafe = "ItemWaterBottleSafe";
	containerWaterInfected = "ItemWaterBottleInfected";
	Nutrition[] = {0,0,900,0};
	consumeOutput = "ItemWaterBottleUnfilled";
	containerEmpty = "ItemWaterBottleUnfilled";
	
	class ItemActions 
	{
		class Consume
		{
			text = $STR_ACTIONS_DRINK2;
			script = "spawn player_consume";
		};
		class Empty
		{
			text = $STR_EQUIP_NAME_13_EMPTY;
			script = "spawn player_emptyContainer";
		};
		class Fill 
		{
			text = "$STR_ACTIONS_FILL_W";
			script = "spawn player_fillWater;";
		};
	};
};
