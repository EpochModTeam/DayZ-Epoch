private ["_object","_change","_humanity","_wait"];
//Set Variables
_object = _this select 0;
_change = _this select 1;
_humanity = 0;

if (_object == player) then {
	_humanity = player getVariable["humanity",0];
	_humanity = _humanity + _change;
	if (_change < 0) then {
		_wait =	  _this select 2;
		player setVariable["humanity",_humanity,true];
		if (player getVariable ["freeTarget",false]) then {
			waitUntil{!(player getVariable ["freeTarget",false])};
		};
		player setVariable ["freeTarget",true,true];
		//_timeStart = time;
		sleep _wait;
		player setVariable ["freeTarget",false,true];
		
	} else {
		player setVariable["humanity",_humanity,true];
	};
};