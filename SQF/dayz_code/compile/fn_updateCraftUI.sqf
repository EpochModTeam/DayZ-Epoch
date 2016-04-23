/*
	Created by ziellos2k exclusively for DayZMod.
	Please request permission to use/alter from ziellos2k.

	Edited by Alby with permission from ziellos2k.
*/
disableSerialization;

_getItemName = {
	private ["_return","_classname"];
	_classname = _this select 0;
	_return = _classname;

	if (isClass (configFile >> "CfgWeapons" >> _classname)) then {
		if (isText (configFile >> "CfgWeapons" >> _classname >> "displayName")) then {
			_return = getText (configFile >> "CfgWeapons" >> _classname >> "displayName");
		};
	};

	if (isClass (configFile >> "CfgMagazines" >> _classname)) then {
		if (isText (configFile >> "CfgMagazines" >> _classname >> "displayName")) then {
			_return = getText (configFile >> "CfgMagazines" >> _classname >> "displayName");
		};
	};

	_return;
};

_getItemPicture = {
	private ["_return","_classname"];
	_classname = _this select 0;
	_return = _classname;

	if (isClass (configFile >> "CfgWeapons" >> _classname)) then {
		_return = getText (configFile >> "CfgWeapons" >> _classname >> "picture");
	};

	if (isClass (configFile >> "CfgMagazines" >> _classname)) then {
		_return = getText (configFile >> "CfgMagazines" >> _classname >> "picture");
	};

	_return;
};

_inArray = {
	private ["_return","_array","_search"];
	_array = _this select 0;
	_search = _this select 1;

	_return = -1;

	for "_i" from 0 to (count _array) - 1 do {
		if ((_array select _i) select 0 == _search) then {
			_return = _i;
		};
	};

	_return;
};

_getGear = {
	private ["_return","_index"];
	_return = [];
	_weapons = [];
	_magazines = [];
	_nearByPile = nearestObjects [getPosATL player, ["SmallCraftTable_dz"], 3];
    if (count _nearByPile > 0) then {
		_weaps = getWeaponCargo (_nearByPile select 0);
		_mags = getMagazineCargo (_nearByPile select 0);
		
		//diag_log format ["%1, %2", _weaps, _mags];
		
			//Add weapons
			_objWpnTypes = _weaps select 0;
			_objWpnQty = _weaps select 1;
			
			for "_i" from 0 to (count _objWpnTypes - 1) do {
				_obj = _objWpnTypes select _i;
				_index = [_return, _obj] call _inArray;

				if (_index != -1) then {
					_return set [_index, [_obj, ((_return select _index) select 1) + (_objWpnQty select _i), 0]];
				} else {
					_return set [count _return, [_obj, _objWpnQty select _i, 0]];
				};
			};

			//Add Magazines
			_objMagTypes = _mags select 0;
			_objMagQty = _mags select 1;
			
			for "_i" from 0 to (count _objMagTypes - 1) do {
				_obj = _objMagTypes select _i;
				_index = [_return, _obj] call _inArray;

				if (_index != -1) then {
					_return set [_index, [_obj, ((_return select _index) select 1) + (_objMagQty select _i), 0]];
				} else {
					_return set [count _return, [_obj, _objMagQty select _i, 0]];
				};
			};
		
	} else {
		_weapons = weapons player; 
		_magazines = magazines player;

		{
			_return set [count _return, [_x, 1, 0]];
		} forEach (_weapons);

		{
			_index = [_return, _x] call _inArray;

			if (_index != -1) then {
				_return set [_index, [_x, ((_return select _index) select 1) + 1, 0]];
			} else {
				_return set [count _return, [_x, 1, 0]];
			};
		} forEach (_magazines);		
	};

	_return;
};

_init = {
	_itemArray = [] call _getGear;
	uiNamespace setVariable ["DAYZ_CraftingDialog_Items", _itemArray];
};

_cleanup = {
	if (dialog) then { closeDialog 0 };
	uiNamespace setVariable ["DAYZ_CraftingDialog", nil];
	uiNamespace setVariable ["DAYZ_CraftingDialog_Items", nil];
};

_addItem = {
	private ["_selected","_classname","_index","_item","_classname","_gearcount","_tablecount"];
	_selected = lbCurSel _list;
	_classname = _list lnbData [_selected, 2];

	_index = [_itemArray, _classname] call _inArray;
	_item = _itemArray select _index;
	_classname = _item select 0;
	_gearcount = _item select 1;
	_tablecount = _item select 2;

	if (_gearcount > 0) then {
		_gearcount = _gearcount - 1;
		_tablecount = _tablecount + 1;
	};

	_itemArray set [_index, [_classname, _gearcount, _tablecount]];
};

_removeItem = {
	private ["_selected","_classname","_index","_item","_classname","_gearcount","_tablecount"];
	_selected = lbCurSel _list;
	_classname = _list lnbData [_selected, 2];

	_index = [_itemArray, _classname] call _inArray;
	_item = _itemArray select _index;
	_classname = _item select 0;
	_gearcount = _item select 1;
	_tablecount = _item select 2;

	if (_tablecount > 0) then {
		_gearcount = _gearcount + 1;
		_tablecount = _tablecount - 1;
	};

	_itemArray set [_index, [_classname, _gearcount, _tablecount]];
};

