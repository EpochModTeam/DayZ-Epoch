private ["_change","_wait","_humanity"];
/*
	Set humanity chanages and sets freeTarget(openTarget)
*/

_change = _this select 0;
_wait = _this select 1;

_humanity = (player getVariable["humanity",0]) + _change;
player setVariable["humanity",_humanity,true];

if (_change < 0) then { //non-bandit player can be "punished" in next "_wait" seconds w/o loosing humanity
	if ((_humanity > -2000) and (_wait > 0)) then {
		player setVariable ["FTcounter",((player getVariable ["FTcounter",0]) + _wait)];
		[_wait] spawn {
			private ["_endtime","_wait"];
			_wait = _this select 0;
			_endTime = diag_tickTime + _wait;
			waitUntil { uiSleep 1; diag_tickTime > _endTime };
			player setVariable ["FTcounter",((player getVariable ["FTcounter",0]) - _wait)];
			if ((player getVariable ["FTcounter",0]) <= 0) then {
				player setVariable ["FTcounter",0];
			};
		};
	};
};

/*
	Should block damageHandler running humanityCheck(Skin change check), allow all other humanity events to run humanityCheck(Skin change check)
*/
//if ((_wait == 0) and (vehicle player == player)) then { [_humanity] call player_humanityCheck; };
//Humanity morphing disabled on Epoch to avoid loss of purchased clothing