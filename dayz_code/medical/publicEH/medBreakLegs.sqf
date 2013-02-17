// medBreakLegs.sqf
private["_array","_unit","_medic","_display","_control","_hitLegs","_hitArms"];
disableserialization;
_array = _this; //_this select 0;
_unit = _array select 0;
_medic = _array select 1;

if (_unit == player) then {
	r_fracture_legs = true;
	r_fracture_arms = true;
	_unit setHit["legs",1];
	_unit setHit["hands",1];
	
	//Ensure Control is visible
	_display = uiNamespace getVariable 'DAYZ_GUI_display';
	_control = 	_display displayCtrl 1203;
	_control ctrlShow true;
	
	_id = true spawn dayz_disableRespawn;
};
_unit setVariable ["hit_legs",1,false];
_unit setVariable ["hit_hands",1,false];

if (isServer) then {
	_unit setVariable["medForceUpdate",true];
};