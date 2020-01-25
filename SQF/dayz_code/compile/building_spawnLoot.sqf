/*
Spawns loot at the given building.

Parameters:
	obj - building to spawn loot at
	type - classname of building
	config - building configs (type, loot chance, loot positions. loot refresh timer)
	
Usage:
	[building,classname,_config] call building_spawnLoot;
	
Author:
	Foxy
*/

#include "\z\addons\dayz_code\util\Vector.hpp"
#include "\z\addons\dayz_code\loot\Loot.hpp"

private ["_vectorUp","_type","_config","_lootChance","_lootPos","_lootGroup","_worldPos","_existingPile","_loot","_group","_smallGroup"];

_obj = _this select 0;
_type = _this select 1;
_config = _this select 2;
_vectorUp = vectorUp _obj;
if (Vector_Angle(Vector_UP,_vectorUp) > 20) exitWith { 0 };
_lootChance = getNumber (_config >> "lootChance");

if (_lootChance <= 0 or ([_obj] call DZE_SafeZonePosCheck)) exitWith {};

_group = getText(_config >> "lootGroup");
_lootPos = getArray (_config >> "lootPos");
_lootPos = [_lootPos,5] call fn_shuffleArray;

// Military buildings spawn matching loot.
if (_group in ["Military","MilitaryIndustrial"]) then {
	_lootGroup = Loot_SelectSingle(Loot_GetGroup(_group));
	_smallGroup = _lootGroup select 2;
	_lootGroup = Loot_GetGroup(_lootGroup select 1);
} else {
	_lootGroup = Loot_GetGroup(_group);
};

{
	//Get the world position of the spawn position
	_worldPos = _obj modelToWorld _x;
	_worldPos set [2, 0 max (_worldPos select 2)];
	
	//Delete existing lootpiles within 1m of spawn location
	{
		deleteVehicle _x;
		dayz_currentWeaponHolders = dayz_currentWeaponHolders - 1;
	} count (_worldPos nearObjects ["ReammoBox", 1]);

	if (_lootChance > random 1 && {dayz_currentWeaponHolders < dayz_maxMaxWeaponHolders}) then {
		Loot_SpawnGroup(_lootGroup, _worldPos);
	};
}
foreach _lootPos;

// EPOCH ADDITION
// lootPosSmall are additional positions in lockers, on shelves, etc. for small objects only.
// Example: soda cans, small ammo, pistols, bandage, etc.

if (isArray (_config >> "lootPosSmall")) then {
	_lootPos = getArray (_config >> "lootPosSmall");
	
	if (!isNil "_smallGroup") then {
		_lootGroup = Loot_GetGroup(_smallGroup);
	} else {
		_lootGroup = Loot_GetGroup((_group) + "Small");
	};
	
	if (_lootGroup >= 1) then {
		_lootPos = [_lootPos,5] call fn_shuffleArray;
		{
			//Get the world position of the spawn position
			_worldPos = _obj modelToWorld _x;
			_worldPos set [2, 0 max (_worldPos select 2)];
			//Delete existing lootpiles within 1m of spawn location
			{
				deleteVehicle _x;
				dayz_currentWeaponHolders = dayz_currentWeaponHolders - 1;
			} count (_worldPos nearObjects ["ReammoBox", 1]);

			if (_lootChance > random 1 && {dayz_currentWeaponHolders < dayz_maxMaxWeaponHolders}) then {
				Loot_SpawnGroup(_lootGroup, _worldPos);
			};
		} foreach _lootPos;
	} else {
		diag_log format["Loot group small: %1 does not exist", ((getText(_config >> "lootGroup")) + "Small")];
	};
};
