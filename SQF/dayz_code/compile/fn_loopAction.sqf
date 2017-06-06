/*
	Runs playActionNow the specified number of times.
	Entering a vehicle, moving or vaulting interrupts the loop.
	Must be called from a scheduled context (script executed by spawn or execVM)
	
	Params:
	_this select 0: String:  Action name to play
	_this select 1: Number:  Number of times to play action
	_this select 2: (Optional) Code: Extra condition that interrupts action when true
	
	Returns:
	Bool: True (finished), false (interrupted)
	
	Usage:
	_finished = ["Medic",1] call fn_loopAction;
*/
private ["_action","_extra","_loop","_loops","_started"];

_action = _this select 0;
_loops = _this select 1;
_extra = if (count _this > 2) then {_this select 2} else {{false}};

r_interrupt = false;
_started = false;
_loop = 0;

while {_loop < _loops && !r_interrupt && !(call _extra) && (vehicle player == player)} do {
	if (!_started) then {
		player playActionNow _action;
		_started = true;
	};
	
	if ([_action,animationState player] call fnc_inString) then {
		waitUntil {
			getNumber(configFile >> "CfgMovesMaleSdr" >> "States" >> (animationState player) >> "disableWeapons") == 0 //Finished or entered a vehicle
			or r_interrupt or (call _extra)
		};
		_loop = _loop + 1;
		_started = false;
	};
	
	uiSleep 0.1;
};

if (vehicle player == player && (r_interrupt or (call _extra))) then {
	[objNull, player, rSwitchMove, ""] call RE;
	player playActionNow "Stop";
};

//Player did not interrupt by moving, entering a vehicle or extra condition
(!r_interrupt && !(call _extra) && (vehicle player == player))