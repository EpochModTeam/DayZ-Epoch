#include "scheduler.hpp"

sched_playerActions = {
	HIDE_FSM_VARS
	call fnc_usec_selfActions;
	call fnc_usec_damageActions;
	call fnc_usec_upgradeActions;

	objNull
};
