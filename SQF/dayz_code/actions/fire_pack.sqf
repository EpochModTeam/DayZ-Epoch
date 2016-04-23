private "_obj";
_obj = _this select 3;

player playActionNow "Medic";
uiSleep 6;

if (_obj isKindOf "Land_fire") then {
	dayz_hasFire = objNull;
	deleteVehicle _obj;
};

localize "str_fireplace_removed" call dayz_rollingMessages;
player removeAction s_player_fireout;
s_player_fireout = -1;