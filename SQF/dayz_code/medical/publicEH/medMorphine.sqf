// animHealed.sqf
private ["_array","_unit","_medic","_display","_control","_id"];
disableserialization;
_array = _this; //_this select 0;
_unit = _array select 0;
_medic = _array select 1;

if (_unit == player) then {
	r_fracture_legs = false;
	r_fracture_arms = false;
	_unit setHit["legs",0];
	_unit setHit["hands",0];
	
	//Ensure Control is visible
	_display = uiNamespace getVariable 'DAYZ_GUI_display';
	_control = 	_display displayCtrl 1203;
	_control ctrlShow false;
	
	_id = false spawn dayz_disableRespawn;
};
_unit setVariable ["hit_legs",0,false];
_unit setVariable ["hit_hands",0,false];

if (isServer) then {
	_unit setVariable["medForceUpdate",true];
};