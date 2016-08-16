/*

	Description:
	Break number into array of digits

	Example:
	123456 > [1,2,3,4,5,6]	

	Parameter(s):
	_this: NUMBER

	Returns:
	ARRAY
*/

private ["_number","_step","_stepLocal","_result","_numberLocal","_add"];

_number = [_this,0,0,[0]] call bis_fnc_param;

if (_number < 10) then {

	[_number]

} else {

	_step = 10;
	_stepLocal = _step;
	_result = [0];
	_add = false;

	while {_stepLocal < (_number * _step)} do {

		_numberLocal = _number % (_stepLocal);

		{
			_numberLocal = _numberLocal - _x;
		} foreach _result;

		_numberLocal = floor (_numberLocal / _stepLocal * _step);

		if (_numberLocal < 0) then {_numberLocal = 9};

		_result = [_numberLocal] + _result;
		_stepLocal = _stepLocal * (_step);

	};

	if ((_result select 0) == 0) then {_result = [1] + _result;};

	_result resize (count _result - 1);
	_result

};