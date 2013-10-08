disableSerialization;
_display = (_this select 0);
_inVehicle = (vehicle player) != player;
_cTarget = cursorTarget;
if(_inVehicle) then {
	_cTarget = (vehicle player);
};

_isOk = false;
{
	if(!_isOk) then {
		_isOk = _cTarget isKindOf _x;
	};
} forEach ["LandVehicle","Air"];

if((locked _cTarget) and _isOk and (((vehicle player) distance _cTarget) < 12)) then {
	cutText ["Cannot access gear in a locked vehicle." , "PLAIN DOWN"];
	_display closeDisplay 1;
};
