/*
* Crafting by [VB]AWOL
* 	usage: spawn player_craftitem;
*/
private["_onLadder","_canDo","_recipe_ItemTinBar","_recipe_ItemAluminumBar","_recipe_ItemBronzeBar","_recipe_ItemGoldBar10oz","_recipe_ItemGoldBar","_recipe_FoodChickenNoodle","_recipe_FoodBeefBakedBeans","_item","_config","_create","_selectedRecipe","_recipe_","_selectedRecipeOutput","_proceed","_itemIn","_countIn","_missing","_missingQty","_qty","_itemOut","_countOut"];

if(TradeInprogress) exitWith { cutText ["Crafting already in progress." , "PLAIN DOWN"]; };
TradeInprogress = true;

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
"ItemSodaCokeEmpty",
"ItemSodaPepsiEmpty",

== community stuff Trash
"ItemSodaMdewEmpty",
"ItemSodaMtngreenEmpty",
"ItemSodaR4z0rEmpty",
"ItemSodaClaysEmpty",
"ItemSodaSmashtEmpty",.
"ItemSodaDrwasteEmpty",.
"ItemSodaLemonadeEmpty",.
"ItemSodaLvgEmpty",.
"ItemSodaMzlyEmpty",.
"ItemSodaRabbitEmpty"

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

// Removed metals:
// _recipe_ItemBronzeBar = [[["ItemBronzeBar",1] ],[["ItemCopperBar",3],["ItemTinBar",3]]];

// New item ideas:
// _recipe_FoodChickenNoodle = [["FoodchickenRaw",1],["FoodCanPasta",1],["ItemWaterbottle",1]];
// _recipe_FoodBeefBakedBeans = [["FoodbeefRaw",1],["FoodCanBakedBeans",1]];
// ItemSalt

_onLadder =		(getNumber (configFile >> "CfgMovesMaleSdr" >> "States" >> (animationState player) >> "onLadder")) == 1;
_canDo = (!r_drag_sqf and !r_player_unconscious and !_onLadder);

// reqire fire target
if (inflamed cursorTarget and _canDo) then {
	
	// Moved all recipes input and outputs to configs

	_selectedRecipeOutput = getArray (configFile >> "cfgMagazines" >> _this >> "ItemActions" >> "Crafting" >> "output");
	_selectedRecipeInput = getArray (configFile >> "cfgMagazines" >> _this >> "ItemActions" >> "Crafting" >> "input");
	
	diag_log format["Selected Recipe Input: %1", _selectedRecipeInput];
	diag_log format["Selected Recipe Output: %1", _selectedRecipeOutput];

	// Dry run to see if all parts are available.
	_proceed = true;
	{
		_itemIn = _x select 0;
		_countIn = _x select 1;
		
		diag_log format["Recipe Check: %1 %2", _itemIn,_countIn];
		
		// not neccessary
		//if (!(_itemIn in magazines player)) exitWith { _missing = _itemIn; _missingQty = _countIn; _proceed = false; };
		
		// match against class and parentClass 
		_qty = { (_x == _itemIn) || (configName(inheritsFrom(configFile >> "cfgMagazines" >> _x)) == _itemIn) } count magazines player;
			
		if(_qty < _countIn) exitWith { _missing = _itemIn; _missingQty = (_countIn - _qty); _proceed = false; };
	
	} forEach _selectedRecipeInput;

	// If all parts proceed
	if (_proceed) then {
		
		_removed = 0; // count total of removed items
		_tobe_removed_total = 0; // count total of all to be removed items
		// Take items
		{
			_itemIn = _x select 0;
			_countIn = _x select 1;
			diag_log format["Recipe Finish: %1 %2", _itemIn,_countIn];
			_tobe_removed_total = _tobe_removed_total + _countIn;

			{					
				if( (_removed < _countIn) && ((_x == _itemIn) || configName(inheritsFrom(configFile >> "cfgMagazines" >> _x)) == _itemIn)) then {
					
					// diag_log format["removing: %1 kindOf: %2", _x, _itemIn];
					
					// player removeMagazine _x;
					_removed = _removed + ([player,_x] call BIS_fnc_invRemove);
				};
				
			} forEach magazines player;
			
		} forEach _selectedRecipeInput;
		
		diag_log format["removing: %1 kindOf: %2", _removed, _tobe_removed_total];

		// Only proceed if all parts were removed successfully
		if(_removed == _tobe_removed_total) then {

			player playActionNow "Medic";
			sleep 1;
			[player,"repair",0,false] call dayz_zombieSpeak;
			_id = [player,50,true,(getPosATL player)] spawn player_alertZombies;
			sleep 5;

			// Put items
			{
				_itemOut = _x select 0;
				_countOut = _x select 1;
				diag_log format["Recipe Output: %1 %2", _itemOut,_countOut];
		
				for "_x" from 1 to _countOut do {
					player addMagazine _itemOut;
				};
		
			} forEach _selectedRecipeOutput;

			// get display name
			_textCreate = getText(configFile >> "CfgMagazines" >> _itemOut >> "displayName");

			// Add crafted item
			cutText [format["Crafted Item: %1 x %2",_textCreate,_countOut], "PLAIN DOWN"];

		} else {
			cutText [format["Missing Parts after first check Item: %1 / %2",_removed,_tobe_removed_total], "PLAIN DOWN"];
		};
		
	} else {
		_textMissing = getText(configFile >> "CfgMagazines" >> _missing >> "displayName");
		cutText [format["Missing %1 more of %2",_missingQty, _textMissing], "PLAIN DOWN"];
	};
} else {
	cutText ["You need to be looking at a fire to craft.", "PLAIN DOWN"];
};

TradeInprogress = false;