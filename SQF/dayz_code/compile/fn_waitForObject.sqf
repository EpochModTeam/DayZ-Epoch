/*
	1. Waits for an object to be created and then reveals it to the player.
	2. Optionally deletes a temporary sign or marker placeholder object.
	
	Parameters: 
	_this select 0: string - object class name to reveal
	_this select 1: object - sign object or ObjNull if none
	_this select 2: array - result of (nearestObjects [player,[_class],50]) before call to spawn object

	["objectClassName", objNull, []] spawn fn_waitForObject;
*/

private ["_class","_sign","_near"];

_class = _this select 0;
_sign = _this select 1;
_near = _this select 2;

waitUntil {
	uiSleep 1;
	(count (nearestObjects [player,[_class],50]) != count _near)
};

if (!isNull _sign) then {
	deleteVehicle _sign;
};

{player reveal _x;} count (nearestObjects [player,[_class],50]);