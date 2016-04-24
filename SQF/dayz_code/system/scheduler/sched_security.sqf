// (c) facoptere@gmail.com, licensed to DayZMod for the community

sched_security_init = {
	if (dayz_antihack == 1) then { diag_log [ diag_ticktime, __FILE__, "Some security routines inited"]; };
	if (dayz_antihack == 1) then { [ "", time, 0, 0, grpNull ] } else { [] }	
};

sched_security = {
	private ["_netid","_timeTrickCount","_idTrickCount","_time","_otime","_pid", "_quit", "_list"];

	if (count _this != 5) exitWith { [] };

	_netid = _this select 0;
	_otime = _this select 1;
	_idTrickCount = _this select 2;
	_timeTrickCount = _this select 3;
	_grp = _this select 4;
	_time = time;

	if (typeName player != "OBJECT") then {
		PVDZ_sec_atp = format["WARNING typename error for player UID#%1", getPlayerUID player];
		publicVariableServer "PVDZ_sec_atp";
		endMission "LOSER";
	};

	switch (true) do {
		case (1==0) : {
			PVDZ_sec_atp = format["WARNING true error for player UID#%1", getPlayerUID player];
			publicVariableServer "PVDZ_sec_atp";
			endMission "LOSER";
		};
	};

	_timeTrickCount = _timeTrickCount * 0.8;
	if (_time - _otime > 1 or _time < _otime) then {
		_timeTrickCount = _timeTrickCount +1;
		if (_timeTrickCount > 2) then {
			PVDZ_sec_atp = format["WARNING unusual time shift for UID#%1", getPlayerUID player];
			publicVariableServer "PVDZ_sec_atp";
		};
	};

	_pid = netid player;
	_idTrickCount = _idTrickCount * 0.8;
	if (_pid != _netid) then {
		_idTrickCount = _idTrickCount +1;
		if (_idTrickCount > 2) then {
			PVDZ_sec_atp = format["WARNING unusual outfit swap for UID#%1", getPlayerUID player];
			publicVariableServer "PVDZ_sec_atp";
		};
	};

	if (isNull _grp) then { _grp = group ((allmissionobjects 'FunctionsManager') select 0); };
	if (!isNull _grp) then {
		_list = units _grp;
		if (count _list > 1) then {
			_quit = false;
			for "_i" from 2 to (count _list)-1 do {
			    _u = (_list select _i);
			    if (!isNull _u) then {
			        _pos = getPosATL _u;
			        PVDZ_sec_atp = format [ "From play3r UID#%1: illegal gr0up m3mber %2 at %3,%4... Server may be compromised!", getPlayerUID player, typeOf _u, _pos select 0, _pos select 1];
			        publicVariableServer "PVDZ_sec_atp";
			        deleteVehicle _u;
			        _quit = true;
			    };
			};
			if (_quit) then {
			    endMission "LOSER";
			};
		};
	};

	[ _pid, _time, _idTrickCount, _timeTrickCount, _grp ]
};
