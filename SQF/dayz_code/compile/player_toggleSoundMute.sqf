private ["_background","_icon","_display"];

disableSerialization;
_display = uiNamespace getVariable "DAYZ_GUI_display";

if (!isNil "_display" && !isNil "Dayz_loginCompleted") then {
	_background = _display displayCtrl 1904;
	_icon = _display displayCtrl 1204;
	
	if (dayz_soundMuted) then {
		dayz_soundMuted = false;
		if (!r_player_unconscious && !deathHandled && !r_pitchWhine) then {1 fadeSound 1;};
		_background ctrlShow false;
		_icon ctrlShow false;
	} else {
		dayz_soundMuted = true;
		1 fadeSound 0.25;
		_background ctrlShow true;
		_icon ctrlShow true;
	};
};