#include "scheduler.hpp"

sched_humanityChange = {
	HIDE_FSM_VARS
	
	_startcombattimer = player getVariable["startcombattimer", 0];
	//If player is not in combat and humanity differs from the last time it ran run humanityCheck(skin change check)
	if (_startcombattimer == 0) then {
		_playerHumanity = player getVariable ["humanity",0];
				
		if ((_playerHumanity != playerHumanityCHK) and (vehicle player == player)) then {
			[_playerHumanity] call player_humanityCheck;
			playerHumanityCHK = _playerHumanity;
		};
	};
	
	objNull
};