private ["_vehicle","_started","_finished","_animState","_isMedic","_soundSource"];

if(TradeInprogress) exitWith { cutText ["Refuel already in progress." , "PLAIN DOWN"] };
TradeInprogress = true;

player removeAction s_player_fillgen;
s_player_fillgen = 1;

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
	if (vehicle player == player) then {
		[objNull, player, rSwitchMove,""] call RE;
		player playActionNow "stop";
	};
	cutText ["Canceled." , "PLAIN DOWN"]
};

if (_finished) then {
	// take jerry can and replace with empty
	
	if(!(_vehicle getVariable ["GeneratorFilled", false]) and ("ItemJerrycan" in magazines player)) then {
	 
		if(([player,"ItemJerrycan"] call BIS_fnc_invRemove) == 1) then {
			player addMagazine "ItemJerrycanEmpty";

			// mark as once filled
			_vehicle setVariable ["GeneratorFilled", true,true];
		
			// Start generator
			_vehicle setVariable ["GeneratorRunning", true,true];

			// Sound_Generator1
			// Looks like this was the entended way of making the sound, lets test
			_soundSource = createSoundSource ["Sound_Generator1", position player, [], 0];

			_vehicle setVariable ["GeneratorSound", _soundSource,true];

			cutText ["Generator has been started.", "PLAIN DOWN"];
		};
	} else {
	
		// Start generator
		_vehicle setVariable ["GeneratorRunning", true,true];

		// Sound_Generator1
		// Looks like this was the entended way of making the sound, lets test
		_soundSource = createSoundSource ["Sound_Generator1", position player, [], 0];

		_vehicle setVariable ["GeneratorSound", _soundSource,true];

		cutText ["Generator has been started.", "PLAIN DOWN"];

	};
};

TradeInprogress = false;
s_player_fillgen = -1;