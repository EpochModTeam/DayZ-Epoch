#define PATH "\z\addons\dayz_server\system\scheduler\"

call compile preprocessFileLineNumbers (PATH+"sched_corpses.sqf");
call compile preprocessFileLineNumbers (PATH+"sched_lootpiles.sqf");
call compile preprocessFileLineNumbers (PATH+"sched_sync.sqf");
call compile preprocessFileLineNumbers (PATH+"sched_safetyVehicle.sqf");
call compile preprocessFileLineNumbers (PATH+"sched_event.sqf");
call compile preprocessFileLineNumbers (PATH+"sched_traps.sqf");
if (DZE_Bury_Body || DZE_Butcher_Body) then {
	call compile preprocessFileLineNumbers (PATH+"sched_lootCrates.sqf");
};

local _list = [
	// period	offset	code <-> ctx				init code ->ctx
	 [ 60,		0,		sched_event,				sched_event_init ],
	 [ 60,	 	224,	sched_corpses ],
	 [ 300,	 	336,	sched_lootpiles_5m,         sched_lootpiles_5m_init ],
	 [ 6,	 	340,	sched_lootpiles ],
	 [ 900,		0,		sched_sync ],
	 [ 120,		48,		sched_safetyVehicle ],
	 [ 360,		480,	sched_fps ],
	 [ 30,		60,		sched_traps,				sched_traps_init ]
];

if (DZE_Bury_Body || DZE_Butcher_Body) then {
	_list set [count _list, [ 60,	 	240,	sched_lootCrates ]];
};	 

_list execFSM ("\z\addons\dayz_code\system\scheduler\scheduler.fsm"); 

//diag_log [ __FILE__, "Scheduler started"];