/*
	This file was imported from DayZ Epoch 1.0.5.1 and updated for use in v1.06+ by JasonTM.
	This version uses the old "SpawnableWreck" classes.
*/

#include "\z\addons\dayz_code\loot\Loot.hpp"

#define SEARCH_BLACKLIST [[[2092,14167],[10558,12505]]] // Map area black list. Default is for Chernarus.
#define LOWER_GRASS	true // Lowers the grass around the loot.
#define MIN_LOOT_RADIUS 4 // Minimum distance for loot to spawn from the crash site in meters.
#define MAX_LOOT_RADIUS 10 // Maximum distance for loot to spawn from the crash site in meters.
#define SPAWN_FIRE false // Visual effect of burning wreck. (may negatively affect fps)
#define FADE_FIRE false // Fades the burning effect over time.
#define NUMBER 3 //Number of crash sites to spawn at the beginning of the mission.
#define LOOT_MIN 10 // Minimum number of loot items to spawn per site.
#define LOOT_MAX 15 // Maximum number of loot items to spawn per site.

private ["_spawnCrashSite","_class","_crashName","_position","_crash","_type","_lootGroup","_lootRadius","_lootPos","_lootVeh","_lootNum"];

_spawnCrashSite = {
	
	_class = ["UH60_NAVY_Wreck_DZ","UH60_ARMY_Wreck_DZ","UH60_NAVY_Wreck_burned_DZ","UH60_ARMY_Wreck_burned_DZ","Mass_grave_DZ"] call BIS_fnc_selectRandom;
	_crashName	= getText (configFile >> "CfgVehicles" >> _class >> "displayName");

	_position = [getMarkerPos "crashsites", 0, (getMarkerSize "crashsites") select 0, 20, 0, 0.3, 0, SEARCH_BLACKLIST] call BIS_fnc_findSafePos;

	_crash = _class createVehicle [0,0,0];
	_crash setDir random 360;
	_position set [2, 0];
	_crash setPos _position;
	_crash setVariable ["ObjectID","1",true];
	_crash enableSimulation false;

	if (SPAWN_FIRE && {!(_class == "Mass_grave_DZ")}) then {
		PVDZ_obj_Fire = [_crash, 4, time, false, FADE_FIRE];
			publicVariable "PVDZ_obj_Fire";
		_crash setvariable ["fadeFire",FADE_FIRE,true];
	};
	
	// Select random crash site loot
	_type = Loot_SelectSingle(Loot_GetGroup("CrashSiteType"));
	if(_class == "Mass_grave_DZ") then {
		_lootGroup = Loot_GetGroup("MassGrave");
	} else {
		_lootGroup = Loot_GetGroup(_type select 2);
	};
	
	// Calculate loot amount
	_lootNum = round (LOOT_MIN + random (LOOT_MAX - LOOT_MIN));
	
	diag_log format ["CRASHSPAWNER: Spawning crash site (%1) at %2 with %3 items.", _crashName, _position, _lootNum];
	
	{
		_lootRadius = (random MAX_LOOT_RADIUS) + MIN_LOOT_RADIUS;
		_lootPos = [_position, _lootRadius, random 360] call BIS_fnc_relPos;
		_lootPos set [2, 0];
		_lootVeh = Loot_Spawn(_x, _lootPos);
		_lootVeh setVariable ["permaLoot", true];
		//_lootArray set[count _lootArray, _lootVeh];
		if (LOWER_GRASS) then {
			createVehicle ["ClutterCutter_small_2_EP1", _lootPos, [], 0, "CAN_COLLIDE"];
		};
	} forEach Loot_Select(_lootGroup,_lootNum);
};

// Spawn crash sites
for "_i" from 1 to (NUMBER) do
{
	call _spawnCrashSite;
};