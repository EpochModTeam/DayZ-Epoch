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

#include "\z\addons\dayz_code\util\debug.hpp"
#include "\z\addons\dayz_code\util\vector.hpp"
#include "Loot.hpp"

//Maximum number of magazines spawned along with weapons
#define MAX_WEAPON_MAGAZINES 2

//If defined spawns random (but applicable) magazines along with weapons instead of their primary type.
//#define COMPLEX_WEAPON_MAGAZINES

//If defined calculates better placement for backpacks
//#define COMPLEX_BACKPACK_POSITION

#ifdef SERVER
	#define INCREMENT_WEAPON_HOLDERS()
#else
	#define INCREMENT_WEAPON_HOLDERS() dayz_currentWeaponHolders = dayz_currentWeaponHolders + 1
#endif

private
[
	"_lootInfo",
	"_vehicle",
	"_spawnCount",
	"_magazines"
];

_lootInfo = _this select 0;
_vehicle = objNull;

//Switch on type of loot
switch (_lootInfo select 0) do
{
	//Spawn a single weapon with [0,MAX_WEAPON_MAGAZINES] magazines.
	case Loot_WEAPON:
	{
		_vehicle = createVehicle ["WeaponHolder", _this select 1, [], 0, "CAN_COLLIDE"];
		_vehicle addWeaponCargoGlobal [_lootInfo select 1, 1];
		
		Debug_Assert(typeName (_lootInfo select 1) == typeName "" && { (_lootInfo select 1) != "" });
		//Debug_Log(String_Format2("DEBUG: Loot_Spawn Weapon: %1 Position: %2", _lootInfo select 1, _this select 1));
		
		if (surfaceIsWater (_this select 1)) then {
			_vehicle setPos (_this select 1);
		} else {
			_vehicle setPosATL (_this select 1);
		};

		INCREMENT_WEAPON_HOLDERS();
		
		_magazines = getArray (configFile >> "CfgWeapons" >> _lootInfo select 1 >> "magazines");
		
		if (count _magazines > 0 && {getNumber (configFile >> "CfgWeapons" >> _lootInfo select 1 >> "melee") != 1}) then
		{
			#ifdef COMPLEX_WEAPON_MAGAZINES
			for "_i" from 1 to (floor random (MAX_WEAPON_MAGAZINES + 1)) do
			{
				_vehicle addMagazineCargoGlobal [_magazines select floor random count _magazines, 1];
			};
			#else
			_vehicle addMagazineCargoGlobal [_magazines select 0, floor random (MAX_WEAPON_MAGAZINES + 1)];
			#endif
		};
	};
	
	//Spawn a single magazine
	case Loot_MAGAZINE:
	{
		private "_item";
		_item = _lootInfo select 1;
		if (dayz_classicBloodBagSystem && _item in dayz_typedBags) then {
			if (_item in ["bloodTester","bloodBagAPOS","bloodBagABPOS"]) then { // reduce ItemBloodBag output slightly since typed bags spawn in bulk
				_item = ["ItemBandage","ItemPainkiller","ItemMorphine","ItemHeatPack","ItemAntibacterialWipe"] call BIS_fnc_selectRandom;
			} else {
				_item = "ItemBloodbag";
			};
		};
		_vehicle = createVehicle ["WeaponHolder", _this select 1, [], 0, "CAN_COLLIDE"];
		_vehicle addMagazineCargoGlobal [_item, 1];
		if (surfaceIsWater (_this select 1)) then {
			_vehicle setPos (_this select 1);
		} else {
			_vehicle setPosATL (_this select 1);
		};
		INCREMENT_WEAPON_HOLDERS();
	};
	
	//Spawn backpack
	case Loot_BACKPACK:
	{
		#ifdef COMPLEX_BACKPACK_POSITION
		private ["_b", "_p", "_d"];
		_vehicle = createVehicle [_lootInfo select 1, [-10000,0,0], [], 0, "CAN_COLLIDE"];
		
		_b = boundingBox _vehicle;
		_b = ((_b select 1) select 1) - ((_b select 0) select 1);
		
		_d = Vector_Rotate2D(Vector_NORTH, random 360);
		
		_p = Vector_Subtract(_this select 1, Vector_Multiply_Fast(_d, _b));
		_p = Vector_SetZ(_p, Vector_Z(_p) + Vector_Z(getPosATL _vehicle));
		
		_vehicle setVectorDirAndUp [Vector_DOWN, _d];
		if (surfaceIsWater _p) then {
			_vehicle setPos _p;
		} else {
			_vehicle setPosATL _p;
		};
		#else
		_vehicle = createVehicle [_lootInfo select 1, _this select 1, [], 0, "CAN_COLLIDE"];
		if (surfaceIsWater (_this select 1)) then {
			_vehicle setPos (_this select 1);
		} else {
			_vehicle setPosATL (_this select 1);
		};
		#endif
	};
	
	//Spawn multiple items from a given group. All but weapons and magazines are ignored.
	case Loot_PILE:
	{
		_spawnCount = (_lootInfo select 2) + floor random ((_lootInfo select 3) - (_lootInfo select 2) + 1);
		_vehicle = createVehicle ["WeaponHolder", _this select 1, [], 0, "CAN_COLLIDE"];
		Loot_InsertCargo(_vehicle, _lootInfo select 1, _spawnCount);
		if (surfaceIsWater (_this select 1)) then {
			_vehicle setPos (_this select 1);
		} else {
			_vehicle setPosATL (_this select 1);
		};
		INCREMENT_WEAPON_HOLDERS();
	};
	
	//Spawn a vehicle
	case Loot_VEHICLE:
	{
		_vehicle = createVehicle [_lootInfo select 1, _this select 1, [], 0, "CAN_COLLIDE"];
		_vehicle setDir random 360;
		if (surfaceIsWater (_this select 1)) then {
			_vehicle setPos (_this select 1);
		} else {
			_vehicle setPosATL (_this select 1);
		};
	};
	
	//Spawn a container and populate it with loot from a given group
	case Loot_CONTAINER:
	{
		_vehicle = createVehicle [_lootInfo select 1, _this select 1, [], 0, "CAN_COLLIDE"];
		INCREMENT_WEAPON_HOLDERS();
		
		//Number of items to spawn
		_spawnCount = (_lootInfo select 3) + floor random ((_lootInfo select 4) - (_lootInfo select 3) + 1);
		
		Loot_InsertCargo(_vehicle, _lootInfo select 2, _spawnCount);
		
		_vehicle setDir random 360;
		if (surfaceIsWater (_this select 1)) then {
			_vehicle setPos (_this select 1);
		} else {
			_vehicle setPosATL (_this select 1);
		};
	};
	
	//Call a function which is assumed to return an object reference.
	case Loot_CUSTOM:
	{
		_vehicle = call (_lootInfo select 1);
		if ((typeName _vehicle) != "OBJECT") exitWith {};
		if (!isNull _vehicle) then {
			if (surfaceIsWater (_this select 1)) then {
				_vehicle setPos (_this select 1);
			} else {
				_vehicle setPosATL (_this select 1);
			};
		};
	};
};

_vehicle