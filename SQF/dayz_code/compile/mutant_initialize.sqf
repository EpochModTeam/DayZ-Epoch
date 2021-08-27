// Moved from config to allow admins to modify

if (count _this == 1) then {
	[(_this select 0)] execFSM "\z\addons\dayz_code\system\mutant_agent.fsm";
} else {
	[(_this select 0),true] execFSM "\z\addons\dayz_code\system\mutant_agent.fsm";
};	