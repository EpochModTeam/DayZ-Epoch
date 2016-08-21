private "_pos";

//if (isNil {_this select 0}) exitWith {[0,0,0]};
_thingy = _this select 0;
_pos = getPosASL _thingy;

if !(surfaceIsWater _pos) then {
	_pos =  ASLToATL _pos;
};

_pos