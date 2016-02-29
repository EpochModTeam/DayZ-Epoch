/*
	Created by Alby exclusively for DayZMod.
	Please request permission to use/alter from Alby.
*/

private["_config","_input","_output","_required","_failChance","_hasInput","_availabeSpace"];
disableSerialization;
["close"] call fn_updateCraftUI;

_config = _this select 0;
_overwrite = _this select 1;
_input = getArray (_config >> "input");
_output = getArray (_config >> "output");
_required = getArray (_config >> "required");
_failChance = getNumber (_config >> "failChance");
_nearByPile = nearestObjects [getPosATL player, ["SmallCraftTable_dz"], 3];

//diag_log (str(_this));

if (count _overwrite > 0) then {
	{
		_index = _x select 0;
		_entry = _x select 1;
		_input set [_index, _entry];
	}forEach _overwrite;
};

if (count _nearByPile > 0) then {
	//done from craftingtable (ground)
	//diag_log ("Table");
	_nearByTable = nearestObjects [getPosATL player, ["SmallCraftTable_dz"], 3];
    if (count _nearByTable > 0) then {
		_weaps = getWeaponCargo (_nearByTable select 0);
		_mags = getMagazineCargo (_nearByTable select 0);
		
		//Add Magazines
		_objMagTypes = _mags select 0;
		_objMagQty = _mags select 1;
		
		//diag_log format["%1, %2",_objMagTypes,_objMagQty];
		
		for "_i" from 0 to (count _objMagTypes - 1) do {
			_obj = _objMagTypes select _i;
			_index = [_return, _obj] call _inArray;

			//diag_log format["MagName: %1, %2",_obj,_index];
		};
		
		_hasInput = true;
	};
} else {
	//done from player inventory
	_hasInput = true;
	{
		private ["_avail"];
		_selection = _x select 1;
		_item = _x select 0;
		_amount = _x select 2;

		switch (_selection) do {
			case "CfgWeapons":
			{
				_avail = {_x == _item} count weapons player;
			};
			case "CfgMagazines":
			{
				_avail = {_x == _item} count magazines player;
			};
		};

		if (_avail < _amount) exitWith {
			_hasInput = false;
			_itemName = getText(configFile >> _selection >> _item >> "displayName");
			cutText [format [localize "str_crafting_missing",(_amount - _avail),_itemName], "PLAIN DOWN"];
		};
	} forEach (_input + _required);

	if (_hasInput) then {
		_freeSlots = [player] call BIS_fnc_invSlotsEmpty;
		{
			_item = _x select 0;
			_amount = _x select 2;
			_slotType = [_item] call BIS_fnc_invSlotType;
			for "_i" from 1 to _amount do {
				for "_j" from 1 to (count _slotType) do {
					if ((_slotType select _j) > 0) then {
						_freeSlots set[_j, ((_freeSlots select _j) + (_slotType select _j))];
					};
				};
			};
		} forEach _input;

		_availabeSpace = true;
		{
			_item = _x select 0;
			_amount = _x select 2;
			_slotType = [_item] call BIS_fnc_invSlotType;
			for "_i" from 1 to _amount do {
				for "_j" from 1 to (count _slotType) do {
					if ((_slotType select _j) > 0) then {
						_freeSlots set[_j, ((_freeSlots select _j) - (_slotType select _j))];
						if (_freeSlots select _j < 0) exitWith {
							_availabeSpace = false;
							cutText [localize "str_crafting_space", "PLAIN DOWN"];
						};
					};
				};
			};
		} forEach _output;
		//sleep 1;

		if (_availabeSpace) then {
			player playActionNow "PutDown";
			{
				_item = _x select 0;
				_amount = _x select 2;
				for "_i" from 1 to _amount do {
					_selection = _x select 1;
					switch (_selection) do {
						case "CfgWeapons":
						{
							player removeWeapon _item;
						};
						case "CfgMagazines":
						{
							player removeMagazine _item;
						};
					};
					//sleep 0.1;
				};
			} forEach _input;

			{
				_item = _x select 0;
				_selection = _x select 1;
				_amount = _x select 2;
				_itemName = getText(configFile >> _selection >> _item >> "displayName");
				for "_i" from 1 to _amount do {
					if (random 1 > _failChance) then {
						switch (_selection) do {
							case "CfgWeapons":
							{
								player addWeapon _item;
							};
							case "CfgMagazines":
							{
								player addMagazine _item;
							};
							case "CfgVehicles":
							{
								player addBackpack _item;
							};
						};
						cutText [format [localize "str_crafting_success",_itemName], "PLAIN DOWN"];
						//sleep 2;
					} else {
						cutText [format [localize "str_crafting_failed",_itemName], "PLAIN DOWN"];
						//sleep 2;
					};
				};
			} forEach _output;
		};
	};
};