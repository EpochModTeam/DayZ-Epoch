// promptRName.sqf

private ["_unit"];
_unit = _this select 0;

call compile format ["server globalChat reviver_%1", _unit];