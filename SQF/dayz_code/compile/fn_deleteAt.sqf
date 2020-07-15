/*
	Description: Removes the desired element from an array regardless of data type.
	Usage: array = [array, index] call fnc_deleteAt;
	Made for DayZ Epoch by JasonTM
*/
private ["_arr","_idx","_cnt"];
_arr = _this select 0;
_idx = _this select 1;
_cnt = (count _arr) - 1;

if (_idx > _cnt || {_idx < 0}) exitWith {
	diag_log "[fnc_deleteAt] Error: out of bounds index provided!";
	_arr
};

for "_i" from _idx to _cnt do {
	_arr set [_i, (_arr select (_i + 1))];
};

_arr resize _cnt;
_arr