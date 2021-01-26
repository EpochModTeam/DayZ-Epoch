class ItemPlasticWaterbottleUnfilled : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;	
	model = "z\addons\dayz_communityassets\models\waterbottle.p3d";
	picture = "\dayz_epoch_c\icons\plasticwaterbottle\PETwaterbottleEmpty.paa";
	displayName = $STR_EQUIP_NAME_WBPET_01;
	descriptionShort = $STR_EQUIP_DESC_WBPET_01;
	
	containerWater = "ItemPlasticWaterbottle";
	containerWaterSafe = "ItemPlasticWaterbottleSafe";
	containerWaterInfected = "ItemPlasticWaterbottleInfected";
	
	class ItemActions
	{
		class Fill
		{
			text = $STR_ACTIONS_FILL_W;
			script = "spawn player_fillWater;";
		};
	};
};

class ItemPlasticWaterbottleDmg : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;	
	model = "z\addons\dayz_communityassets\models\waterbottle_damaged.p3d";
	picture = "\dayz_epoch_c\icons\plasticwaterbottle\PETwaterbottleDamaged.paa";
	displayName = $STR_EQUIP_NAME_WBPET_02;
	descriptionShort = $STR_EQUIP_DESC_WBPET_02;
	sfx = "bandage";
	
	class ItemActions
	{
		class Crafting 
		{
			text = $STR_ACTIONS_FIX_W;			
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemPlasticWaterbottleUnfilled",1}};
			input[] = {{"ItemPlasticWaterbottleDmg",1},{"equip_duct_tape",1}};
		};
	};
};

class ItemPlasticWaterBottle : ItemWaterBottle 
{
	scope = 2;
	model = "z\addons\dayz_communityassets\models\waterbottle.p3d";
	picture = "\dayz_epoch_c\icons\plasticwaterbottle\PETwaterbottle10oz.paa";
	displayName = $STR_EQUIP_NAME_WBPET_03;
	descriptionShort = $STR_EQUIP_DESC_WBPET_03;	
	Nutrition[] = {0,0,1000,0};	
	infectionChance = 0.3;	
	consumeOutput = "ItemPlasticWaterbottleUnfilled";	
	containerEmpty = "ItemPlasticWaterbottleUnfilled";
};

class ItemPlasticWaterBottleInfected : ItemWaterBottle
{
	model = "z\addons\dayz_communityassets\models\waterbottle.p3d";
	picture = "\dayz_epoch_c\icons\plasticwaterbottle\PETwaterbottle10oz.paa";
	infectionChance = 1;
	displayName = $STR_EQUIP_NAME_WBPET_03;
	descriptionShort = $STR_EQUIP_DESC_WBPET_03;	
	consumeOutput = "ItemPlasticWaterbottleUnfilled";	
	containerEmpty = "ItemPlasticWaterbottleUnfilled";
};

class ItemPlasticWaterBottleSafe : ItemWaterBottle
{
	model = "z\addons\dayz_communityassets\models\waterbottle.p3d";
	picture = "\dayz_epoch_c\icons\plasticwaterbottle\PETwaterbottle10oz.paa";
	infectionChance = 0;
	displayName = $STR_EQUIP_NAME_WBPET_03;
	descriptionShort = $STR_EQUIP_DESC_WBPET_03;	
	consumeOutput = "ItemPlasticWaterbottleUnfilled";	
	containerEmpty = "ItemPlasticWaterbottleUnfilled";
};

class ItemPlasticWaterBottleBoiled : ItemWaterBottle
{
	model = "z\addons\dayz_communityassets\models\waterbottle.p3d";
	picture = "\dayz_epoch_c\icons\plasticwaterbottle\PETwaterbottle10oz.paa";
	displayName = $STR_EQUIP_NAME_WBPET_04;
	descriptionShort = $STR_EQUIP_DESC_WBPET_04;	
	infectionChance = 0;
	consumeOutput = "ItemPlasticWaterbottleUnfilled";	
	containerEmpty = "ItemPlasticWaterbottleUnfilled";
	
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
			output[] = {{"ItemPlasticWaterBottleHerbal",1}};
			input[] = {{"equip_herb_box",1},{"ItemPlasticWaterBottleBoiled",1}};
		};
		class Empty
		{
			text = $STR_EQUIP_NAME_13_EMPTY;
			script = "spawn player_emptyContainer";
		};
	};	
};

