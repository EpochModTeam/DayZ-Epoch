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
local _tool = _this;
local _displayName = getText(configFile >> "CfgWeapons" >> _tool >> "displayName");

if (_tool in items player) then {
	local _bag = unitBackpack player;
	if (!isNull _bag) then {	
		local _freeSlots = call fnc_freeBackpackSlots;
		if (_freeSlots > 0)	then {
			systemChat format[localize "str_epoch_player_313",_displayName];			
			_bag addWeaponCargoGlobal [_tool,1];
		} else {
			[_tool,2,1] call fn_dropItem;
			systemChat format[localize "str_actions_noroom",_displayName];
		};	
	} else {
		[_tool,2,1] call fn_dropItem;
		systemChat format[localize "str_actions_noroom",_displayName];
	};
} else {
	//Remove melee magazines (BIS_fnc_invAdd fix)
	false call dz_fn_meleeMagazines;
	
	if !([player,_tool] call BIS_fnc_invAdd) then {
		systemChat localize "str_epoch_player_107";
		[_tool,2,1] call fn_dropItem;
		systemChat format[localize "str_actions_noroom",_displayName];
	};
	true call dz_fn_meleeMagazines;
};