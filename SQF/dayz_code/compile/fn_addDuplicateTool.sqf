/*
Description:
Checks whether the player already has the tool on their toolbelt and then adds it. Useful for batch crafting tools.
1. If they don't then it adds it to their toolbelt. If the toolbelt is full it is dropped on the floor.
2. If they do then it adds it to their backpack. If their backpack is full it spills out on the floor.
3. If they have no backpack it spawns on the floor as a last resort.
The player is given an appropriate systemChat message in each case.

Parameter: 
_this: string - toolbelt item classname to check and add
    
How to use:
"ItemSledge" call player_addDuplicateTool;
*/
private "_bag";

if (_this in items player) then {
	_bag = unitBackpack player;
	if (!isNull _bag) then {
		systemChat format[localize "str_epoch_player_313",_this];
		_bag addWeaponCargoGlobal [_this,1];
	} else {
		[_this,2,1] call fn_dropItem;
		systemChat format[localize "str_epoch_player_314",_this];
	};
} else {
	//Remove melee magazines (BIS_fnc_invAdd fix)
	false call dz_fn_meleeMagazines;
	
	if !([player,_this] call BIS_fnc_invAdd) then {
		systemChat localize "str_epoch_player_107";
		[_this,2,1] call fn_dropItem;
		systemChat format[localize "str_epoch_player_314",_this];
	};
	true call dz_fn_meleeMagazines;
};