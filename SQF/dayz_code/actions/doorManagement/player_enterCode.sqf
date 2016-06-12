
// Close EyeScanner
_display = findDisplay 61144;
_display closeDisplay 3000;
if(DZE_doorManagementAllowManualCode) then {
	//DZE_Lock_Door != (this getvariable['CharacterID','0']);
	DZE_topCombo = 0;
	DZE_midCombo = 0;
	DZE_botCombo = 0;
	createDialog "ComboLockUI";
} else {
	localize "STR_EPOCH_EYESCANNER_NOMANUAL" call dayz_rollingMessages;
};
