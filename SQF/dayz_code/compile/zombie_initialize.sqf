// Moved from config to allow admins to modify
// Put agent second for compatibility with old configs like Namalsk custom zombies.

if (count _this == 1) then {
	//Called from init EH
	["", (_this select 0)] execFSM "\z\AddOns\dayz_code\system\zombie_agent.fsm";
} else {
	//Called from local EH
	["", (_this select 0), true] execFSM "\z\AddOns\dayz_code\system\zombie_agent.fsm";
};