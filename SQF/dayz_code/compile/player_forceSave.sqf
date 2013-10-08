_magazineArray = [] call player_countMagazines;

PVDZE_plr_Save = [player,[_magazineArray,dayz_onBack],false];
publicVariableServer "PVDZE_plr_Save";

_objects = nearestObjects [getPosATL player, ["Car", "Helicopter", "Motorcycle", "Ship", "Land_A_tent"], 10];

{
	PVDZE_veh_Update = [_x,"gear"];
	publicVariableServer "PVDZE_veh_Update";

} foreach _objects;
					
dayz_lastSave = diag_tickTime;
