/*
Spawns loot at the given building.

Single parameter:
	object		building to spawn loot at

Author:
	Foxy
*/

#include "\z\addons\dayz_code\util\Vector.hpp"
#include "\z\addons\dayz_code\loot\Loot.hpp"

private
[
	"_vectorUp",
	"_type",
	"_config",
	"_lootChance",
	"_lootPos",
	"_lootGroup",
	"_worldPos",
	"_existingPile",
	"_loot"
];

_vectorUp = vectorUp _this;
if (Vector_Angle(Vector_UP,_vectorUp) > 20) exitWith { 0 };

_type = typeOf _this;
_config = (configFile >> "CfgLoot" >> "Buildings" >> _type);

if (!isClass _config) exitWith {};

_lootChance = getNumber (_config >> "lootChance");

if (_lootChance <= 0) exitWith {};

_lootPos = getArray (_config >> "lootPos");
_lootGroup = Loot_GetGroup(getText(_config >> "lootGroup"));

{
	//Get the world position of the spawn position
	_worldPos = _this modelToWorld _x;
	_worldPos set [2, 0 max (_worldPos select 2)];
	
	//Delete existing lootpiles within 1m of spawn location
	{
		deleteVehicle _x;
		dayz_currentWeaponHolders = dayz_currentWeaponHolders - 1;
	}
	foreach (_worldPos nearObjects ["ReammoBox", 1]);

	if (_lootChance > random 1 && {dayz_currentWeaponHolders < dayz_maxMaxWeaponHolders}) then
	{
		Loot_SpawnGroup(_lootGroup, _worldPos);
	};
}
foreach _lootPos;