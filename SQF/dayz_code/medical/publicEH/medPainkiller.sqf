private ["_array","_unit","_medic"];
_array = _this; //_this select 0;
_unit = _array select 0;
_medic = _array select 1;

if ((_unit == player) or (vehicle player != player)) then {
	r_player_inpain = false;
};