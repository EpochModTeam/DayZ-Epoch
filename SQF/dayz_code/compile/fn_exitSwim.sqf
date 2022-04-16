//This workaround reliably exits swimming after a setPos directly from water to land or air.
//"Getting out while IsMoveOutInProgress" prints to client RPT, but it's needed to complete quickly and should be harmless.

local _unit = _this;
local _paraPosition = [_unit] call FNC_GetPos;
local _para = "ParachuteWest" createVehicleLocal [0,0,0];
_para setPos [(_paraPosition select 0),(_paraPosition select 1),(_paraPosition select 2) + 0.1];
_unit moveInDriver _para;
deleteVehicle _para;

if (surfaceiswater _paraPosition) then {
	_unit setPosASL _paraPosition;
} else {
	_unit setPosATL _paraPosition;
};