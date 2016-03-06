// bleed.sqf

private ["_unit","_isDead"];
_unit = (_this select 3) select 0;
_isDead = _unit getVariable["USEC_isDead",false];
call fnc_usec_medic_removeActions;

player playActionNow "Medic";
player removeMagazine "ItemEpinephrine";

uiSleep 3;

if (!_isDead) then {
	_unit setVariable ["NORRN_unconscious", false, true];
	_unit setVariable ["USEC_isCardiac",false,true];
	uiSleep 5;
	/* PVS/PVC - Skaronator */
	PVDZE_send = [_unit,"Epinephrine",[_unit,player,"ItemEpinephrine"]];
	publicVariableServer "PVDZE_send";
};

r_action = false;