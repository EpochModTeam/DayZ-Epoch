private "_finished";

if (dayz_actionInProgress) exitWith {localize "str_player_actionslimit" call dayz_rollingMessages;};
dayz_actionInProgress = true;

player removeMagazine "ItemAntibacterialWipe";

call fnc_usec_medic_removeActions;
r_action = false;

[player,"bandage",0,false] call dayz_zombieSpeak;

if (vehicle player == player) then {
	_finished = ["Medic",1] call fn_loopAction;
} else {
	uiSleep 3;
	_finished = true;
};

if (_finished) then {
	r_player_Sepsis = [false, 0];
	player setVariable ["USEC_Sepsis", false, true];
	player setVariable ["sepsisStarted", nil];
	localize "str_actions_medical_wipe_self" call dayz_rollingMessages;
} else {
	player addMagazine "ItemAntibacterialWipe";
};

dayz_actionInProgress = false;
