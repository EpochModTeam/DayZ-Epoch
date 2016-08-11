/*
	1. Waits for an object to be created and then reveals it to the player.
	2. Optionally deletes a temporary sign or marker placeholder object.
	
	Parameters: 
	_this select 0: string - object class name to reveal
	_this select 1: object - sign object or ObjNull if none

	["objectClassName", objNull] spawn fn_waitForObject;
*/

private ["_object","_sign"];

_object = _this select 0;
_sign = _this select 1;

waitUntil {
	uiSleep 1;
	!isNull (nearestObject [player,_object])
};

if (!isNull _sign) then {
	deleteVehicle _sign;
};

player reveal (nearestObject [player,_object]);