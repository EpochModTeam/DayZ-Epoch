private["_display","_control1","_control2","_watermark"];
disableSerialization;
//diag_log "DEBUG: loadscreen guard started.";

_timeoutStart=diag_ticktime;
while {true} do {
	if (diag_ticktime - _timeoutStart >= 120) exitWith {
		1 cutText [localize "str_player_login_timeout", "PLAIN DOWN"];
		uiSleep 5;
		endMission "END1";
	};
	if ((!isNil "Dayz_loginCompleted") and {(Dayz_loginCompleted)}) exitWith { 
		//diag_log [ __FILE__, __LINE__, "End loop"];
		
		// Logo watermark: adding a logo in the bottom left corner of the screen with the server name
		if (!isNil "dayZ_serverName") then {
			5 cutRsc ["wm_disp","PLAIN"];
			_watermark = (uiNamespace getVariable "wm_disp") displayCtrl 1;
			_watermark ctrlSetText dayZ_serverName;
			if (profileNamespace getVariable ["streamerMode",0] == 1) then {_watermark ctrlShow false;};
		};
		
		if (dayz_enableRules && (profileNamespace getVariable ["streamerMode",0] == 0)) then {
			dayz_rulesHandle = execVM "rules.sqf";
		};
		
		if (dayz_groupSystem) then {execVM "DZE_Hotfix_1.0.6.1A\groups\init.sqf";};
		Diag_Log "DZE_Hotfix_1.0.6.1A: dayz_groupSystem patched";
	};
	_display = uiNameSpace getVariable "BIS_loadingScreen";
	if (!isNil "_display") then {
		if (dayz_loadScreenMsg != "" ) then {
			_control1 = _display displayctrl 8400;
			_control1 ctrlSetText dayz_loadScreenMsg;
		};
		_control2 = _display displayctrl 102;
		_control2 ctrlSetText format["%1",floor(diag_ticktime - _timeoutStart)];
	};

	uiSleep 0.2;
	//diag_log [ __FILE__, __LINE__, "Looping..."];
};

