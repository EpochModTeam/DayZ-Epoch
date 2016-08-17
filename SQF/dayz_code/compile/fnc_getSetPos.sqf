//DO NOT USE IF YOU NEED ANGLE COMPENSATION!!!!
private "_pos";

_params = count _this;
_thingy = _this select 0;
_isATL = false;

if (_params > 1) then {
	_pos = _this select 1;
	if (_params > 2) then {
		_isATL = _this select 2;
	};
} else {
	_pos = getPosASL _thingy;
};

if (surfaceIsWater _pos) then {
	if (_isATL) then {
		_thingy setPosASL (ATLToASL _pos);
	} else {
		_thingy setPosASL _pos;
	};
} else {
	if (_isATL) then {
		_thingy setPosATL _pos;
	} else {
		_thingy setPosATL (ASLToATL _pos);
	};
};

_pos;