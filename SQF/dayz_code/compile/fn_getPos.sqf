private "_pos";

_pos = getPosASL (_this select 0);

if !(surfaceIsWater _pos) then {
	_pos = ASLToATL _pos;
};

_pos