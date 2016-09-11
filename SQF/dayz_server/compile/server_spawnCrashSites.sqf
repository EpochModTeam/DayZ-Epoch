/*
Spawns crash sites at the beginning of mission and periodically during it.

Author:
	Foxy
*/

#include "\z\addons\dayz_code\util\Math.hpp"
#include "\z\addons\dayz_code\util\Vector.hpp"
#include "\z\addons\dayz_code\loot\Loot.hpp"

//Spawn frequency ± variance in minutes
#define SPAWN_FREQUENCY 25
#define SPAWN_VARIANCE 20

//The higher the number, the more accurate the timer is.
//Must be positive and non-zero.
#define TIMER_RESOLUTION 10

//Chance to spawn a crash site
#define SPAWN_CHANCE 0.75

//Parameters for finding a suitable position to spawn the crash site
#define SEARCH_CENTER getMarkerPos "crashsites"
#define SEARCH_RADIUS (getMarkerSize "crashsites") select 0
#define SEARCH_DIST_MIN 20
#define SEARCH_SLOPE_MAX 2
#define SEARCH_BLACKLIST [[[2092,14167],[10558,12505]]]

//Number of crash sites to spawn at the beginning of the mission
#define INITIAL_NUM 1

//Number of loot items to spawn per site
#define LOOT_MIN 5
#define LOOT_MAX 8

private
[
	"_debugZone",
	"_spawnCrashSite",
	"_type",
	"_class",
	"_lootGroup",
	"_position",
	"_vehicle",
//	"_size",
//	"_loot",
	"_lootParams",
	"_dir",
	"_mag",
	"_lootNum",
	"_lootPos",
	"_lootVeh",
	"_lootpos",
	"_time"
];

diag_log format ["CRASHSPAWNER: Starting crash site spawner. Frequency: %1±%2 min. Spawn chance: %3", SPAWN_FREQUENCY, SPAWN_VARIANCE, SPAWN_CHANCE];

_spawnCrashSite =
{
	_type = Loot_SelectSingle(Loot_GetGroup("CrashSiteType"));
	_class = _type select 1;
	_lootGroup = Loot_GetGroup(_type select 2);
	
	_position = [SEARCH_CENTER, 0, SEARCH_RADIUS, SEARCH_DIST_MIN, 0, SEARCH_SLOPE_MAX, 0, SEARCH_BLACKLIST] call BIS_fnc_findSafePos;
	_position set [2, 0];
	
	_lootNum = round Math_RandomRange(LOOT_MIN, LOOT_MAX);
	
	diag_log format ["CRASHSPAWNER: Spawning crash site (%1) at %2 with %3 items.", _class, _position, _lootNum];
	
	//_vehicle = createVehicle ["ClutterCutter_small_2_EP1", _position, [], 0, "CAN_COLLIDE"];
	//_vehicle = createVehicle [_class, _position, [], 0, "CAN_COLLIDE"];
	_vehicle = "ClutterCutter_small_2_EP1" createVehicle _position;
	_vehicle = _class createVehicle [0,0,0];
	dayz_serverObjectMonitor set [count dayz_serverObjectMonitor, _vehicle];
	_vehicle setVariable ["ObjectID", 1, true];
	_vehicle setDir random 360;
	_vehicle setPos _position;

	_lootParams = getArray (configFile >> "CfgVehicles" >> _class >> "lootParams");
	
	{
		_dir = random 360;
		_mag = random (_lootParams select 4);
		_lootPos = [((_lootParams select 2) + _mag) * sin _dir, ((_lootParams select 3) + _mag) * cos _dir, 0];
		_lootPos = Vector_Add(_lootPos, _lootParams select 0);
		_lootPos = Vector_Rotate2D(_lootPos, _lootParams select 1);
		_lootPos = _vehicle modelToWorld _lootPos;
		_lootPos set [2, 0];
		
		_lootVeh = Loot_Spawn(_x, _lootPos);
		_lootVeh setVariable ["permaLoot", true];
		
		switch (dayz_spawnCrashSite_clutterCutter) do
		{
			case 1: //Lift loot up by 5cm
			{
				_lootPos set [2, 0.05];
				_lootVeh setPosATL _lootpos;
			};
			
			case 2: //Clutter cutter
			{
				//createVehicle ["ClutterCutter_small_2_EP1", _lootPos, [], 0, "CAN_COLLIDE"];
				"ClutterCutter_small_2_EP1" createVehicle _lootPos;
			};
			
			case 3: //Debug sphere
			{
				//createVehicle ["Sign_sphere100cm_EP1", _lootPos, [], 0, "CAN_COLLIDE"];
				"Sign_sphere100cm_EP1" createVehicle _lootPos;
			};
		};
	}
	forEach Loot_Select(_lootGroup, _lootNum);
};

//Spawn initial crash sites
for "_i" from 1 to (INITIAL_NUM) do
{
	call _spawnCrashSite;
};

while {true} do
{
	//Pick a time to attempt spawning
	//currentTime + frequency + ±1 * variance
	_time = time + 60 * ((SPAWN_FREQUENCY) + ((round random 1) * 2 - 1) * random (SPAWN_VARIANCE));
	
	//Wait until the previously decided time
	while {time < _time} do
	{
		uiSleep (60 * (SPAWN_FREQUENCY) / (TIMER_RESOLUTION));
	};
	
	//try to spawn
	if ((SPAWN_CHANCE) > random 1) then
	{
		call _spawnCrashSite;
	};
};