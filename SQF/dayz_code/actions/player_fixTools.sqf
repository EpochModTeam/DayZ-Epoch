//fixHatchet old file
private ["_tool","_tape","_fixedItem"];

_tool = _this;
_config = configFile >> "CfgWeapons" >> _tool;
_fixedItem = getText(_config >> "fixedTool");

_dName = getText(configFile >> "CfgWeapons" >> _fixedItem >> "displayName");

//Used for Grip
_tape = "equip_duct_tape";
//Handle
_handle = "equip_lever";

call gear_ui_init;
closeDialog 0;

// Check if the player has the tape
if ((_tape in magazines player) && (_handle in magazines player)) then {
	//Fix the tool
	player playActionNow "Medic";
	[player,"bandage",0,false] call dayz_zombieSpeak;
	sleep 6;
	player removeWeapon _tool;
	player removeMagazine _tape;
	player removeMagazine _handle;
	player addWeapon _fixedItem;
	cutText [format [localize "str_fixToolSuccess", _dName], "PLAIN DOWN"];
	
} else {		//If the player doesn't have the mats.
	if (!(_tape in magazines player)) then {
		if (!(_handle in magazines player)) then {
			cutText [localize "str_fixToolFail", "PLAIN DOWN"];
		} else {
			cutText [localize "str_fixtoolMissingTape", "PLAIN DOWN"];
		};
	} else {
		cutText [localize "str_fixtoolMissingHandle", "PLAIN DOWN"];
	};
};