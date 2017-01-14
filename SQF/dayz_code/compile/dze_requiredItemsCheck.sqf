private ["_missingText","_hasrequireditem","_hastoolweapon","_item","_require","_missing","_text","_classname","_hasbuilditem","_items","_melee","_weapons","_weapon"];

_item = _this select 0;
_require = _this select 1;
_classname = _this select 2;
_missing = [];
_missingText = "";
_hasrequireditem = true;
_text = getText (configFile >> "CfgVehicles" >> _classname >> "displayName");
_items = items player;
_weapons = weapons player;

{
	_weapon = _x;
	_hastoolweapon = _x in _weapons;
	
	if (_x == "ItemKnife") then {
		{if (_x in Dayz_Gutting) exitWith {_hastoolweapon = true};} forEach _items;
	};
	if (_x == "ItemMatchbox") then {
		{if (_x in DayZ_Ignitors) exitWith {_hastoolweapon = true};} forEach _items;
	};
	{
		_melee = format ["Melee%1",_x];
		if (_weapon == format["Item%1",_x] && {(_melee in _weapons) or (dayz_onBack == _melee)}) then {
			_hastoolweapon = true;
		};
	} forEach ["Crowbar","Hatchet","Sledge"];
	
	if (!_hastoolweapon) then {
		_missingText = getText (configFile >> "cfgWeapons" >> _x >> "displayName");
		_missing set [count _missing, _missingText];
		_hasrequireditem = false;
	};
} forEach _require;

_missingText = "";
{
	if (_forEachIndex == 0) then {
		_missingText = _x;
	} else {
		if (_forEachIndex == ((count _missing) - 1)) then {
			_missingText = _missingText + " and " + _x;
		} else {
			_missingText = _missingText + ", " + _x;
		};
	};
} forEach _missing;

_hasbuilditem = _item in magazines player;
if (!_hasbuilditem && _text != "") exitWith {dayz_actionInProgress = false; format[localize "str_player_31",_text,"build"] call dayz_rollingMessages; false;};
if (!_hasrequireditem) exitWith {dayz_actionInProgress = false; format[localize "str_epoch_player_137",_missingText] call dayz_rollingMessages; false;};

//When calling this function in another script use a silent exitWith, unless you have something special to say. i.e. if (!_hasrequireditem) exitWith{};
_hasrequireditem;