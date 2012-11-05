======================================================
 DynamicWeatherEffects v2.00 by Engima of Östgöta Ops
======================================================

As a mission designer I have always had problems with the weather. It has not been dynamic the way I want it to be, and I've always thought that it synchronizes terribly in multiplayer as soon I start experimenting with it (especially rain).

This is a simple script that makes the weather dynamic, and it works in single player, multiplayer (hosted and dedicated) and for JIPs. The weather is constantly changing over time intervals of the mission designer's choice. Weather is unpredictable and always synchronized among all players in a multiplayer game!

Script handles fog, overcast, rain and wind.


=======================
 TECHNICAL INFORMATION
=======================

Data sent over network (using publicVariable) is minimal, as data is only sent when weather "forecast" changes and when weather needs to be synchronized because of a JIP player.

Fog and overcast is divided into four levels (clear, some, more, heavy) each representing a smaller value interval, since I don't regard pure random values as especially realistic (e.g. there would very seldom be a clear day). These levels are then chosen randomly, but they are forced to change. So If the weather is heavy fog, it will not change to heavy fog again, but to *another* randomly chosen fog level.

Each client runs a "rain loop" that sets the rain value every third second. This is a workaround for the "rain bug" (or what it is) causing rain to behave randomly on all clients when left unwatched.

If overcast goes above 0.75, there is chance of rain, otherwise it cannot rain (limitation in the game).

Fog and overcast does not change at the same time (limitation in game).


==============
 CHANGELOG
==============

v2.00
- Added section for mission makers to customize and tweak weather behaviour and details.
- Dependency to CommonLib.sqf deleted.
- Improved rain behaviour.
- Initial weather is passed as arguments.
- Slightly better performance.

v1.00
- First version.

==============
 REQUIREMENTS
==============

No requirements.


==============
 INSTALLATION
==============

1. Copy the folder "Scripts" to your mission folder, or just make sure that the following file (and path) exists in your mission folder:

Scripts\DRN\DynamicWeatherEffects\DynamicWeatherEffects.sqf 

2. If the init file (init.sqf) not already exists, create the file in the root of your mission folder.

3. In init.sqf, Start the weather script by adding the the following line:

execVM "Scripts\DRN\DynamicWeatherEffects\DynamicWeatherEffects.sqf";


==============
 VARIABLES
==============

In the script file (DynamicWeatherEffects.sqf) there is a section allowing mission designers to tweak some details regarding weather behavior. The following variables can be altered:

// Minimum time in minutes for the weather (fog and overcast) to change. Must be greater than or equal to 1 and less than or equal to _maxWeatherChangeTimeMin. When weather changes, it is fog OR overcast that changes, not both at the same time. (Suggested value: 10).
_minWeatherChangeTimeMin = 10;

// Maximum time in minutes for the weather (fog and overcast) to change. Must be greater than or equal to _minWeatherChangeTimeMin. (Suggested value: 20).
_maxWeatherChangeTimeMin = 20;

// Minimum time in minutes that weather (fog and overcast) stays constant between weather changes. Must be less than or equal to 0 and greater than or equal to _minWeatherChangeTimeMin. (Suggested value: 5).
_minTimeBetweenWeatherChangesMin = 5;

// Maximum time in minutes that weather (fog and overcast) stays unchanged between weather changes. Must be greater than or equal to _minWeatherChangeTimeMin. (Suggested value: 10).
_maxTimeBetweenWeatherChangesMin = 10;

// Fog intensity never falls below this value. Must be between 0 and 1 and less than or equal to _maximumFog (0 = no fog, 1 = pea soup). (Suggested value: 0).
_minimumFog = 0;

// Fog intensity never exceeds this value. Must be between 0 and 1 and greater than or equal to _minimumFog (0 = no fog, 1 = pea soup). (Suggested value: 0.8).
_maximumFog = 0.8;

// Overcast intensity never falls below this value. Must be between 0 and 1 and less than or equal to _maximumOvercast (0 = no overcast, 1 = maximum overcast). (Suggested value: 0).
_minimumOvercast = 0;

// Overcast intensity never exceeds this value. Must be between 0 and 1 and greater than or equal to _minimumOvercast (0 = no overcast, 1 = maximum overcast). (Suggested value: 1).
_maximumOvercast = 1;

// When raining, rain intensity never falls below this value. Must be between 0 and 1 and less than or equal to _maximumRain (0 = no rain, 1 = maximum rain intensity). (Suggested value: 0);
_minimumRain = 0;

