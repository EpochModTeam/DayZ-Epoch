_trap = _this select 0;

_trap animate ['LeftShutter', 1];
_trap animate ['RightShutter', 1];

_trap setVariable ["armed", false, true];
PVDZ_veh_Save = [_trap, "gear"];
publicVariableServer "PVDZ_veh_Save";

if (_trap in dayz_traps_active) then {
	deleteVehicle (dayz_traps_trigger select (dayz_traps_active find _trap));
	dayz_traps_trigger = dayz_traps_trigger - [dayz_traps_trigger select (dayz_traps_active find _trap)];
	dayz_traps_active = dayz_traps_active - [_trap];
};
