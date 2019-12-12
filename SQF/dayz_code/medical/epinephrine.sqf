private ["_finished","_isDead","_unit"];

_unit = (_this select 3) select 0;
call fnc_usec_medic_removeActions;

if (dayz_actionInProgress) exitWith {localize "str_player_actionslimit" call dayz_rollingMessages;};
dayz_actionInProgress = true;

player removeMagazine "ItemEpinephrine";
_finished = ["Medic",1] call fn_loopAction;

_isDead = _unit getVariable["USEC_isDead",false];

if (!_isDead && {_finished}) then {
	//give humanity
	[25,0] call player_humanityChange;
	
	PVDZ_send = [_unit,"Epinephrine",[_unit,player]];
	publicVariableServer "PVDZ_send";
	
	format [localize "str_actions_medical_general_give", (localize "STR_EQUIP_NAME_14"), (name _unit)] call dayz_rollingMessages;
} else {
	player addMagazine "ItemEpinephrine";
};

r_action = false;
dayz_actionInProgress = false;
