/*
Description:
Checks whether the player already has the tool on their toolbelt and then adds it. Useful for batch crafting tools.
1. If they don't then it adds it to their toolbelt.
2. If they do then it adds it to their backpack. If their backpack is full it simply falls on the ground.
3. If they have no backpack it spawns on the floor as a last resort.
The player is given an appropriate systemChat message in case 2 or 3.

Parameter: 
_this: string - toolbelt item classname to check and add

Returns:
false if item is not a duplicate, otherwise true
    
How to use:
"ItemSledge" call player_addDuplicateTool;
*/
private ["_bag","_hasTool","_location","_object"];
_hasTool = true;

if (_this in items player) then {
	_bag = unitBackpack player;
	if (!isNull _bag) then {
		systemChat format[(localize "str_epoch_player_313"),_this];
		_bag addWeaponCargoGlobal [_this,1];
	} else {
		systemChat format[(localize "str_epoch_player_314"),_this];
		_location = player modeltoworld [0,0.3,0];
		if ((_location select 2) < 0) then {_location set [2,0];};
		_object = createVehicle ["WeaponHolder",_location,[],0,"CAN_COLLIDE"];
		if (surfaceIsWater _location) then {_object setPosASL (getPosASL player);} else {_object setPosATL _location;};
		_object setVariable ["permaLoot",true];
		_object addWeaponCargoGlobal [_this,1];
	};
} else {
	_hasTool = false;
	player addWeapon _this;
};

_hasTool