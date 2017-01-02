private "_display";

_display = findDisplay 61144;
_display closeDisplay 2;

if (dayz_lastCodeFail > diag_tickTime) exitWith {
	format [localize "STR_EPOCH_PLAYER_19_WAIT",round(dayz_lastCodeFail - diag_tickTime)] call dayz_rollingMessages;
};

if (DZE_doorManagementAllowManualCode) then {
	DZE_topCombo = 0;
	DZE_midCombo = 0;
	DZE_botCombo = 0;
	createDialog "ComboLockUI";
} else {
	localize "STR_EPOCH_DOORACCESS_NOMANUAL" call dayz_rollingMessages;
};