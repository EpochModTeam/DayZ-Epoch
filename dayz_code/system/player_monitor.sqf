if (isServer) then {
	waitUntil{dayz_preloadFinished};
};
_id = [] execFSM "\z\addons\dayz_code\system\player_monitor.fsm";

if(DZEdebug) then {
	_void = [] execVM "\z\addons\dayz_code\actions\debug\Make_lootPos.sqf
};