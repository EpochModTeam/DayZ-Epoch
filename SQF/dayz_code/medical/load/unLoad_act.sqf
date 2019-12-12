// unLoad_act.sqf
// AUGUST 2010 - norrin
// Updated December 2019 - JasonTM

private ["_args","_unconscious_crew","_vehicle","_pos","_wounded","_medic"];

_args = _this select 3;
_medic = _args select 0;
_unconscious_crew = _args select 1;
_vehicle = _args select 2;
_pos = [_vehicle] call FNC_GetPos;

r_action = false;
call fnc_usec_medic_removeActions;

// Prevent trolling unconscious players by checking that the position is not over water.
if !(surfaceIsWater _pos) then {
	{
		_wounded = _x;
		unassignVehicle _wounded;
		_wounded action ["EJECT", _vehicle];
		
		// Send information to reestablish the "lie on back" animation
		PVDZ_send = [_wounded,"UnloadWounded",_wounded,[_pos,dayz_authKey,_medic]];
		publicVariableServer "PVDZ_send";

	} count _unconscious_crew;
} else {
	localize "str_actions_unload_fail" call dayz_rollingMessages;
};
