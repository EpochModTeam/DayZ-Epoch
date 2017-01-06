private ["_isFuelTruck","_fuelTruckCapacity","_started","_finished","_animState","_isMedic","_newFuel","_abort","_newFuelSrc","_canSize","_vehicle","_configVeh","_capacity","_nameText","_fuelTruck","_findNearestVehicle"];
if (dayz_actionInProgress) exitWith {localize "str_epoch_player_24" call dayz_rollingMessages;};
dayz_actionInProgress = true;

_fuelTruck = _this select 3;
_abort = false;

if (!isNull _fuelTruck) then {
	_isFuelTruck = true;
	// If fuel source is vehicle get actual capacity
	_fuelTruckCapacity = getNumber (configFile >> "cfgVehicles" >> typeOf _fuelTruck >> "fuelCapacity");
} else {
	_isFuelTruck = false;
};

_findNearestVehicle = [];
{
	if ((alive _x) && {_x != _fuelTruck} && {!(_x isKindOf "Man")}) exitWith {
		_findNearestVehicle set [(count _findNearestVehicle),_x];
	};
} count (nearestObjects [player, ["AllVehicles"], 30]);

if (count _findNearestVehicle >= 1) then {
	// select the nearest one
	_vehicle = _findNearestVehicle select 0;

	// Static vehicle fuel information
	_configVeh = 	configFile >> "cfgVehicles" >> TypeOf(_vehicle);
	_capacity = 	getNumber(_configVeh >> "fuelCapacity");
	_nameText = 	getText(_configVeh >> "displayName");

	// perform fuel up
	while {true} do {
		// qty to add per loop
		_canSize = (_capacity / 10);
	
		format[localize "str_epoch_player_131",_nameText] call dayz_rollingMessages;
			
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
			if ((vehicle player) == player) then {
				[objNull, player, rSwitchMove,""] call RE;
				player playActionNow "stop";
			};
			_abort = true;
		} else {
			_newFuel = (((fuel _vehicle) * _capacity) + _canSize);
			if (_isFuelTruck) then {
				_newFuelSrc = ((((fuel _fuelTruck) * _fuelTruckCapacity) - _canSize) / _fuelTruckCapacity);
				if (_newFuelSrc > 0) then {
					if (local _fuelTruck) then {
						[_fuelTruck,_newFuelSrc] call local_setFuel;
					} else {
						PVDZ_send = [_fuelTruck,"SetFuel",[_fuelTruck,_newFuelSrc]];
						publicVariableServer "PVDZ_send";
					};
					if (_newFuel >= _capacity) then {_newFuel = 1; _abort = true;} else {_newFuel = (_newFuel / _capacity);};
					if (local _vehicle) then {
						[_vehicle,_newFuel] call local_setFuel;
					} else {
						PVDZ_send = [_vehicle,"SetFuel",[_vehicle,_newFuel]];
						publicVariableServer "PVDZ_send";
					};
					[player,"refuel",0,false] call dayz_zombieSpeak;
					format[localize "str_epoch_player_132",_nameText,round(_newFuel*100)] call dayz_rollingMessages;
				} else {
					_abort = true;
				};
			} else {
				//Filling near vehicle at gas station with generator
				if (_newFuel >= _capacity) then {_newFuel = 1; _abort = true;} else {_newFuel = (_newFuel / _capacity);};
				
				if (local _vehicle) then {
					[_vehicle,_newFuel] call local_setFuel;
				} else {
					PVDZ_send = [_vehicle,"SetFuel",[_vehicle,_newFuel]];
					publicVariableServer "PVDZ_send";
				};
				[player,"refuel",0,false] call dayz_zombieSpeak;
				format[localize "str_epoch_player_132",_nameText,round(_newFuel*100)] call dayz_rollingMessages;
			};
		};

		if (_abort) exitWith {
			["Working",0,[0,1,3,0]] call dayz_NutritionSystem;
		};
		uiSleep 1;	
	};
} else {
	localize "str_epoch_player_27" call dayz_rollingMessages;
};
dayz_actionInProgress = false;
