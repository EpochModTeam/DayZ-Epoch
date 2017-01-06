private ["_vehicle","_started","_finished","_animState","_isMedic","_soundObject"];

if (dayz_actionInProgress) exitWith {localize "str_epoch_player_99" call dayz_rollingMessages;};
dayz_actionInProgress = true;

player removeAction s_player_fillgen;
s_player_fillgen = 1;

// Use target from addaction
_vehicle = 	_this select 3;

player playActionNow "Medic";

r_interrupt = false;
_animState = animationState player;
r_doLoop = true;
_started = false;
_finished = false;

localize "str_epoch_player_100" call dayz_rollingMessages;

[player,50,true,(getPosATL player)] spawn player_alertZombies;

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

if(!_finished) then {
	r_interrupt = false;
	if (vehicle player == player) then {
		[objNull, player, rSwitchMove,""] call RE;
		player playActionNow "stop";
	};
	localize "str_epoch_player_26" call dayz_rollingMessages;
};

if (_finished) then {

		// find sound && delete
		_soundObject = _vehicle getVariable "GeneratorSound";
		
		deleteVehicle _soundObject;
		
		// Stop generator
		_vehicle setVariable ["GeneratorRunning", false,true];

		localize "str_epoch_player_101" call dayz_rollingMessages;
	
};

dayz_actionInProgress = false;
s_player_fillgen = -1;