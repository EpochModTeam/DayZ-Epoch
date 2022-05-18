/*
	DayZ Epoch blizzard script by JasonTM
	Credit to Sentinel for NIM Weather Effects.
*/

local _fogOriginal	= _this;
local _windspd		= 15;
local _winddir		= random 360;
local _windX		= _windspd * (sin _winddir);
local _windY		= _windspd * (cos _winddir);
local _windZ		= 5 - (random 10);
local _t		= diag_tickTime;

snow = 1;

local _isInside = {
	local _inside = (dayz_inside || (DZE_roofOverhead && {DZE_sheltered > 0.73}));
	_inside
};

// If the player is inside a building play the low volume version of the blizzard sound effect.
playSound (["blizzard","blizzardLow"] select (call _isInside));

if !(isNil "DZE_WeatherDebugTime") then {diag_log format ["Blizzard started at %1",(diag_tickTime - DZE_WeatherDebugTime)];};

while {!DZE_WeatherEndThread} do {
	local _pos	= getPos vehicle player;
	local _vel	= velocity vehicle player;
	local _i	= 0;
	
	if (diag_tickTime - _t >= 10) then {
		playSound (["blizzard","blizzardLow"] select (call _isInside));
		_t = diag_tickTime;
	};
	
	if !(call _isInside) then {
		while {_i < 25} do {
			local _dpos = [((_pos select 0) + (25 - (random (2*25))) + ((_vel select 0)*6)) - (_windX),((_pos select 1) + (25 - (random (2*25))) + ((_vel select 1)*6)) - (_windY),((_pos select 2) + 3)];
			// Snow Particles
			drop ["\ca\data\cl_water", "", "Billboard", 1, 6, _dpos, [_windX/2,_windY/2,-1], 1, 1.275, 1, (random .01), [0.05], [[1,1,1,1]], [0,0], 0.2, 1.2, "", "", ""];
			_i = _i + 1;
		};
		// Cloud particles
		drop ["\ca\data\cl_basic", "", "Billboard", 0.2, 5, [(_pos select 0) + (75 - (random (2*75))) + (_vel select 0)*4 - _windX,(_pos select 1) + (75 - (random (2*75))) + (_vel select 1)*4 - _windY,(_pos select 2) + 10], [_windX,_windY,_windZ], 10, 1.275, 1, (random .01), [35,60], [[0.95,0.95,0.95,0],[0.95,0.95,0.95,0.4],[0.95,0.95,0.95,0.4],[0.95,0.95,0.95,0.4],[0.95,0.95,0.95,0]], [0,0], 0, 0, "", "",""];
	};
	uiSleep 0.01;
};

0 setFog _fogOriginal; // Reset fog to original.
snow = 0;

if !(isNil "DZE_WeatherDebugTime") then {diag_log format ["Blizzard ended at %1",(diag_tickTime - DZE_WeatherDebugTime)];};
