/*
	DayZ Epoch Event Scheduler 
	Usage: spawn server_spawnEvents;
	Made for DayZ Epoch please ask permission to use/edit/distrubute email vbawol@veteranbastards.com.
*/

private ["_xaction","_date","_key","_result","_outcome","_proceed","_handle"];

diag_log("EPOCH EVENTS INIT");
EventSchedulerLastTime = "";

epoch_eventIsAny = {
	private ["_boolReturn","_event","_real"];
    _event = _this select 0;
	_real = _this select 1;
	_boolReturn = false;
	if (typeName _event == "STRING") then {
		_boolReturn = (_event == "any");
	} else {
		_boolReturn = (_real == _event);
	};
	_boolReturn
};

zero_cleanDead = diag_tickTime;
zero_cleanLoot = diag_tickTime;

while {true} do {
	
	// Find current time from server
	_key = "CHILD:307:";
	_result = _key call server_hiveReadWrite;
	_outcome = _result select 0;
	if(_outcome == "PASS") then {
		_date = _result select 1;
		_datestr  = str(_date);
		if (EventSchedulerLastTime != _datestr) then {
			
			// This is only ran every minute.
			EventSchedulerLastTime = _datestr;

			// diag_log ("EVENTS: Local Time is: " + str(_date));
			{
				if([(_x select 0),(date select 0)] call epoch_eventIsAny) then {
					if([(_x select 1),(date select 1)] call epoch_eventIsAny) then {
						if([(_x select 2),(date select 2)] call epoch_eventIsAny) then {
							if([(_x select 3),(date select 3)] call epoch_eventIsAny) then {
								if([(_x select 4),(date select 4)] call epoch_eventIsAny) then {
									// EXECUTE SCRIPT
									diag_log ("RUNNING EVENT: " + (_x select 5) + " on " + EventSchedulerLastTime);
									_handle = [] execVM "\z\addons\dayz_server\modules\" + (_x select 5) + ".sqf";
								};
							};
						};
					};
				};
			} forEach EpochEvents;

			_time = diag_tickTime;

			// perform cleanup here
			if ((_time - zero_cleanDead) > 600) then
			{
				call server_cleanDead;
				zero_cleanDead = _time;
			};

			if ((_time - zero_cleanLoot) > 1800) then
			{
				call server_cleanLoot;
				zero_cleanLoot = _time;
			};
		};
	};
	sleep 5;
};