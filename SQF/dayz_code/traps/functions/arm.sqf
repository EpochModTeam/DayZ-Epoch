_trap = _this select 0;
_trigger = _this select 1;

//Doesn't work on flare and smoke beartraps "due to proxies n stuff"
_trap animate ['LeftShutter', 0];
_trap animate ['RightShutter', 0];

if !(_trap getVariable ["armed", false]) then {
	_trap setVariable ["armed", true, true];
};
	
PVDZ_veh_Save = [_trap, "gear"];
if (isServer) then {
	PVDZ_veh_Save call server_updateObject;
} else {
	publicVariableServer "PVDZ_veh_Save";
};

dayz_traps_active set [count dayz_traps_active, _trap];
dayz_traps_trigger set [count dayz_traps_trigger, _trigger];
