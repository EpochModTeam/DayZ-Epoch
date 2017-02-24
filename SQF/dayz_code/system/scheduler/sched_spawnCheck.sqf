#include "scheduler.hpp"

sched_spawnCheck_init = { []spawn{} };
sched_spawnCheck = {
	HIDE_FSM_VARS
	if (scriptDone _this) then {
		_this = [] spawn player_spawnCheck; // calls buildingSpawnZombies --> zombie_generate which uses sleep, can't put in scheduler
	};
	_this;
};