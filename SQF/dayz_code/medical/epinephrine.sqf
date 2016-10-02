// bleed.sqf
_unit = (_this select 3) select 0;
_isDead = _unit getVariable["USEC_isDead",false];
call fnc_usec_medic_removeActions;
player removeMagazine "ItemEpinephrine";

player playActionNow "Medic";

uiSleep 3;

if (!_isDead) then {
	_unit setVariable ["NORRN_unconscious", false, true];
	_unit setVariable ["USEC_isCardiac",false,true];
	uiSleep 5;
	
	//give humanity
	[25,0] call player_humanityChange;
	
	PVDZ_send = [_unit,"Epinephrine",[_unit,player,"ItemEpinephrine"]];
	publicVariableServer "PVDZ_send";
};

r_action = false;