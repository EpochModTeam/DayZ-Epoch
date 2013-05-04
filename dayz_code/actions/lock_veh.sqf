private["_vehicle"];
_vehicle = _this select 3;

{player removeAction _x} forEach s_player_lockunlock;s_player_lockunlock = [];
s_player_lockUnlock_crtl = -1;

_vehicle setVehicleInit "this lock true; this lockCargo true;";
processInitCommands;

//_vehicle lock true;	
//dayzLockVehicle = [_vehicle,true];
//publicVariable "dayzLockVehicle";
