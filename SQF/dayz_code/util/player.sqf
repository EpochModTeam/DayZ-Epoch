#include "Player.hpp"

#define WeaponSlotPrimary		1
#define WeaponSlotHandGun		2
#define WeaponSlotSecondary		4
#define WeaponSlotHandGunItem	16
#define WeaponSlotItem			256
#define WeaponSlotBinocular		4096
#define WeaponHardMounted		65536
#define WeaponSlotInventory		131072

#define IS_MAGAZINE(type) (type == WeaponSlotHandGunItem || type == WeaponSlotItem)

dz_player_invTypes = [WeaponSlotPrimary, WeaponSlotHandGun, WeaponSlotSecondary, WeaponSlotHandGunItem, WeaponSlotItem, WeaponSlotBinocular, WeaponHardMounted, WeaponSlotInventory];

dz_fn_player_numItems =
{
	if (_this == 0) exitWith { 0 };
	
	if (IS_MAGAZINE(_this)) then
		{ { _this == getNumber (configFile >> "CfgMagazines" >> _x >> "type") } count magazines player; }
	else
		{ { _this == getNumber (configFile >> "CfgWeapons" >> _x >> "type") } count weapons player; };
};

dz_fn_player_numEmptySlots =
{
	if (_this == 0) exitWith { 1000000 };
	Player_NumSlots(_this) - Player_NumItems(_this);
};

dz_fn_player_addItem =
{
	
	private ["_type", "_veh", "_num"];
	
	switch (_this select 0) do
	{
		case 0:
		{
			_type = getNumber (configFile >> "CfgWeapons" >> _this select 1 >> "type");
			
			if (_type == 0 || { Player_NumEmptySlots(_type) > 0 } ) exitWith
			{
				player addWeapon (_this select 1);
				Player_AddItem_RESULT_PLAYER
			};
			
			_veh = vehicle player;
			
			if (player != _veh) exitWith
			{
				_num = 0;
				{ _num = _num + _x; } foreach (getWeaponCargo _veh select 1);
				
				if (_num < getNumber (configFile >> "CfgVehicles" >> typeOf _veh >> "transportMaxWeapons")) exitWith
				{
					_veh addWeaponCargoGlobal [_this select 1, 1];
					Player_AddItem_RESULT_VEHICLE
				};
				
				Player_AddItem_RESULT_FAILURE
			};
			
			Player_DropWeapon(_this select 1);
			Player_AddItem_RESULT_GROUND
		};
		
		case 1:
		{
			_type = getNumber (configFile >> "CfgMagazines" >> _this select 1 >> "type");
			
			if (_type == 0 || { Player_NumEmptySlots(_type) > 0 } ) exitWith
			{
				player addMagazine (_this select 1);
				Player_AddItem_RESULT_PLAYER
			};
			
			_veh = vehicle player;
			
			if (player != _veh) exitWith
			{
				_num = 0;
				{ _num = _num + _x; } foreach (getMagazineCargo _veh select 1);
				
				if (_num < getNumber (configFile >> "CfgVehicles" >> typeOf _veh >> "transportMaxMagazines")) exitWith
				{
					_veh addMagazineCargoGlobal [_this select 1, 1];
					Player_AddItem_RESULT_VEHICLE
				};
				
				Player_AddItem_RESULT_FAILURE
			};
			
			Player_DropMagazine(_this select 1);
			Player_AddItem_RESULT_GROUND
		};
	};
};

dz_fn_player_removeWeapon =
{
	Player_RemoveWeapon_Fast(_this)
};

dz_fn_player_removeMagazine =
{
	Player_RemoveMagazine_Fast(_this)
};
