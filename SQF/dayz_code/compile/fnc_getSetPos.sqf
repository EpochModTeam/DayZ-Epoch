//DO NOT USE IF YOU NEED ANGLE COMPENSATION!!!!
private "_pos";

_thingy = _this select 0;
if ((count _this) > 1) then {
	_pos = _this select 1;
} else {
	_pos = getPosASL _thingy;
};

if (surfaceIsWater _pos) then {
	_thingy setPosASL _pos;
} else {
	_thingy setPosATL (ASLToATL _pos);
};