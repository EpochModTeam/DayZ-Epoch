private "_display";
disableSerialization;
_display = uiNamespace getVariable ["wm_disp",displayNull];

if (profileNamespace getVariable ["streamerMode",0] == 1) then {
	_display displayCtrl 1 ctrlShow false;
	if (!isNil "dayz_rulesHandle") then {
		terminate dayz_rulesHandle;
		dayz_rulesHandle = nil;
	};
} else {
	_display displayCtrl 1 ctrlShow true;
};