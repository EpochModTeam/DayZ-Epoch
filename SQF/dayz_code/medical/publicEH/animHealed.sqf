// animHealed.sqf

private ["_unit"];
_unit = _this select 0;

_unit switchMove "AmovPpneMstpSnonWnonDnon_healed";
if (_unit == player) then {
	r_player_unconscious = false;
	r_player_injured = false;
};