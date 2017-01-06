private ["_vehicle","_started","_finished","_animState","_isMedic","_soundSource","_fuelCan","_emptyCan"];

if (dayz_actionInProgress) exitWith {localize "str_epoch_player_24" call dayz_rollingMessages;};
dayz_actionInProgress = true;

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

localize "str_epoch_player_25" call dayz_rollingMessages;

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

_fuelCan = nil;
{
	if (_x in magazines player) exitWith {
		_fuelCan = _x;
	};
} count DayZ_fuelCans;

if (_finished) then {
	// take fuel can and replace with empty
	
	if(!(_vehicle getVariable ["GeneratorFilled", false]) && !isNil "_fuelCan") then {
	 
		if(([player,_fuelCan] call BIS_fnc_invRemove) == 1) then {
			_emptyCan = getText (configFile >> "CfgMagazines" >> _fuelCan >> "emptycan");
			player addMagazine _emptyCan;

			// mark as once filled
			_vehicle setVariable ["GeneratorFilled", true,true];
		
			// Start generator
			_vehicle setVariable ["GeneratorRunning", true,true];

			// Sound_Generator1
			// Looks like this was the entended way of making the sound, lets test
			_soundSource = createSoundSource ["Sound_Generator1", getPosATL player, [], 0];

			_vehicle setVariable ["GeneratorSound", _soundSource,true];

			localize "str_epoch_player_28" call dayz_rollingMessages;
			["Working",0,[0,1,3,0]] call dayz_NutritionSystem;
		};
	} else {	
		// Start generator
		_vehicle setVariable ["GeneratorRunning", true,true];

		// Sound_Generator1
		// Looks like this was the entended way of making the sound, lets test
		_soundSource = createSoundSource ["Sound_Generator1", getPosATL player, [], 0];

		_vehicle setVariable ["GeneratorSound", _soundSource,true];

		localize "str_epoch_player_28" call dayz_rollingMessages;
	};
};

dayz_actionInProgress = false;
s_player_fillgen = -1;