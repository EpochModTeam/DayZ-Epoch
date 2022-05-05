local _object = _this select 0;
local _setCombatOverTime = _this select 1;

if (_setCombatOverTime) then {
	_object setVariable["combattimeout", diag_tickTime + DZE_CombatTimer];
} else {
	_object setVariable["startcombattimer", 1];
};	

if !(_object getVariable ["inCombat",false]) then {
	_object setVariable ["inCombat",true,true];
};