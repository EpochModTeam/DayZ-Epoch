private ["_nearTankTraps","_nearTankTrap"];

_onLadder =                (getNumber (configFile >> "CfgMovesMaleSdr" >> "States" >> (animationState player) >> "onLadder")) == 1;
_canDo = (!r_drag_sqf and !r_player_unconscious and !_onLadder);

_nearTankTraps = nearestObjects [player, "Hedgehog_DZ", 1];
_nearTankTrap = _nearTankTraps select 0;

 if (!isNull _nearTankTrap and _canDo) then {
         [0,1,2,_nearTankTrap] spawn player_removeObject;
 } else {
        cutText ["No Tank Traps found nearby.", "PLAIN DOWN"];
 };
