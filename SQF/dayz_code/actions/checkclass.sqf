_object_type = typeOf cursorTarget;
_fuellevels = fuel cursorTarget;
_dmglevels = damage cursorTarget;

//remove action menu
player removeAction s_player_debugCheck;
s_player_debugCheck = -1;

hintSilent format ["Object: %1, Fuel: %2, Damage: %3", _object_type, _fuellevels, _dmglevels];
diag_log format ["Object: %1, Fuel: %2, Damage: %3", _object_type, _fuellevels, _dmglevels];