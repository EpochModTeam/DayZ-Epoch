// animHealed.sqf
private["_array","_unit","_medic","_display","_control"];
disableserialization;
_array = _this; //_this select 0;
_unit = _array select 0;
_medic = _array select 1;

if ((_unit == player) or (vehicle player != player)) then {
	r_player_injured = false;
	r_player_handler = false;

	if (r_player_blood == r_player_bloodTotal) then {
		player setVariable["USEC_lowBlood",false,true];
	};

	dayz_sourceBleeding = objNull;
	call fnc_usec_resetWoundPoints;

	//Ensure Control is visible
	_display = uiNamespace getVariable 'DAYZ_GUI_display';
	_control = _display displayCtrl 1303;
	_control ctrlShow false;
};