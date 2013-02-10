/*
* Crafting by [VB]AWOL
* 	usage: spawn player_craftitem;
*/
private["_recipe_ItemTinBar","_recipe_ItemAluminumBar","_recipe_FoodChickenNoodle","_recipe_FoodBeefBakedBeans","_item","_config","_create","_selectedRecipe","_recipe_","_proceed","_itemIn","_countIn","_missing","_missingQty","_qty"];

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
// ItemTinBar 
// FoodChickenNoodle
// FoodBeefBakedBeans
// ItemSalt

// ["reqires","fire"]


_recipe_ItemTinBar = [["TrashTinCan",6]];
_recipe_ItemAluminumBar = [["ItemSodaEmpty",6]];

_recipe_FoodChickenNoodle = [["FoodchickenRaw",1],["FoodCanPasta",1],["ItemWaterbottle",1]];
_recipe_FoodBeefBakedBeans = [["FoodbeefRaw",1],["FoodCanBakedBeans",1]];

//Add new item
_item = 	_this;
_config =	configFile >> "cfgMagazines" >> _item;
_create = 	getArray (_config >> "ItemActions" >> "Crafting" >> "output") select 0;

_selectedRecipe = call compile format["_recipe_%1;",_create];
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
	
	// Add crafted item
	player addMagazine _create;
	cutText [format["Crafted Item: %1",_create], "PLAIN DOWN"];
} else {
	cutText [format["Missing component: %1 x %2",_missing,_missingQty], "PLAIN DOWN"];
};
