// animHealed.sqf

private ["_unit"];
_unit = _this select 0;

_unit switchMove "AmovPpneMstpSnonWnonDnon_healed";
if ((_unit == player) or (vehicle player != player)) then {
	r_player_unconscious = false;
	r_player_injured = false;
};