/*
Spawns crash sites at the beginning of mission.

Author:
	Foxy
	
Modified for DayZ Epoch Event Spawner by JasonTM
*/

#include "\z\addons\dayz_code\util\Math.hpp"
#include "\z\addons\dayz_code\util\Vector.hpp"
#include "\z\addons\dayz_code\loot\Loot.hpp"

//Chance to spawn a crash site
#define SPAWN_CHANCE 0.75

//Parameters for finding a suitable position to spawn the crash site
#define SEARCH_CENTER getMarkerPos "crashsites"
#define SEARCH_RADIUS (getMarkerSize "crashsites") select 0
#define SEARCH_DIST_MIN 20
#define SEARCH_SLOPE_MAX 2
#define SEARCH_BLACKLIST [[[2092,14167],[10558,12505]]]

//Number of crash sites to spawn
#define NUMBER 3

//Number of loot items to spawn per site
#define LOOT_MIN 5
#define LOOT_MAX 8

#define CLUTTER_CUTTER 0 //0 = loot hidden in grass, 1 = loot lifted, 2 = no grass, 3 = debug sphere.

private ["_spawnCrashSite","_type","_class","_lootGroup","_position","_vehicle","_lootParams","_dir","_mag","_lootNum","_lootPos","_lootVeh"];

_spawnCrashSite =
{
	_type = Loot_SelectSingle(Loot_GetGroup("CrashSiteType"));
	_class = _type select 1;
	_lootGroup = Loot_GetGroup(_type select 2);
	_lootNum = round Math_RandomRange(LOOT_MIN, LOOT_MAX);
	
	_position = [SEARCH_CENTER, 0, SEARCH_RADIUS, SEARCH_DIST_MIN, 0, SEARCH_SLOPE_MAX, 0, SEARCH_BLACKLIST] call BIS_fnc_findSafePos;
	_position set [2, 0];
	
	diag_log format ["CRASHSPAWNER: Spawning crash site (%1) at %2 with %3 items.", _class, _position, _lootNum];

	_vehicle = "ClutterCutter_small_2_EP1" createVehicle _position;
	_vehicle = _class createVehicle [0,0,0];
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
		
		_lootVeh = Loot_Spawn(_x, _lootPos, "");
		_lootVeh setVariable ["permaLoot", true];
		
		call {
			if (CLUTTER_CUTTER == 1) exitWith {_lootPos set [2, 0.05]; _lootVeh setPosATL _lootpos;};
			if (CLUTTER_CUTTER == 2) exitWith {"ClutterCutter_small_2_EP1" createVehicle _lootPos;};
			if (CLUTTER_CUTTER == 3) exitWith {"Sign_sphere100cm_EP1" createVehicle _lootPos;};
		};
	} forEach Loot_Select(_lootGroup, _lootNum);
};

//Spawn crash sites
for "_i" from 1 to (NUMBER) do
{
	call _spawnCrashSite;
};
