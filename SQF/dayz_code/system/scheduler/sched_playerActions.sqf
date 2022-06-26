#include "scheduler.hpp"

sched_playerActions = {
	HIDE_FSM_VARS
	
	if (!dayz_actionInProgress) then {
		call fnc_usec_selfActions;
		call fnc_usec_damageActions;
	};
	
	//combat check
	if ((player getVariable ["combatTimeout",0] < diag_tickTime) && {player getVariable ["inCombat",false]} && {player getVariable["combatNoTimeout", 0] == 0}) then {
		player setVariable ["inCombat", false, true];
	};
	
	objNull
};
