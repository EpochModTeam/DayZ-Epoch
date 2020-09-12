if (dayz_actionInProgress) exitWith {localize "STR_EPOCH_PLAYER_21" call dayz_rollingMessages;};
dayz_actionInProgress = true;

dayz_selectedVault = _this select 3;
dayz_combination = "";

if (dayz_lastCodeFail > diag_tickTime) exitWith {
	dayz_actionInProgress = false;
	format [localize "STR_EPOCH_PLAYER_19_WAIT",round(dayz_lastCodeFail - diag_tickTime)] call dayz_rollingMessages;
};

if (!isNull dayz_selectedVault) then {
	if ((typeOf dayz_selectedVault) in ["VaultStorageLocked","VaultStorage","VaultStorage2Locked","VaultStorage2"]) then {
		createDialog "SafeKeyPad";
	} else {
		createDialog "KeypadUI";
	};
};

dayz_actionInProgress = false;
