//fixHatchet old file
private ["_tool","_tape","_fixedItem","_config","_dName","_handle","_finished"];

_tool = _this;
_config = configFile >> "CfgWeapons" >> _tool;
_fixedItem = getText(_config >> "fixedTool");

_dName = getText(configFile >> "CfgWeapons" >> _fixedItem >> "displayName");

//Used for Grip
_tape = "equip_duct_tape";
//Handle
_handle = "equip_lever";

if (dayz_actionInProgress) exitWith { localize "str_player_actionslimit" call dayz_rollingMessages; };
dayz_actionInProgress = true;

call gear_ui_init;
closeDialog 0;

// Check if the player has the tape
if ((_tape in magazines player) && (_handle in magazines player) && (_tool in items player)) then {
	[player,"bandage",0,false] call dayz_zombieSpeak;
	_finished = ["Medic",1] call fn_loopAction;
	if (!_finished) exitWith {};
	
	// Check again to make sure player didn't drop item
	if ((_tape in magazines player) && (_handle in magazines player) && (_tool in items player)) then {
		player removeWeapon _tool;
		player removeMagazine _tape;
		player removeMagazine _handle;
		player addWeapon _fixedItem;
		format[localize "str_fixToolSuccess", _dName] call dayz_rollingMessages;
	};
} else {		//If the player doesn't have the mats.
	if (!(_tape in magazines player)) then {
		if (!(_handle in magazines player)) then {
			localize "str_fixToolFail" call dayz_rollingMessages;
		} else {
			localize "str_fixtoolMissingTape" call dayz_rollingMessages;
		};
	} else {
		localize "str_fixtoolMissingHandle" call dayz_rollingMessages;
	};
};

dayz_actionInProgress = false;