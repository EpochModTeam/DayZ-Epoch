// DayZ Epoch Breath Fog by JasonTM
// Credit to tpw for Simple Breath Fog: http://www.armaholic.com/page.php?id=13307
// Credit to Sumrak for DZN Breath Fog.

private ["_int","_pos","_b","_arr"];

_int = .04; // intensity of breath fog (0 to 1). The higher the number the less transparent.

if !(isNil "DZE_WeatherDebugTime") then {diag_log format ["Breath fog started at %1",(diag_tickTime - DZE_WeatherDebugTime)];};

while {!DZE_WeatherEndThread} do {
	_arr = [];
	{
		if (isPlayer _x) then {
			_pos = _x selectionposition "neck";
			_b = "#particlesource" createVehicleLocal (getPos _x);
			_b setparticleparams [["\ca\data\particleeffects\universal\universal.p3d", 16, 12, 13, 0], "", "Billboard", 0.5, 0.5, [_pos select 0, (_pos select 1) + 0.15, _pos select 2], [0, 0.2, -0.2], 1, 1.275, 1, 0.2, [0, 0.2, 0], [[1, 1, 1, _int], [1, 1, 1, 0.01], [1, 1, 1, 0]], [1000], 1, 0.04, "", "", _x];
			_b setparticlerandom [2, [0, 0, 0], [0.25, 0.25, 0.25], 0, 0.5, [0, 0, 0, 0.1], 0, 0, 10];
			_b setdropinterval 0.001;
			_arr = _arr + [_b];
		};
	} count (player nearEntities ["CAManBase",300]); // It's better for performance to have each client use createVehicleLocal on nearby player objects.
	
	uiSleep 0.5;
	
	{
		deletevehicle _x; // delete the particle sources.
	} count _arr;
	
	uiSleep (2 + random 1);
};

if !(isNil "DZE_WeatherDebugTime") then {format ["Breath fog ended at %1",(diag_tickTime - DZE_WeatherDebugTime)];};