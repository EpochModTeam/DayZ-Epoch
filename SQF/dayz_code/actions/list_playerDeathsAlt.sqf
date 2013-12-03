private [];

player removeMagazine "ItemNewspaper";

PVDZE_plr_DeathB = [player];
publicVariableServer  "PVDZE_plr_DeathB";

waitUntil {!isNil "PVDZE_plr_DeathBResult"};

if((count PVDZE_plr_DeathBResult) > 0) then {
	// load death message board ui
	call EpochDeathBoardLoad;
} else {
	cutText [(localize "str_epoch_player_36"), "PLAIN DOWN"];
	PVDZE_plr_DeathBResult = nil;
};