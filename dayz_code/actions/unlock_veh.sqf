private["_vehicle"];
_vehicle = _this select 3;

{player removeAction _x} forEach s_player_lockunlock;s_player_lockunlock = [];
s_player_lockUnlock_crtl = -1;

_vehicle setVehicleInit "this lock false; this lockCargo false;";
processInitCommands;

// Wiki states that lock is globally brodcast but the variable has to be local
//_vehicle lock false;
//dayzLockVehicle = [_vehicle,false];
//publicVariable "dayzLockVehicle";
