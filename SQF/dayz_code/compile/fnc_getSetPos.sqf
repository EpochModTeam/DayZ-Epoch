//DO NOT USE IF YOU NEED ANGLE COMPENSATION!!!!
private "_pos";

_thingy = _this select 0;
_pos = getPosASL _thingy;

if (surfaceIsWater _pos) then {
	_thingy setPosASL _pos;
} else {
	_thingy setPosATL (ASLToATL _pos);
};