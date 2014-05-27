private ["_item","_config","_onLadder","_create","_started","_finished","_animState","_isMedic","_qty","_b0x1337","_num_removed","_text","_haskey","_hastoolweapon","_isNear","_hasTinBar"];

if(DZE_ActionInProgress) exitWith { cutText [(localize "str_epoch_player_56") , "PLAIN DOWN"]; };
DZE_ActionInProgress = true;

_item = 	_this;
_config =	configFile >> "cfgWeapons" >> _item;

_onLadder =		(getNumber (configFile >> "CfgMovesMaleSdr" >> "States" >> (animationState player) >> "onLadder")) == 1;
if (_onLadder) exitWith {DZE_ActionInProgress = false; cutText [(localize "str_player_21") , "PLAIN DOWN"]};

_text = getText (_config >> "displayName");
_haskey = _this in weapons player;
if (!_haskey) exitWith {DZE_ActionInProgress = false; cutText [format[(localize "str_player_30"),_text] , "PLAIN DOWN"]};

_hastoolweapon = "ItemKeyKit" in weapons player;
if (!_hastoolweapon) exitWith {DZE_ActionInProgress = false; cutText [(localize "str_epoch_player_57") , "PLAIN DOWN"]};

_isNear = {inflamed _x} count (getPosATL player nearObjects 3);
if(_isNear == 0) exitWith {DZE_ActionInProgress = false; cutText [(localize "str_epoch_player_58") , "PLAIN DOWN"]};

call gear_ui_init;

// require one tin bar per key
_hasTinBar = 	"ItemTinBar" in magazines player;
if(!_hasTinBar) exitWith {DZE_ActionInProgress = false; cutText [(localize "str_epoch_player_59") , "PLAIN DOWN"]};
[1,1] call dayz_HungerThirst;
player playActionNow "Medic";

[player,"repair",0,false] call dayz_zombieSpeak;
[player,50,true,(getPosATL player)] spawn player_alertZombies;
			
r_interrupt = false;
_animState = animationState player;
r_doLoop = true;
_started = false;
_finished = false;
	
while {r_doLoop} do {
	_animState = animationState player;
	_isMedic = ["medic",_animState] call fnc_inString;
	if (_isMedic) then {
		_started = true;
	};
	if (_started && !_isMedic) then {
		r_doLoop = false;
		_finished = true;
	};
	if (r_interrupt) then {
		r_doLoop = false;
	};
	sleep 0.1;
};
r_doLoop = false;

if(_finished) then {

	_num_removed = ([player,"ItemTinBar"] call BIS_fnc_invRemove);

	if(_num_removed == 1) then {
		// output key to backpack if space
		_create = _item;
		_qty = 1;
		_b0x1337 = unitBackpack player;
		_b0x1337 addWeaponCargoGlobal [_create,_qty];
		cutText [(localize "str_epoch_player_60") , "PLAIN DOWN"];
	} else {
		cutText [(localize "str_epoch_player_61") , "PLAIN DOWN"];
	};
} else {
	r_interrupt = false;
	if (vehicle player == player) then {
		[objNull, player, rSwitchMove,""] call RE;
		player playActionNow "stop";
	};
	cutText [(localize "str_epoch_player_61") , "PLAIN DOWN"];
};
DZE_ActionInProgress = false;
