//[unit, killer]
//will only run when local to the created object
//record any key hits to the required selection

local _array = _this;
local _mutant = _array select 0;

[nil, _mutant, rSWITCHMOVE, ""] call RE;
local _skin = _mutant getVariable ["mutantSkin", "act_krovosos_new1"];
local _texture = format["\dayz_epoch_c\skins\bloodsucker\%1.paa",_skin];

_mutant setVehicleInit "this setObjectTexture [0,_texture];";
processInitCommands;

local _killer = _array select 1;

if (local _mutant && isPlayer _killer) then {
	//increase players humanity when mutant killed
	local _humanity = _killer getVariable["humanity",0];
	_humanity = _humanity + DZE_MutantHumanity;
	_killer setVariable["humanity",_humanity,true];
};