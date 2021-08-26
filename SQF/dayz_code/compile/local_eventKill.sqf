//[unit, killer]
//will only run when local to the created object
//record any key hits to the required selection

local _array = _this select 0;
local _zed = _array select 0;
local _killer = _array select 1;
local _type = _this select 1;

if (local _zed && isPlayer _killer) then {
	local _kills = _killer getVariable[_type,0];
	_killer setVariable[_type,(_kills + 1),true];

	//increase players humanity when zed killed
	local _humanity = _killer getVariable["humanity",0];
	_humanity = _humanity + DZE_ZombieHumanity;
	_killer setVariable["humanity",_humanity,true];
};