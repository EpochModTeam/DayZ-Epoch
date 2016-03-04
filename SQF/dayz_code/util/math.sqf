dz_fn_math_gcd =
{
	private ["_a","_b","_t"];

	_a = _this select 0;
	_b = _this select 1;

	while {_b != 0} do
	{
		_t = _b;
		_b = _a % _b;
		_a = _t;
	};

	_a
};

dz_fn_math_gcdx =
{
	if ((count _this) == 0) exitWith { 1 };
	if ((count _this) == 1) exitWith { _this select 0 };
	
	private "_gcd";

	_gcd = [_this select 0, _this select 1] call dz_fn_math_gcd;

	for "_i" from 2 to (count _this) - 1 do
	{
		if (_gcd == 1) exitWith {};
		
		_gcd = [_gcd, _this select _i] call dz_fn_math_gcd;
	};

	_gcd
};

dz_fn_math_randomRange =
{
	(_this select 0) + random ((_this select 1) - (_this select 0))
};