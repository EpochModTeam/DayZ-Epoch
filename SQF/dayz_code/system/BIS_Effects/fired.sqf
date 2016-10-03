private ["_amm"];
_amm=_this select 4;
_this call (call compile GetText (configFile >> "CfgAmmo" >> _amm >> "muzzleEffect"));
//Handle combat in vehicle
if (player in (crew (_this select 0))) then {
	if !(player getVariable ["inCombat",false]) then {
		player setVariable ["inCombat",true,true];
	};
	player setVariable["combattimeout", diag_tickTime + 30, false];
};