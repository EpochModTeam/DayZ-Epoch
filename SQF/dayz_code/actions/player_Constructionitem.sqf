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
_required = getArray (_config >> "toolsRequired");
_orignalClass = getText (_config >> "orignalclass");


//diag_log (str(_this));

if (count _overwrite > 0) then {
	{
		_index = _x select 0;
		_entry = _x select 1;
		_input set [_index, _entry];
	}forEach _overwrite;
};

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
	//sleep 1;

	if (_availabeSpace) then {
		player playActionNow "PutDown";

		//Hack to get craft menu to use build needs a good tidy up
		[_orignalClass,"Build","ItemActions"] spawn player_build; 
		r_action_count = r_action_count + 1; 
		
	};
};