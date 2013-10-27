private ["_activatingPlayer"];

// [ _trader_id, _category, _action ];
_activatingPlayer = player;

//diag_log format["DEBUG DEATH OBJ: %1", _this select 0];

//["PVDZE_plr_DeathB",[_activatingPlayer]] call callRpcProcedure;
PVDZE_plr_DeathB = [_activatingPlayer];
publicVariableServer  "PVDZE_plr_DeathB";

waitUntil {!isNil "PVDZE_plr_DeathBResult"};

//diag_log format["DEBUG Death: %1", PVDZE_plr_DeathBResult];

if((count PVDZE_plr_DeathBResult) > 0) then {
	// load death message board ui
	call EpochDeathBoardLoad;
} else {
	cutText ["No recent Deaths.", "PLAIN DOWN"];
	PVDZE_plr_DeathBResult = nil;
};