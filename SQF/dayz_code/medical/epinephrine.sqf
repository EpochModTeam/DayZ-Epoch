private ["_finished","_isDead","_unit"];

_unit = (_this select 3) select 0;
_isDead = _unit getVariable["USEC_isDead",false];
call fnc_usec_medic_removeActions;

if (dayz_actionInProgress) exitWith {localize "str_player_actionslimit" call dayz_rollingMessages;};
dayz_actionInProgress = true;

_finished = ["Medic",1] call fn_loopAction;

if (!_isDead && _finished && ("ItemEpinephrine" in magazines player)) then {
	player removeMagazine "ItemEpinephrine";
	_unit setVariable ["NORRN_unconscious", false, true];
	_unit setVariable ["USEC_isCardiac",false,true];
	
	//give humanity
	[25,0] call player_humanityChange;
	
	PVDZ_send = [_unit,"Epinephrine",[_unit,player,"ItemEpinephrine"]];
	publicVariableServer "PVDZ_send";
};

r_action = false;
dayz_actionInProgress = false;