// (c) facoptere@gmail.com, licensed to DayZMod for the community

_base="z\addons\dayz_code\system\scheduler\";
call compile preprocessFileLineNumbers (_base+"sched_oneachframe.sqf");
call compile preprocessFileLineNumbers (_base+"sched_throwable.sqf");
call compile preprocessFileLineNumbers (_base+"sched_bloodstains.sqf");
call compile preprocessFileLineNumbers (_base+"sched_animals.sqf");
call compile preprocessFileLineNumbers (_base+"sched_buriedZeds.sqf");
call compile preprocessFileLineNumbers (_base+"sched_gravity.sqf");
call compile preprocessFileLineNumbers (_base+"sched_newDay.sqf");
call compile preprocessFileLineNumbers (_base+"sched_spawnCheck.sqf");
call compile preprocessFileLineNumbers (_base+"sched_playerActions.sqf");
call compile preprocessFileLineNumbers (_base+"sched_medical.sqf");
//call compile preprocessFileLineNumbers (_base+"sched_achievement.sqf");
call compile preprocessFileLineNumbers (_base+"sched_gui.sqf");
//call compile preprocessFileLineNumbers (_base+"sched_humanityChange.sqf");

if (dayz_antihack == 1) then {
	call compile preprocessFileLineNumbers (_base+"sched_security.sqf");
	call compile preprocessFileLineNumbers (_base+"sched_antiTeleport.sqf");
};

if (dayz_townGenerator) then {
	call compile preprocessFileLineNumbers (_base+"sched_towngenerator.sqf");
	call compile preprocessFileLineNumbers (_base+"sched_planthint.sqf");
};

_list = [];
if (!isNil "_this") then { call _this; }; // patch the code before starting the scheduler (the task contents can't be modified after the FSM has started)
if (count _list == 0) then {
	_list = [
	// period	offset	loop code <-> ctx, init code ->ctx
	 [ 0,	 	0,		sched_onEachFrame, sched_onEachFrame_init ], // SPECIAL: nul period -> code returns boolean requesting to skip other tasks
	 [ 0.2,	 	20,		sched_gravity, sched_gravity_init ],
	 [ 0.1,	 	0.01,	sched_playerActions ],
	 [ 0.2,	 	0.12,	sched_gui, sched_gui_init ],
	 [ 2,	 	0.13,	sched_medical_effects, sched_medical_effects_init ],
	 [ 10,	   15.13,	sched_medical_effectsSlow ],
	 [ 6,	   24.18,	sched_spawnCheck ],
	 [ 1, 		0.63,	sched_throwable, sched_throwable_init ],
	 [ 1, 		0.33,	sched_medical, sched_medical_init ],
	 //[ 15,	 	3,		sched_humanityChange ], //Humanity morphing disabled on Epoch to avoid loss of purchased clothing
	 //[ 3,		2.70,	sched_achievement, sched_achievement_init ],
	 [ 4,		2.38,	sched_bloodStains, sched_bloodStains_init ],
	 [ 60, 	   10.44,	sched_animals ],
	 [ 10, 	    5.44,	sched_medical_slow ],
	 [ 60, 	   20.44,	sched_newDay ],
	 [ 1, 		0.51,	sched_buriedZeds, sched_buriedZeds_init ]
	];
	
	if (dayz_antihack == 1) then {
		_list set [count _list, [0.2, 0.15, sched_security, sched_security_init]];
		_list set [count _list, [0.2, 0.05, sched_antiTP, sched_antiTP_init]];
	};
	
	//Disable townGenerator for alternative maps or when junk is not wanted on Chernarus
	if (dayz_townGenerator) then {
		_list set [count _list, [0.2, 0.07, sched_townGenerator, sched_townGenerator_init]];
		_list set [count _list, [10, 0.26, sched_plantHint]];
	};
};
_list execFSM (_base+"scheduler.fsm");

diag_log [ diag_tickTime, __FILE__, "Scheduler started"];
