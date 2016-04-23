
sched_vehicleshivewrite = {
private ["_n","_x","_damage","_pos","_otime","_opos","_odamage"];
		// EVERY 1 MINUTE
		// FORCE HIVE WRITE FOR VEHICLES WHO NEED IT (DAMAGE OR POSITION OR TIMEOUT CHANGE)
	_n = 0;
	{
		if (_x isKindOf "AllVehicles") then {
			_damage = damage _x;
			_pos = getPosASL _x;
			_otime = _x getVariable [ "sched_vh_sync_time", -1];
			_opos = _x getVariable [ "sched_vh_sync_pos", _pos];
			_odamage = _x getVariable [ "sched_vh_sync_dmg", _damage];	
			if (_otime == -1) then { 
				_otime = diag_tickTime - random 480;
				_x setVariable [ "sched_vh_sync_time", _otime];
				_x setVariable [ "sched_vh_sync_pos", _opos];
				_x setVariable [ "sched_vh_sync_dmg", _odamage];	
			};
			if ((diag_tickTime - _otime > 600) OR {((_pos distance _opos > 50) OR {(_odamage != _damage)})}) then {
				_x setVariable [ "sched_vh_sync_time", diag_tickTime];
				_x setVariable [ "sched_vh_sync_pos", _pos];
				_x setVariable [ "sched_vh_sync_dmg", _damage];	
				[_x, "all", true] call server_updateObject;
				_n = _n + 1;	
			}/*
			else {
		diag_log format ["%1: veh %2   %3 %4 %5", __FILE__, _x, _otime, _opos, _odamage];
			}*/;
		};
	} forEach vehicles;		
	if (_n > 0) then {
		diag_log format ["%1: sync'ed %2 vehicles to HIVE", __FILE__, _n];
	};

	objNull
};
