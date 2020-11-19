if (dayz_actionInProgress) exitWith {localize "str_player_actionslimit" call dayz_rollingMessages;};
dayz_actionInProgress = true;

player removeAction s_player_hide_body;
s_player_hide_body = -1;

closeDialog 0;

local _body = _this select 3;
if (isNull _body) exitWith {systemChat localize "str_cursorTargetNotFound"; dayz_actionInProgress = false;};

player action ["hideBody", _body];

dayz_actionInProgress = false;

uisleep 10;

if ((_body getVariable ["bodyName","unknown"]) != "unknown") then {
	PVDZ_plr_Delete = _body;
	publicVariableServer "PVDZ_plr_Delete";
} else {
	deleteVehicle _body;
};
