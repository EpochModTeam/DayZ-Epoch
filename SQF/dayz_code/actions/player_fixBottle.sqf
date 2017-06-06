private ["_bottle","_tape","_fixedBottle","_finished"];

_bottle = _this;
_tape = "equip_duct_tape";
_fixedBottle = "ItemWaterBottleUnfilled";

if (dayz_actionInProgress) exitWith { localize "str_player_actionslimit" call dayz_rollingMessages; };
dayz_actionInProgress = true;

call gear_ui_init;
closeDialog 0;

// Check if the player has the tape
if (_tape in magazines player) then {
	[player,"bandage",0,false] call dayz_zombieSpeak;	
	_finished = ["Medic",1] call fn_loopAction;
	if (!_finished) exitWith {};

	// Check again to make sure player didn't drop item
	if (_tape in magazines player) then {
		player removeMagazine _bottle;
		player removeMagazine _tape;
		player addMagazine _fixedBottle;
		localize "str_fix_water_bottle" call dayz_rollingMessages;
	};
} else {		//If the player doesn't have the tape
	localize "str_fix_water_bottle_fail" call dayz_rollingMessages;
};

dayz_actionInProgress = false;