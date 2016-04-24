_unit = _this select 0;
_detail = _this select 1;
if(_unit == getPlayerUID player) then {
	player setVariable["publish",_detail];
};