/*
	DayZ Epoch Event Scheduler 
	Made for DayZ Epoch please ask permission to use/edit/distrubute email vbawol@veteranbastards.com.
*/

epoch_eventIsAny = {
    local _event = _this select 0;
	local _date = _this select 1;
	local _boolReturn = false;
	local _index = 0;
	{
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
	diag_log formatText ["EPOCH EVENTS: %1 Events Scheduled",(count EpochEvents)];
	""
};

sched_event = {
	// Find current time from server
	local _lastTime = _this;
	local _key = "CHILD:307:";
	local _result = _key call server_hiveReadWrite;
	local _outcome = _result select 0;
	if (_outcome == "PASS") then {
		local _date = _result select 1;
		local _datestr  = str(_date);
		if (_lastTime != _datestr) then {
			
			// internal timestamp
			ServerCurrentTime = _date;
			_lastTime = _datestr;
			{
					
				// Run event at server start when minutes are set to -1
				if ((_x select 4) == -1) then {
					diag_log ("RUNNING EVENT: " + (_x select 5) + " on " + _datestr);
					local _handle = [] execVM "\z\addons\dayz_server\modules\" + (_x select 5) + ".sqf";
					
					// Remove event from array so it doesn't run again.
					EpochEvents = [EpochEvents,_forEachIndex] call fnc_deleteAt;
				} else {
					if([[(_x select 0),(_x select 1),(_x select 2),(_x select 3),(_x select 4)],_date] call epoch_eventIsAny) then {
						diag_log ("RUNNING EVENT: " + (_x select 5) + " on " + _datestr);
						local _handle = [] execVM "\z\addons\dayz_server\modules\" + (_x select 5) + ".sqf";
					};
				};
			} forEach EpochEvents;
		};
	};
	_lastTime
};
