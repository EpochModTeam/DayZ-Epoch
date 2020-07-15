/*
	Created exclusively for DayZ Epoch. Script by JasonTM.
*/
private "_vehicle";
_vehicle = _this select 3;

r_action_cargoDrop = false;
call r_player_removeActions2;
//diag_log text format ["Cargo Drop: Vehicle %1",(typeOf _vehicle)];

// Send the information to the server to complete the drop.
PVDZE_cargoDrop = [_vehicle, dayz_authKey, player];
publicVariableServer "PVDZE_cargoDrop";