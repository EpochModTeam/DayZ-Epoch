private ["_isVehicle","_configSrcVeh","_capacitySrc","_nameTextSrc","_started","_finished","_animState","_isMedic","_newFuel","_abort","_newFuelSrc","_canSize","_vehicle","_configVeh","_capacity","_nameText","_isOk","_vehicleSrc","_findNearestVehicles","_findNearestVehicle","_IsNearVehicle"];
if (dayz_actionInProgress) exitWith {localize "str_epoch_player_24" call dayz_rollingMessages;};
dayz_actionInProgress = true;

_isVehicle = false;

_vehicleSrc = 	_this select 3;

_abort = false;

if(!(isNull _vehicleSrc)) then {

	_isVehicle = ((_vehicleSrc isKindOf "AllVehicles") && !(_vehicleSrc isKindOf "Man"));
	// If fuel source is vehicle get actual capacity
	_configSrcVeh = 	configFile >> "cfgVehicles" >> TypeOf(_vehicleSrc);
	_capacitySrc = 	getNumber(_configSrcVeh >> "fuelCapacity");
	_nameTextSrc = 	getText(_configSrcVeh >> "displayName");
};

// Get all nearby vehicles within 30m
_findNearestVehicles = nearestObjects [player, ["AllVehicles"], 30];
_findNearestVehicle = [];
{
	//diag_log ("FILL = " + str(_x) + " = " + str(_vehicleSrc));
	if ((alive _x) && {_x != _vehicleSrc} && {!(_x isKindOf "Man")}) exitWith {
		_findNearestVehicle set [(count _findNearestVehicle),_x];
	};
} count _findNearestVehicles;
		
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
	
		format[localize "str_epoch_player_131",_nameText] call dayz_rollingMessages;
			
		// alert zombies
		[player,20,true,(getPosATL player)] spawn player_alertZombies;

		_finished = false;

		["Working",0,[20,40,15,0]] call dayz_NutritionSystem;
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
			if(_isVehicle) then {
				_newFuelSrc = ((((fuel _vehicleSrc) * _capacitySrc) - _canSize) / _capacitySrc);
				_newFuel = 	(((fuel _vehicle) * _capacity) + _canSize);
				if (_newFuelSrc > 0) then {
					if (local _vehicleSrc) then {
						[_vehicleSrc,_newFuelSrc] call local_setFuel;
						//_vehicleSrc setFuel _newFuelSrc;
					} else {
						PVDZ_send = [_vehicleSrc,"SetFuel",[_vehicleSrc,_newFuelSrc]];
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
			};
		};

		if(_abort) exitWith {};
		uiSleep 1;	
	};

} else {
	localize "str_epoch_player_27" call dayz_rollingMessages;
};
dayz_actionInProgress = false;
