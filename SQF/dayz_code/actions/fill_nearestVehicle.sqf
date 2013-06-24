private ["_vehicle","_curFuel","_newFuel","_started","_finished","_animState","_isMedic","_abort","_canSize","_configVeh","_capacity","_nameText","_isOk","_findNearestVehicles","_findNearestVehicle","_IsNearVehicle"];

if(TradeInprogress) exitWith { cutText ["Refuel already in progress." , "PLAIN DOWN"] };
TradeInprogress = true;

// Get all nearby vehicles within 10m
_findNearestVehicles = nearestObjects [player, ["AllVehicles"], 10];
_findNearestVehicle = [];
{
	if (alive _x and !(_x isKindOf "Man")) then {
		_findNearestVehicle set [(count _findNearestVehicle),_x];
	};
} foreach _findNearestVehicles;
		
_IsNearVehicle = count (_findNearestVehicle);

if(_IsNearVehicle >= 1) then {

	// select the nearest one
	_vehicle = _findNearestVehicle select 0;

	// Static vehicle fuel information
	_configVeh = 	configFile >> "cfgVehicles" >> TypeOf(_vehicle);
	_capacity = 	getNumber(_configVeh >> "fuelCapacity");
	_nameText = 	getText(_configVeh >> "displayName");

	
	_isOk = true;
	// perform fuel up
	while {_isOk} do {

		// qty to add per loop
		_canSize = (_capacity / 10);
	
		cutText [format["Filling up %1, move to cancel.",_nameText], "PLAIN DOWN"];
			
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
			_abort = true;
		};

		if (_finished) then {

			// Get vehicle fuel levels again
			_curFuel = 		((fuel _vehicle) * _capacity);
			_newFuel = 		(_curFuel + _canSize);

			if (_newFuel > _capacity) then {_newFuel = _capacity; _abort = true; };

			// calculate minimum needed fuel
			_newFuel = (_newFuel / _capacity);

			dayzSetFuel = [_vehicle,_newFuel];
			if (local _vehicle) then {
				dayzSetFuel spawn local_setFuel;
			};
			publicVariable "dayzSetFuel";

			// Play sound
			[player,"refuel",0,false] call dayz_zombieSpeak;

			cutText [format["%1 filled to %2 percent capacity.",_nameText,round(_newFuel*100)], "PLAIN DOWN"];
		};

		if(_abort) exitWith {};
		sleep 1;	
	};

} else {
	cutText ["No Vehicles Nearby.", "PLAIN DOWN"];
};
TradeInprogress = false;