/*
        Created exclusively for ArmA2:OA - DayZMod.
        Please request permission to use/alter/distribute from project leader (R4Z0R49) AND the author (facoptere@gmail.com)
*/
private [];
//_start = diag_tickTime;

_unit = _this select 0;
_type = _this select 1;

[_unit,  _type] call player_zombieAttack;