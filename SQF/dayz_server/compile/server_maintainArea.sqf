/* Maintain Area - written by Skaronator 
   Updated by iben

1: PVDZE_maintainArea = [netID player,1,[netID Object,netID Object,netID Object,...etc]];
2: PVDZE_maintainArea = [netID player,2,[netID Object]];
*/

if ((_this select 1) == 1) exitWith {
    {
        local _obj = objectFromNetId _x;
        local _ID = _obj getVariable ["ObjectID", "0"];

        if (_ID == "0") then {
            local _UID = _obj getVariable ["ObjectUID", "0"];

            if (_UID != "0") then {
                _obj setDamage 0;
                (format ["CHILD:397:%1:", _UID]) call server_hiveWrite
            }
        } else {
            _obj setDamage 0;
            (format ["CHILD:396:%1:", _ID]) call server_hiveWrite
        }
    } count (_this select 2);

    local _player = objectFromNetId (_this select 0);
    local _position = getPosATL _player;

    diag_log format [
         "MAINTAIN AREA BY %1 - %2 Objects at %3, Grid: %4."
        ,if (alive _player) then {name _player} else {"Dead Player"}
        ,count (_this select 2), _position, mapGridPosition _position
    ]
};


local _obj = objectFromNetId ((_this select 2) select 0);
local _ID = _obj getVariable ["ObjectID", "0"];

if (_ID == "0") exitWith {
    local _UID = _obj getVariable ["ObjectUID", "0"];

    if (_UID != "0") then {
        _obj setDamage 0;
        (format ["CHILD:397:%1:", _UID]) call server_hiveWrite
    }
};


_obj setDamage 0;
(format ["CHILD:396:%1:", _ID]) call server_hiveWrite
