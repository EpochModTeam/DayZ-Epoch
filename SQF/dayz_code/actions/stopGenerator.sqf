private ["_vehicle","_finished","_soundObject"];

if (dayz_actionInProgress) exitWith {localize "str_player_actionslimit" call dayz_rollingMessages;};
dayz_actionInProgress = true;

player removeAction s_player_fillgen;
s_player_fillgen = 1;

// Use target from addaction
_vehicle = 	_this select 3;

localize "str_epoch_player_100" call dayz_rollingMessages;

[player,50,true,(getPosATL player)] spawn player_alertZombies;

_finished = ["Medic",1] call fn_loopAction;

if (!_finished) then {
	localize "str_epoch_player_26" call dayz_rollingMessages;
} else {
	// find sound and delete
	_soundObject = _vehicle getVariable "GeneratorSound";

	deleteVehicle _soundObject;

	// Stop generator
	_vehicle setVariable ["GeneratorRunning",false,true];

	localize "str_epoch_player_101" call dayz_rollingMessages;
};

dayz_actionInProgress = false;
s_player_fillgen = -1;