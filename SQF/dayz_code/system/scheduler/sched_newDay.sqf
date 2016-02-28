#include "scheduler.hpp"

sched_newDay = {
	HIDE_FSM_VARS
	private "_day";
	_day = round(360 * (dateToNumber date));
	if(dayz_currentDay != _day) then {
		dayz_sunRise = call world_sunRise;
		dayz_currentDay = _day;
	};

	objNull
};		
