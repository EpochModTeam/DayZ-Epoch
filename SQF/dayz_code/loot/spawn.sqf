/*
Spawns the specified loot definition at the specified location.

Parameters:
	array		Loot definition
	vector		Spawn position relative to world

Return value:
	object		Spawned vehicle.

Author:
	Foxy
*/

#include "Loot.hpp"

//Maximum number of magazines spawned along with weapons
#define MAX_WEAPON_MAGAZINES 2

#ifdef SERVER
	#define INCREMENT_WEAPON_HOLDERS
#else
	#define INCREMENT_WEAPON_HOLDERS dayz_currentWeaponHolders = dayz_currentWeaponHolders + 1;
#endif

private ["_item","_isWater","_type","_lootInfo","_vehicle","_spawnCount","_magazines","_fixWaterSpawn"];

_lootInfo = _this select 0;
_pos = _this select 1;
_class = ["",_this select 2] select (count _this > 2);
_type = _lootInfo select 0;
_item = _lootInfo select 1;
_isWater = surfaceIsWater _pos;
_vehicle = objNull;

call {
	//Spawn a single magazine
	if (_type == Loot_MAGAZINE) exitWith {
		if (dayz_classicBloodBagSystem && {_item in dayz_typedBags}) then {
			if (_item in ["bloodTester","bloodBagAPOS","bloodBagABPOS"]) then { // reduce ItemBloodBag output slightly since typed bags spawn in bulk
				_item = ["ItemBandage","ItemPainkiller","ItemMorphine","ItemHeatPack","ItemAntibacterialWipe"] call BIS_fnc_selectRandom;
			} else {
				_item = "ItemBloodbag";
			};
		};
		_vehicle = "WeaponHolder" createVehicle [0,0,0];
		_vehicle addMagazineCargoGlobal [_item, 1];

		if (_isWater) then {		
			_fixWaterSpawn = getNumber(missionconfigFile >> "CfgLoot" >> "Buildings" >> _class >> "fixWaterPos");
			if (_fixWaterSpawn == 1) then {
				_vehicle setPosASL (_pos);
			} else {
				_vehicle setPos (_pos);
			};			
		} else {
			_vehicle setPosATL (_pos);
		};

		INCREMENT_WEAPON_HOLDERS
	};

	//Spawn a single weapon with [0,MAX_WEAPON_MAGAZINES] magazines.
	if (_type == Loot_WEAPON) exitWith {
		_vehicle = "WeaponHolder" createVehicle [0,0,0];
		_vehicle addWeaponCargoGlobal [_item, 1];

		if (_isWater) then {		
			_fixWaterSpawn = getNumber(missionconfigFile >> "CfgLoot" >> "Buildings" >> _class >> "fixWaterPos");
			if (_fixWaterSpawn == 1) then {
				_vehicle setPosASL (_pos);
			} else {
				_vehicle setPos (_pos);
			};			
		} else {
			_vehicle setPosATL (_pos);
		};

		INCREMENT_WEAPON_HOLDERS

		_magazines = getArray (configFile >> "CfgWeapons" >> _item >> "magazines");

		if (count _magazines > 0 && {getNumber (configFile >> "CfgWeapons" >> _item >> "melee") != 1}) then
		{
			_vehicle addMagazineCargoGlobal [_magazines select 0, floor random (MAX_WEAPON_MAGAZINES + 1)];
		};
	};

	//Spawn backpack
	if (_type == Loot_BACKPACK) exitWith {
		_vehicle = _item createVehicle [0,0,0];

		// Fix floating backpacks by lowering z coordinate by .15 meters.
		_pos set [2, ((_pos select 2) - .15)];

		if (_isWater) then {		
			_fixWaterSpawn = getNumber(missionconfigFile >> "CfgLoot" >> "Buildings" >> _class >> "fixWaterPos");
			if (_fixWaterSpawn == 1) then {
				_vehicle setPosASL (_pos);
			} else {
				_vehicle setPos (_pos);
			};			
		} else {
			_vehicle setPosATL (_pos);
		};
	};

	//Spawn multiple items from a given group. All but weapons and magazines are ignored.
	if (_type == Loot_PILE) exitWith {
		_spawnCount = (_lootInfo select 2) + floor random ((_lootInfo select 3) - (_lootInfo select 2) + 1);
		_vehicle = "WeaponHolder" createVehicle [0,0,0];
		Loot_InsertCargo(_vehicle, _item, _spawnCount);

		if (_isWater) then {		
			_fixWaterSpawn = getNumber(missionconfigFile >> "CfgLoot" >> "Buildings" >> _class >> "fixWaterPos");
			if (_fixWaterSpawn == 1) then {
				_vehicle setPosASL (_pos);
			} else {
				_vehicle setPos (_pos);
			};			
		} else {
			_vehicle setPosATL (_pos);
		};
		
		INCREMENT_WEAPON_HOLDERS
	};

	//Spawn a vehicle
	if (_type == Loot_VEHICLE) exitWith {
		_vehicle = _item createVehicle [0,0,0];
		_vehicle setDir random 360;

		if (_isWater) then {		
			_fixWaterSpawn = getNumber(missionconfigFile >> "CfgLoot" >> "Buildings" >> _class >> "fixWaterPos");
			if (_fixWaterSpawn == 1) then {
				_vehicle setPosASL (_pos);
			} else {
				_vehicle setPos (_pos);
			};			
		} else {
			_vehicle setPosATL (_pos);
		};
	};

	//Spawn a container and populate it with loot from a given group
	if (_type == Loot_CONTAINER) exitWith {
		_vehicle = _item createVehicle [0,0,0];

		//Number of items to spawn
		_spawnCount = (_lootInfo select 3) + floor random ((_lootInfo select 4) - (_lootInfo select 3) + 1);
		Loot_InsertCargo(_vehicle, _lootInfo select 2, _spawnCount);
		_vehicle setDir random 360;

		if (_isWater) then {		
			_fixWaterSpawn = getNumber(missionconfigFile >> "CfgLoot" >> "Buildings" >> _class >> "fixWaterPos");
			if (_fixWaterSpawn == 1) then {
				_vehicle setPosASL (_pos);
			} else {
				_vehicle setPos (_pos);
			};			
		} else {
			_vehicle setPosATL (_pos);
		};

		INCREMENT_WEAPON_HOLDERS
	};

	//Call a function which is assumed to return an object reference.
	if (_type == Loot_CUSTOM) exitWith {
		_vehicle = call (_item);
		if ((typeName _vehicle) != "OBJECT") exitWith {};

		if (!isNull _vehicle) then {
			if (_isWater) then {		
				_fixWaterSpawn = getNumber(missionconfigFile >> "CfgLoot" >> "Buildings" >> _class >> "fixWaterPos");
				if (_fixWaterSpawn == 1) then {
					_vehicle setPosASL (_pos);
				} else {
					_vehicle setPos (_pos);
				};			
			} else {
				_vehicle setPosATL (_pos);
			};
		};
	};
};

_vehicle
