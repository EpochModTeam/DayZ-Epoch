/*
* Crafting by [VB]AWOL
* 	usage: spawn player_craftitem;
*/
private["_onLadder","_canDo","_recipe_ItemTinBar","_recipe_ItemAluminumBar","_recipe_ItemBronzeBar","_recipe_ItemGoldBar10oz","_recipe_ItemGoldBar","_recipe_FoodChickenNoodle","_recipe_FoodBeefBakedBeans","_item","_config","_create","_selectedRecipe","_recipe_","_selectedRecipeOutput","_proceed","_itemIn","_countIn","_missing","_missingQty","_qty","_itemOut","_countOut"];

// Recipes

// 6 Tin cans = Tin Bar
// 6 Aluminum cans = Aluminum Bar

/* 
== Canned Foods
"FoodCanBakedBeans",
"FoodCanSardines",
"FoodCanFrankBeans",
"FoodCanPasta",
"FoodBioMeat"

== Drinks
"ItemSodaCoke",
"ItemSodaPepsi",

== Trash
"TrashTinCan",
"TrashJackDaniels",
"ItemSodaEmpty",

== Raw Meats
"FoodSteakRaw",
"FoodmeatRaw",
"FoodbeefRaw",
"FoodmuttonRaw",
"FoodchickenRaw",
"FoodrabbitRaw",
"FoodbaconRaw"

== Cooked Meats
"FoodSteakCooked",
"FoodmeatCooked",
"FoodbeefCooked",
"FoodmuttonCooked",
"FoodchickenCooked",
"FoodrabbitCooked",
"FoodbaconCooked"
*/

// New items:
// FoodChickenNoodle
// FoodBeefBakedBeans
// ItemSalt

_onLadder =		(getNumber (configFile >> "CfgMovesMaleSdr" >> "States" >> (animationState player) >> "onLadder")) == 1;
_canDo = (!r_drag_sqf and !r_player_unconscious and !_onLadder);

// reqire fire target
if (inflamed cursorTarget and _canDo) then {

	
	_recipe_ItemTinBar = [
		[ ["ItemTinBar",1] ],
		[ ["TrashTinCan",6] ]
	];
	_recipe_ItemAluminumBar = [
		[ ["ItemAluminumBar",1] ],
		[ ["ItemSodaEmpty",6] ]
	];	
	_recipe_ItemBronzeBar = [
		[ ["ItemBronzeBar",1] ],
		[ ["ItemCopperBar",3],["ItemTinBar",3] ]
	];
	
	_recipe_ItemGoldBar10oz = [
		[ ["ItemGoldBar10oz",1] ],
		[ ["ItemGoldBar",10] ]
	];
	
	_recipe_ItemGoldBar = [
		[ ["ItemGoldBar",10] ],
		[ ["ItemGoldBar10oz",1] ]
	];

	_recipe_ItemSilverBar10oz = [
		[ ["ItemSilverBar10oz",1] ],
		[ ["ItemSilverBar",10] ]
	];
	
	_recipe_ItemSilverBar = [
		[ ["ItemSilverBar",10] ],
		[ ["ItemSilverBar10oz",1] ]
	];

	_recipe_ItemCopperBar10oz = [
		[ ["ItemCopperBar10oz",1] ],
		[ ["ItemCopperBar",10] ]
	];
	
	_recipe_ItemCopperBar = [
		[ ["ItemCopperBar",10] ],
		[ ["ItemCopperBar10oz",1] ]
	];

	_recipe_ItemTinBar10oz = [
		[ ["ItemTinBar10oz",1] ],
		[ ["ItemTinBar",10] ]
	];
	
	_recipe_ItemTinBar = [
		[ ["ItemTinBar",10] ],
		[ ["ItemTinBar10oz",1] ]
	];

	_recipe_ItemAluminumBar10oz = [
		[ ["ItemAluminumBar10oz",1] ],
		[ ["ItemAluminumBar",10] ]
	];
	
	_recipe_ItemAluminumBar = [
		[ ["ItemAluminumBar",10] ],
		[ ["ItemAluminumBar10oz",1] ]
	];


	
	
	_recipe_FoodChickenNoodle = [["FoodchickenRaw",1],["FoodCanPasta",1],["ItemWaterbottle",1]];
	_recipe_FoodBeefBakedBeans = [["FoodbeefRaw",1],["FoodCanBakedBeans",1]];

	//Add new item
	_item = 	_this;
	_config =	configFile >> "cfgMagazines" >> _item;
	_create = 	getArray (_config >> "ItemActions" >> "Crafting" >> "output") select 0;

	_selectedRecipeArray = call compile format["_recipe_%1;",_create];

	_selectedRecipeOutput = _selectedRecipeArray select 0;
	_selectedRecipe = _selectedRecipeArray select 1;

	diag_log format["Selected Recipe: %1", _selectedRecipe];

	_proceed = true;

	{
		_itemIn = _x select 0;
		_countIn = _x select 1;
		diag_log format["Recipe Check: %1 %2", _itemIn,_countIn];
	
		if (!(_itemIn in magazines player)) exitWith { _missing = _itemIn; _missingQty = _countIn; _proceed = false; };
	
		_qty = {_x == _itemIn} count magazines player;
	
		if(_qty < _countIn) exitWith { _missing = _itemIn; _missingQty = (_countIn - _qty); _proceed = false; };
	
	} forEach _selectedRecipe;

	if (_proceed) then {
	
		// Take items
		{
			_itemIn = _x select 0;
			_countIn = _x select 1;
			diag_log format["Recipe Finish: %1 %2", _itemIn,_countIn];
		
			for "_x" from 1 to _countIn do {
				player removeMagazine _itemIn;
			};
		
		} forEach _selectedRecipe;
	
		// Put items
		{
			_itemOut = _x select 0;
			_countOut = _x select 1;
			diag_log format["Recipe Output: %1 %2", _itemOut,_countOut];
		
			for "_x" from 1 to _countOut do {
				player addMagazine _itemOut;
			};
		
		} forEach _selectedRecipeOutput;

		// Add crafted item
		cutText [format["Crafted Item: %1",_create], "PLAIN DOWN"];
	} else {
		cutText [format["Missing component: %1 x %2",_missing,_missingQty], "PLAIN DOWN"];
	};
} else {
	cutText ["Crafting needs a fire", "PLAIN DOWN"];
};