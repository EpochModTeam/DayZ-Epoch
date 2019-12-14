private ["_unit","_medic"];

_unit = _this select 0;
_medic = _this select 1;

r_player_Sepsis = [false, 0];
_unit setVariable ["USEC_Sepsis", false, true];
_unit setVariable ["sepsisStarted", nil];

if (_medic != player) then {
	format [localize "str_actions_medical_wipes_received",(name _medic)] call dayz_rollingMessages;
};
