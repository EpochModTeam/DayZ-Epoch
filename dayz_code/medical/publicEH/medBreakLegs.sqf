// medBreakLegs.sqf
private["_array","_unit","_medic","_display","_control","_hitLegs","_hitArms"];
disableserialization;
_array = _this; //_this select 0;
_unit = _array select 0;
_medic = _array select 1;

if (local _unit && _unit == player) then {
	
	_unit setVariable["startcombattimer", 1, false];

	// Make bleed
	if (random 2 < 1) then {
		r_player_injured = true;
		player setVariable ["USEC_injured",true,true];
	
		//Ensure Control is visible for bleeding
		_display = uiNamespace getVariable 'DAYZ_GUI_display';
		_control = 	_display displayCtrl 1300;
		_control ctrlShow true;
	};

	// Make player infected
	if (random 5 < 1) then {
		r_player_infected = true;
		player setVariable["USEC_infected",true,true];
	};

	// Break legs
	if (random 25 < 1) then {
		// break legs
	};

	// Knock out
	if (random 100 < 1) then {
		// perform knockout 
	};

	player setVariable["medForceUpdate",true];
};