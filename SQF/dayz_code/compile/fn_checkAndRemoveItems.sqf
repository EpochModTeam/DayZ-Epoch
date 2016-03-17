private ["_items","_b"];
_items = _this;
_b = _items call player_checkItems;
if (_b) then {
	_b = _items call player_removeItems;
};
_b