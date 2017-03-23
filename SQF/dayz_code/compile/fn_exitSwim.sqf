//This workaround reliably exits swimming after a setPos directly from water to land or air.
//"Getting out while IsMoveOutInProgress" prints to client RPT, but it's needed to complete quickly and should be harmless.

_unit = _this;
_unit allowDamage false;
_paraPosition = [_unit] call FNC_GetPos;
_para = "ParachuteWest" createVehicleLocal [0,0,0];
_para setPos _paraPosition;
_unit moveInDriver _para;
deleteVehicle _para;
_unit allowDamage true;