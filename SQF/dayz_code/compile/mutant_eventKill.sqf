//[unit, killer]
//will only run when local to the created object
//record any key hits to the required selection

local _array = _this;
local _mutant = _array select 0;
local _killer = _array select 1;

if (local _mutant && isPlayer _killer) then {
	//increase players humanity when mutant killed
	local _humanity = _killer getVariable["humanity",0];
	_humanity = _humanity + DZE_MutantHumanity;
	_killer setVariable["humanity",_humanity,true];
};