private ["_bottle","_tape","_fixedBottle"];

_bottle = _this;
_tape = "equip_duct_tape";
_fixedBottle = "ItemWaterBottleUnfilled";
call gear_ui_init;
closeDialog 0;

// Check if the player has the tape
if (_tape in magazines player) then {
	//Fix the bottle
	player playActionNow "Medic";
	[player,"bandage",0,false] call dayz_zombieSpeak;
	uiSleep 6;
	player removeMagazine _bottle;
	player removeMagazine _tape;
	player addMagazine _fixedBottle;
	localize "str_fix_water_bottle" call dayz_rollingMessages;
} else {		//If the player doesn't have the tape
	localize "str_fix_water_bottle_fail" call dayz_rollingMessages;
};