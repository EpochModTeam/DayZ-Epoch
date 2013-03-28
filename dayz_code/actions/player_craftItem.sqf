/*
* Crafting by [VB]AWOL
* 	usage: spawn player_craftitem;
*/
private ["_onLadder","_canDo","_selectedRecipeOutput","_proceed","_itemIn","_countIn","_missing","_missingQty","_qty","_itemOut","_countOut","_started","_finished","_animState","_isMedic","_removed","_tobe_removed_total","_textCreate","_text","_id","_textMissing","_selectedRecipeInput"];

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

// temp array of removed parts 
_temp_removed_array = [];

_onLadder =		(getNumber (configFile >> "CfgMovesMaleSdr" >> "States" >> (animationState player) >> "onLadder")) == 1;
_canDo = (!r_drag_sqf and !r_player_unconscious and !_onLadder);

// reqire fire target
// TODO: add requirements to config. example: fire nearby, specific toolbelt items like toolbox.
_isFireNear = {inflamed _x} count (position player nearObjects 2);

diag_log format["Checking for fire: %1", _isFireNear];

if (_isFireNear >= 1 and _canDo) then {
	
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

		cutText ["Crafting started", "PLAIN DOWN"];
		
		player playActionNow "Medic";

		[player,"repair",0,false] call dayz_zombieSpeak;
		_id = [player,50,true,(getPosATL player)] spawn player_alertZombies;
			
		r_interrupt = false;
		_animState = animationState player;
		r_doLoop = true;
		_started = false;
		_finished = false;
	
		while {r_doLoop} do {
			_animState = animationState player;
			_isMedic = ["medic",_animState] call fnc_inString;
			if (_isMedic) then {
				_started = true;
			};
			if (_started and !_isMedic) then {
				r_doLoop = false;
				_finished = true;
			};
			if (r_interrupt) then {
				r_doLoop = false;
			};
			sleep 0.1;
		};
		r_doLoop = false;

		if (_finished) then {

			_removed_total = 0; // count total of removed items
			_tobe_removed_total = 0; // count total of all to be removed items
			// Take items
			{
				_removed = 0;
				_itemIn = _x select 0;
				_countIn = _x select 1;
				// diag_log format["Recipe Finish: %1 %2", _itemIn,_countIn];
				_tobe_removed_total = _tobe_removed_total + _countIn;

				{					
					if( (_removed < _countIn) && ((_x == _itemIn) || configName(inheritsFrom(configFile >> "cfgMagazines" >> _x)) == _itemIn)) then {
						_removed = _removed + ([player,_x] call BIS_fnc_invRemove);
						_removed_total = _removed_total + _removed;
						_temp_removed_array set [count _temp_removed_array,_x];
					};
				
				} forEach magazines player;
			
			} forEach _selectedRecipeInput;
		
			diag_log format["removed: %1 of: %2", _removed, _tobe_removed_total];

			// Only proceed if all parts were removed successfully
			if(_removed_total == _tobe_removed_total) then {

				// Put items
				{
					_itemOut = _x select 0;
					_countOut = _x select 1;
					diag_log format["Recipe Output: %1 %2", _itemOut,_countOut];
		
					for "_x" from 1 to _countOut do {
						player addMagazine _itemOut;
					};
					
					// get display name
					_textCreate = getText(configFile >> "CfgMagazines" >> _itemOut >> "displayName");

					// Add crafted item
					cutText [format["Crafted Item: %1 x %2",_textCreate,_countOut], "PLAIN DOWN"];
				
				} forEach _selectedRecipeOutput;

			} else {
				// Refund parts since we failed 
				{player addMagazine _x;} forEach _temp_removed_array;
				
				cutText [format["Missing Parts after first check Item: %1 / %2",_removed_total,_tobe_removed_total], "PLAIN DOWN"];
			};

		} else {
			r_interrupt = false;
			[objNull, player, rSwitchMove,""] call RE;
			player playActionNow "stop";
			cutText ["Canceled crafting.", "PLAIN DOWN"];
		};
		
	} else {
		_textMissing = getText(configFile >> "CfgMagazines" >> _missing >> "displayName");
		cutText [format["Missing %1 more of %2",_missingQty, _textMissing], "PLAIN DOWN"];
	};
} else {
	cutText ["Crafting needs a fire within 2 meters.", "PLAIN DOWN"];
};

TradeInprogress = false;