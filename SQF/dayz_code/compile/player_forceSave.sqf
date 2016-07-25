/*

Opens player inventory to save

*/

_magazineArray = [] call player_countMagazines;

if ((count _magazineArray) > 0) then {  
	PVDZ_plr_Save = [player, if (player isKindOf "PZombie_VB") then {nil} else {[_magazineArray,dayz_onBack]}];
	publicVariableServer "PVDZ_plr_Save";
};

//diag_log format["Player_forceSave with magazines: %1",_magazineArray];
					
dayz_lastSave = diag_tickTime;
