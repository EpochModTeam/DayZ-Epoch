// bleed.sqf
_unit = (_this select 3) select 0;
_isDead = _unit getVariable["USEC_isDead",false];
call fnc_usec_medic_removeActions;

player playActionNow "Medic";
player removeMagazine "ItemEpinephrine";

sleep 3;

if (!_isDead) then {
	_unit setVariable ["NORRN_unconscious", false, true];
	_unit setVariable ["USEC_isCardiac",false,true];
	sleep 5;
	usecEpi = [_unit,player,"ItemEpinephrine"];
	publicVariable "usecEpi";
	_unit switchMove "AmovPpneMstpSnonWnonDnon_healed";
};

r_action = false;