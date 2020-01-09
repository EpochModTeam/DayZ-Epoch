/*
Selects random loot from specified group and inserts into a container.
Loot group should only contain Loot_WEAPON and Loot_MAGAZINE definitions. Others, if selected, will be ignored.

Parameters:
	object		Vehicle to insert into.
	integer		Loot group index in dayz_lootGroups
	integer		Number of items to insert.

Author:
	Foxy
*/

#include "Loot.hpp"

//Maximum number of magazines spawned along with weapons
#define MAX_WEAPON_MAGAZINES 2

private ["_container","_group","_count","_type","_item","_magazines"];

_container = _this select 0;
_group = _this select 1;
_count = _this select 2;

{
	_type = _x select 0;
	_item = _x select 1;
	
	call {
		if (_type == Loot_MAGAZINE) exitWith {
			if (dayz_classicBloodBagSystem && _item in dayz_typedBags) then {
				if (_item in ["bloodTester","bloodBagAPOS","bloodBagABPOS"]) then { // reduce ItemBloodBag output slightly since typed bags spawn in bulk
					_item = ["ItemBandage","ItemPainkiller","ItemMorphine","ItemHeatPack","ItemAntibacterialWipe"] call BIS_fnc_selectRandom;
				} else {
					_item = "ItemBloodbag";
				};
			};
			_container addMagazineCargoGlobal [_item, 1];
		};
		
		if (_type == Loot_WEAPON) exitWith {
			_container addWeaponCargoGlobal [_item, 1];
			
			_magazines = getArray (configFile >> "CfgWeapons" >> _item >> "magazines");
		
			if (count _magazines > 0 && {getNumber (configFile >> "CfgWeapons" >> _item >> "melee") != 1}) then
			{
				_container addMagazineCargoGlobal [_magazines select 0, floor random (MAX_WEAPON_MAGAZINES + 1)];
			};
		};
		
		if (_type == Loot_BACKPACK) exitWith {
			_container addBackpackCargoGlobal [_item, 1];
		};
	};
} count Loot_Select(_group,_count);
