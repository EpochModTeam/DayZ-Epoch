private ["_chance","_dynamic","_hasTool","_message","_needed","_newItem","_oneLeft","_remaining","_toolBelt"];

_chance = _this select 1;
_toolBelt = items player;

switch (_this select 0) do {
	case "matches": {
		_dynamic = dayz_matchboxCount;
		_newItem = "qtyRemaining";
		_needed = DayZ_Ignitors;
		_message = "str_info_limitedbox";
	};
	case "knives": {
		_dynamic = dayz_knifeDulling;
		_newItem = "sharpnessRemaining";
		_needed = Dayz_Gutting;
		_message = "str_info_bluntknife";
	};
};

{
	_hasTool = _x in _toolBelt;
	if (_hasTool && !_dynamic) exitWith {};
	
	_oneLeft = _x in ["Item1Matchbox","ItemKnife1"];
	_remaining = getText (configFile >> "CfgWeapons" >> _x >> _newItem);
	
	// Use lowest quantity matches first to prevent duplicate tool being added
	// Use knife with least remaining uses first, except dull knife	
	if (_hasTool && (!(_remaining in _toolBelt) or _oneLeft)) exitWith {
		if (_x in ["ItemKnife","ItemMatchbox"]) then {
			if ([_chance] call fn_chance) then {
				player removeWeapon _x;
				player addWeapon _remaining;
				localize _message call dayz_rollingMessages;
			};
		} else {
			player removeWeapon _x;
			if (_remaining in _toolBelt) then {
				//Drop dull knife or empty matchbox if player already has one. Prevents duplicate tool.
				player removeWeapon _remaining;
				[_remaining,2,1] call fn_dropItem;
			};
			player addWeapon _remaining;
		};
	};
} forEach _needed;

_hasTool