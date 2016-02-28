private["_display","_control1","_control2"];
disableSerialization;
//diag_log "DEBUG: loadscreen guard started.";

_timeoutStart=diag_ticktime;
while {true} do {
	if (diag_ticktime - _timeoutStart >= 120) exitWith {
		1 cutText [localize "str_player_login_timeout", "PLAIN DOWN"];
		sleep 5;
		endMission "END1";
	};
	if ((!isNil "Dayz_loginCompleted") and {(Dayz_loginCompleted)}) exitWith { 
		//diag_log [ __FILE__, __LINE__, "End loop"];
	};
	_display = uiNameSpace getVariable "BIS_loadingScreen";
	if ((!isNil "_display") and {(dayz_loadScreenMsg != "" )}) then {
		_control1 = _display displayctrl 8400;
		_control1 ctrlSetText dayz_loadScreenMsg;
	};
	_control2 = _display displayctrl 102;
	_control2 ctrlSetText format["%1",floor(diag_ticktime - _timeoutStart)];

	sleep 0.2;
	//diag_log [ __FILE__, __LINE__, "Looping..."];
};

