class ItemWaterBottle : FoodDrink
{
	scope = public;
	
	model = "z\addons\dayz_communityassets\models\waterbottle.p3d";
	picture = "\z\addons\dayz_communityassets\textures\waterbottle.paa";
	displayName = $STR_EQUIP_NAME_12;
	descriptionShort = $STR_EQUIP_DESC_12;
	
	Nutrition[] = {0,0,1000,0};
	
	infectionChance = 0.3;
	
	consumeOutput = "ItemWaterBottleUnfilled";
	
	containerEmpty = "ItemWaterBottleUnfilled";
	
	class ItemActions : ItemActions
	{
		class Consume : Consume
		{
		};
		
		class Empty
		{
			text = "Empty";//TODO: move to stringtable
			script = "spawn player_emptyContainer";
		};
	};
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
 };

class ItemWaterBottleHerbal : ItemWaterBottle
{
	displayName = $STR_ITEM_NAME_HerbalDrink;
	descriptionShort = $STR_ITEM_DESC_HerbalDrink;
	
	infectionChance = -0.5;
};