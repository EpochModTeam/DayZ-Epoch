// Compiles
dz_fn_loot_select = compile preprocessFileLineNumbers "\z\addons\dayz_code\loot\select.sqf";
dz_fn_loot_spawnGroup = compile preprocessFileLineNumbers "\z\addons\dayz_code\loot\spawnGroup.sqf";
dz_fn_loot_insert = compile preprocessFileLineNumbers "\z\addons\dayz_code\loot\insert.sqf";
dz_fn_loot_insertCargo = compile preprocessFileLineNumbers "\z\addons\dayz_code\loot\insertCargo.sqf";
if (isServer) then {
	dz_fn_loot_spawn = compile preprocessFileLineNumbers "\z\addons\dayz_code\loot\spawn_server.sqf";
} else {
	dz_fn_loot_spawn = compile preprocessFileLineNumbers "\z\addons\dayz_code\loot\spawn.sqf";
};

#include "\z\addons\dayz_code\Configs\CfgLoot\LootDefines.hpp"

private ["_cfgGroups","_cfg","_lootGroup","_weight","_weighted","_index","_count"];

dz_loot_groups = [];
dz_loot_weighted = [];
dz_loot_definitions = [];

_cfgGroups = missionConfigFile >> "CfgLoot" >> "Groups";

for "_i" from 0 to (count _cfgGroups) - 1 do {

	_cfg = _cfgGroups select _i;
	dz_loot_groups set [_i, configName _cfg];
	
	_lootGroup = getArray _cfg;
	_weighted = [];
	_count = 0;
		
	{
		// Round the weight just in case somebody doesn't use a whole number.
		_weight = round(_x select 1);
		
		//Remove weight from _x
		for "_j" from 1 to (count _x) - 2 do { _x set [_j, _x select (_j + 1)]; };
		_x resize ((count _x) - 1);
		
		// Add resized group array to definitions array
		_index = count dz_loot_definitions;
		dz_loot_definitions set [_index, _x];
		
		// Build weighted array for the group
		for "_j" from _count to (_count + _weight - 1) do {
			_weighted set [_j, _index];
		};
		
		_count = _count + _weight;
	} count _lootGroup;
	
	dz_loot_weighted set [_i, _weighted];
};

{
	if !((_x select 0) in [0,2,3,5,6]) then { // skip types other than listed below
		switch (_x select 0) do {
			case Loot_GROUP:		{ _x set [1, dz_loot_groups find (_x select 1)]; };
			case Loot_PILE:			{ _x set [1, dz_loot_groups find (_x select 1)]; };
			case Loot_CONTAINER:	{ _x set [2, dz_loot_groups find (_x select 2)]; };
			case Loot_CUSTOM:		{ _x set [1, compile (_x select 1)]; };
		};
	};
} count dz_loot_definitions;
