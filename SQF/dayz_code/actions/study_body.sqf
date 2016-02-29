private["_body","_name","_method","_methodStr"];

_body = _this select 3;
_name = _body getVariable["bodyName","unknown"];
_method = _body getVariable["deathType","unknown"];
_methodStr = localize format ["str_death_%1",_method];

cutText [format [localize "str_player_studybody",_name,_methodStr], "PLAIN DOWN"];
