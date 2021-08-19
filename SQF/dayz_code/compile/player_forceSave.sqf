/*

Opens player inventory to save
Do not use this in constant running loops or actions. force_Save opens the inventory with a dialog call. 
That will interrupt actions like shooting. For loops use player_regularSave but keep in mind player_regularSave does not save the ammo count.

*/

local _magazineArray = [] call player_countMagazines;

PVDZ_plr_Save = [player, if (player isKindOf "PZombie_VB") then {nil} else {_magazineArray}];	
publicVariableServer "PVDZ_plr_Save";

//diag_log format["Player_forceSave with magazines: %1",_magazineArray];

dayz_lastSave = diag_tickTime;
