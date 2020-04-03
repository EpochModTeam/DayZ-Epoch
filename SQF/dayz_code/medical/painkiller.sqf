private "_unit";

_unit = (_this select 3) select 0;

call fnc_usec_medic_removeActions;
r_action = false;
player removeMagazine "ItemPainkiller";

if (vehicle player == player) then {
	//not in a vehicle
	player playActionNow "Gear";
};

if (_unit == player) then {
	//Self Healing
	[player,player] call player_medPainkiller;
	localize "str_actions_medical_painkillers_self" call dayz_rollingMessages;
} else {
	// Heal another player
	PVDZ_send = [_unit,"Painkiller",[_unit,player]];
	publicVariableServer "PVDZ_send";

	// Give humanity
	20 call player_humanityChange;

	format [localize "str_actions_medical_painkillers_give",(name _unit)] call dayz_rollingMessages;
};
