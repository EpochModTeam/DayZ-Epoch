private ["_started","_finished","_animState","_isMedic","_num_removed","_unit","_lastused","_timeout"];
if (!DZE_SelfTransfuse) exitWith {};
_unit = player;
_lastused = selfTransfusionTime;
_timeout = (DZE_selfTransfuse_Values select 2);
if ((round(time - _lastused)) <= _timeout) exitWith {cutText [format[(localize "str_actions_medical_18"),(_timeout - (round(time - _lastused)))] , "PLAIN DOWN"]};

call fnc_usec_medic_removeActions;
r_action = false;

if (vehicle player == player) then {
	player playActionNow "Medic";
};
[1,1] call dayz_HungerThirst;
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
	if (vehicle player != player) then {
		sleep 6;
		r_doLoop = false;
		_finished = true;
	};
	sleep 0.1;
};
r_doLoop = false;

if (_finished) then {
	selfTransfusionTime = time;
	_unit setVariable["USEC_lowBlood",false,true];
	_num_removed = ([player,"ItemBloodbag"] call BIS_fnc_invRemove);
	if(_num_removed == 1) then {
		if (vehicle player != player) then {
			(findDisplay 106) closeDisplay 0;
		};	
		[_unit, DZE_selfTransfuse_Values] call player_medTransfuse;
	};
} else {
	r_interrupt = false;
	player switchMove "";
	player playActionNow "stop";
};