if (dayz_actionInProgress) exitWith {localize "str_player_actionslimit" call dayz_rollingMessages;};
dayz_actionInProgress = true;

private ["_rawmeat","_cookedmeat","_meat","_meatcooked","_text","_qty","_finished"];

//diag_log ("Cook Enabled");
player removeAction s_player_cook;
s_player_cook = -1;

_rawmeat = Dayz_meatraw;
_cookedmeat = Dayz_meatcooked;
a_player_cooking = true;
_finished = true;

{
	_meat = _x;
	_meatcooked = _cookedmeat select (_rawmeat find _meat);
	if (_meat in magazines player) then {
		_text = getText (configFile >> "CfgMagazines" >> _meat >> "displayName");

		[player,(getPosATL player),10,"cook"] spawn fnc_alertZombies;

		_finished = ["Medic",1] call fn_loopAction;
		if (!_finished) exitWith {};

		_qty = {_x == _meat} count magazines player;

		for "_x" from 1 to _qty do {
			player removeMagazine _meat;
			player addMagazine _meatcooked;
			// "xMeat must be in your main inventory to cook it" - Doesn't make sense here since meat was already cooked successfully.
			if !(_meat in magazines player) exitWith {};
		};
		format[localize "str_success_cooked",_qty,_text] call dayz_rollingMessages;
	};

	if (!_finished) exitWith {};
} forEach _rawmeat;

a_player_cooking = false;
dayz_actionInProgress = false;
