// (c) facoptere@gmail.com, licensed to DayZMod for the community

// detect low FPS
// in case of player "lag" (fps_min very low), all other scheduler tasks are suspended during 50 frames

sched_onEachFrame_init = {
	sched_ef_lowFPSctr=0;

	objNull
};

sched_onEachFrame = {
	private ["_ret"];
	_ret = (1==0);

	if (diag_fpsmin < 10) then {
		sched_ef_lowFPSctr = sched_ef_lowFPSctr +1;		
		if (sched_ef_lowFPSctr < 50) then {
			_ret = (1==1);	
		}
	}
	else {
		if (sched_ef_lowFPSctr == 1) then { hintSilent ""; };
		sched_ef_lowFPSctr = 0 max (sched_ef_lowFPSctr -1);		
	};
	if (sched_ef_lowFPSctr >= 100) then {
		sched_ef_lowFPSctr = 2;
		hintSilent localize "str_player_lowPFS";
		diag_log format [ "h1nt: LOW FPS (%1)", diag_fpsmin ];
	};

	_ret
};