/*
Description:
Checks whether the player has the required items (magazines) or not
and displays a message if an item is missing.

Parameter(s):
_this: <array> list of item names the player is required to have (can also be an sub-array with item name and quantity)

Returns:
Boolean (true if the player has all required items)
    
How to use:
_hasItems = [["PartGeneric",4], "PartEngine", ["ItemGenerator"]] call player_checkItems;
*/
private ["_items","_inventory","_hasItems","_itemIn","_countIn","_qty","_missing","_missingQty","_textMissing"];
_items = _this;
_inventory = magazines player;
_hasItems = true;
{
	_itemIn = "";
	_countIn = 1;
	if (typeName _x == "ARRAY") then {
		if (count _x > 0) then {
			_itemIn = _x select 0;
			if (count _x > 1) then {
				_countIn = _x select 1;
			};
		};
	} else {
		_itemIn = _x;
	};
	if (_itemIn != "") then {
		_qty = { (_x == _itemIn) || (configName(inheritsFrom(configFile >> "cfgMagazines" >> _x)) == _itemIn) } count _inventory;
	} else {
		_qty = _countIn;
	};
	if (_qty < _countIn) exitWith {
		_missing = _itemIn;
		_missingQty = (_countIn - _qty);
		_hasItems = false;
		_textMissing = getText(configFile >> "CfgMagazines" >> _missing >> "displayName");
		format[localize "STR_EPOCH_ACTIONS_6",_missingQty,_textMissing] call dayz_rollingMessages;
	};
} forEach _items;
_hasItems
