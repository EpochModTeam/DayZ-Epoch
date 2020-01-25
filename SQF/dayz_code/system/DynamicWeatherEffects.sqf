/* DynamicWeatherEffects.sqf version 1.01 by Engima of Ostgota Ops
 * Description:
 *   Script that generates dynamic (random) weather. Works in single player, multiplayer (hosted and dedicated), and is JIP compatible.
 * Arguments:
 *   [_initialFog]: Optional. Fog when mission starts. Must be between 0 and 1 where 0 = no fog, 1 = maximum fog. -1 = random fog.
 *   [_initialOvercast]: Optional. Overcast when mission starts. Must be between 0 and 1 where 0 = no overcast, 1 = maximum overcast. -1 = random overcast.
 *   [_initialRain]: Optional. Rain when mission starts. Must be between 0 and 1 where 0 = no rain, 1 = maximum rain. -1 = random rain. (Overcast must be greater than or equal to 0.75).
 *   [_initialWind]: Optional. Wind when mission starts. Must be an array of form [x, z], where x is one wind strength vector and z is the other. x and z must be greater than or equal to 0. [-1, -1] = random wind.
 *   [_debug]: Optional. true if debug text is to be shown, otherwise false.
 */

private ["_initialFog", "_initialOvercast", "_initialRain", "_initialWind", "_debug"];
private ["_minWeatherChangeTimeMin", "_maxWeatherChangeTimeMin", "_minTimeBetweenWeatherChangesMin", "_maxTimeBetweenWeatherChangesMin", "_rainIntervalRainProbability", "_windChangeProbability"];
private ["_minimumFog", "_maximumFog", "_minimumOvercast", "_maximumOvercast", "_minimumRain", "_maximumRain", "_minimumWind", "_maximumWind", "_minRainIntervalTimeMin", "_maxRainIntervalTimeMin", "_forceRainToStopAfterOneRainInterval", "_maxWind"];

_initialFog = -1;
_initialOvercast = -1;
_initialRain = -1;
_initialWind = [-1, -1];
_debug = false;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////
// The following variables can be changed to tweak weather behaviour

// Minimum time in minutes for the weather (fog and overcast) to change. Must be greater than or equal to 1 and less than or equal to
// _maxWeatherChangeTimeMin. When weather changes, it is fog OR overcast that changes, not both at the same time. (Suggested value: 10).
_minWeatherChangeTimeMin = DZE_WeatherVariables select 0;

// Maximum time in minutes for the weather (fog and overcast) to change. Must be greater than or equal to _minWeatherChangeTimeMin.
// (Suggested value: 20).
_maxWeatherChangeTimeMin = DZE_WeatherVariables select 1;

// Minimum time in minutes that weather (fog and overcast) stays constant between weather changes. Must be less than or equal to 0 and
// greater than or equal to _minWeatherChangeTimeMin. (Suggested value: 5).
_minTimeBetweenWeatherChangesMin = DZE_WeatherVariables select 2;

// Maximum time in minutes that weather (fog and overcast) stays unchanged between weather changes. Must be greater than or equal to
// _minWeatherChangeTimeMin. (Suggested value: 10).
_maxTimeBetweenWeatherChangesMin = DZE_WeatherVariables select 3;

// Fog intensity never falls below this value. Must be between 0 and 1 and less than or equal to _maximumFog
// (0 = no fog, 1 = pea soup). (Suggested value: 0).
_minimumFog = DZE_WeatherVariables select 4;

// Fog intensity never exceeds this value. Must be between 0 and 1 and greater than or equal to _minimumFog
// (0 = no fog, 1 = pea soup). (Suggested value: 0.8).
_maximumFog = DZE_WeatherVariables select 5; //0.5

// Overcast intensity never falls below this value. Must be between 0 and 1 and less than or equal to _maximumOvercast
// (0 = no overcast, 1 = maximum overcast). (Suggested value: 0).
_minimumOvercast = DZE_WeatherVariables select 6;

// Overcast intensity never exceeds this value. Must be between 0 and 1 and greater than or equal to _minimumOvercast
// (0 = no overcast, 1 = maximum overcast). (Suggested value: 1).
_maximumOvercast = DZE_WeatherVariables select 7;

