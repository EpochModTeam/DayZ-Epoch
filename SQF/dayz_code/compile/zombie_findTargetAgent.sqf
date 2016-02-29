private ["_target","_targets","_man","_manDis","_localtargets","_remotetargets"];
_agent = _this;
_target = objNull;
_targets = [];
//_targetDis = [];
_range = 100;
_manDis = 0;

_localtargets = _agent getVariable ["localtargets",[]];
_remotetargets = _agent getVariable ["remotetargets",[]];

if (isNil "_localtargets") then{
	_localtargets = [];
};
if (isNil "_remotetargets") then{
	_remotetargets = [];
};
_targets = _localtargets + _remotetargets;

//diag_log ("Targets: " +str(_targets));

//if (isNil "_targets") exitWith {};
	
//Search for objects
if (count _targets == 0) then {
//"ThrownObjects","GrenadeHandTimedWest","SmokeShell"]
	_objects = _agent nearObjects ["GrenadeHand", 300];
	{
		if (!(_x in _targets)) then {
			if (local _x) then {
				_localtargets set [count _localtargets,_x];
			} else {
				_remotetargets set [count _remotetargets,_x];
			};
		};
	} foreach _objects;
};

//Find best target
if (count _targets > 0) then {
	_man = _targets select 0;
	_manDis = _man distance _agent;
	//diag_log (str(_man) + str(_manDis));
	{
		private["_dis"];
		_dis = _x distance _agent;
		if (_dis < _manDis) then {
			_man = _x;
			_manDis = _dis;
		};
		if (_x isKindOf "SmokeShell") then {
			_man = _x;
			_manDis = _dis;
		};
	} forEach _targets;
	_target = _man;
};

//Check if too far
if (_manDis > _range) then {
	_targets = _targets - [_target];
	_target = objNull;
};

_target
