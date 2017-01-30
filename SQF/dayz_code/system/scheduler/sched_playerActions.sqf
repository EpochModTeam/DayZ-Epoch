#include "scheduler.hpp"

sched_playerActions = {
	HIDE_FSM_VARS
	
	if (!dayz_actionInProgress) then {
		call fnc_usec_selfActions;
		call fnc_usec_damageActions;
	};
	
	//combat check
	if ((player getVariable ["combattimeout",0] < diag_tickTime) && {player getVariable ["inCombat",false]}) then {
		player setVariable ["inCombat", false, true];
	};
	
	objNull
};
