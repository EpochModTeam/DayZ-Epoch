private["_obj"];
_obj = _this select 3;
player playActionNow "Medic";
sleep 6;
if(_obj isKindOf "Land_fire") then {
	dayz_hasFire = objNull;
	deleteVehicle _obj;
};
cutText [localize "str_fireplace_removed", "PLAIN DOWN"];
player removeAction s_player_fireout;
s_player_fireout = -1;