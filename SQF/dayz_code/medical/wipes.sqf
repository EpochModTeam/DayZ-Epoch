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
	//["PVCDZ_hlt_Bandage",[_unit,player]] call broadcastRpcCallAll;
	//PVCDZ_hlt_Bandage = [_unit,player];
	//publicVariable "PVCDZ_hlt_Bandage";
	//PVDZ_send = [_unit,"Bandage",[_unit,player]];
	//publicVariableServer "PVDZ_send";
	

	if ((_unit == player) or (vehicle player != player)) then {
		r_player_Sepsis = [false, 0];
		player setVariable ["USEC_Sepsis", false, true];
		player setVariable ["sepsisStarted", nil];
	};
} else {
	player addMagazine "ItemAntibacterialWipe";
};

dayz_actionInProgress = false;