private["_action","_liftHeli","_vehicle","_onLadder","_liftUseTime","_dis","_sfx","_liftUsageTime","_animState","_started","_finished","_moved","_attached","_hasAttached","_animState","_isMedic","_posL","_posC","_height"];

_action = _this select 3;
_liftHeli = _action select 0;
_vehicle = _action select 1;

dayz_myLiftVehicle removeAction s_player_heli_detach;
s_player_heli_detach = -1;

detach _vehicle;
_vehicle setVariable["attached",false,true];
_liftHeli setVariable["hasAttached",false,true];