// When raining, rain intensity never exceeds this value. Must be between 0 and 1 and greater than or equal to _minimumRain (0 = no rain, 1 = maximum rain intensity). (Suggested value: 0.8);
_maximumRain = 0.8;

// Wind vector strength never falls below this value. Must be greater or equal to 0 and less than or equal to _maximumWind. (Suggested value: 0);
_minimumWind = 0;

// Wind vector strength never exceeds this value. Must be greater or equal to 0 and greater than or equal to _minimumWind. (Suggested value: 8).
_maximumWind = 8;

// Probability in percent for wind to change when weather changes. If set to 0 then wind will never change. If set to 100 then rain will change every time the weather (fog or overcast) start to change. (Suggested value: 25);
_windChangeProbability = 25;

// A "rain interval" is defined as "a time interval during which it may rain in any intensity (or it may not rain at all)". When overcast goes above 0.75, a chain of rain intervals (defined below) is started. It cycles on until overcast falls below 0.75. At overcast below 0.75 rain intervals never execute (thus it cannot rain).

// Probability in percent (0-100) for rain to start at every rain interval. Set this to 0 if you don't want rain at all. Set this to 100 if you want it to rain constantly when overcast is greater than 0.75. In short: if you think that it generally rains to often then lower this value and vice versa. (Suggested value: 50).
_rainIntervalRainProbability = 50;

// Minimum time in minutes for rain intervals. Must be greater or equal to 0 and less than or equal to _maxRainIntervalTimeMin. (Suggested value: 0).
_minRainIntervalTimeMin = 0;

// Maximum time in minutes for rain intervals. Must be greater than or equal to _minRainIntervalTimeMin. (Suggested value: (_maxWeatherChangeTimeMin + _maxTimeBetweenWeatherChangesMin) / 2)).
_maxRainIntervalTimeMin = (_maxWeatherChangeTimeMin + _maxTimeBetweenWeatherChangesMin) / 2;

// If set to true, then the rain is forced to stop after one rain interval during which it has rained (use this for example if you only want small occational cloudbursts). If set to false, then the rain may stop, but it may also just change intensity for an immedeate new rain interval. (Suggested value: false).
_forceRainToStopAfterOneRainInterval = false;


==============
 ARGUMENTS
==============

Arguments can be passed to the script to set initial mission weather. The following five arguments can be passed to the script:

1) [_initialFog]: Optional. Fog when mission starts. Must be between 0 and 1 where 0 = no fog, 1 = maximum fog. -1 = random fog.
2) [_initialOvercast]: Optional. Overcast when mission starts. Must be between 0 and 1 where 0 = no overcast, 1 = maximum overcast. -1 = random overcast.
3) [_initialRain]: Optional. Rain when mission starts. Must be between 0 and 1 where 0 = no rain, 1 = maximum rain. -1 = random rain. (Overcast must be greater than or equal to 0.75).
4) [_initialWind]: Optional. Wind when mission starts. Must be an array of form [x, z], where x is one wind strength vector and z is the other. x and z must be greater than or equal to 0. [-1, -1] = random wind.
5) [_debug]: Optional. true if debug text is to be shown, otherwise false.


==============
 EXAMPLES
==============

Only one line is needed in init.sqf, and here are some examples:

// The mission will start with random weather.
execVM "Scripts\DRN\DynamicWeatherEffects\DynamicWeatherEffects.sqf";

// The mission will start with fog set to 0.5, but overcast, rain and wind will be random.
[0.5] execVM "Scripts\DRN\DynamicWeatherEffects\DynamicWeatherEffects.sqf";

// The mission will start with fog set to 0.1, overcast set to 0.9, rain set to 1, and wind will be random.
[0.1, 0.9, 1] execVM "Scripts\DRN\DynamicWeatherEffects\DynamicWeatherEffects.sqf";

// The mission will start with random fog, random overcast, random rain and no wind. Debug messages will be displayed for all players.
[-1, -1, -1, [0, 0], true] execVM "Scripts\DRN\DynamicWeatherEffects\DynamicWeatherEffects.sqf";

// The mission will start with fog set to 0.5, overcast set to 0.5, no rain (since the overcast is less than 0.75), and strong wind in direction south west.
[0.5, 0.5, 0.5, [10, 10]] execVM "Scripts\DRN\DynamicWeatherEffects\DynamicWeatherEffects.sqf";
