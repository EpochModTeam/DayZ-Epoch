private ["_dog","_target","_targets","_man","_manDis"];
_dog = _this;
_target = objNull;
_targets = [];
_man = objNull;
_manDis = 600;

_targets = _dog getVariable ["targets",[]];
diag_log "DEBUG: FIND TARGET AGENT";

if (isNil "_targets") exitWith { diag_log "DEBUG: DOG WAS NIL";};

if (count _targets > 0) then {
	{
		if ((_x distance _dog) < _manDis) then {
			_man = _x;
			_manDis = (_x distance _dog);
		};
	} count _targets;
	_target = _man;
};
_target;