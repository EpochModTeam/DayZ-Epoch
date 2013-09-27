disableSerialization;
_display = (_this select 0);
_close = {locked _x} count (nearestObjects [player, ["AllVehicles"], 5]) > 0;

cutText ["Cannot access gear on a locked vehicle." , "PLAIN DOWN"];

if(_close) then {
	_display closeDisplay 1;
};