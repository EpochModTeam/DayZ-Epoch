private ["_vehicle","_finished","_configVeh","_nameText","_towTruck","_inTow"];

if (dayz_actionInProgress) exitWith {localize "str_epoch_player_96" call dayz_rollingMessages;};
dayz_actionInProgress = true;

player removeAction s_player_towing;
s_player_towing = 1;

// Tow Truck
_towTruck = _this select 3;

// exit if no vehicle is in tow.
_inTow = _towTruck getVariable ["DZEinTow", false];

if(_inTow) then {

	// select vehicle in tow
	_vehicle = _towTruck getVariable ["DZEvehicleInTow", objNull];

	if(!(isNull _towTruck)) then {

		// Static vehicle fuel information
		_configVeh = 	configFile >> "cfgVehicles" >> TypeOf(_vehicle);
		_nameText = 	getText(_configVeh >> "displayName");

		// alert zombies
		[player,20,true,(getPosATL player)] spawn player_alertZombies;

		_finished = ["Medic",1] call fn_loopAction;

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