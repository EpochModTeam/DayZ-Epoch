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

#include "\z\addons\dayz_code\util\debug.hpp"
#include "Loot.hpp"

{
	switch (_x select 0) do
	{
		case Loot_WEAPON:
		{
			(_this select 0) addWeaponCargoGlobal [_x select 1, 1];
			
			Debug_Assert(typeName (_x select 1) == typeName "" && { (_x select 1) != "" });
			//Debug_Log(String_Format2("DEBUG: Loot_Insert Weapon: %1 Vehicle: %2", _x select 1, _this select 0));
		};
		
		case Loot_MAGAZINE:
		{
			private "_item";
			_item = _x select 1;
			if (dayz_classicBloodBagSystem && _item in dayz_typedBags) then {
				if (_item in ["bloodTester","bloodBagAPOS","bloodBagABPOS"]) then { // reduce ItemBloodBag output slightly since typed bags spawn in bulk
					_item = ["ItemBandage","ItemPainkiller","ItemMorphine","ItemHeatPack","ItemAntibacterialWipe"] call BIS_fnc_selectRandom;
				} else {
					_item = "ItemBloodbag";
				};
			};
			(_this select 0) addMagazineCargoGlobal [_item, 1];
		};
		
		case Loot_BACKPACK:
		{
			(_this select 0) addBackpackCargoGlobal [_x select 1, 1];
		};
	};
} count Loot_Select(_this select 1, _this select 2);
//foreach ([_this select 1, _this select 2] call loot_select);