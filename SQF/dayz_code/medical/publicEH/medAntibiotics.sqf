private ["_unit","_medic"];

_unit = _this select 0;
_medic = _this select 1;

r_player_infected = false;
_unit setVariable["USEC_infected",false,true];

if (_medic != player) then {
	format [localize "str_actions_medical_antibiotics_received",(name _medic)] call dayz_rollingMessages;
};
