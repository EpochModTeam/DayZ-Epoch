private ["_unit","_distance","_doRun","_pos","_listTalk","_zombie","_50","_localtargets","_remotetargets","_targets","_dis"];

_unit = 	_this select 0;
_distance = _this select 1;
_doRun = 	_this select 2;
_pos = 		_this select 3;

_listTalk = _pos nearEntities ["zZombie_Base",_distance];

{
	_distance = _distance max floor(_distance*.9);
	_dis = _x distance _unit;
	_zombie = _x;

	call {
		if (_dis < 51) exitwith {
			if (_doRun) then {
				_localtargets = _x getVariable ["localtargets",[]];
				_remotetargets = _x getVariable ["remotetargets",[]];
				_targets = _localtargets + _remotetargets;
				if (!(_unit in _targets)) then {
					if !(local _x) then {
						_remotetargets set [count _remotetargets,_unit];
						_x setVariable ["remotetargets",_remotetargets,true];
					} else {
						_localtargets set [count _localtargets,_unit];
						_x setVariable ["localtargets",_localtargets,false];
					};
				};
			} else {
				_zombie setVariable ["myDest",_pos,true];
			};
		};
		if ((_dis > 50) && {_dis <= 71}) exitwith {
			_50 = round(random 100);
			if (_50 < 50) then {
				if (_doRun) then {
					_localtargets = _x getVariable ["localtargets",[]];
					_remotetargets = _x getVariable ["remotetargets",[]];
					_targets = _localtargets + _remotetargets;
					if (!(_unit in _targets)) then {
						if !(local _x) then {
							_remotetargets set [count _remotetargets,_unit];
							_x setVariable ["remotetargets",_remotetargets,true];
						} else  {
							_localtargets set [count _localtargets,_unit];
							_x setVariable ["localtargets",_localtargets,false];
						};
					};
				} else {
					_zombie setVariable ["myDest",_pos,true];
				};
			} else {
				_zombie setVariable ["myDest",_pos,true];
			};
		};
		if (_dis > 70) exitwith {
			_zombie setVariable ["myDest",_pos,true];
		};
	};
} count _listTalk;
