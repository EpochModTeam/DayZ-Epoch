private ["_vehicle","_started","_finished","_animState","_isMedic"];

if(TradeInprogress) exitWith { cutText ["Refuel already in progress." , "PLAIN DOWN"] };
TradeInprogress = true;

// Use target from addaction
_vehicle = 	_this select 3;

// force animation 
player playActionNow "Medic";

r_interrupt = false;
_animState = animationState player;
r_doLoop = true;
_started = false;
_finished = false;

cutText ["Preparing to fuel and start generator, move to cancel.", "PLAIN DOWN"];

[player,50,true,(getPosATL player)] spawn player_alertZombies;

while {r_doLoop} do {
	_animState = animationState player;
	_isMedic = ["medic",_animState] call fnc_inString;
	if (_isMedic) then {
		_started = true;
	};
	if (_started and !_isMedic) then {
		r_doLoop = false;
		_finished = true;
	};
	if (r_interrupt) then {
		r_doLoop = false;
	};
	sleep 0.1;
};
r_doLoop = false;

if(!_finished) then {
	r_interrupt = false;
	[objNull, player, rSwitchMove,""] call RE;
	player playActionNow "stop";
	cutText ["Canceled refuel." , "PLAIN DOWN"]
};

if (_finished) then {
	// take jerry can and replace with empty 
	if(([player,"ItemJerrycan"] call BIS_fnc_invRemove) == 1) then {
		player addMagazine "ItemJerrycanEmpty";
		// Start generator
		_vehicle setVariable ["GeneratorRunning", true,true];

		// Sound_Generator1
		// Looks like this was the entended way of making the sound, lets test
		//_classname = "Sound_Generator1";

		//_location = (getPosATL _vehicle);

		//_tmpbuilt = createVehicle [_classname, _location, [], 0, "CAN_COLLIDE"];

		_soundSource = createSoundSource ["Generator1", position player, [], 0]

		// TODO: Add running sounds to generator
		cutText ["Generator has been started.", "PLAIN DOWN"];
	};
};

TradeInprogress = false;