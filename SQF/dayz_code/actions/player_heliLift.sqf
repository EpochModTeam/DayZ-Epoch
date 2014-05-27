private ["_action","_liftHeli","_vehicle","_onLadder","_liftUseTime","_dis","_sfx","_liftUsageTime","_animState","_started","_finished","_moved","_attached","_hasAttached","_isMedic","_posL","_posC","_height"];

_action = _this select 3;
_liftHeli = _action select 0;
_vehicle = _action select 1;

player removeAction s_player_heli_lift;
s_player_heli_lift = -1;

_onLadder = (getNumber (configFile >> "CfgMovesMaleSdr" >> "States" >> (animationState player) >> "onLadder")) == 1;
if (_onLadder) exitWith {cutText ["You can't perform this action while on a ladder!" , "PLAIN DOWN"]};

if (vehicle player != player) exitWith {cutText ["You can't perform this action while in a vehicle", "PLAIN DOWN"]};

_liftUseTime = 6;
_dis=10;
_sfx = "repair";

r_interrupt = false; 
r_doLoop = true; 
_liftUsageTime = time;
_animState = animationState player;
_started = false;
_finished = false;

[player,_sfx,0,false,_dis] call dayz_zombieSpeak;
[player,_dis,true,(getPosATL player)] spawn player_alertZombies;

_moved = false;
while {r_doLoop} do {
	_attached = _vehicle getVariable["attached",false];
	_hasAttached = _liftHeli getVariable["hasAttached",false];
	_animState = animationState player;
	_isMedic = ["medic",_animState] call fnc_inString;
	
	_posL = [_liftHeli] call FNC_getPos;
	_posC = [_vehicle] call FNC_getPos;
	_height = (_posL select 2) - (_posC select 2);
	/*
	if(_height < 20) then {
		if(((abs((_posL select 0) - (_posC select 0))) < 10) && ((abs((_posL select 1) - (_posC select 1))) < 10)) then {
			_moved = true;
		};
	} else {
		_moved = true;
	};
	*/
	
	if (_isMedic) then {
		_started = true;
	};
	if(!_isMedic && !r_interrupt && (time - _liftUsageTime) < _liftUseTime) then {
		player playActionNow "Medic"; 
		_isMedic = true;
	};
	if (_started && !_isMedic && (time - _liftUsageTime) > _liftUseTime) then {
		r_doLoop = false; 
		_finished = true; 
	};
	if (r_interrupt || _moved || (typeName _attached == "OBJECT") || (typeName _hasAttached == "OBJECT")) then {
		r_doLoop = false; 
	};
	sleep 0.1;
};
r_doLoop = false; 

if(_finished) then {
	_vehicle attachTo [_liftHeli,[0,0,-7]];
	_vehicle setVariable["attached",_liftHeli,true];
	_liftHeli setVariable["hasAttached",_vehicle,true];
	r_doLoop = true;
	while {r_doLoop} do {
		_attached = _vehicle getVariable["attached",false];
	
		if ((([_liftHeli] call FNC_getPos) select 2) < 5) then {
			r_doLoop = false;
		};

		if(typeName _attached == typeName false) then {
			r_doLoop = false;
		};
	};
	r_doLoop = false;
	detach _vehicle;
	_vehicle setVariable["attached",false,true];
	_liftHeli setVariable["hasAttached",false,true];
} else {
	if(_moved) then {
		player switchMove "";
		player playActionNow "stop";
		cutText [format["the lift heli moved to much from the vehicle that was being lifted!"], "PLAIN DOWN"]; //display text at bottom center of screen on interrupt
	} else {
		if((typeName _attached == "OBJECT") || (typeName _hasAttached == "OBJECT")) then {
			player switchMove "";
			player playActionNow "stop";
			cutText [format["Another vehicle was attached || the vehicle was attached to another heli!"], "PLAIN DOWN"]; //display text at bottom center of screen on interrupt
		} else {
			r_interrupt = false;
			player switchMove "";
			player playActionNow "stop";
			cutText [format["You have interrupted lifting a vehicle!"], "PLAIN DOWN"]; //display text at bottom center of screen on interrupt
		};
	};
};