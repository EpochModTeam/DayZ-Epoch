/*
	1. Waits for an object to be created and then reveals it to the player.
	2. Optionally deletes a temporary sign or marker placeholder object.
	
	Parameters: 
	_this select 0: string - object class name to reveal
	_this select 1: object - sign object or objNull if none

	["objectClassName", objNull] call fn_waitForObject;
*/

private ["_class","_sign","_near"];

_class = _this select 0;
_sign = _this select 1;
_near = count (player nearObjects [_class,50]);

[_class,_sign,_near] spawn {
	_class = _this select 0;
	_sign = _this select 1;
	_near = _this select 2;
	_time = diag_tickTime;

	waitUntil {
		uiSleep 1;
		(count (player nearObjects [_class,50]) != _near or (diag_tickTime - _time > 15))
	};

	if (!isNull _sign) then {
		deleteVehicle _sign;
	};

	{player reveal _x;} count (player nearObjects [_class,50]);
};