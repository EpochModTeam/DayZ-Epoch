private ["_ar","_rand_array","_rand"];
_ar = _this;
_rand_array = [];
while {count _ar > 0} do {
	_rand = (count _ar);
	_rand = floor (random _rand);
	_rand_array set [count _rand_array, _ar select _rand];
	_ar set [_rand, "randarray_del"];
	_ar = _ar - ["randarray_del"];
	sleep 0.001;
};

_rand_array