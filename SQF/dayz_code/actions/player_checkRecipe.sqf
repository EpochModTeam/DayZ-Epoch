/*
	Created by Alby exclusively for DayZMod.
	Please request permission to use/alter from Alby.
*/

private ["_items","_counts","_config","_isRecipe","_item","_index","_amount","_count","_entry","_input","_array"];
disableSerialization;

_array = _this select 0;
_items = _array select 0;
_counts = _array select 1;
_overwrite = [];
_config = configFile >> "CfgCrafting";
//diag_log (str(_this));
//diag_log format["Items: %1    Counts: %2    Config: %3", _items, _counts, _config];
			
for "_i" from 0 to ((count _config) - 1) do {
	_entry = _config select _i;
	_input = getArray (_entry >> "input");
	//diag_log format["Recipe: %1    Input: %2", _entry, _input];
	if (count _input > 0) then {
		_isRecipe = true;
		_inputIndex = 0;
		
		{
			//Check to see if _x is array of arrays
			_inputItems = _x;
			if (typeName (_x select 0) != "ARRAY") then {
				_inputItems = [_x];
			};
			
			//Handles OR type of input
			{
				_item = _x select 0;
				_index = _items find _item;
				//diag_log format["Item: %1    Index: %2", _item, _index];
			
				if (_index > -1) then {
					_amount = _x select 2;
					_count = _counts select _index;
					//diag_log format["Amount: %1    Count: %2", _amount, _count];
				
					if (_count >= _amount) then { 
						if (count _inputItems > 1) then {
							_overwrite set [count _overwrite,[_inputIndex, [_item, _x select 1, _amount]]]; 
						};
						_isRecipe = true; 
					} else {
						_isRecipe = false;
					};
				} else {
					_isRecipe = false;
				};
				
				if (_isRecipe) exitWith {};
				
			}forEach _inputItems;
			
			if (!_isRecipe) exitWith {};
			
			_inputIndex = _inputIndex + 1;
		}forEach _input;
		
		if (_isRecipe) exitWith {
			//diag_log format["Items: %1    Recipe: %2", _this, _entry];
			[_entry, _overwrite] call player_craftItemGUI; 
		};
	};
};

//diag_log format["Exited with Items: %1", _array];