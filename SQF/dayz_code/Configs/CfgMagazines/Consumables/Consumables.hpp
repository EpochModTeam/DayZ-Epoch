//All Consumable items base class
class ConsumableBase : CA_Magazine
{
	count = 1;
	type = 256;
	
	//Amount of blood regenerated
	bloodRegen = 0;
	
	//Nutrition values [Energy, Food, Water, Temperature]
	Nutrition[] = {0,0,0,0};
	
	//Chance to cause infection value range [-1,1]
	//	 0		has no effect
	//	 0.6	60% chance to cause infection
	//	-0.6	60% chance to cure infection
	infectionChance = 0;
	
	//Sound played when consumed
	consumeSound = "";
	consumeSoundDistance = 3;
	
	//Item replaced by when consumed
	consumeOutput = "";
	//Whether the output item is automatically dropped on consumption
	consumeDrop = false;
	
	class ItemActions
	{
		class Consume
		{
			text = $STR_EAT_FOOD;
			script = "spawn player_consume";
		};
	};
};

//Drink base class
class FoodDrink : ConsumableBase
{
	Nutrition[] = {150,0,0,0};
	
	consumeSound = "drink";
	
	class ItemActions : ItemActions
	{
		class Consume : Consume
		{
			text = $STR_ACTIONS_DRINK2;
		};
	};
};

//Edible food base class
class FoodEdible : ConsumableBase
{
	Nutrition[] = {239,150,0,0};
	
	consumeSound = "eat";
	
	class ItemActions : ItemActions
	{
		class Consume : Consume
		{
			text = $STR_EAT_FOOD;
		};
	};
};

//Prepackaged food base class
class FoodPackaged : FoodEdible
{
	consumeDrop = true;
};

//Fizzy drinks base class
class ItemSoda : FoodDrink
{
	Nutrition[] = {90,0,100,0};
	
	consumeSound = "soda";
	consumeOutput = "ItemSodaEmpty";
	consumeDrop = true;
};

//Raw food base class
class FoodRaw : FoodEdible
{
	bloodRegen = 200;
	Nutrition[] = {282,0,0,0};
	
	infectionChance = 0.7;
};

//Cooked food base class
class FoodCooked : FoodEdible
{
	bloodRegen = 400;
	Nutrition[] = {239,0,0,0};
};

#include "PackagedFood.hpp"
#include "Meat.hpp"
#include "Fish.hpp"
#include "Plants.hpp"

#include "Soda.hpp"
#include "WaterBottle.hpp"
#include "PlasticWaterbottle.hpp"

#include "Misc.hpp"