// When raining, rain intensity never falls below this value. Must be between 0 and 1 and less than or equal to _maximumRain
// (0 = no rain, 1 = maximum rain intensity). (Suggested value: 0);
_minimumRain = DZE_WeatherVariables select 8;

// When raining, rain intensity never exceeds this value. Must be between 0 and 1 and greater than or equal to _minimumRain
// (0 = no rain, 1 = maximum rain intensity). (Suggested value: 0.8);
_maximumRain = DZE_WeatherVariables select 9;

// Wind vector strength never falls below this value. Must be greater or equal to 0 and less than or equal to _maximumWind.
// (Suggested value: 0);
_minimumWind = DZE_WeatherVariables select 10;

// Wind vector strength never exceeds this value. Must be greater or equal to 0 and greater than or equal to _minimumWind.
// (Suggested value: 8).
_maximumWind = DZE_WeatherVariables select 11;

// Probability in percent for wind to change when weather changes. If set to 0 then wind will never change. If set to 100 then rain will
// change every time the weather (fog or overcast) start to change. (Suggested value: 25);
_windChangeProbability = DZE_WeatherVariables select 12;

// A "rain interval" is defined as "a time interval during which it may rain in any intensity (or it may not rain at all)". When overcast
// goes above 0.75, a chain of rain intervals (defined below) is started. It cycles on until overcast falls below 0.75. At overcast
// below 0.75 rain intervals never execute (thus it cannot rain).

// Probability in percent (0-100) for rain to start at every rain interval. Set this to 0 if you don't want rain at all. Set this to 100
// if you want it to rain constantly when overcast is greater than 0.75. In short: if you think that it generally rains to often then
// lower this value and vice versa. (Suggested value: 50).
_rainIntervalRainProbability = DZE_WeatherVariables select 13;

// Minimum time in minutes for rain intervals. Must be greater or equal to 0 and less than or equal to _maxRainIntervalTimeMin.
// (Suggested value: 0).
_minRainIntervalTimeMin = DZE_WeatherVariables select 14;

// Maximum time in minutes for rain intervals. Must be greater than or equal to _minRainIntervalTimeMin. (Suggested value:
// (_maxWeatherChangeTimeMin + _maxTimeBetweenWeatherChangesMin) / 2).
_maxRainIntervalTimeMin = (_maxWeatherChangeTimeMin + _maxTimeBetweenWeatherChangesMin) / 2;

// If set to true, then the rain is forced to stop after one rain interval during which it has rained (use this for example if you only want
// small occational cloudbursts ). If set to false, then the rain may stop, but it may also just change intensity for an
// immedeate new rain interval. (Suggested value: false).
_forceRainToStopAfterOneRainInterval = DZE_WeatherVariables select 15;


///////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Don't touch anything beneath this line

drn_DynamicWeather_DebugTextEventArgs = []; // Empty

"drn_DynamicWeather_DebugTextEventArgs" addPublicVariableEventHandler {
    drn_DynamicWeather_DebugTextEventArgs call drn_fnc_DynamicWeather_ShowDebugTextLocal;
};

/*
 * Summary: Shows debug text on local client.
 * Arguments:
 *   _text: Debug text.
 */
drn_fnc_DynamicWeather_ShowDebugTextLocal = {
    private ["_minutes", "_seconds"];

    if (!isNull player) then {
        player sideChat (_this select 0);
    };

    _minutes = floor (time / 60);
    _seconds = floor (time - (_minutes * 60));
    diag_log ((str _minutes + ":" + str _seconds) + " Debug: " + (_this select 0));
};

/*
 * Summary: Shows debug text on all clients.
 * Arguments:
 *   _text: Debug text.
 */
drn_fnc_DynamicWeather_ShowDebugTextAllClients = {
    drn_DynamicWeather_DebugTextEventArgs = _this;
    publicVariable "drn_DynamicWeather_DebugTextEventArgs";
    drn_DynamicWeather_DebugTextEventArgs call drn_fnc_DynamicWeather_ShowDebugTextLocal;
};

if (_debug) then {
    ["Starting script WeatherEffects.sqf..."] call drn_fnc_DynamicWeather_ShowDebugTextLocal;
};

drn_DynamicWeatherEventArgs = []; // [current overcast, current fog, current rain, current weather change ("OVERCAST", "FOG" or ""), target weather value, time until weather completion (in seconds), current wind x, current wind z]
drn_AskServerDynamicWeatherEventArgs = []; // []

