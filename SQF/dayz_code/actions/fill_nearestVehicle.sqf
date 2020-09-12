if (dayz_actionInProgress) exitWith {localize "str_player_actionslimit" call dayz_rollingMessages;};
dayz_actionInProgress = true;

private ["_isFuelTruck","_fuelTruckCapacity","_finished","_newFuel","_abort","_newFuelSrc","_canSize","_vehicle","_configVeh","_capacity","_nameText","_fuelTruck","_findNearestVehicle"];

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
	if (_x != _fuelTruck) exitWith {
		_findNearestVehicle set [(count _findNearestVehicle),_x];
	};
} count (([player] call fnc_getPos) nearEntities [["Air","LandVehicle","Ship"],30]);

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
		[player,(getPosATL player),20,"refuel"] spawn fnc_alertZombies;
		_finished = ["Medic",1] call fn_loopAction;

		if (!_finished) then {
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
