#include "\z\addons\dayz_code\util\math.hpp"
#include "Loot.hpp"

//If defined, minimizes memory usage at the expense of initialization time.
//#define MINIMIZE_MEMORY

private
[
	"_cfgGroups",
	"_cfg",
	"_lootGroup",
	"_weight",
	"_weighted",
	"_index",
	"_indices",
	"_count",
	"_gcd"
];

#ifdef MINIMIZE_MEMORY
private ["_lootDefCompare", "_y", "_a", "_b", "_r"];

_lootDefCompare =
{
	_a = _this select 0;
	_b = _this select 1;
	
	if ((_a select 0) != (_b select 0)) exitWith { false };
	if ((_a select 1) != (_b select 1)) exitWith { false };
	
	_r = true;
	
	switch (_a select 0) do
	{
		case Loot_PILE:
		{
			_r =	((_a select 2) == (_b select 2)) &&
					{(_a select 3) == (_b select 3)};
		};
		
		case Loot_CONTAINER:
		{
			_r =	((_a select 2) == (_b select 2)) &&
					{(_a select 3) == (_b select 3)} &&
					{(_a select 4) == (_b select 4)};
		};
	};
	
	_r
};
#endif

dz_loot_groups = [];
dz_loot_weighted = [];
dz_loot_definitions = [];

_cfgGroups = missionConfigFile >> "CfgLoot" >> "Groups";

for "_i" from 0 to (count _cfgGroups) - 1 do
{
	_cfg = _cfgGroups select _i;
	dz_loot_groups set [_i, configName _cfg];
};

dz_loot_weighted resize count dz_loot_groups;

for "_i" from 0 to (count _cfgGroups) - 1 do
{
	_lootGroup = getArray (_cfgGroups select _i);
	_weighted = [];
	
	if ((count _lootGroup) > 0) then
	{
		_indices = [];
		_indices resize count _lootGroup;
		
		{
			_weight = _x select 1;
			
			//Remove weight from _x
			for "_j" from 1 to (count _x) - 2 do { _x set [_j, _x select (_j + 1)]; };
			_x resize ((count _x) - 1);
			
			_index = -1;
			
			//Search for an existing identical loot definition
			#ifdef MINIMIZE_MEMORY
			_y = _x;
			{
				if ([_y, _x] call _lootDefCompare) exitWith
				{
					_index = _forEachIndex;
				};
			}
			foreach dz_loot_definitions;
			#endif
			
			//Existing loot definition not found, add it and set the index to point to the new definition
			if (_index == -1) then
			{
				_index = count dz_loot_definitions;
				dz_loot_definitions set [_index, _x];
			};
			
			_lootGroup set [_forEachIndex, round(_weight * 100)];
			_indices set [_forEachIndex, _index];
		}
		foreach _lootGroup;
		
		//Calculate GCD of all the weights
		_gcd = Math_GCDArray(_lootGroup);
		//_gcd = _lootGroup call math_gcdx;
		
		_count = 0;
		{
			_weight = _x / _gcd;
			_weighted resize (_count + _weight);
			
			for "_j" from _count to (_count + _weight - 1) do
			{
				_weighted set [_j, _indices select _forEachIndex];
			};
			
			_count = _count + _weight;
		}
		foreach _lootGroup;
	};
	
	dz_loot_weighted set [_i, _weighted];
};

{
	switch (_x select 0) do
	{
		case Loot_GROUP:		{ _x set [1, dz_loot_groups find (_x select 1)]; };
		case Loot_PILE:			{ _x set [1, dz_loot_groups find (_x select 1)]; };
		case Loot_CONTAINER:	{ _x set [2, dz_loot_groups find (_x select 2)]; };
		case Loot_CUSTOM:		{ _x set [1, compile (_x select 1)]; };
	};
}
foreach dz_loot_definitions;