// animHealed.sqf

private ["_array","_unit","_medic"];
_array = _this; //_this select 0;
_unit = _array select 0;
_medic = _array select 1;

if (_unit == player) then {
	r_player_inpain = false;
	R3F_TIRED_Accumulator = 0;
	"dynamicBlur" ppEffectAdjust [0]; "dynamicBlur" ppEffectCommit 5;
};
if (isServer) then {
	_unit setVariable["medForceUpdate",true];
};