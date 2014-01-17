private["_body","_name","_method","_methodStr","_bodyName"];
_body = 	_this select 3;
_bodyName = toArray "unknown";
_name = 	_body getVariable["bodyName",_bodyName];
_method = 	_body getVariable["deathType","unknown"];
_methodStr = localize format ["str_death_%1",_method];


cutText [format[(localize  "str_player_studybody"),toString(_name),_methodStr], "PLAIN DOWN"];
