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
	sleep 6;
	player removeMagazine _bottle;
	player removeMagazine _tape;
	player addMagazine _fixedBottle;
	cutText [localize "str_fix_water_bottle", "PLAIN DOWN"];
} else {		//If the player doesn't have the tape
	cutText [localize "str_fix_water_bottle_fail", "PLAIN DOWN"];
};