drn_fnc_DynamicWeather_SetWeatherLocal = {
    private ["_currentOvercast", "_currentFog", "_currentRain", "_currentWeatherChange", "_targetWeatherValue", "_timeUntilCompletion", "_currentWindX", "_currentWindZ"];

    _currentOvercast = _this select 0;
    _currentFog = _this select 1;
    _currentRain = _this select 2;
    _currentWeatherChange = _this select 3;
    _targetWeatherValue = _this select 4;
    _timeUntilCompletion = _this select 5;
    _currentWindX = _this select 6;
    _currentWindZ = _this select 7;

    // Set current weather values
    0 setOvercast _currentOvercast;
    0 setFog _currentFog;
    drn_var_DynamicWeather_Rain = _currentRain;
    setWind [_currentWindX, _currentWindZ, true];

    // Set forecast
    if (_currentWeatherChange == "OVERCAST") then {
        _timeUntilCompletion setOvercast _targetWeatherValue;
    };
    if (_currentWeatherChange == "FOG") then {
        _timeUntilCompletion setFog _targetWeatherValue;
    };
};

if (!isServer) then {
    "drn_DynamicWeatherEventArgs" addPublicVariableEventHandler {
        drn_DynamicWeatherEventArgs call drn_fnc_DynamicWeather_SetWeatherLocal;
    };

    waitUntil {!isNil "drn_var_DynamicWeather_ServerInitialized"};

    drn_AskServerDynamicWeatherEventArgs = [true];
    publicVariable "drn_AskServerDynamicWeatherEventArgs";
};

