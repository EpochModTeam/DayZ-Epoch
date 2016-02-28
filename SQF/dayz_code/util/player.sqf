#define DEBUG_STEP() call { dbg_step = false; waitUntil {dbg_step}; }

#include "Debug.hpp"
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
dz_player_invSlots = [call compile getText (configFile >> "CfgVehicles" >> Player_BASE)] call BIS_FNC_invCodeToArray;
//dz_player_invSlots = [1,1,1,8,12,2,0,12];

dz_fn_player_numItems =
{
	if (_this == 0) exitWith { 0 };
	
	Debug_Assert(_this in dz_player_invTypes);
	
	if (IS_MAGAZINE(_this)) then
		{ { _this == getNumber (configFile >> "CfgMagazines" >> _x >> "type") } count magazines player; }
	else
		{ { _this == getNumber (configFile >> "CfgWeapons" >> _x >> "type") } count weapons player; };
};

dz_fn_player_numEmptySlots =
{
	if (_this == 0) exitWith { 1000000 };
	Debug_Assert(_this in dz_player_invTypes);
	Player_NumSlots(_this) - Player_NumItems(_this);
};

dz_fn_player_addItem =
{
	Debug_CheckParams2("SCALAR","STRING");
	
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

dz_fn_player_dropItem =
{
	#define DROP_ITEM_WEAPON_HOLDER_SEARCH_RADIUS 2
	#define DROP_ITEM_WEAPON_HOLDER_PLAYER_OFFSET [0,0,0]
	
	Debug_Assert(!Player_IsOnLadder());
	
	if (Player_IsInVehicle()) exitWith
	{
		diag_log "WARNING: dz_fn_player_dropItem called while player was in a vehicle.";
		objNull
	};
	
	private ["_pos","_near","_wh"];
	
	//Lets get the location of the player in the world
	_pos = player modeltoWorld DROP_ITEM_WEAPON_HOLDER_PLAYER_OFFSET;
	_pos set [2, 0];
	
	//Find WeaponHolders close to the player.
	_near = _pos nearObjects ["WeaponHolder", DROP_ITEM_WEAPON_HOLDER_SEARCH_RADIUS];
	
	_wh = nil;
	
	if (count _near == 0) then
		{ _wh = createVehicle ["WeaponHolder", _pos, [], 0, "CAN_COLLIDE"]; }
	else
		{ _wh = _near select 0; };
	
	if (_this select 0 == 0) then
		{ _wh addWeaponCargoGlobal [_this select 1, 1]; }
	else
		{ _wh addMagazineCargoGlobal [_this select 1, 1]; };
	
	//Reveal the item
	player reveal _wh;
	
	_wh
	
	#undef DROP_ITEM_WEAPON_HOLDER_SEARCH_RADIUS
	#undef DROP_ITEM_WEAPON_HOLDER_PLAYER_OFFSET
};