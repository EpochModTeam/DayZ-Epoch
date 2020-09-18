/*
Spawns care packages.

Single parameter:
	integer		Number of care packages to spawn.

Author:
	Foxy
*/

#include "\z\addons\dayz_code\util\Math.hpp"
#include "\z\addons\dayz_code\util\Vector.hpp"
#include "\z\addons\dayz_code\loot\Loot.hpp"

//Number of care packages to spawn
#define SPAWN_NUM 6

//Parameters for finding a suitable position to spawn the crash site
#define SEARCH_CENTER getMarkerPos "carepackages"
#define SEARCH_RADIUS (getMarkerSize "carepackages") select 0
#define SEARCH_DIST_MIN 30
#define SEARCH_SLOPE_MAX 1000
#define SEARCH_BLACKLIST [[[12923,3643],[14275,2601]]]

#define CLUTTER_CUTTER 0 //0 = loot hidden in grass, 1 = loot lifted, 2 = no grass, 3 = debug sphere.

private ["_typeGroup","_position","_type","_class","_vehicle","_lootGroup","_lootNum","_lootPos","_lootVeh","_size"];

_lootGroup = Loot_GetGroup("CarePackage");
_typeGroup = Loot_GetGroup("CarePackageType");

for "_i" from 1 to (SPAWN_NUM) do
{
	_type = Loot_SelectSingle(_typeGroup);
	_class = _type select 1;
	_lootNum = round Math_RandomRange(_type select 2, _type select 3);
	_position = [SEARCH_CENTER, 0, SEARCH_RADIUS, SEARCH_DIST_MIN, 0, SEARCH_SLOPE_MAX, 0, SEARCH_BLACKLIST] call BIS_fnc_findSafePos;
	_position set [2, 0];
	
	diag_log format ["DEBUG: Spawning a care package (%1) at %2 with %3 items.", _class, _position, _lootNum];
	
	//_vehicle = createVehicle [_class, _position, [], 0, "CAN_COLLIDE"];
	_vehicle = _class createVehicle _position;
	dayz_serverObjectMonitor set [count dayz_serverObjectMonitor, _vehicle];
	_vehicle setVariable ["ObjectID", 1, true];
		
	_size = sizeOf _class;
	
	{
		//Calculate random loot position
		_lootPos = Vector_Add(_position, Vector_Multiply(Vector_FromDir(random 360), _size * 0.6 + random _size));
		_lootPos set [2, 0];
		
		_lootVeh = Loot_Spawn(_x, _lootPos, "");
		_lootVeh setVariable ["permaLoot", true];
		
		call {
			if (CLUTTER_CUTTER == 1) exitWith {_lootPos set [2, 0.05]; _lootVeh setPosATL _lootpos;};
			if (CLUTTER_CUTTER == 2) exitWith {"ClutterCutter_small_2_EP1" createVehicle _lootPos;};
			if (CLUTTER_CUTTER == 3) exitWith {"Sign_sphere100cm_EP1" createVehicle _lootPos;};
		};
	} forEach  Loot_Select(_lootGroup, _lootNum);
};
