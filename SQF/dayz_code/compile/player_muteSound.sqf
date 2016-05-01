private ["_control","_display"];

disableSerialization;
_display = uiNamespace getVariable "DAYZ_GUI_display";

if (!isNil "_display") then {
	_control = _display displayCtrl 1204;
	
	if (dayz_soundMuted) then {
		dayz_soundMuted = false;
		1 fadeSound 1;
		_control ctrlShow false;
	} else {
		dayz_soundMuted = true;
		1 fadeSound 0.25;
		_control ctrlShow true;
	};
};