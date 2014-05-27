private ["_vehicle","_curFuel","_newFuel","_started","_finished","_animState","_isMedic","_location1","_location2","_abort","_canName","_canSize","_configCan","_configVeh","_capacity","_nameText","_availableCans","_canText"];

if(DZE_ActionInProgress) exitWith { cutText [(localize "str_epoch_player_24") , "PLAIN DOWN"] };
DZE_ActionInProgress = true;

// Use target from addaction
_vehicle = 	_this select 0;

_abort = false;

// Static vehicle fuel information
_configVeh = 	configFile >> "cfgVehicles" >> TypeOf(_vehicle);
_capacity = 	getNumber(_configVeh >> "fuelCapacity");
_nameText = 	getText(_configVeh >> "displayName");

// _availableCansEmpty = ["ItemJerrycanEmpty","ItemFuelBarrelEmpty"];
_availableCans = ["ItemJerrycan","ItemFuelBarrel"];

// Loop to find containers that can could hold fuel && fill them
{
	_configCan =  configFile >> "CfgMagazines" >> _x;

	if(_x in _availableCans) then {
		
		// Get full can size
		_canName = _x;
		_canSize = getNumber(_configCan >> "fuelQuantity");
		_canText = getText(_configCan >> "displayName");
			
		_curFuel = 		((fuel _vehicle) * _capacity);
		_newFuel = 		(_curFuel + _canSize);

		if (_newFuel <= _capacity) then {

			// calculate new fuel
			_newFuel = (_newFuel / _capacity);

			//diag_log ("refuel check: " + str(_newFuel) + " / " + str(_capacity));

			cutText [format[(localize "str_epoch_player_160"),_canText], "PLAIN DOWN"];
			
			// alert zombies
			[player,20,true,(getPosATL player)] spawn player_alertZombies;

			_finished = false;

			if(!dayz_isSwimming) then {

				[1,1] call dayz_HungerThirst;
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
					if (vehicle player != player) then {
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
				};

			} else {
				// Alternate method in water make sure player stays in one spot for 6 seconds
				_location1 = getPosATL player;
				sleep 6;
				_location2 = getPosATL player;
				if(_location1 distance _location2 < 3) then {
					_finished = true;
				};
			};

			if (_finished) then {

				// Get vehicle fuel levels again
				_curFuel = 		((fuel _vehicle) * _capacity);
				_newFuel = 		(_curFuel + _canSize);

				if (_newFuel <= _capacity) then {

					// calculate minimum needed fuel
					_newFuel = (_newFuel / _capacity);

					if(([player,_canName] call BIS_fnc_invRemove) == 1) then {
					
						/* PVS/PVC - Skaronator */
						if (local _vehicle) then {
							[_vehicle,_newFuel] call local_setFuel;
						} else {
							PVDZE_send = [_vehicle,"SFuel",[_vehicle,_newFuel]];
							publicVariableServer "PVDZE_send";
						};

						// Play sound
						[player,"refuel",0,false] call dayz_zombieSpeak;
						player addMagazine _canName+"Empty";
						cutText [format[localize "str_player_05",_nameText,_canSize], "PLAIN DOWN"];

						call fnc_usec_medic_removeActions;
						r_action = false;
			
						sleep 1;
					} else {
						_abort = true;
					};	
			
				} else {
					cutText [format[(localize "str_epoch_player_161"),_nameText], "PLAIN DOWN"];
					_abort = true;
				};
					
			} else {
				cutText [(localize "str_epoch_player_87") , "PLAIN DOWN"];
				_abort = true;
			};
		
		} else {
			cutText [format[(localize "str_epoch_player_161"),_nameText], "PLAIN DOWN"];
			_abort = true;
		};			
	};
	
	// exit if abort flag was set
	if(_abort) exitWith {};

} count magazines player;

DZE_ActionInProgress = false;