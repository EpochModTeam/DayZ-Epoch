if (dayz_actionInProgress) exitWith {localize "str_player_actionslimit" call dayz_rollingMessages;};
dayz_actionInProgress = true;

local _isFuelTruck = [false,true] select ((_this select 3 select 0) == 2);
local _fuelSource = _this select 3 select 1;
if (isNull  _fuelSource) exitWith {dayz_actionInProgress = false; systemChat localize "str_cursorTargetNotFound";};

local _typeFuelSource = typeOf _fuelSource;
local _abort = false;
local _fuelSourceCapacity = 0;
local _pos = [_fuelSource] call fnc_getPos;
local _fuelSourceFound = true;

if (_isFuelTruck) then {
	_fuelSourceCapacity = getNumber (configFile >> "cfgVehicles" >> _typeFuelSource >> "fuelCapacity");
} else {	
	if (_typeFuelSource == "FuelPump_DZ") then {
		local _findNearestFuel = [];

		{
			if (_x != _fuelSource && {!(_x isKindOf "StaticWeapon") && {!(typeOf _x in DZE_StaticWeapons)}}) exitWith {
				_findNearestFuel set [count _findNearestFuel,_x];
			};
		} foreach nearestObjects [_pos,DayZ_fuelSources,10];

		if (count _findNearestFuel > 0) then {
			_fuelSource = _findNearestFuel select 0;
		} else {
			_fuelSourceFound = false;
		};
	};
	_fuelSourceCapacity = _fuelSource getVariable "FuelAmount";		

	if (isNil "_fuelSourceCapacity" && _fuelSourceFound) then {		
		_fuelSourceCapacity = floor(random dayz_randomMaxFuelAmount) max (dayz_randomMaxFuelAmount * 0.10);
		_fuelSource setVariable ["FuelAmount",_fuelSourceCapacity, true];
	};
};

if !(_fuelSourceFound) exitwith {dayz_actionInProgress = false;localize "str_epoch_player_131_1" call dayz_rollingMessages;};

local _findNearestVehicle = [];

{
	if (_x != _fuelSource && {!(_x isKindOf "StaticWeapon") && {!(typeOf _x in DZE_StaticWeapons)}}) exitWith {
		_findNearestVehicle set [count _findNearestVehicle,_x];
	};
} foreach nearestObjects [_pos,["Air","LandVehicle","Ship"],30];	//	Using nearestObjects, because it is sorted by distance

if (count _findNearestVehicle > 0) then {
	// select the nearest one
	local _vehicle = _findNearestVehicle select 0;

	// Static vehicle fuel information
	local _configVeh = configFile >> "cfgVehicles" >> typeOf(_vehicle);
	local _capacity = getNumber(_configVeh >> "fuelCapacity");	
	local _canSize = (_capacity / 10);
	local _nameText = getText(_configVeh >> "displayName");
	local _newFuel = 0;
	local _newFuelSrc = 0;
	local _availableFuel = 0;

	if (_isFuelTruck) then {
		_availableFuel = ((fuel _fuelSource) * _fuelSourceCapacity) - _canSize; 
	} else {
		_availableFuel = _fuelSourceCapacity;
	};

	if (_availableFuel < 0) then {_availableFuel = (fuel _fuelSource) * _fuelSourceCapacity;};

	if (_availableFuel < _canSize) exitwith {
		format[localize "STR_EPOCH_PLAYER_131_2",_availableFuel,_canSize] call dayz_rollingMessages;
	};

	while {1==1} do {
		format[localize "str_epoch_player_131",_nameText] call dayz_rollingMessages;
		[player,(getPosATL player),20,"refuel"] spawn fnc_alertZombies;

		local _finished = ["Medic",1] call fn_loopAction;

		if (!_finished) then {
			_abort = true;
		} else {
			if (_isFuelTruck) then {
				_newFuelSrc = ((((fuel _fuelSource) * _fuelSourceCapacity) - _canSize) / _fuelSourceCapacity);

				if (_newFuelSrc >= 0) then {
					if (local _fuelSource) then {
						[_fuelSource,_newFuelSrc] call local_setFuel;
					} else {
						PVDZ_send = [_fuelSource,"SetFuel",[_fuelSource,_newFuelSrc]];
						publicVariableServer "PVDZ_send";
					};
				} else {_abort = true;};					
			} else {
				local _fuelSourceCapacity = _fuelSource getVariable "FuelAmount";
				_newFuelSrc = _fuelSourceCapacity - _canSize;

				if (_newFuelSrc < 1) then {_newFuelSrc = 0;_abort = true;};
				_fuelSource setVariable ["FuelAmount",_newFuelSrc, true];
			};			

			_newFuel = (((fuel _vehicle) * _capacity) + _canSize);	

			if (_newFuel >= _capacity) then {_newFuel = 1; _abort = true;} else {_newFuel = (_newFuel / _capacity);};

			if (local _vehicle) then {
				[_vehicle,_newFuel] call local_setFuel;
			} else {
				PVDZ_send = [_vehicle,"SetFuel",[_vehicle,_newFuel]];
				publicVariableServer "PVDZ_send";
			};

			if (_isFuelTruck) then {
				format[localize "str_epoch_player_132",_nameText,round(_newFuel*100)] call dayz_rollingMessages;
			} else {				
				format[localize "STR_EPOCH_PLAYER_132_1",_nameText,round(_newFuel*100),_newFuelSrc] call dayz_rollingMessages;
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