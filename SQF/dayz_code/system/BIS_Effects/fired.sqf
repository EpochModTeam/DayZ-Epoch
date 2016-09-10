private ["_amm"];
_amm=_this select 4;
_this call (call compile GetText (configFile >> "CfgAmmo" >> _amm >> "muzzleEffect"));
//Handle combat in vehicle
player setVariable ["inCombat", 1, true];
player setVariable["combattimeout", diag_tickTime + 30, false];