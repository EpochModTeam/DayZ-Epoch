local _pos = getPosATL (_this select 0);
if (surfaceIsWater _pos) then {_pos = ATLToASL _pos;};
_pos
