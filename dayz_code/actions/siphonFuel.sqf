private["_vehicle","_curFuel","_newFuel","_timeLeft"];
_vehicle = 		cursorTarget;

_fillCounter = 0;
_abort = false;

_canSize = 		getNumber(configFile >> "cfgMagazines" >> "ItemJerrycan" >> "fuelQuantity");
_configVeh = 	configFile >> "cfgVehicles" >> TypeOf(_vehicle);
_capacity = 	getNumber(_configVeh >> "fuelCapacity");
_nameType = 	getText(_configVeh >> "displayName");

// Get number of empty jerry cans
_siphonQty = {_x == "ItemJerrycanEmpty"} count magazines player;

// attempt to siphon for each empty jerry can
for "_x" from 1 to _siphonQty do {

	_curFuel = 		((fuel _vehicle) * _capacity);
	_newFuel = 		(_curFuel - _canSize);

	// calculate minimum needed fuel
	_newFuel = (_newFuel / _capacity);

	if(_newFuel <= 0) exitWith { 
		cutText [format["%1 does not have enough fuel.",_nameType], "PLAIN DOWN"];
	};

	if (_newFuel > 0) then {

		_fillCounter = _fillCounter + 1;

		if(_siphonQty == 1) then {
			cutText ["Preparing to siphon, stand still to fill empty jerry can.", "PLAIN DOWN"];
		} else {
			cutText [format[("Preparing to siphon, stand still to fill empty jerry can %1 of %2."),_fillCounter,_siphonQty] , "PLAIN DOWN"];
		};

		// force animation 
		player playActionNow "Medic";
		// Play sound and alert zombies
		[player,"refuel",0,false] call dayz_zombieSpeak;
		[player,20,true,(getPosATL player)] spawn player_alertZombies;

		r_interrupt = false;
		_animState = animationState player;
		r_doLoop = true;
		_started = false;
		_finished = false;
	
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

		if (!_finished) exitWith { 
			r_interrupt = false;
			[objNull, player, rSwitchMove,""] call RE;
			player playActionNow "stop";
			cutText ["Canceled siphon." , "PLAIN DOWN"];
			_abort = true;
		};

		if (_finished) then {

			if ("ItemJerrycanEmpty" in magazines player) then {

				player removeMagazine "ItemJerrycanEmpty";
				player addMagazine "ItemJerrycan";

				//apply newFuel to vehicle on every peer
				//["dayzSetFuel",[_vehicle,_newFuel]] call broadcastRpcCallAll;
	
				dayzSetFuel = [_vehicle,_newFuel];
				if (local _vehicle) then {
					dayzSetFuel spawn local_setFuel;
				};
				publicVariable "dayzSetFuel";

				cutText [format["%1 has been drained for %2 litres of Fuel",_nameType,_canSize], "PLAIN DOWN"];
	
				call fnc_usec_medic_removeActions;
				r_action = false;
				
				sleep 1;

			} else {
				_abort = true;
			};
		};
	};	

	if(_abort) exitWith {};	
};