_update = {
	private ["_control","_pictureIndex","_item","_classname","_gearcount","_tablecount","_itemName","_itemPicture","_index"];
	lbClear _list;

	// clear crafting table boxes
	for "_i" from 0 to 50 do {
		_control = _display displayCtrl (200 + _i);
		_control ctrlSetText "";
	};

	_pictureIndex = 1;

	for "_i" from 0 to (count _itemArray) - 1 do {
		_item = _itemArray select _i;
		_classname = _item select 0;
		_gearcount = _item select 1;
		_tablecount = _item select 2;
		
		_itemName = [_classname] call _getItemName;
		_itemPicture = [_classname] call _getItemPicture;

		_index = _list lnbAddRow [str _gearcount, "", _itemName, str _tablecount];
		_list lnbSetData [[_index, 2], _classname];
		_list lnbSetPicture [[_index, 1], _itemPicture];

		for "_j" from 0 to _tablecount - 1 do {
			_control = _display displayCtrl (200 + _pictureIndex);
			_control ctrlSetText _itemPicture;
			_pictureIndex = _pictureIndex + 1;
		};
	};
};

_craftItem = {
	private ["_classList","_countList","_item","_classname","_tablecount","_arrayToSend"];
	_classList = [];
	_countList = [];
	
	for "_i" from 0 to (count _itemArray) - 1 do {
		_item = _itemArray select _i;
		_classname = _item select 0;
		_tablecount = _item select 2;

		if (_tablecount > 0) then {
			_classList set [count _classList, _classname];
			_countList set [count _countList, _tablecount];
		};
	};

	if (count _classList > 0) then {
		_arrayToSend = [_classList,_countList];
		[_arrayToSend] call player_checkRecipe;
		
	};
};

_construction = {
	private ["_classList","_countList","_item","_classname","_tablecount","_arrayToSend"];
	_classList = [];
	_countList = [];
	
	for "_i" from 0 to (count _itemArray) - 1 do {
		_item = _itemArray select _i;
		_classname = _item select 0;
		_tablecount = _item select 2;

		if (_tablecount > 0) then {
			_classList set [count _classList, _classname];
			_countList set [count _countList, _tablecount];
		};
	};

	if (count _classList > 0) then {
		_arrayToSend = [_classList,_countList];
		[_arrayToSend] call player_checkConstructionRecipe;
		
	};
};

_getRecipes = {
	private["_config","_control","_controlPos","_msg","_lines"];
	_config = configFile >> "CfgCrafting";
	_control = _display displayCtrl 430;
	_controlPos = ctrlPosition _control;
	_msg = "";
	_lines = 0;

	for "_i" from 0 to ((count _config) - 1) do {
		_entry = _config select _i;
		_input = getArray (_entry >> "input");
		_itemMsg = "";

		if (count _input > 0) then {
			_isRecipe = true;

			{
				_item = _x select 0;
				_amount = _x select 2;
				
				if (typeName _item == "ARRAY") then {
					_amount = _item select 2;
					_item = _item select 0;
				};
				
				_itemMsg = _itemMsg + format ["%1 %2<br />", _amount, [_item] call _getItemName];
				_lines = _lines + 1;
			} forEach _input;

			_msg = _msg + format ["<t size='1.25'>%1</t><br />%2<br />", getText (_entry >> "displayName"), _itemMsg];
			_lines = _lines + 2.25;
		};
	};

	_control ctrlSetPosition [_controlPos select 0, _controlPos select 1, _controlPos select 2, 0.03921 * _lines]; // text size * numoflines
	_control ctrlSetStructuredText parseText _msg;
	_control ctrlCommit 0;
};

_getconstructionRecipes = {
	private["_config","_control","_controlPos","_msg","_lines"];
	_config = configFile >> "CfgConstruction";
	_control = _display displayCtrl 430;
	_controlPos = ctrlPosition _control;
	_msg = "";
	_lines = 0;

	for "_i" from 0 to ((count _config) - 1) do {
		_entry = _config select _i;
		_input = getArray (_entry >> "input");
		_itemMsg = "";

		if (count _input > 0) then {
			_isRecipe = true;

			{
				_item = _x select 0;
				_amount = _x select 2;
				
				if (typeName _item == "ARRAY") then {
					_amount = _item select 2;
					_item = _item select 0;
				};
				
				_itemMsg = _itemMsg + format ["%1 %2<br />", _amount, [_item] call _getItemName];
				_lines = _lines + 1;
			} forEach _input;

			_msg = _msg + format ["<t size='1.25'>%1</t><br />%2<br />", getText (_entry >> "displayName"), _itemMsg];
			_lines = _lines + 2.25;
		};
	};

	_control ctrlSetPosition [_controlPos select 0, _controlPos select 1, _controlPos select 2, 0.03921 * _lines]; // text size * numoflines
	_control ctrlSetStructuredText parseText _msg;
	_control ctrlCommit 0;
};

_display = uiNamespace getVariable ["DAYZ_CraftingDialog", nil];
_itemArray = uiNamespace getVariable ["DAYZ_CraftingDialog_Items", []];
_list = _display displayCtrl 432;

_event = _this select 0;

switch (_event) do {
	case "initcrafting": {
		[] call _init;
		[] call _update;
		[] call _getRecipes;
	};
	case "initconstruction": {
		[] call _init;
		[] call _update;
		[] call _getconstructionRecipes;
	};
	case "add": {
		[] call _addItem;
		[] call _update;
	};
	case "remove": {
		[] call _removeItem;
		[] call _update;
	};
	case "craft": {
		[] call _craftItem;
	};
	case "close": {
		[] call _cleanup;
	};
	case "construction": {
		[] call _construction;
	};
};
