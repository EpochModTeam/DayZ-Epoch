/*
	Instructions for using day/night schedule.

	1. In your server config folder, edit file HiveExt.ini. Change [Time] Type to Local...Type = Local.
	2. Uncomment line 16 in this file: //#define DAY_NIGHT_SCHEDULE
	3. Adjust the hours of the day that you want to have night time in the arrays.

	NOTES:
	The date/time is local to the server's time zone.
	The days referred to here are days of the month, not days of the week.
	You can configure odd and even days of the month to have different night time hours.
	Coordinate the hours with BEC server restarts defined in scheduler.xml.
	The default arrays alternate between day and night on a 4 hour schedule based on 0000, 0400, 0800, 1200, 1600, and 2000 restarts.
*/

//#define DAY_NIGHT_SCHEDULE // Uncomment this line to enable day/night schedule.
#define EVEN_DAY_NIGHT_HOURS [0,1,2,3,8,9,10,11,16,17,18,19] // These are the hours of the even numbered monthly days you wish to have night.
#define ODD_DAY_NIGHT_HOURS [0,1,2,3,8,9,10,11,16,17,18,19] // These are the hours of the odd numbered monthly days you wish to have night.


sched_sync = {
	private ["_date","_hour","_minute"];
	// RESYNC TIME ON ALL MACHINES EVERY 15 MINUTES
	// Date format [Year,Month,Day of the month,Hour,Minute]

	_date = ServerCurrentTime; // ServerCurrentTime is set at server start in sched_event and updated every 60 seconds.
	_day = _date select 2;
	_hour = _date select 3;
	_minute = _date select 4;
	
	#ifdef DAY_NIGHT_SCHEDULE
	_date set[3, 12]; // daytime unless overwritten below.
	
	if (_day % 2 == 0) then { // check if day of the month is divisible by 2.
		if (_hour in EVEN_DAY_NIGHT_HOURS) then {
			_date set[3, 20]; // set hour to 20.
		};
	} else {
		if (_hour in ODD_DAY_NIGHT_HOURS) then {
			_date set[3, 20]; // set hour to 20.
		};
	};
	#endif
	
	if(dayz_ForcefullmoonNights) then {
		_date = [2012,8,2,(_date select 3),_minute];
	};
	
	dayz_storeTimeDate = _date; // dayz_storeTimeDate is used to set the date on client connections.

	setDate _date;
	dayzSetDate = _date;
	publicVariable "dayzSetDate";
	diag_log [ __FILE__, "TIME SYNC: Local Time set to:", _date, "Fullmoon:",dayz_ForcefullmoonNights, "Date given by HiveExt.dll:", _date];

	objNull
};

sched_fps = {
	diag_log format["SERVER FPS: %1  PLAYERS: %2",round diag_fps,playersNumber west];
	objNull
};
