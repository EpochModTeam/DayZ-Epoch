scriptName "fn_dzn_snowfall.sqf";
/*
	File: fn_dzn_snowfall.sqf
	Author: Sumrak

	Description:
	 Simple snowfall script for Namalsk OR DayZ: Namalsk

	Parameter(s):
	 _this select 0: Double - time (default 3.0)
	 _this select 1: Double - density (can be 0 - 1, default 0.5)

	Returns:
	 Nice snow particle effect with a proper density and for the defined time.
*/

private["_dzn_snow_density", "_dzn_snow_pc", "_dzn_snow_timer", "_isinbuilding"];

if (isNil "_this") then {
	_this = [];
};
if (count _this > 0) then {
	_dzn_snow_timer = abs (_this select 0);
} else {
	_dzn_snow_timer = 3;
};
if (count _this > 1) then {
	if ((_this select 1) != -1) then {
		_dzn_snow_density = abs ( 100 * (_this select 1));
	} else {
		_dzn_snow_density = 0;
	};
} else {
	_dzn_snow_density = 50;
};

_d = 35;
_h = 18;
_dzn_snow_pc = 0;

/* changed from 100 to 30 */
snow = _dzn_snow_density / 30;

while {_dzn_snow_timer >= 0} do {
	_position = getPos player;
	if ([player] call fnc_isInsideBuilding) then {
		_isinbuilding	= true;
	} else {
		_isinbuilding	= false;
	};
	
	while {(_dzn_snow_pc < _dzn_snow_density) && !_isinbuilding} do {
		_dpos = [((_position select 0) + (_d - (random (2 * _d))) + ((velocity vehicle player select 0) * 6)), ((_position select 1) + (_d - (random (2 * _d))) + ((velocity vehicle player select 1) * 6)), ((_position select 2) + _h)];
		drop ["\ca\data\cl_water", "", "Billboard", 1, 8, _dpos, wind, 1, 0.0001, 0.0, 0.5, [0.05, 0.05, 0.05], [[1, 1, 1, 0], [1, 1, 1, 1], [1, 1, 1, 1], [1, 1, 1, 1]], [0, 0], 0.2, 1.2, "", "", ""];
		_dzn_snow_pc = _dzn_snow_pc + 1;
	};
	
	sleep 0.1;
	_dzn_snow_timer = _dzn_snow_timer - 0.1;
	_dzn_snow_pc = 0;
};
snow = 0;