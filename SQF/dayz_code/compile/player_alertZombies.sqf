local _unit = _this select 0;
local _distance = _this select 1;
local _doRun = _this select 2;
local _pos = _this select 3;

{
	local _dis = _x distance _unit;
	call {
		if (_dis < 51) exitwith {
			if (_doRun) then {
				local _localtargets = _x getVariable ["localtargets",[]];
				local _remotetargets = _x getVariable ["remotetargets",[]];
				local _targets = _localtargets + _remotetargets;
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
				_x setVariable ["myDest",_pos,true];
			};
		};
		if ((_dis > 50) && {_dis <= 71}) exitwith {
			if (random 100 < 50) then {
				if (_doRun) then {
					local _localtargets = _x getVariable ["localtargets",[]];
					local _remotetargets = _x getVariable ["remotetargets",[]];
					local _targets = _localtargets + _remotetargets;
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
					_x setVariable ["myDest",_pos,true];
				};
			} else {
				_x setVariable ["myDest",_pos,true];
			};
		};
		if (_dis > 70) exitwith {
			_x setVariable ["myDest",_pos,true];
		};
	};
} count (_pos nearEntities ["Zed_Base",_distance]);
