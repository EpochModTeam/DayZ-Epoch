// animHealed.sqf
private["_msg","_isSepsis","_unit","_medic","_display","_control"];
disableserialization;

_unit = _this select 0;
_medic = _this select 1;
_isSepsis = _this select 2;

r_player_injured = false;
r_player_handler = false;
	
// Reset sepsis variables if sepsis bandage was used.
if (_isSepsis) then {
	r_player_Sepsis = [false, 0];
	_unit setVariable ["USEC_Sepsis", false, true];
	_unit setVariable ["sepsisStarted", nil];
};

if (r_player_blood == r_player_bloodTotal) then {
	player setVariable["USEC_lowBlood",false,true];
};

dayz_sourceBleeding = objNull;
call fnc_usec_resetWoundPoints;

//Ensure Control is visible
_display = uiNamespace getVariable 'DAYZ_GUI_display';
_control = _display displayCtrl 1303;
_control ctrlShow false;
	
if (_medic != player) then {
	_msg = if (_isSepsis) then {"str_actions_medical_sepsisbandage_received"} else {"str_actions_medical_bandage_received"};
	format [localize _msg,(name _medic)] call dayz_rollingMessages;
};
