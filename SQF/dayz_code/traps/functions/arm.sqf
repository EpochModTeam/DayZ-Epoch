_trap = _this select 0;
_trigger = _this select 1;

_trap animate ['LeftShutter', 0];
_trap animate ['RightShutter', 0];

_trap setVariable ["armed", true, true];
PVDZ_veh_Save = [_trap, "gear"];
publicVariableServer "PVDZ_veh_Save";

dayz_traps_active set [count dayz_traps_active, _trap];
dayz_traps_trigger set [count dayz_traps_trigger, _trigger];
