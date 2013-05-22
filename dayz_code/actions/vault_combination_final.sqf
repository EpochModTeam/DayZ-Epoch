private [];
// set final combination to player 
dayz_combination = format["%1%2",dayz_combination,(_this select 3)];
{player removeAction _x} forEach s_player_combi;s_player_combi = [];
s_player_unlockvault = -1;
// Run unlock on vault
if(!isNull dayz_selectedVault and (typeOf dayz_selectedVault) == "VaultStorageLocked") then {
	dayz_selectedVault spawn player_unlockVault;
	dayz_selectedVault = objNull;
};