class ItemPlasticWaterBottleHerbal : ItemWaterBottle
{
	model = "z\addons\dayz_communityassets\models\waterbottle.p3d";
	picture = "\dayz_epoch_c\icons\plasticwaterbottle\PETwaterbottle10oz.paa";
	displayName = $STR_EQUIP_NAME_WBPET_05;
	descriptionShort = $STR_EQUIP_DESC_WBPET_05;	
	infectionChance = -0.5;
	consumeOutput = "ItemPlasticWaterbottleUnfilled";	
	containerEmpty = "ItemPlasticWaterbottleUnfilled";
};

class ItemPlasticWaterbottle1oz : ItemWaterBottle 
{
	displayName = $STR_EPOCH_PET_WATERBOTTLE1OZ;
	descriptionShort = $STR_EPOCH_PET_WATERBOTTLE1OZ_DESC;
	model = "z\addons\dayz_communityassets\models\waterbottle.p3d";
	picture = "\dayz_epoch_c\icons\plasticwaterbottle\PETwaterbottle1oz.paa";
	wateroz = 1;
	containerWater = "ItemPlasticWaterbottle";
	containerWaterSafe = "ItemPlasticWaterbottleSafe";
	containerWaterInfected = "ItemPlasticWaterbottleInfected";
	Nutrition[] = {0,0,100,0};
	infectionChance = 0.03;
	consumeOutput = "ItemPlasticWaterbottleUnfilled";
	containerEmpty = "ItemPlasticWaterbottleUnfilled";
	
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
class ItemPlasticWaterbottle2oz : ItemWaterBottle 
{
	displayName = $STR_EPOCH_PET_WATERBOTTLE2OZ;
	descriptionShort = $STR_EPOCH_PET_WATERBOTTLE2OZ_DESC;
	model = "z\addons\dayz_communityassets\models\waterbottle.p3d";
	picture = "\dayz_epoch_c\icons\plasticwaterbottle\PETwaterbottle2oz.paa";
	wateroz = 2;
	containerWater = "ItemPlasticWaterbottle";
	containerWaterSafe = "ItemPlasticWaterbottleSafe";
	containerWaterInfected = "ItemPlasticWaterbottleInfected";
	Nutrition[] = {0,0,200,0};
	infectionChance = 0.06;
	consumeOutput = "ItemPlasticWaterbottleUnfilled";
	containerEmpty = "ItemPlasticWaterbottleUnfilled";
	
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
class ItemPlasticWaterbottle3oz : ItemWaterBottle 
{
	displayName = $STR_EPOCH_PET_WATERBOTTLE3OZ;
	descriptionShort = $STR_EPOCH_PET_WATERBOTTLE3OZ_DESC;
	model = "z\addons\dayz_communityassets\models\waterbottle.p3d";
	picture = "\dayz_epoch_c\icons\plasticwaterbottle\PETwaterbottle3oz.paa";
	wateroz = 3;
	containerWater = "ItemPlasticWaterbottle";
	containerWaterSafe = "ItemPlasticWaterbottleSafe";
	containerWaterInfected = "ItemPlasticWaterbottleInfected";
	Nutrition[] = {0,0,300,0};
	infectionChance = 0.09;
	consumeOutput = "ItemPlasticWaterbottleUnfilled";
	containerEmpty = "ItemPlasticWaterbottleUnfilled";
	
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
class ItemPlasticWaterbottle4oz : ItemWaterBottle 
{
	displayName = $STR_EPOCH_PET_WATERBOTTLE4OZ;
	descriptionShort = $STR_EPOCH_PET_WATERBOTTLE4OZ_DESC;
	model = "z\addons\dayz_communityassets\models\waterbottle.p3d";
	picture = "\dayz_epoch_c\icons\plasticwaterbottle\PETwaterbottle4oz.paa";
	wateroz = 4;
	containerWater = "ItemPlasticWaterbottle";
	containerWaterSafe = "ItemPlasticWaterbottleSafe";
	containerWaterInfected = "ItemPlasticWaterbottleInfected";
	Nutrition[] = {0,0,400,0};
	infectionChance = 0.12;
	consumeOutput = "ItemPlasticWaterbottleUnfilled";
	containerEmpty = "ItemPlasticWaterbottleUnfilled";
	
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
class ItemPlasticWaterbottle5oz : ItemWaterBottle 
{
	displayName = $STR_EPOCH_PET_WATERBOTTLE5OZ;
	descriptionShort = $STR_EPOCH_PET_WATERBOTTLE5OZ_DESC;
	model = "z\addons\dayz_communityassets\models\waterbottle.p3d";
	picture = "\dayz_epoch_c\icons\plasticwaterbottle\PETwaterbottle5oz.paa";
	wateroz = 5;
	containerWater = "ItemPlasticWaterbottle";
	containerWaterSafe = "ItemPlasticWaterbottleSafe";
	containerWaterInfected = "ItemPlasticWaterbottleInfected";
	Nutrition[] = {0,0,500,0};
	infectionChance = 0.15;
	consumeOutput = "ItemPlasticWaterbottleUnfilled";
	containerEmpty = "ItemPlasticWaterbottleUnfilled";
	
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
class ItemPlasticWaterbottle6oz : ItemWaterBottle 
{
	displayName = $STR_EPOCH_PET_WATERBOTTLE6OZ;
	descriptionShort = $STR_EPOCH_PET_WATERBOTTLE6OZ_DESC;
	model = "z\addons\dayz_communityassets\models\waterbottle.p3d";
	picture = "\dayz_epoch_c\icons\plasticwaterbottle\PETwaterbottle6oz.paa";
	wateroz = 6;
	containerWater = "ItemPlasticWaterbottle";
	containerWaterSafe = "ItemPlasticWaterbottleSafe";
	containerWaterInfected = "ItemPlasticWaterbottleInfected";
	Nutrition[] = {0,0,600,0};
	infectionChance = 0.18;
	consumeOutput = "ItemPlasticWaterbottleUnfilled";
	containerEmpty = "ItemPlasticWaterbottleUnfilled";
	
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
class ItemPlasticWaterbottle7oz : ItemWaterBottle 
{
	displayName = $STR_EPOCH_PET_WATERBOTTLE7OZ;
	descriptionShort = $STR_EPOCH_PET_WATERBOTTLE7OZ_DESC;
	model = "z\addons\dayz_communityassets\models\waterbottle.p3d";
	picture = "\dayz_epoch_c\icons\plasticwaterbottle\PETwaterbottle7oz.paa";
	wateroz = 7;
	containerWater = "ItemPlasticWaterbottle";
	containerWaterSafe = "ItemPlasticWaterbottleSafe";
	containerWaterInfected = "ItemPlasticWaterbottleInfected";
	Nutrition[] = {0,0,700,0};
	infectionChance = 0.21;
	consumeOutput = "ItemPlasticWaterbottleUnfilled";
	containerEmpty = "ItemPlasticWaterbottleUnfilled";
	
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
class ItemPlasticWaterbottle8oz : ItemWaterBottle 
{
	displayName = $STR_EPOCH_PET_WATERBOTTLE8OZ;
	descriptionShort = $STR_EPOCH_PET_WATERBOTTLE8OZ_DESC;
	model = "z\addons\dayz_communityassets\models\waterbottle.p3d";
	picture = "\dayz_epoch_c\icons\plasticwaterbottle\PETwaterbottle8oz.paa";
	wateroz = 8;
	containerWater = "ItemPlasticWaterbottle";
	containerWaterSafe = "ItemPlasticWaterbottleSafe";
	containerWaterInfected = "ItemPlasticWaterbottleInfected";
	Nutrition[] = {0,0,800,0};
	infectionChance = 0.24;
	consumeOutput = "ItemPlasticWaterbottleUnfilled";
	containerEmpty = "ItemPlasticWaterbottleUnfilled";
	
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
class ItemPlasticWaterbottle9oz : ItemWaterBottle 
{
	displayName = $STR_EPOCH_PET_WATERBOTTLE9OZ;
	descriptionShort = $STR_EPOCH_PET_WATERBOTTLE9OZ_DESC;
	model = "z\addons\dayz_communityassets\models\waterbottle.p3d";
	picture = "\dayz_epoch_c\icons\plasticwaterbottle\PETwaterbottle9oz.paa";
	wateroz = 9;
	containerWater = "ItemPlasticWaterbottle";
	containerWaterSafe = "ItemPlasticWaterbottleSafe";
	containerWaterInfected = "ItemPlasticWaterbottleInfected";
	Nutrition[] = {0,0,900,0};
	infectionChance = 0.27;
	consumeOutput = "ItemPlasticWaterbottleUnfilled";
	containerEmpty = "ItemPlasticWaterbottleUnfilled";
	
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

//inherit from ItemWaterBottle because that's how the crafting script checks required input
class ItemPlasticWaterbottle1ozBoiled : ItemWaterBottle 
{
	displayName = $STR_EPOCH_PET_WATERBOTTLE1OZBOILED;
	descriptionShort = $STR_EPOCH_PET_WATERBOTTLE1OZBOILED_DESC;
	infectionChance = 0;
	model = "z\addons\dayz_communityassets\models\waterbottle.p3d";
	picture = "\dayz_epoch_c\icons\plasticwaterbottle\PETwaterbottle1oz.paa";
	wateroz = 1;
	containerWater = "ItemPlasticWaterbottle";
	containerWaterSafe = "ItemPlasticWaterbottleSafe";
	containerWaterInfected = "ItemPlasticWaterbottleInfected";
	Nutrition[] = {0,0,100,0};
	consumeOutput = "ItemPlasticWaterbottleUnfilled";
	containerEmpty = "ItemPlasticWaterbottleUnfilled";
	
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
class ItemPlasticWaterbottle2ozBoiled : ItemWaterBottle 
{
	displayName = $STR_EPOCH_PET_WATERBOTTLE2OZBOILED;
	descriptionShort = $STR_EPOCH_PET_WATERBOTTLE2OZBOILED_DESC;
	infectionChance = 0;
	model = "z\addons\dayz_communityassets\models\waterbottle.p3d";
	picture = "\dayz_epoch_c\icons\plasticwaterbottle\PETwaterbottle2oz.paa";
	wateroz = 2;
	containerWater = "ItemPlasticWaterbottle";
	containerWaterSafe = "ItemPlasticWaterbottleSafe";
	containerWaterInfected = "ItemPlasticWaterbottleInfected";
	Nutrition[] = {0,0,200,0};
	consumeOutput = "ItemPlasticWaterbottleUnfilled";
	containerEmpty = "ItemPlasticWaterbottleUnfilled";
	
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
class ItemPlasticWaterbottle3ozBoiled : ItemWaterBottle 
{
	displayName = $STR_EPOCH_PET_WATERBOTTLE3OZBOILED;
	descriptionShort = $STR_EPOCH_PET_WATERBOTTLE3OZBOILED_DESC;
	infectionChance = 0;
	model = "z\addons\dayz_communityassets\models\waterbottle.p3d";
	picture = "\dayz_epoch_c\icons\plasticwaterbottle\PETwaterbottle3oz.paa";
	wateroz = 3;
	containerWater = "ItemPlasticWaterbottle";
	containerWaterSafe = "ItemPlasticWaterbottleSafe";
	containerWaterInfected = "ItemPlasticWaterbottleInfected";
	Nutrition[] = {0,0,300,0};
	consumeOutput = "ItemPlasticWaterbottleUnfilled";
	containerEmpty = "ItemPlasticWaterbottleUnfilled";
	
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
class ItemPlasticWaterbottle4ozBoiled : ItemWaterBottle 
{
	displayName = $STR_EPOCH_PET_WATERBOTTLE4OZBOILED;
	descriptionShort = $STR_EPOCH_PET_WATERBOTTLE4OZBOILED_DESC;
	infectionChance = 0;
	model = "z\addons\dayz_communityassets\models\waterbottle.p3d";
	picture = "\dayz_epoch_c\icons\plasticwaterbottle\PETwaterbottle4oz.paa";
	wateroz = 4;
	containerWater = "ItemPlasticWaterbottle";
	containerWaterSafe = "ItemPlasticWaterbottleSafe";
	containerWaterInfected = "ItemPlasticWaterbottleInfected";
	Nutrition[] = {0,0,400,0};
	consumeOutput = "ItemPlasticWaterbottleUnfilled";
	containerEmpty = "ItemPlasticWaterbottleUnfilled";
	
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
class ItemPlasticWaterbottle5ozBoiled : ItemWaterBottle 
{
	displayName = $STR_EPOCH_PET_WATERBOTTLE5OZBOILED;
	descriptionShort = $STR_EPOCH_PET_WATERBOTTLE5OZBOILED_DESC;
	infectionChance = 0;
	model = "z\addons\dayz_communityassets\models\waterbottle.p3d";
	picture = "\dayz_epoch_c\icons\plasticwaterbottle\PETwaterbottle5oz.paa";
	wateroz = 5;
	containerWater = "ItemPlasticWaterbottle";
	containerWaterSafe = "ItemPlasticWaterbottleSafe";
	containerWaterInfected = "ItemPlasticWaterbottleInfected";
	Nutrition[] = {0,0,500,0};
	consumeOutput = "ItemPlasticWaterbottleUnfilled";
	containerEmpty = "ItemPlasticWaterbottleUnfilled";
	
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
class ItemPlasticWaterbottle6ozBoiled : ItemWaterBottle 
{
	displayName = $STR_EPOCH_PET_WATERBOTTLE6OZBOILED;
	descriptionShort = $STR_EPOCH_PET_WATERBOTTLE6OZBOILED_DESC;
	infectionChance = 0;
	model = "z\addons\dayz_communityassets\models\waterbottle.p3d";
	picture = "\dayz_epoch_c\icons\plasticwaterbottle\PETwaterbottle6oz.paa";
	wateroz = 6;
	containerWater = "ItemPlasticWaterbottle";
	containerWaterSafe = "ItemPlasticWaterbottleSafe";
	containerWaterInfected = "ItemPlasticWaterbottleInfected";
	Nutrition[] = {0,0,600,0};
	consumeOutput = "ItemPlasticWaterbottleUnfilled";
	containerEmpty = "ItemPlasticWaterbottleUnfilled";
	
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
class ItemPlasticWaterbottle7ozBoiled : ItemWaterBottle 
{
	displayName = $STR_EPOCH_PET_WATERBOTTLE7OZBOILED;
	descriptionShort = $STR_EPOCH_PET_WATERBOTTLE7OZBOILED_DESC;
	infectionChance = 0;
	model = "z\addons\dayz_communityassets\models\waterbottle.p3d";
	picture = "\dayz_epoch_c\icons\plasticwaterbottle\PETwaterbottle7oz.paa";
	wateroz = 7;
	containerWater = "ItemPlasticWaterbottle";
	containerWaterSafe = "ItemPlasticWaterbottleSafe";
	containerWaterInfected = "ItemPlasticWaterbottleInfected";
	Nutrition[] = {0,0,700,0};
	consumeOutput = "ItemPlasticWaterbottleUnfilled";
	containerEmpty = "ItemPlasticWaterbottleUnfilled";
	
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
class ItemPlasticWaterbottle8ozBoiled : ItemWaterBottle 
{
	displayName = $STR_EPOCH_PET_WATERBOTTLE8OZBOILED;
	descriptionShort = $STR_EPOCH_PET_WATERBOTTLE8OZBOILED_DESC;
	infectionChance = 0;
	model = "z\addons\dayz_communityassets\models\waterbottle.p3d";
	picture = "\dayz_epoch_c\icons\plasticwaterbottle\PETwaterbottle8oz.paa";
	wateroz = 8;
	containerWater = "ItemPlasticWaterbottle";
	containerWaterSafe = "ItemPlasticWaterbottleSafe";
	containerWaterInfected = "ItemPlasticWaterbottleInfected";
	Nutrition[] = {0,0,800,0};
	consumeOutput = "ItemPlasticWaterbottleUnfilled";
	containerEmpty = "ItemPlasticWaterbottleUnfilled";
	
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
class ItemPlasticWaterbottle9ozBoiled : ItemWaterBottle 
{
	displayName = $STR_EPOCH_PET_WATERBOTTLE9OZBOILED;
	descriptionShort = $STR_EPOCH_PET_WATERBOTTLE9OZBOILED_DESC;
	infectionChance = 0;
	model = "z\addons\dayz_communityassets\models\waterbottle.p3d";
	picture = "\dayz_epoch_c\icons\plasticwaterbottle\PETwaterbottle9oz.paa";
	wateroz = 9;
	containerWater = "ItemPlasticWaterbottle";
	containerWaterSafe = "ItemPlasticWaterbottleSafe";
	containerWaterInfected = "ItemPlasticWaterbottleInfected";
	Nutrition[] = {0,0,900,0};
	consumeOutput = "ItemPlasticWaterbottleUnfilled";
	containerEmpty = "ItemPlasticWaterbottleUnfilled";
	
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