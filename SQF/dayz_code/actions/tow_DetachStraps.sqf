private ["_vehicle","_started","_finished","_animState","_isMedic","_configVeh","_nameText","_towTruck","_inTow"];

if (dayz_actionInProgress) exitWith {localize "str_epoch_player_96" call dayz_rollingMessages;};
dayz_actionInProgress = true;

player removeAction s_player_towing;
s_player_towing = 1;

// Tow Truck
_towTruck = _this select 3;

// exit if no vehicle is in tow.
_inTow = _towTruck getVariable ["DZEinTow", false];

if(_inTow) then {

	// select vehicl in tow
	_vehicle = _towTruck getVariable ["DZEvehicleInTow", objNull];

	if(!(isNull _towTruck)) then {

		// Static vehicle fuel information
		_configVeh = 	configFile >> "cfgVehicles" >> TypeOf(_vehicle);
		_nameText = 	getText(_configVeh >> "displayName");

		// alert zombies
		[player,20,true,(getPosATL player)] spawn player_alertZombies;

		_finished = false;

		// force animation 
		player playActionNow "Medic";

		r_interrupt = false;
		_animState = animationState player;
		r_doLoop = true;
		_started = false;

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
		};

		if (_finished) then {
		
			detach _vehicle;
			_towTruck setVariable ["DZEinTow", false, true];
			_towTruck setVariable ["DZEvehicleInTow", objNull, true];
			format[localize "str_epoch_player_178",_nameText] call dayz_rollingMessages;

			_vehicle setvelocity [0,0,1];
		};
	} else {
		_towTruck setVariable ["DZEinTow", false, true];
		_towTruck setVariable ["DZEvehicleInTow", objNull, true];	
	};
} else {
	localize "str_epoch_player_102" call dayz_rollingMessages;
};
dayz_actionInProgress = false;
s_player_towing = -1;