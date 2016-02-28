#include "scheduler.hpp"

sched_gui_init = { [false] };

sched_gui = {
	HIDE_FSM_VARS
	private [ "_array", "_initDone" ];

	_initDone = _this select 0;

	if ((!_initDone and !isNil 'Dayz_loginCompleted') and {(Dayz_loginCompleted)}) then {
       3 cutRsc ['playerStatusGUI', 'PLAIN',3]; // show the whole HUD
       _initDone = true;
	};
	//else {
	//	diag_log [ diag_Ticktime, __FILE__, "waiting", _initDone,Dayz_loginCompleted];
	//};
	if (_initDone) then {
		_array = player call world_surfaceNoise;
		dayz_surfaceNoise = _array select 1;
		dayz_surfaceType = _array select 0;
		call player_checkStealth;
		dayz_statusArray = call player_updateGui;
	};

	// move this elsewhere, it deals with the menu
	if (!isNull cursorTarget and !dayz_heartBeat) then {
		if (alive cursorTarget) then {
			cursorTarget spawn dayz_lowHumanity;
		};
	};

	[_initDone]
};
