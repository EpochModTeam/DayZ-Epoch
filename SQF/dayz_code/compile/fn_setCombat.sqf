local _object = _this select 0;
local _setCombatOverTime = _this select 1;	//	if true, combat has a time limit

if (_setCombatOverTime) then {	
	_object setVariable["combatTimeout", diag_tickTime + DZE_CombatTimer]; //	Combat time limited based on DZE_CombatTimer
} else {
	_object setVariable["combatNoTimeout", 1]; //	Endless combat until the combat variable will be resetted
};	

if !(_object getVariable ["inCombat",false]) then {
	_object setVariable ["inCombat",true,true];
};