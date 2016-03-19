sched_sync = {
	private ["_result","_outcome","_date","_hour","_minute"];
	// EVERY 15 MINUTES
	// RESYNC TIME WITH HIVE DLL SYSTEM CALL

	_result = "CHILD:307:" call server_hiveReadWrite;
	_outcome = _result select 0;
	if(_outcome == "PASS") then {
	        _date = _result select 1;

	        _hour = _date select 3;
	        _minute = _date select 4;

	        if(dayz_ForcefullmoonNights) then {
	                _date = [2012,8,2,_hour,_minute];
	        };

	        setDate _date;
	        dayzSetDate = _date;
	        publicVariable "dayzSetDate";
	        diag_log [ __FILE__, "TIME SYNC: Local Time set to:", _date, "Fullmoon:",dayz_ForcefullmoonNights, "Date given by HiveExt.dll:", _result select 1];
	};

	objNull
};	
