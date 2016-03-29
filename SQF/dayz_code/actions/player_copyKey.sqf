private ["_item","_config","_pos","_onLadder","_create","_started","_finished","_animState","_isMedic","_num_removed","_text","_haskey","_hastoolweapon","_isNear","_hasTinBar"];

if (DZE_ActionInProgress) exitWith {cutText [localize "str_epoch_player_56","PLAIN DOWN"];};
DZE_ActionInProgress = true;

_item = 	_this;
_config =	configFile >> "cfgWeapons" >> _item;

_onLadder =		(getNumber (configFile >> "CfgMovesMaleSdr" >> "States" >> (animationState player) >> "onLadder")) == 1;
if (_onLadder) exitWith {DZE_ActionInProgress = false; cutText [localize "str_player_21","PLAIN DOWN"]};

_text = getText (_config >> "displayName");
_haskey = _this in weapons player;
if (!_haskey) exitWith {DZE_ActionInProgress = false; cutText [format[(localize "str_player_30"),_text] , "PLAIN DOWN"]};

_hastoolweapon = "ItemKeyKit" in weapons player;
if (!_hastoolweapon) exitWith {DZE_ActionInProgress = false; cutText [localize "str_epoch_player_57","PLAIN DOWN"]};

_pos = [player] call FNC_GetPos;
_isNear = {inflamed _x} count (_pos nearObjects 3);
if (_isNear == 0) exitWith {DZE_ActionInProgress = false; cutText [localize "str_epoch_player_58","PLAIN DOWN"]};

call gear_ui_init;

// require one tin bar per key
_hasTinBar = 	"ItemTinBar" in magazines player;
if (!_hasTinBar) exitWith {DZE_ActionInProgress = false; cutText [localize "str_epoch_player_59","PLAIN DOWN"]};
["Working",0,[20,40,15,0]] call dayz_NutritionSystem;
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
		cutText [localize "str_epoch_player_61","PLAIN DOWN"];
	};
} else {
	r_interrupt = false;
	if (vehicle player == player) then {
		[objNull, player, rSwitchMove,""] call RE;
		player playActionNow "stop";
	};
	cutText [localize "str_epoch_player_61","PLAIN DOWN"];
};
DZE_ActionInProgress = false;
