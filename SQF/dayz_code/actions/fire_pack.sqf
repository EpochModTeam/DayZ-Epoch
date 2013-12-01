private["_obj"];
_obj = _this select 3;

player removeAction s_player_fireout;
s_player_fireout = 1;
[1,1] call dayz_HungerThirst;
player playActionNow "Medic";
sleep 6;
if(_obj isKindOf "Land_fire") then {
	dayz_hasFire = objNull;
	deleteVehicle _obj;
};
cutText [localize "str_fireplace_removed", "PLAIN DOWN"];
s_player_fireout = -1;