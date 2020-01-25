// Load_act.sqf
// JULY 2010 - norrin
// Updated December 2019 - JasonTM

private ["_args","_medic","_vcl","_wounded"];

_args = _this select 3;
_medic = _args select 0;
_vcl = _args select 1;
_wounded = _args select 2;

r_action = false;
call fnc_usec_medic_removeActions;

if ((_vcl emptyPositions "cargo") > 0) then {
	
	// Send information to start the load process
	PVDZ_send = [_wounded,"LoadWounded",[_wounded,_medic,_vcl],[_wounded,dayz_authKey,_medic]];
	publicVariableServer "PVDZ_send";
} else {
	localize "str_dragnospace" call dayz_rollingMessages; // "No space left in vehicle"
};

