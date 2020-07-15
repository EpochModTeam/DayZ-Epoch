/*
	DayZ Epoch blizzard script by JasonTM
	Credit to Sentinel for NIM Weather Effects.
*/

private [ "_i","_pos","_dpos","_windX","_windY","_windZ","_fogOriginal","_windspd","_winddir","_vel","_t"];

_fogOriginal = _this;
_windspd = 15;
_winddir = random 360;
_windX = _windspd * (sin _winddir);
_windY = _windspd * (cos _winddir);
_windZ = 5 - (random 10);
snow = 1;
_t = diag_tickTime;
playSound "blizzard";

if !(isNil "DZE_WeatherDebugTime") then {diag_log format ["Blizzard started at %1",(diag_tickTime - DZE_WeatherDebugTime)];};

while {!DZE_WeatherEndThread} do {
	_pos = getPos vehicle player;
	_vel = velocity vehicle player;
	_i = 0;
	
	if (!dayz_inside) then {
		if (diag_tickTime - _t >= 10) then {
			playSound "blizzard"; // Blizzard sound is a 10 second clip.
			_t = diag_tickTime;
		};
		while {_i < 25} do {
			_dpos = [((_pos select 0) + (25 - (random (2*25))) + ((_vel select 0)*6)) - (_windX),((_pos select 1) + (25 - (random (2*25))) + ((_vel select 1)*6)) - (_windY),((_pos select 2) + 3)];
			// Snow Particles
			drop ["\ca\data\cl_water", "", "Billboard", 1, 6, _dpos, [_windX/2,_windY/2,-1], 1, 1.275, 1, (random .01), [0.05], [[1,1,1,1]], [0,0], 0.2, 1.2, "", "", ""];
			_i = _i + 1;
		};
		// Cloud particles
		drop ["\ca\data\cl_basic", "", "Billboard", 0.2, 5, [(_pos select 0) + (75 - (random (2*75))) + (_vel select 0)*4 - _windX,(_pos select 1) + (75 - (random (2*75))) + (_vel select 1)*4 - _windY,(_pos select 2) + 10], [_windX,_windY,_windZ], 10, 1.275, 1, (random .01), [35,60], [[0.95,0.95,0.95,0],[0.95,0.95,0.95,0.4],[0.95,0.95,0.95,0.4],[0.95,0.95,0.95,0.4],[0.95,0.95,0.95,0]], [0,0], 0, 0, "", "",""];
	};
	uiSleep 0.001;
};

0 setFog _fogOriginal; // Reset fog to original.
snow = 0;

if !(isNil "DZE_WeatherDebugTime") then {diag_log format ["Blizzard ended at %1",(diag_tickTime - DZE_WeatherDebugTime)];};