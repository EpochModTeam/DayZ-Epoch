/* Defines functions working with the player object.

Author: Foxy
*/

#ifndef _INCLUDE_GUARD_PLAYER
#define _INCLUDE_GUARD_PLAYER

#define Player_BASE "DZ_PlayerBase_M"

//True if player is on a ladder, otherwise false
#define Player_IsOnLadder() ((getNumber (configFile >> "CfgMovesMaleSdr" >> "States" >> (animationState player) >> "onLadder")) == 1)

#define Player_IsInVehicle() (player != vehicle player);

//Gets the classname of the player's sidearm. nil if the player has no sidearm.
#define Player_GetSidearm() ({ if ((getNumber (configFile >> "CfgWeapons" >> _x >> "type")) == 2) exitWith { _x }; nil } foreach weapons player)

//Returns the number of slots in of the specified type in the player inventory.
#define Player_NumSlots(type) (dz_player_invSlots select (dz_player_invTypes find (type)))

//Returns the number of empty slots of the specified type in the player inventory.
#define Player_NumEmptySlots(type) ((type) call dz_fn_player_numEmptySlots)

//Returns the number of items of the specified type in the player inventory.
#define Player_NumItems(type) ((type) call dz_fn_player_numItems)

/* Adds the specified item to player inventory, vehicle inventory, or on the ground below.
Return value indicates if and where the item was placed. */
#define Player_AddWeapon(class) ([0, class] call dz_fn_player_addItem)
#define Player_AddMagazine(class) ([1, class] call dz_fn_player_addItem)

#define Player_AddItem_RESULT_FAILURE 0
#define Player_AddItem_RESULT_PLAYER 1
#define Player_AddItem_RESULT_GROUND 2
#define Player_AddItem_RESULT_VEHICLE 3

/* Adds the specifed item on the ground at the player's feet.
The weaponholder containing the item is returned. Returns null if the function fails.*/
#define Player_DropWeapon(class) ([0, class] call dz_fn_player_dropItem)
#define Player_DropMagazine(class) ([1, class] call dz_fn_player_dropItem)
	
#endif