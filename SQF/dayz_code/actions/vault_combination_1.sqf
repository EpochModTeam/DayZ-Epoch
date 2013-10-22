private ["_ok"];
dayz_selectedVault = _this select 3;
dayz_combination = "";

{player removeAction _x} forEach s_player_combi;s_player_combi = [];
		
if(!isNull dayz_selectedVault) then {

	if ((typeOf dayz_selectedVault) == "VaultStorageLocked" or (typeOf dayz_selectedVault) == "VaultStorage") then {
		_ok = createdialog "SafeKeyPad";
	} else {
		_ok = createdialog "KeypadUI";
	};
};

s_player_unlockvault = -1;