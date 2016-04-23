/************************************************************
Chance calc by deadactionman updated by R4Z0R49

Parameters: chance (0.00-1.00)
Returns: true/false

E.G.
_return = [0.5] call fn_chance;  // will return TRUE 50% of the time
_return = [0.25] call fn_chance; // will return TRUE 25% of the time
*************************************************************/
private ["_result"];

if ((_this select 0) > (random 1)) then {_result = true;} else {_result = false;};

_result
