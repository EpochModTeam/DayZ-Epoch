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

while {true} do {
	// Find current time from server
	_key = "CHILD:307:";
	_result = _key call server_hiveReadWrite;
	_outcome = _result select 0;
	if(_outcome == "PASS") then {
		_date = _result select 1; 
		if (EventSchedulerLastTime != str(_date)) then {
			EventSchedulerLastTime = str(_date);
			// diag_log ("EVENTS: Local Time is: " + str(_date));
			{
				
				_proceed = false;
				for "_i" from 0 to 4 do {
					_proceed = [(_x select _i),(date select _i)] call epoch_eventIsAny;
				};
				if(_proceed) then {
					_xaction = _x select 5;
					// EXECUTE SCRIPT
					diag_log ("RUNNING EVENT: " + _xaction + " on " + EventSchedulerLastTime);
					_handle = [] execVM "\z\addons\dayz_server\modules\" + _xaction + ".sqf";
				};
				sleep 0.03;

			} forEach EpochEvents;
		};
	};
	sleep 5;
};