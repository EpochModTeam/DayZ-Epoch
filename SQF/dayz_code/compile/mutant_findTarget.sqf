/*
	_localtargets and _remotetargets are set in player_zombieCheck.
	The bloodsucker will move in the direction of the player assigned as target.
	Players with a mutant heart on tool belt will not be targeted.
*/

local _mutant = _this;

if (isNull _mutant) exitWith {objNull}; // Prevent errors if mutant is suddenly deleted

local _localtargets = _mutant getVariable ["localtargets",[]];
local _remotetargets = _mutant getVariable ["remotetargets",[]];
local _targets = _localtargets + _remotetargets;

local _target = objNull;
local _scandist = 200;

{
	local _skip = (DZE_MutantHeartProtect && {_x hasWeapon "ItemMutantHeart"});
	if (!_skip) then {
		local _dist = _x distance _mutant;
		if (_dist < _scandist) then {
			_target = _x;
			_scandist = _dist;
		};
	};
} count _targets;

_target