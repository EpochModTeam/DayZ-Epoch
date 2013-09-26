disableSerialization;
_display = (_this select 0);
_close = {locked _x} count (nearestObjects [player, ["AllVehicles"], 5]) > 0;

if(_close) then {
	_display closeDisplay 1;
};