private ["_object","_change","_humanity","_wait"];
//Set Variables
_object = _this select 0;
_change = _this select 1;
_humanity = 0;
_wait = if (count _this > 2) then { _this select 2 } else { 0 };

if (_object == player) then {
	_humanity = (player getVariable["humanity",0]) + _change;
	player setVariable["humanity",_humanity,true];
	if (_change < 0) then { //non-bandit player can be "punished" in next "_wait" seconds w/o loosing humanity
		if ((_humanity > -2000) and (_wait > 0)) then {
			player setVariable ["freeTarget",true,true];
			player setVariable ["FTcounter",((player getVariable ["FTcounter",0]) + _wait)];
			[_wait] spawn {
				private ["_endtime","_wait"];
				_wait = _this select 0;
				_endTime = diag_tickTime + _wait;
				waitUntil { uisleep 1; diag_tickTime > _endTime };
				player setVariable ["FTcounter",((player getVariable ["FTcounter",0]) - _wait)];
				if ((player getVariable ["FTcounter",0]) <= 0) then {
					player setVariable ["FTcounter",0];
					player setVariable ["freeTarget",false,true];
				};
			};
		};
	};
};