private ["_vehicle","_finished","_soundSource","_fuelCan","_emptyCan"];

if (dayz_actionInProgress) exitWith {localize "str_player_actionslimit" call dayz_rollingMessages;};
dayz_actionInProgress = true;

player removeAction s_player_fillgen;
s_player_fillgen = 1;

// Use target from addaction
_vehicle = _this select 3;

localize "str_epoch_player_25" call dayz_rollingMessages;

[player,50,true,(getPosATL player)] spawn player_alertZombies;

_finished = ["Medic",1] call fn_loopAction;

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
} else {
	localize "str_epoch_player_26" call dayz_rollingMessages;
};

dayz_actionInProgress = false;
s_player_fillgen = -1;