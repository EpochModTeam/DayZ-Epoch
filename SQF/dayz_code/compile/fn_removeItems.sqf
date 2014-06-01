/*
Description:
Removes the items (magazines) from the player's inventory
&& performs a double check for the required items.

Parameter(s):
_this: <array> list of item names to be removed (can also be an sub-array with item name && quantity)

Returns:
Boolean (true if all items have been removed from the player's inventory)
    
How to use:
_removed = [["PartGeneric",4], "PartEngine", ["ItemGenerator"]] call player_removeItems;
*/
private ["_items","_inventory","_temp_removed_array","_removed_total","_tobe_removed_total","_removed","_itemIn","_countIn","_num_removed"];
_items = _this;
_inventory = magazines player;
_temp_removed_array = [];
_removed_total = 0;
_tobe_removed_total = 0;
{
	_removed = 0;
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
		_tobe_removed_total = _tobe_removed_total + _countIn;
		{
			if ((_removed < _countIn) && ((_x == _itemIn) || configName(inheritsFrom(configFile >> "cfgMagazines" >> _x)) == _itemIn)) then {
				_num_removed = ([player,_x] call BIS_fnc_invRemove);
				_removed = _removed + _num_removed;
				_removed_total = _removed_total + _num_removed;
				if (_num_removed >= 1) then {
					_temp_removed_array set [count _temp_removed_array, _x];
				};
			};
		} forEach _inventory;
	};
} forEach _items;
// all parts removed
if (_tobe_removed_total == _removed_total) exitWith { true };
// missing parts
{ player addMagazine _x; } count _temp_removed_array;
cutText [format[(localize "STR_EPOCH_ACTIONS_5"), _removed_total, _tobe_removed_total], "PLAIN DOWN"];
false
