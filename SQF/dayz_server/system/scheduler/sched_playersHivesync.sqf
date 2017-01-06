

sched_playershivewrite = {
	private ["_n","_x","_damage","_pos","_otime","_opos","_odamage"];
		// EVERY 1 MINUTE
		// FORCE HIVE WRITE FOR PLAYERS WHO NEED IT (HUMANITY OR POSITION OR TIMEOUT CHANGE)
	_n = 0;
	{
		if ((isPlayer _x) AND {(alive _x)}) then {
			_damage = _x getVariable [ "USEC_BloodQty", -1 ];
			_pos = visiblePosition _x; // genuine position, deals with player in vehicle or not
			if (_damage >= 0) then { // not a character?
				_otime = _x getVariable [ "sched_ph_sync_time", -1];
				_opos = _x getVariable [ "sched_ph_sync_pos", _pos];
				_odamage = _x getVariable [ "sched_ph_sync_dmg", _damage];	
				if (_otime == -1) then { 
					_otime = diag_tickTime;
					_x setVariable [ "sched_ph_sync_time", _otime];
					_x setVariable [ "sched_ph_sync_pos", _opos];
					_x setVariable [ "sched_ph_sync_dmg", _odamage];
				};
				if ((diag_tickTime - _otime > 600) OR {((_pos distance _opos > 50) OR {(_odamage != _damage)})}) then {
					[_x, nil, true] call server_playerSync;
					_x setVariable [ "sched_ph_sync_time", diag_tickTime];
					_x setVariable [ "sched_ph_sync_pos", _pos];
					_x setVariable [ "sched_ph_sync_dmg", _damage];
					_n = _n + 1;	
				};
			};
		};
	} forEach playableUnits;
	if (_n > 0) then {
		diag_log format ["%1: sync'ed %2 players to HIVE", __FILE__, _n];
	};

	objNull
};
