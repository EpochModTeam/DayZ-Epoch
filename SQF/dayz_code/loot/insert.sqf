/*
Selects random loot from specified group and inserts into a unit.
Loot group should only contain Loot_WEAPON and Loot_MAGAZINE definitions. Others, if selected, will be ignored.

Parameters:
	object		Unit to insert into.
	integer		Loot group index in dayz_lootGroups
	integer		Number of items to insert.

Author:
	Foxy
*/

#include "Loot.hpp"

private ["_unit","_group","_count","_type","_item"];

_unit = _this select 0;
_group = _this select 1;
_count = _this select 2;

// Prevent loot spawning on non-local zombies - this check is needed if the server is running safezones that delete zombies.
if (!local _unit) exitWith {
	diag_log format ["ERROR: Loot_Insert unit must be local. (%1)", _unit];
};

{
	_type = _x select 0;
	_item = _x select 1;
	
	call {
		if (_type == Loot_MAGAZINE) exitWith {
			if (dayz_classicBloodBagSystem && _item in dayz_typedBags) then {
				if (_item in ["emptyBloodBag","bloodTester","bloodBagAPOS","bloodBagABPOS"]) then { // reduce ItemBloodBag output slightly since typed bags spawn in bulk
					_item = ["ItemBandage","ItemPainkiller","ItemMorphine","ItemHeatPack","ItemAntibacterialWipe"] call BIS_fnc_selectRandom;
				} else {
					_item = "ItemBloodbag";
				};
			};
			_unit addMagazine _item;
		};
		
		if (_type == Loot_WEAPON) exitWith {
			_unit addWeapon _item;
		};
		
		if (_type == Loot_BACKPACK) exitWith {
			if (isNull unitBackpack _unit) then {
				_unit addBackpack _item;
			};
		};
	};
} count Loot_Select(_group,_count);
