private ["_ok"];

if (dayz_actionInProgress) exitWith {localize "STR_EPOCH_PLAYER_21" call dayz_rollingMessages;};
dayz_actionInProgress = true;

dayz_selectedVault = _this select 3;
dayz_combination = "";
		
if(!isNull dayz_selectedVault) then {

	if ((typeOf dayz_selectedVault) == "VaultStorageLocked" || (typeOf dayz_selectedVault) == "VaultStorage") then {
		_ok = createdialog "SafeKeyPad";
	} else {
		_ok = createdialog "KeypadUI";
	};
};

dayz_actionInProgress = false;