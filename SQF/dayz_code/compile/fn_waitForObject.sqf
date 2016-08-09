private ["_object","_sign"];

_object = _this select 0;
_sign = _this select 1;

waitUntil {
	uiSleep 1;
	!isNull (nearestObject [player,_object])
};

deleteVehicle _sign;
player reveal (nearestObject [player,_object]);