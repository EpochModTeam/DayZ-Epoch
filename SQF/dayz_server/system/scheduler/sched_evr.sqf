/*
	EVR Storms AKA "Blowouts" Server Scheduler Functions by JasonTM.
	The EVR storms are rolled out in stages for JIP players.
	The server controls the EVR timing to keep the clients in sync so players have the same experience.
*/

evr_storm = {
	PVDZE_EVR = "Stage1";
	publicVariable "PVDZE_EVR";
	uiSleep 60;

	PVDZE_EVR = "Stage2";
	publicVariable "PVDZE_EVR";
	uiSleep 50;
	
	PVDZE_EVR = "Stage3";
	publicVariable "PVDZE_EVR";
	uiSleep 40;
	
	PVDZE_EVR = "Stage4";
	publicVariable "PVDZE_EVR";
	uiSleep 30;
	
	PVDZE_EVR = "Stage5";
	publicVariable "PVDZE_EVR";
	uiSleep 20;

	PVDZE_EVR = "Stage6";
	publicVariable "PVDZE_EVR";
	uiSleep 10;
	
	PVDZE_EVR = "Stage7";
	publicVariable "PVDZE_EVR";
	uiSleep 180;
	EVR_Lockout = false;
};

sched_evr_init = {
	diag_log "EVR STORMS ENABLED";
	EVR_Lockout = false; // Prevents the server from starting an EVR storm while one is running.
	[diag_tickTime, (((DZE_EVRFirstTime select 0) max (random (DZE_EVRFirstTime select 1))) * 60)]
};

sched_evr = {
	local _time = _this select 0;
	local _timer = _this select 1;
	
	if (!EVR_Lockout && {diag_tickTime - _time >= _timer}) then {
		[] spawn evr_storm;
		EVR_Lockout = true;
		_time = diag_tickTime;
		_timer = ((DZE_EVRTimer select 0) max (random (DZE_EVRTimer select 1))) * 60;
		diag_log format ["EVR Storm Started: Next storm in %1 minutes", round(_timer / 60)];
	};
	
	[_time, _timer]
};