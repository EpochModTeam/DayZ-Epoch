private["_unit","_move","_damage","_wound","_sound","_local","_dir","_hpList","_hp","_strH","_dam","_total","_result","_vehicle"];
_unit = _this select 0;
_detail = _this select 1;
if(_unit == getPlayerUID player) then {
	player setVariable["publish",_detail];
};