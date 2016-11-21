private["_unit","_originalPos","_pos"];
_unit = 		_this select 0;
_originalPos = 	_this select 1;
_pos = 			getPosATL _unit;

if (count _this > 2) then {
	_pos = _this select 2;
} else {
	_pos = [_originalPos,10,(10 - (random (90 * 2))),0] call fn_selectRandomLocation;
};

_pos
