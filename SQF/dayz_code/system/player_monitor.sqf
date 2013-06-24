if (isServer) then {
	waitUntil{dayz_preloadFinished};
};
_id = [] execFSM "\z\addons\dayz_code\system\player_monitor.fsm";