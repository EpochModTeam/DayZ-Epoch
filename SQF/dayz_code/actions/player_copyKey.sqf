private ["_item","_config","_pos","_onLadder","_create","_started","_finished","_animState","_isMedic","_num_removed","_text","_haskey","_hastoolweapon","_isNear","_hasTinBar"];

if (dayz_actionInProgress) exitWith {localize "str_epoch_player_56" call dayz_rollingMessages;};
dayz_actionInProgress = true;

_item = 	_this;
_config =	configFile >> "cfgWeapons" >> _item;

_onLadder =		(getNumber (configFile >> "CfgMovesMaleSdr" >> "States" >> (animationState player) >> "onLadder")) == 1;
if (_onLadder) exitWith {dayz_actionInProgress = false; localize "str_player_21" call dayz_rollingMessages;};

_text = getText (_config >> "displayName");
_haskey = _this in weapons player;
if (!_haskey) exitWith {dayz_actionInProgress = false; format[localize "str_player_30",_text] call dayz_rollingMessages;};

_hastoolweapon = "ItemKeyKit" in weapons player;
if (!_hastoolweapon) exitWith {dayz_actionInProgress = false; localize "str_epoch_player_57" call dayz_rollingMessages;};

_pos = [player] call FNC_GetPos;
_isNear = {inflamed _x} count (_pos nearObjects 3);
if (_isNear == 0) exitWith {dayz_actionInProgress = false; localize "str_epoch_player_58" call dayz_rollingMessages;};

call gear_ui_init;

// require one tin bar per key
_hasTinBar = 	"ItemTinBar" in magazines player;
if (!_hasTinBar) exitWith {dayz_actionInProgress = false; localize "str_epoch_player_59" call dayz_rollingMessages;};
player playActionNow "Medic";

[player,"repair",0,false] call dayz_zombieSpeak;
[player,50,true,_pos] spawn player_alertZombies;
			
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
	uiSleep 0.1;
};
r_doLoop = false;

if(_finished) then {

	_num_removed = ([player,"ItemTinBar"] call BIS_fnc_invRemove);

	if(_num_removed == 1) then {
		_create = _item;
		_create call player_addDuplicateTool;
	} else {
		localize "str_epoch_player_61" call dayz_rollingMessages;
	};
} else {
	r_interrupt = false;
	if (vehicle player == player) then {
		[objNull, player, rSwitchMove,""] call RE;
		player playActionNow "stop";
	};
	localize "str_epoch_player_61" call dayz_rollingMessages;
};
dayz_actionInProgress = false;
