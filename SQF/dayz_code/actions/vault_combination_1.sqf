private ["_ok"];

if(DZE_ActionInProgress) exitWith { cutText [(localize "STR_EPOCH_PLAYER_21") , "PLAIN DOWN"]; };
DZE_ActionInProgress = true;

dayz_selectedVault = _this select 3;
dayz_combination = "";
		
if(!isNull dayz_selectedVault) then {

	if ((typeOf dayz_selectedVault) == "VaultStorageLocked" || (typeOf dayz_selectedVault) == "VaultStorage") then {
		_ok = createdialog "SafeKeyPad";
	} else {
		_ok = createdialog "KeypadUI";
	};
};

DZE_ActionInProgress = false;