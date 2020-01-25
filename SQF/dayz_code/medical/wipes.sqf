private ["_finished","_unit"];

_unit = (_this select 3) select 0;

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
	if (_unit == player) then {
		// Self healing
		r_player_Sepsis = [false, 0];
		_unit setVariable ["USEC_Sepsis", false, true];
		_unit setVariable ["sepsisStarted", nil];
		
		localize "str_actions_medical_wipe_self" call dayz_rollingMessages;
	} else {
		// Heal another player
		PVDZ_send = [_unit,"AntiBacterialWipe",[_unit,player]];
		publicVariableServer "PVDZ_send";
	
		// Give humanity
		[20,0] call player_humanityChange;
		
		format[localize "str_actions_medical_gave_wipes",(name _unit)] call dayz_rollingMessages;
	};
} else {
	player addMagazine "ItemAntibacterialWipe";
};

dayz_actionInProgress = false;
