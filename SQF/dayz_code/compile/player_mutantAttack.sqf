/*
	DayZ Epoch mutant attack script by JasonTM
	Adapted from player_zombieAttack by facoptere
	and Nightstalker melee attack effects by sumrak<at>nightstalkers.cz
*/

local _mutant = _this;
if (isNull _mutant) exitWith {}; // Prevent errors if mutant is deleted suddenly

local _damage = 0.5 + random (1.2); // Not sure about this. Maybe bloodsuckers should cause more damage.
local _wound = "";
local _dir = [_mutant,player] call BIS_Fnc_dirTo;
_mutant setDir _dir;

if (r_player_blood < (r_player_bloodTotal * 0.8)) then {
	local _cnt = count (DAYZ_woundHit select 1);
	local _index = floor (random _cnt);
	_index = (DAYZ_woundHit select 1) select _index;
	_wound = (DAYZ_woundHit select 0) select _index;
} else {
	local _cnt = count (DAYZ_woundHit_ok select 1);
	local _index = floor (random _cnt);
	_index = (DAYZ_woundHit_ok select 1) select _index;
	_wound = (DAYZ_woundHit_ok select 0) select _index;
};

local _pos = getPosATL player;
local _nearPlayer = false;

{
	if (isPlayer _x && _x != player && {_x distance _pos < 100}) exitWith {_nearPlayer = true;};
} count playableUnits;

// Select a random attack sound
_sound = ["bloodatt0","bloodatt1","bloodatt2","bloodatt3"] call BIS_fnc_selectRandom;

// Broadcast hit noise and animation if a player is near
if (_nearPlayer) then {
	[_mutant,_sound,0,false] call dayz_zombieSpeak;
	//[objNull, _mutant, rplayMove, "AmelPercMstpSnonWnonDnon_amaterUder2"] call RE;
	[nil, _mutant, rSwitchMove, "AmelPercMstpSnonWnonDnon_amaterUder2"] call RE;
} else {
	[_mutant,_sound,0,true] call dayz_zombieSpeak;
	//_mutant playMove "AmelPercMstpSnonWnonDnon_amaterUder2";
	_mutant switchMove "AmelPercMstpSnonWnonDnon_amaterUder2";
};

uiSleep 0.3;  // This sleep better coordinates the UI effects below with the animation and attack sound above.

if (DZE_BloodsuckerScreenEffect) then {cutRSC ["mutant_attack","PLAIN"];}; // the cool red slash marks that show up on screen.
"dynamicBlur" ppEffectEnable true;
"dynamicBlur" ppEffectAdjust [2];
"dynamicBlur" ppEffectCommit 0.1;  

_pp = ppEffectCreate ["colorCorrections", 1553]; 
_pp ppEffectEnable true;
_pp ppEffectAdjust [1, 1, 0, [0.1, 0.0, 0.0, 1], [1.0, 0.5, 0.5, 0.1], [0.199, 0.587, 0.114, 0.0]];
_pp ppEffectCommit 0.1;	
uiSleep 0.1;
_pp ppEffectAdjust [1, 1, 0, [0.1, 0.0, 0.0, 0.5], [1.0, 0.5, 0.5, 0.1], [0.199, 0.587, 0.114, 0.0]];
_pp ppEffectCommit 0.3;
uiSleep 0.3;
ppEffectDestroy _pp;

[player,  _wound,  _damage,  _mutant, "zombie"] call fnc_usec_damageHandler;

uiSleep 0.2;

if (_nearPlayer) then {
	[nil, _mutant, rSWITCHMOVE, ""] call RE;
} else {
	_mutant switchMove "";
};

uiSleep 3;
"dynamicBlur" ppEffectEnable false;