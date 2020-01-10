/*
	DayZ Epoch Event Scheduler 
	Made for DayZ Epoch please ask permission to use/edit/distrubute email vbawol@veteranbastards.com.
*/

epoch_eventIsAny = {
	private ["_boolReturn","_event","_date","_bool","_index"];
    _event = _this select 0;
	_date = _this select 1;
	
	_boolReturn = false;

	_index = 0;
	{
		_bool = false;
		if (typeName _x == "STRING") then {
			_boolReturn = true;
		} else {
			_boolReturn = ((_date select _index) == _x);
		};
		if (!_boolReturn) exitWith {};
		_index = _index + 1;	
	} count _event;

	_boolReturn
};

sched_event_init = {
	diag_log("EPOCH EVENTS INIT");
	""
};

sched_event = {
	private ["_date","_key","_result","_outcome","_handle","_datestr","_lastTime"];
	// Find current time from server
	_lastTime = _this;
	_key = "CHILD:307:";
	_result = _key call server_hiveReadWrite;
	_outcome = _result select 0;
	if(_outcome == "PASS") then {
		_date = _result select 1;
		_datestr  = str(_date);
		if (_lastTime != _datestr) then {
			
			// internal timestamp
			ServerCurrentTime = _date;

			// Once a minute.
			_lastTime = _datestr;

			//diag_log ("EVENTS: Local Time is: " + _datestr);
			if (count EpochEvents == 0) exitWith {};
			{
					
				// Run event at server start when minutes are set to -1
				if ((_x select 4) == -1) then {
					diag_log ("RUNNING EVENT: " + (_x select 5) + " on " + _datestr);
					_handle = [] execVM "\z\addons\dayz_server\modules\" + (_x select 5) + ".sqf";
					
					// Remove event from array so it doesn't run again.
					_lastIndex = (count EpochEvents) - 1;
					if (_lastIndex != _forEachIndex) then {EpochEvents set [_forEachIndex, EpochEvents select _lastIndex];};
					EpochEvents resize _lastIndex;
				} else {
					if([[(_x select 0),(_x select 1),(_x select 2),(_x select 3),(_x select 4)],_date] call epoch_eventIsAny) then {
						diag_log ("RUNNING EVENT: " + (_x select 5) + " on " + _datestr);
						_handle = [] execVM "\z\addons\dayz_server\modules\" + (_x select 5) + ".sqf";
					};
				};
			} forEach EpochEvents;
		};
	};
	_lastTime
};
