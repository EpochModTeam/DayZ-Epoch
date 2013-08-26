private ["_buy","_number"];
dayz_selectedVault = _this select 3;
dayz_combination = "";

{player removeAction _x} forEach s_player_combi;s_player_combi = [];
		
if(!isNull dayz_selectedVault) then {


	
	_ok = createdialog "KeypadUI";

	// _ok = createdialog "SafeKeyPad";
};

s_player_unlockvault = -1;