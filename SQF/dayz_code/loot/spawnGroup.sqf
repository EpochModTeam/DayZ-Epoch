/*
Spawns randomly selected loot from given group.

Parameters:
	integer		Loot group index in dayz_lootGroups
	vector		Spawn position relative to world

Return value:
	object		Spawned vehicle.

Author:
	Foxy
*/

#include "Loot.hpp"

Loot_Spawn(Loot_Select(_this select 0, 1) select 0, _this select 1);
//[([_this select 0, 1] call loot_select) select 0, _this select 1] call loot_spawn