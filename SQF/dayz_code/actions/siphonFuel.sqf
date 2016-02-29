private ["_vehicle","_curFuel","_newFuel","_started","_finished","_animState","_isMedic","_location1","_location2","_abort","_canNameEmpty","_canSizeEmpty","_canTypeEmpty","_canName","_canSize","_configCanEmpty","_configVeh","_capacity","_nameText","_availableCansEmpty","_hasHose"];

player removeAction s_player_siphonfuel;
_hasHose = "equip_hose" in magazines player;

if (dayz_siphonFuelInProgress) exitWith { cutText [localize "str_siphon_inprogress", "PLAIN DOWN"] };
if (!_hasHose) exitWith {cutText [localize "str_siphon_hose", "PLAIN DOWN"] };
_PlayerNear = {isPlayer _x} count ((getPosATL _vehicle) nearEntities ["CAManBase", 10]) > 1;
if (_PlayerNear) exitWith {cutText [localize "str_pickup_limit_5", "PLAIN DOWN"];};

dayz_siphonFuelInProgress = true;
_vehicle = _this select 3;
_abort = false;

// Static vehicle fuel information
_configVeh = 	configFile >> "cfgVehicles" >> TypeOf(_vehicle);
_capacity = 	getNumber(_configVeh >> "fuelCapacity");
_nameText = 	getText(_configVeh >> "displayName");
_isMan = _vehicle isKindOf "Man";
_isAnimal = _vehicle isKindOf "Animal";
_isZombie = _vehicle isKindOf "zZombie_base";

if (_isMan or _isAnimal or _isZombie) exitWith { cutText [localize "str_siphon_notvehicle", "PLAIN DOWN"] };

// Loop to find containers that can could hold fuel and fill them
{
	_configCanEmpty = 	configFile >> "CfgMagazines" >> _x;
	//diag_log format["Looking for: %1", _x];
	if(_x in DayZ_fuelCansEmpty) then {		
		// Get Empty can size
		_canNameEmpty = _x;
		_canSizeEmpty = getNumber(_configCanEmpty >> "fuelQuantity");
		_canTypeEmpty = getText(_configCanEmpty >> "displayName");

		// Get Full can size
		_canName = configName(inheritsFrom(configFile >> "cfgMagazines" >> _canNameEmpty));
		_canSize =	getNumber(configFile >> "cfgMagazines" >> _canName >> "fuelQuantity");
		
		// is empty
		if(_canSizeEmpty == 0) then {			
			_curFuel = 		((fuel _vehicle) * _capacity);
			_newFuel = 		(_curFuel - _canSize);

			// calculate new fuel
			if (_capacity == 0) then {
				_newFuel = 0;
			} else {
				_newFuel = (_newFuel / _capacity);
			};

			if (_newFuel > 0) then {
				cutText [format [localize "str_siphon_preparing",_canTypeEmpty], "PLAIN DOWN"];
				_finished = false;
				
				// alert zombies
				[player,20,true,(getPosATL player)] call player_alertZombies;

				if(!dayz_isSwimming) then {
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
					_newFuel = 		(_curFuel - _canSize);

					// calculate minimum needed fuel
					if (_capacity == 0) then {
						_newFuel = 0;
					} else {
						_newFuel = (_newFuel / _capacity);
					};

					if (_newFuel > 0) then {
						if(([player,_canNameEmpty] call BIS_fnc_invRemove) == 1) then {
							if (local _vehicle) then {
								[_vehicle,_newFuel] call local_setFuel;
							} else {
								PVDZE_send = [_vehicle,"SFuel",[_vehicle,_newFuel]];
								publicVariableServer "PVDZE_send";
							};

							// Play sound
							[player,"refuel",0,false] call dayz_zombieSpeak;
							
							// Add filled can
							player addMagazine _canName;
							
							// Added Nutrition-Factor for work
							["Working",0,[20,40,15,0]] call dayz_NutritionSystem;
					
							cutText [format [localize "str_siphon_drained",_nameText,_canSize], "PLAIN DOWN"];
	
							call fnc_usec_medic_removeActions;
							r_action = false;
				
							sleep 1;
						} else {
							_abort = true;
						};					
					} else {
						cutText [format [localize "str_siphon_notenough",_nameText], "PLAIN DOWN"];
						_abort = true;
					};						
				} else {
					cutText [localize "str_siphon_canceled", "PLAIN DOWN"];
					_abort = true;
				};			
			} else {
				cutText [format [localize "str_siphon_notenough",_nameText], "PLAIN DOWN"];
				_abort = true;
			};
		};
	};
	if(_abort) exitWith {};
} forEach magazines player;

dayz_siphonFuelInProgress = false;