if (isServer) then {
    drn_fnc_DynamicWeather_SetWeatherAllClients = {
        private ["_timeUntilCompletion", "_currentWeatherChange"];

        _timeUntilCompletion = drn_DynamicWeather_WeatherChangeCompletedTime - drn_DynamicWeather_WeatherChangeStartedTime;
        if (_timeUntilCompletion > 0) then {
            _currentWeatherChange = drn_DynamicWeather_CurrentWeatherChange;
        }
        else {
            _currentWeatherChange = "";
        };

        drn_DynamicWeatherEventArgs = [overcast, fog, drn_var_DynamicWeather_Rain, _currentWeatherChange, drn_DynamicWeather_WeatherTargetValue, _timeUntilCompletion, drn_DynamicWeather_WindX, drn_DynamicWeather_WindZ];
        publicVariable "drn_DynamicWeatherEventArgs";
        drn_DynamicWeatherEventArgs call drn_fnc_DynamicWeather_SetWeatherLocal;
    };

    "drn_AskServerDynamicWeatherEventArgs" addPublicVariableEventHandler {
        call drn_fnc_DynamicWeather_SetWeatherAllClients;
    };

    drn_DynamicWeather_CurrentWeatherChange = "";
    drn_DynamicWeather_WeatherTargetValue = 0;
    drn_DynamicWeather_WeatherChangeStartedTime = time;
    drn_DynamicWeather_WeatherChangeCompletedTime = time;
    drn_DynamicWeather_WindX = _initialWind select 0;
    drn_DynamicWeather_WindZ = _initialWind select 1;

    if (_initialFog == -1) then {
        _initialFog = (_minimumFog + random (_maximumFog - _minimumFog));
    }
    else {
        if (_initialFog < _minimumFog) then {
            _initialFog = _minimumFog;
        };
        if (_initialFog > _maximumFog) then {
            _initialFog = _maximumFog;
        };
    };

    0 setFog _initialFog;

    if (_initialOvercast == -1) then {
        _initialOvercast = (_minimumOvercast + random (_maximumOvercast - _minimumOvercast));
    }
    else {
        if (_initialOvercast < _minimumOvercast) then {
            _initialOvercast = _minimumOvercast;
        };
        if (_initialOvercast > _maximumOvercast) then {
            _initialOvercast = _maximumOvercast;
        };
    };

    0 setOvercast _initialOvercast;

    if (_initialOvercast >= 0.75) then {
        if (_initialRain == -1) then {
            _initialRain = (_minimumRain + random (_minimumRain - _minimumRain));
        }
        else {
            if (_initialRain < _minimumRain) then {
                _initialRain = _minimumRain;
            };
            if (_initialRain > _maximumRain) then {
                _initialRain = _maximumRain;
            };
        };
    }
    else {
        _initialRain = 0;
    };

    drn_var_DynamicWeather_Rain = _initialRain;
    0 setRain drn_var_DynamicWeather_Rain;

    _maxWind = _minimumWind + random (_maximumWind - _minimumWind);

    if (drn_DynamicWeather_WindX == -1) then {
        if (random 100 < 50) then {
            drn_DynamicWeather_WindX = -_minimumWind - random (_maxWind - _minimumWind);
        }
        else {
            drn_DynamicWeather_WindX = _minimumWind + random (_maxWind - _minimumWind);
        };
    };

    if (drn_DynamicWeather_WindZ == -1) then {
        if (random 100 < 50) then {
            drn_DynamicWeather_WindZ = -_minimumWind - random (_maxWind - _minimumWind);
        }
        else {
            drn_DynamicWeather_WindZ = _minimumWind + random (_maxWind - _minimumWind);
        };
    };

    setWind [drn_DynamicWeather_WindX, drn_DynamicWeather_WindZ, true];

    uiSleep 0.05;

    publicVariable "drn_var_DynamicWeather_Rain";
    drn_var_DynamicWeather_ServerInitialized = true;
    publicVariable "drn_var_DynamicWeather_ServerInitialized";

    // Start weather thread
    [_minWeatherChangeTimeMin, _maxWeatherChangeTimeMin, _minTimeBetweenWeatherChangesMin, _maxTimeBetweenWeatherChangesMin, _minimumFog, _maximumFog, _minimumOvercast, _maximumOvercast, _minimumWind, _maximumWind, _windChangeProbability, _debug] spawn {
        private ["_minWeatherChangeTimeMin", "_maxWeatherChangeTimeMin", "_minTimeBetweenWeatherChangesMin", "_maxTimeBetweenWeatherChangesMin", "_minimumFog", "_maximumFog", "_minimumOvercast", "_maximumOvercast", "_minimumWind", "_maximumWind", "_windChangeProbability", "_debug"];
        private ["_weatherType", "_fogLevel", "_overcastLevel", "_oldFogLevel", "_oldOvercastLevel", "_weatherChangeTimeSek"];

        _minWeatherChangeTimeMin = _this select 0;
        _maxWeatherChangeTimeMin = _this select 1;
        _minTimeBetweenWeatherChangesMin = _this select 2;
        _maxTimeBetweenWeatherChangesMin = _this select 3;
        _minimumFog = _this select 4;
        _maximumFog = _this select 5;
        _minimumOvercast = _this select 6;
        _maximumOvercast = _this select 7;
        _minimumWind = _this select 8;
        _maximumWind = _this select 9;
        _windChangeProbability = _this select 10;
        _debug = _this select 11;

        // Set initial fog level
        _fogLevel = 2;
        _overcastLevel = 2;

        while {1 == 1} do {
            // uiSleep a while until next weather change
            uiSleep floor (_minTimeBetweenWeatherChangesMin * 60 + random ((_maxTimeBetweenWeatherChangesMin - _minTimeBetweenWeatherChangesMin) * 60));

            if (_minimumFog == _maximumFog && {_minimumOvercast != _maximumOvercast}) then {
                _weatherType = "OVERCAST";
            };
            if (_minimumFog != _maximumFog && {_minimumOvercast == _maximumOvercast}) then {
                _weatherType = "FOG";
            };
            if (_minimumFog != _maximumFog && {_minimumOvercast != _maximumOvercast}) then {

                // Select type of weather to change
                if ((random 100) < 50) then {
                    _weatherType = "OVERCAST";
                }
                else {
                    _weatherType = "FOG";
                };
            };

            // DEBUG
            //_weatherType = "OVERCAST";

            if (_weatherType == "FOG") then {

                drn_DynamicWeather_CurrentWeatherChange = "FOG";

                // Select a new fog level
                _oldFogLevel = _fogLevel;
                _fogLevel = floor ((random 100) / 25);

                while {_fogLevel == _oldFogLevel} do {
                    _fogLevel = floor ((random 100) / 25);
                };

                if (_fogLevel == 0) then {
                    drn_DynamicWeather_WeatherTargetValue = _minimumFog + (_maximumFog - _minimumFog) * random 0.05;
                };
                if (_fogLevel == 1) then {
                    drn_DynamicWeather_WeatherTargetValue = _minimumFog + (_maximumFog - _minimumFog) * (0.05 + random 0.2);
                };
                if (_fogLevel == 2) then {
                    drn_DynamicWeather_WeatherTargetValue = _minimumFog + (_maximumFog - _minimumFog) * (0.25 + random 0.3);
                };
                if (_fogLevel == 3) then {
                    drn_DynamicWeather_WeatherTargetValue = _minimumFog + (_maximumFog - _minimumFog) * (0.55 + random 0.45);
                };

                drn_DynamicWeather_WeatherChangeStartedTime = time;
                _weatherChangeTimeSek = _minWeatherChangeTimeMin * 60 + random ((_maxWeatherChangeTimeMin - _minWeatherChangeTimeMin) * 60);
                drn_DynamicWeather_WeatherChangeCompletedTime = time + _weatherChangeTimeSek;

                if (_debug) then {
                    ["Weather forecast: Fog " + str drn_DynamicWeather_WeatherTargetValue + " in " + str round (_weatherChangeTimeSek / 60) + " minutes."] call drn_fnc_DynamicWeather_ShowDebugTextAllClients;
                };
            };

            if (_weatherType == "OVERCAST") then {

                drn_DynamicWeather_CurrentWeatherChange = "OVERCAST";

                // Select a new overcast level
                _oldOvercastLevel = _overcastLevel;
                //_overcastLevel = floor ((random 100) / 25);
                _overcastLevel = 3;

                while {_overcastLevel == _oldOvercastLevel} do {
                    _overcastLevel = floor ((random 100) / 25);
                };

                if (_overcastLevel == 0) then {
                    drn_DynamicWeather_WeatherTargetValue = _minimumOvercast + (_maximumOvercast - _minimumOvercast) * random 0.05;
                };
                if (_overcastLevel == 1) then {
                    drn_DynamicWeather_WeatherTargetValue = _minimumOvercast + (_maximumOvercast - _minimumOvercast) * (0.05 + random 0.3);
                };
                if (_overcastLevel == 2) then {
                    drn_DynamicWeather_WeatherTargetValue = _minimumOvercast + (_maximumOvercast - _minimumOvercast) * (0.35 + random 0.35);
                };
                if (_overcastLevel == 3) then {
                    drn_DynamicWeather_WeatherTargetValue = _minimumOvercast + (_maximumOvercast - _minimumOvercast) * (0.7 + random 0.3);
                };

                // DEBUG
                /*
                if (overcast > 0.8) then {
                    drn_DynamicWeather_WeatherTargetValue = 0.5;
                }
                else {
                    drn_DynamicWeather_WeatherTargetValue = 0.85;
                };
                */

                drn_DynamicWeather_WeatherChangeStartedTime = time;
                _weatherChangeTimeSek = _minWeatherChangeTimeMin * 60 + random ((_maxWeatherChangeTimeMin - _minWeatherChangeTimeMin) * 60);
                drn_DynamicWeather_WeatherChangeCompletedTime = time + _weatherChangeTimeSek;

                if (_debug) then {
                    ["Weather forecast: Overcast " + str drn_DynamicWeather_WeatherTargetValue + " in " + str round (_weatherChangeTimeSek / 60) + " minutes."] call drn_fnc_DynamicWeather_ShowDebugTextAllClients;
                };
            };

            // On average every one fourth of weather changes, change wind too
            if (random 100 < _windChangeProbability) then {
                private ["_maxWind"];

                _maxWind = _minimumWind + random (_maximumWind - _minimumWind);

                if (random 100 < 50) then {
                    drn_DynamicWeather_WindX = -_minimumWind - random (_maxWind - _minimumWind);
                }
                else {
                    drn_DynamicWeather_WindX = _minimumWind + random (_maxWind - _minimumWind);
                };
                if (random 100 < 50) then {
                    drn_DynamicWeather_WindZ = -_minimumWind - random (_maxWind - _minimumWind);
                }
                else {
                    drn_DynamicWeather_WindZ = _minimumWind + random (_maxWind - _minimumWind);
                };

                if (_debug) then {
                    ["Wind changes: [" + str drn_DynamicWeather_WindX + ", " + str drn_DynamicWeather_WindZ + "]."] call drn_fnc_DynamicWeather_ShowDebugTextAllClients;
                };
            };

            call drn_fnc_DynamicWeather_SetWeatherAllClients;

            uiSleep _weatherChangeTimeSek;
        };
    };

    // Start rain thread
    if (_rainIntervalRainProbability > 0) then {
        [_minimumRain, _maximumRain, _forceRainToStopAfterOneRainInterval, _minRainIntervalTimeMin, _maxRainIntervalTimeMin, _rainIntervalRainProbability, _debug] spawn {
            private ["_minimumRain", "_maximumRain", "_forceRainToStopAfterOneRainInterval", "_minRainIntervalTimeMin", "_maxRainIntervalTimeMin", "_rainIntervalRainProbability", "_debug"];
            private ["_nextRainEventTime", "_forceStop"];

            _minimumRain = _this select 0;
            _maximumRain = _this select 1;
            _forceRainToStopAfterOneRainInterval = _this select 2;
            _minRainIntervalTimeMin = _this select 3;
            _maxRainIntervalTimeMin = _this select 4;
            _rainIntervalRainProbability = _this select 5;
            _debug = _this select 6;

            if (rain > 0) then {
                drn_var_DynamicWeather_Rain = rain;
                publicVariable "drn_var_DynamicWeather_Rain";
            };

            _nextRainEventTime = time;
            _forceStop = false;

            while {1 == 1} do {

                if (overcast > 0.75) then {

                    if (time >= _nextRainEventTime) then {
                        private ["_rainTimeSec"];

                        // At every rain event time, start or stop rain with 50% probability
                        if (random 100 < _rainIntervalRainProbability && {!_forceStop}) then {
                            drn_var_DynamicWeather_rain = _minimumRain + random (_maximumRain - _minimumRain);
                            publicVariable "drn_var_DynamicWeather_rain";

                            _forceStop = _forceRainToStopAfterOneRainInterval;
                        }
                        else {
                            drn_var_DynamicWeather_rain = 0;
                            publicVariable "drn_var_DynamicWeather_rain";

                            _forceStop = false;
                        };

                        // Pick a time for next rain change
                        _rainTimeSec = _minRainIntervalTimeMin * 60 + random ((_maxRainIntervalTimeMin - _minRainIntervalTimeMin) * 60);
                        _nextRainEventTime = time + _rainTimeSec;

                        if (_debug) then {
                            ["Rain set to " + str drn_var_DynamicWeather_rain + " for " + str (_rainTimeSec / 60) + " minutes"] call drn_fnc_DynamicWeather_ShowDebugTextAllClients;
                        };
                    };
                }
                else {
                    if (drn_var_DynamicWeather_rain != 0) then {
                        drn_var_DynamicWeather_rain = 0;
                        publicVariable "drn_var_DynamicWeather_rain";

                        if (_debug) then {
                            ["Rain stops due to low overcast."] call drn_fnc_DynamicWeather_ShowDebugTextAllClients;
                        };
                    };

                    _nextRainEventTime = time;
                    _forceStop = false;
                };

                if (_debug) then {
                    uiSleep 1;
                }
                else {
                    uiSleep 10;
                };
            };
        };
    };
};

drn_var_rainRoutine = [_rainIntervalRainProbability, _debug] spawn {
    private ["_rainIntervalRainProbability", "_debug"];
    private ["_rain", "_rainPerSecond"];

    _rainIntervalRainProbability = _this select 0;
    _debug = _this select 1;

    if (_debug) then {
        _rainPerSecond = 0.2;
    }
    else {
        _rainPerSecond = 0.03;
    };

    if (_rainIntervalRainProbability > 0) then {
        _rain = drn_var_DynamicWeather_Rain;
    }
    else {
        _rain = 0;
    };

    0 setRain _rain;
    uiSleep 0.1;

    while {1 == 1} do {
        if (_rainIntervalRainProbability > 0) then {
            if (_rain < drn_var_DynamicWeather_Rain) then {
                _rain = _rain + _rainPerSecond;
                if (_rain > 1) then { _rain = 1; };
            };
            if (_rain > drn_var_DynamicWeather_Rain) then {
                _rain = _rain - _rainPerSecond;
                if (_rain < 0) then { _rain = 0; };
            };
        }
        else {
            _rain = 0;
        };

        3 setRain _rain;

        uiSleep 3;
    };
};
