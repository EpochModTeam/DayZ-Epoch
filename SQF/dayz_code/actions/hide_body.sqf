if (dayz_actionInProgress) exitWith {localize "str_player_actionslimit" call dayz_rollingMessages;};
dayz_actionInProgress = true;

private "_body";

player removeAction s_player_hide_body;
s_player_hide_body = -1;

closeDialog 0;

_body = _this select 3;
if (isNull _body) exitWith { dayz_actionInProgress = false;};

player action ["hideBody", _body];

dayz_actionInProgress = false;