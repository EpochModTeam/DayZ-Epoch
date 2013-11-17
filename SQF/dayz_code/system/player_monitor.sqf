if (isServer) then {
	waitUntil{dayz_preloadFinished};
};
_id = [] execFSM "\z\addons\dayz_code\system\player_monitor.fsm";
_void = [] execVM "\z\addons\dayz_code\external\R3F_Realism\R3F_Realism_Init.sqf";