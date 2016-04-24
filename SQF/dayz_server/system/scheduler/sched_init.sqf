
_base="z\addons\dayz_server\system\scheduler\";

call compile preprocessFileLineNumbers (_base+"sched_corpses.sqf");
call compile preprocessFileLineNumbers (_base+"sched_lootpiles.sqf");
//call compile preprocessFileLineNumbers (_base+"sched_playersHivesync.sqf");
//call compile preprocessFileLineNumbers (_base+"sched_vehiclesHivesync.sqf");
call compile preprocessFileLineNumbers (_base+"sched_sync.sqf");
//call compile preprocessFileLineNumbers (_base+"sched_traps.sqf");
call compile preprocessFileLineNumbers (_base+"sched_safetyVehicle.sqf");

[
	// period	offset	code <-> ctx				init code ->ctx
	 //[ 60, 	121,	sched_playersHivesync,      sched_playersHivesync_init ],
	 //[ 60, 	133,	sched_vehiclesHivesync,     sched_vehiclesHivesync_init ],
	 [ 60,	 	224,	sched_corpses ],
	 [ 300,	 	336,	sched_lootpiles_5m,         sched_lootpiles_5m_init ],
	 [ 6,	 	340,	sched_lootpiles ],
	 [ 900,		0,		sched_sync ],
	 [ 120,		48,		sched_safetyVehicle ]
	 //[ 0.1, 		1,		sched_traps ]
] execFSM ("z\addons\dayz_code\system\scheduler\scheduler.fsm");

//diag_log [ __FILE__, "Scheduler started"];




/*
// (see ViralZeds.hpp -> zombie_agent.fsm -> zombie_findOwner.sqf), called when a zombie becomes "local" to the server after the player disconnected
zombie_findOwner = {
	(_this select 0) call fa_deleteVehicle;
};
*/

