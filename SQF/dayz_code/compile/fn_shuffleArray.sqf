//Killzone Kid Array Shuffle Plus
//Usage: array = [array, shuffle count] call fn_shuffleArray;

private ["_arr","_cnt","_el1","_indx","_el2"];
_arr = _this select 0;
_cnt = count _arr - 1;
if (_cnt < 1) exitWith {_arr;}; // add count check to prevent errors.
_el1 = _arr select _cnt;
_arr resize _cnt;
for "_i" from 1 to (_this select 1) do {
	_indx = floor random _cnt;
	_el2 = _arr select _indx;
	_arr set [_indx, _el1];
	_el1 = _el2;
};
_arr set [_cnt, _el1];
_arr
