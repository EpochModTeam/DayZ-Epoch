private ["_agent","_range","_target","_targets","_man","_manDis","_localtargets","_remotetargets"];

_agent = _this;

if (isNull _agent) exitWith {objNull}; // Prevent errors if zombie is suddenly deleted

_target = objNull;
_targets = [];
_range = 100;
_manDis = 0;
_localtargets = _agent getVariable ["localtargets",[]];
_remotetargets = _agent getVariable ["remotetargets",[]];
_targets = _localtargets + _remotetargets;

//diag_log ("Targets: " +str(_targets));

//Search for objects
if (count _targets == 0) then {
	private "_objects";
	
	_objects = _agent nearObjects ["GrenadeHand", 300]; //"ThrownObjects","GrenadeHandTimedWest","SmokeShell"]
	{
		if (!(_x in _targets)) then {
			if (local _x) then {
				_localtargets set [count _localtargets,_x];
			} else {
				_remotetargets set [count _remotetargets,_x];
			};
		};
	} count _objects;
};

//Find best target
if (count _targets > 0) then {
	_man = _targets select 0;
	_manDis = _man distance _agent;
	//diag_log (str(_man) + str(_manDis));
	{
		private "_dis";
		_dis = _x distance _agent;
		if (_dis < _manDis) then {
			_man = _x;
			_manDis = _dis;
		};
		if (_x isKindOf "SmokeShell") then {
			_man = _x;
			_manDis = _dis;
		};
	} count _targets;
	_target = _man;
};

//Check if too far
if (_manDis > _range) then {
	_targets = _targets - [_target];
	_target = objNull;
};

_target
