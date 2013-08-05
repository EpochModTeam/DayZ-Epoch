private ["_vehicle","_curFuel","_newFuel","_started","_finished","_animState","_isMedic","_abort","_canSize","_configVeh","_capacity","_nameText","_isOk","_findNearestVehicles","_findNearestVehicle","_IsNearVehicle"];

if(TradeInprogress) exitWith { cutText ["Already in progress." , "PLAIN DOWN"] };
TradeInprogress = true;

// Tow Truck
_towTruck = _this;

// exit if no vehicle is in tow.
_inTow = _towTruck getVariable ["DZEinTow", false]

if(!_inTow) then {

	// select the nearest one
	_vehicle = _towTruck getVariable ["DZEvehicleInTow", false];

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
		
		detach _vehicle;
		_towTruck setVariable ["DZEinTow", false, true];
		_towTruck setVariable ["DZEvehicleInTow", objNull, true];
		cutText [format["%1 has been dettached from Tow Truck.",_nameText], "PLAIN DOWN"];
	};

} else {
	cutText ["No Vehicles In Tow.", "PLAIN DOWN"];
};
TradeInprogress = false;