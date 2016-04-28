private ["_missingText","_hasrequireditem","_hastoolweapon","_item","_require","_missing","_text","_classname","_hasbuilditem"];

_item = _this select 0;
_require =  _this select 1;
_classname = _this select 2;
_missing = [];
_missingText = "";
_hasrequireditem = true;
_text = getText (configFile >> "CfgVehicles" >> _classname >> "displayName");
{
	_hastoolweapon = _x in weapons player;
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
if (!_hasbuilditem) exitWith {DZE_ActionInProgress = false; format[localize "str_player_31",_text,"build"] call dayz_rollingMessages; false;};
if (!_hasrequireditem) exitWith {DZE_ActionInProgress = false; format[localize "str_epoch_player_137",_missingText] call dayz_rollingMessages; false;};

//When calling this function in another script use a silent exitWith, unless you have something special to say. i.e. if (!_hasrequireditem) exitWith{};
_hasrequireditem;