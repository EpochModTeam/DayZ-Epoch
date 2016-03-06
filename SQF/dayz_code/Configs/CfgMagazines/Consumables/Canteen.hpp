class ItemCanteen : FoodDrink
{
	scope = public;
	
	model = "\dayz_equip\models\waterbottle_gear.p3d";
	picture = "\dayz_equip\textures\equip_waterbottle_ca.paa";
	displayName = $STR_ITEM_CANTEEN_NAME;
	descriptionShort = $STR_ITEM_CANTEEN_DESC;
	
	Nutrition[] = {0,0,1000,0};
	
	infectionChance = 0.3;
	
	consumeOutput = "ItemCanteenEmpty";
	
	containerEmpty = "ItemCanteenEmpty";
	
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

class ItemCanteenInfected : ItemCanteen
{
	infectionChance = 1;
};

class ItemCanteenSafe : ItemCanteen
{
	infectionChance = 0;
};

class ItemCanteenBoiled : ItemCanteen
{
	displayName = $STR_ITEM_CANTEEN_BOILED_NAME;
	
	infectionChance = 0;
 };

class ItemCanteenHerbal : ItemCanteen
{
	displayName = $STR_ITEM_CANTEEN_HERBAL_NAME;
	
	infectionChance = -0.5;
};