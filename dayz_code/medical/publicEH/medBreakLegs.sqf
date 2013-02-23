// medBreakLegs.sqf
private["_array","_unit","_medic","_display","_control","_hitLegs","_hitArms"];
disableserialization;
_array = _this; //_this select 0;
_unit = _array select 0;
_medic = _array select 1;

if (_unit == player) then {
	
	// Make bleed
	r_player_injured = true;
	_unit setVariable ["USEC_injured",true,true];

	//Ensure Control is visible for bleeding
	_display = uiNamespace getVariable 'DAYZ_GUI_display';
	_control = 	_display displayCtrl 1300;
	_control ctrlShow true;

	// Make player infected
	// r_player_infected = true;
	// _unit setVariable["USEC_infected",true];

};



if (isServer) then {
	_unit setVariable["medForceUpdate",true];
};