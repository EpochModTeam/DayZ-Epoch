private ["_groundFogAllow","_groundFogDist","_groundFog","_currentSnow","_blizzard","_currentFog","_currentOvercast","_currentRain","_currentWindX","_currentWindY","_changeType","_breathFog"];

#define DEBUG_MESSAGE false
//if (isNil "DZE_WeatherDebugTime") then {DZE_WeatherDebugTime = diag_tickTime;};

_currentOvercast = _this select 0;
_currentFog = _this select 1;
_currentRain = _this select 2;
_currentWindX = _this select 3;
_currentWindY = _this select 4;
_currentSnow = _this select 5;
_changeType = _this select 6;
_blizzard = _this select 7;
_groundFog = DZE_WeatherVariables select 15;
_groundFogDist = DZE_WeatherVariables select 16;
_groundFogAllow = DZE_WeatherVariables select 17;
_breathFog = DZE_WeatherVariables select 18;
DZE_WeatherEndThread = false; // Used by the server as a thread kill switch to keep JIP clients in sync. Easier than trying to sync time.

// Set current weather values
call {
	if (_blizzard) exitWith {0 setOvercast _currentOvercast; 10 setFog 0.95;}; // Fog is set at 95% for the blizzard script.
	if (_changeType == "OVERCAST") exitWith {0 setFog _currentFog; 15 setOvercast _currentOvercast;};
	if (_changeType == "FOG") exitWith {0 setOvercast _currentOvercast; 30 setFog _currentFog;};
	/* _changeType == "NONE" */ 0 setOvercast _currentOvercast; 0 setFog _currentFog;
};
setWind [_currentWindX, _currentWindY, true];

// Ground fog
if (_groundFog != 0 && !_blizzard) then { // Prevent ground fog when a blizzard is in progress.
	if (_groundFogAllow || (!_groundFogAllow && {_currentOvercast <= .70})) then { // Checks for allowing ground fog if it's raining or snowing.
		if (_groundFog in [1,3]) then {
			if ((date select 3) in [20,21,22,23,24,0,1,2,3,4]) then { // ground fog at evening, night, and morning hours.
				if (DEBUG_MESSAGE) then {"Ground fog is starting" call dayz_rollingMessages;};
				[_groundFog,_groundFogDist] spawn fnc_groundFog;
			};
		} else { // options 2,4 default
			if (DEBUG_MESSAGE) then {"Ground fog is starting" call dayz_rollingMessages;};
			[_groundFog,_groundFogDist] spawn fnc_groundFog;
		};
	};
};

// Breath fog
if (DZE_Weather in [3,4] && {_breathFog in [1,2]}) then {
	if (_breathFog == 1) then {
		if (DEBUG_MESSAGE) then {"Breath fog is starting" call dayz_rollingMessages;};
		[] spawn fnc_breathFog;
	} else {
		if (_currentSnow > 0) then {
			if (DEBUG_MESSAGE) then {"Breath fog is starting" call dayz_rollingMessages;};
			[] spawn fnc_breathFog;
		};
	};
};

// Set current rain or snow if overcast is above 70%.
if (_currentOvercast > .70) then {
	if (DZE_Weather in [3,4]) then {
		if (_currentSnow > 0) then {
			if (_blizzard) then {
				if (DEBUG_MESSAGE) then {"A blizzard is starting" call dayz_rollingMessages;};
				_currentFog spawn fnc_blizzard;
			} else {
				if (DEBUG_MESSAGE) then {"It's starting to snow" call dayz_rollingMessages;};
				_currentSnow spawn fnc_snowfall;
			};
		};
	} else {
		if (_currentRain > 0) then {
			_currentRain spawn {
				if (DEBUG_MESSAGE) then {"The rain is starting" call dayz_rollingMessages;};
				if !(isNil "DZE_WeatherDebugTime") then {diag_log format ["Rain started at %1",(diag_tickTime - DZE_WeatherDebugTime)];};
				while {!DZE_WeatherEndThread} do {
					uiSleep 3;
					3 setRain _this;
				};
				if !(isNil "DZE_WeatherDebugTime") then {diag_log format ["Rain ended at %1",(diag_tickTime - DZE_WeatherDebugTime)];};
			};
		};
	};
};

// Set rain to zero if winter weather enabled, overcast is 70% or less, or rain is set to zero.
if (_currentRain == 0 || {_currentOvercast <= .70} || {DZE_Weather in [3,4]}) then {
	// This might look a little funky, but it's necessary to get the rain to stop in Arma 2.
	[] spawn {
		if (DEBUG_MESSAGE) then {"Setting the rain to zero" call dayz_rollingMessages;};
		if !(isNil "DZE_WeatherDebugTime") then {diag_log format ["Rain set to zero at %1",(diag_tickTime - DZE_WeatherDebugTime)];};
		3 setRain 0;
		uiSleep 3;
		3 setRain 0;
		uiSleep 3;
		99999 setRain 0;
	};
};

if (DEBUG_MESSAGE) then {"The Weather Has Changed" call dayz_rollingMessages;};

if (DEBUG_MESSAGE) then {diag_log format ["Weather Forecast: Overcast: %1, Fog: %2, Rain: %3, WindX: %4, WindY: %5, Snow: %6, Blizzard: %7, Change Type: %8.",_currentOvercast,_currentFog,_currentRain,_currentWindX,_currentWindY,_currentSnow,_blizzard,_changeType];};