private ["_vehicle","_finished","_configVeh","_nameText","_findNearestVehicles","_findNearestVehicle","_IsNearVehicle","_towTruck","_towTruckSize","_allowedSize"];

if (dayz_actionInProgress) exitWith {localize "str_epoch_player_96" call dayz_rollingMessages;};
dayz_actionInProgress = true;

player removeAction s_player_towing;
s_player_towing = 1;

// Tow Truck
_towTruck = _this select 3;
_towTruckSize = (sizeOf typeOf _towTruck);

_allowedSize = _towTruckSize-(_towTruckSize/3);

// Get all nearby vehicles within 10m
_findNearestVehicles = _towTruck nearEntities [["Car","Motorcycle"],10];
_findNearestVehicle = [];
{
	if (alive _x && _towTruck != _x) then {
		if([_x,_towTruck] call fnc_isInsideBuilding) then {
			_findNearestVehicle set [(count _findNearestVehicle),_x];
		};
	};
} count _findNearestVehicles;
		
_IsNearVehicle = count (_findNearestVehicle);

if(_IsNearVehicle >= 1) then {

	// select the nearest one
	_vehicle = _findNearestVehicle select 0;

	// Static vehicle fuel information
	_configVeh = 	configFile >> "cfgVehicles" >> TypeOf(_vehicle);
	_nameText = 	getText(_configVeh >> "displayName");

	// alert zombies
	[player,20,true,(getPosATL player)] spawn player_alertZombies;

	_finished = ["Medic",1] call fn_loopAction;

	if (_finished) then {
		if((sizeOf typeOf _vehicle) <= _allowedSize) then {
			if([_vehicle,_towTruck] call fnc_isInsideBuilding && ((vectorUp _vehicle) select 2) > 0.5) then {
				if(typeOf _towTruck == "TOW_DZE" ) then {
					_vehicle attachTo [_towTruck,[1.3,-2,2.3]];
					_towTruck setVariable ["DZEinTow", true, true];
					_towTruck setVariable ["DZEvehicleInTow", _vehicle, true];
					format[localize "str_epoch_player_175",_nameText] call dayz_rollingMessages;
				};	
			} else {
				format[localize "str_epoch_player_176",_nameText] call dayz_rollingMessages;
			};

		} else {
			format[localize "str_epoch_player_177",_nameText] call dayz_rollingMessages;
		};

	};
} else {
	localize "str_epoch_player_27" call dayz_rollingMessages;
};
dayz_actionInProgress = false;
s_player_towing = -1;