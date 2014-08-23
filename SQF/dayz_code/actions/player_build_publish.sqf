private ["_passArray","_cancel","_position","_reason","_classnametmp","_classname","_tmpbuilt","_dir","_location","_text","_limit","_isOk","_proceed","_counter","_dis","_sfx","_started","_finished","_animState","_isMedic","_num_removed","_lockable","_combinationDisplay","_combination_1","_combination_2","_combination_3","_combination_4","_combination","_combination_1_Display"];

//defines
_cancel = _this select 0;
_position = _this select 1;
_classnametmp = _this select 2;
_isAllowedUnderGround = _this select 3;
_text = _this select 4;
_isPole = _this select 5;
_lockable = _this select 6;
_dir = _this select 7;
_reason = _this select 8;

_passArray = [];

_isOk = true;
_proceed = false;
_counter = 0;
_location = [0,0,0];

//No building on roads unless toggled
if (!DZE_BuildOnRoads) then {
	if (isOnRoad _position) then {
		_cancel = true;
		_reason = "Cannot build on a road.";
	};
};

// No building in trader zones
if(!canbuild) then {
	_cancel = true;
	_reason = "Cannot build in a city.";
};

if(!_cancel) then {

	_classname = _classnametmp;

	// Start Build
	_tmpbuilt = createVehicle [_classname, _location, [], 0, "CAN_COLLIDE"]; //create actual object that will be published to database

	_tmpbuilt setdir _dir; //set direction inherited from passed args from control

	// Get position based on object
	_location = _position;

	if((_isAllowedUnderGround == 0) && ((_location select 2) < 0)) then { //check Z axis if not allowed to build underground
		_location set [2,0]; //reset Z axis to zero (above terrain)
	};

	if (surfaceIsWater _location) then {
		_tmpbuilt setPosASL _location;
		_location = ASLtoATL _location; //Database uses ATL
	} else {
		_tmpbuilt setPosATL _location;
	};

	cutText [format[(localize "str_epoch_player_138"),_text], "PLAIN DOWN"];

	_limit = 3; //times it takes to build by default

	if (DZE_StaticConstructionCount > 0) then { //if count is manually overridden inside init.sqf, use that instead, else use limits configured in config files
		_limit = DZE_StaticConstructionCount;
	}
	else {
		if (isNumber (configFile >> "CfgVehicles" >> _classname >> "constructioncount")) then {
			_limit = getNumber(configFile >> "CfgVehicles" >> _classname >> "constructioncount");
		};
	};

	while {_isOk} do { //publish phase

		[10,10] call dayz_HungerThirst;
		player playActionNow "Medic"; //animation
		
		//alert zombies
		_dis=20;
		_sfx = "repair";
		[player,_sfx,0,false,_dis] call dayz_zombieSpeak;
		[player,_dis,true,(getPosATL player)] spawn player_alertZombies;

		r_interrupt = false;
		r_doLoop = true;
		_started = false;
		_finished = false;

		while {r_doLoop} do { //while player is not interrupted, go trough animations
			_animState = animationState player;
			_isMedic = ["medic",_animState] call fnc_inString;
			if (_isMedic) then {
				_started = true;
			};
			if (_started && !_isMedic) then {
				r_doLoop = false;
				_finished = true;
			};
			if (r_interrupt || (player getVariable["combattimeout", 0] >= time)) then {
				r_doLoop = false;
			};
			if (DZE_cancelBuilding) exitWith {
				r_doLoop = false;
			};
			sleep 0.1;
		};
		r_doLoop = false;


		if(!_finished) exitWith { //exit if interrupted
			_isOk = false;
			_proceed = false;
		};

		if(_finished) then { //if animation finished, add to build count
			_counter = _counter + 1;
		};

		cutText [format[(localize "str_epoch_player_139"),_text, _counter,_limit], "PLAIN DOWN"]; //report how many steps are done out of total limit

		if(_counter == _limit) exitWith { //if all steps done proceed with next step, otherwise cancel publish
			_isOk = false;
			_proceed = true;
		};

	};

	if (_proceed) then {

		_num_removed = ([player,DZE_buildItem] call BIS_fnc_invRemove); //remove item's magazine from inventory
		if(_num_removed == 1) then {

			cutText [format[localize "str_build_01",_text], "PLAIN DOWN"];

			if (_isPole) then { //if item was a plotpole, build a visual radius around it
				[] spawn player_plotPreview;
			};

			_tmpbuilt setVariable ["OEMPos",_location,true]; //store original location as a variable

			if(_lockable > 1) then { //if item has code lock on it

				_combinationDisplay = ""; //define new display

				switch (_lockable) do { //generate random combinations depending on item type

					case 2: { // 2 lockbox
						_combination_1 = (floor(random 3)) + 100; // 100=red,101=green,102=blue
						_combination_2 = floor(random 10);
						_combination_3 = floor(random 10);
						_combination = format["%1%2%3",_combination_1,_combination_2,_combination_3];
						dayz_combination = _combination;
						if (_combination_1 == 100) then {
							_combination_1_Display = "Red";
						};
						if (_combination_1 == 101) then {
							_combination_1_Display = "Green";
						};
						if (_combination_1 == 102) then {
							_combination_1_Display = "Blue";
						};
						_combinationDisplay = format["%1%2%3",_combination_1_Display,_combination_2,_combination_3];
					};

					case 3: { // 3 combolock
						_combination_1 = floor(random 10);
						_combination_2 = floor(random 10);
						_combination_3 = floor(random 10);
						_combination = format["%1%2%3",_combination_1,_combination_2,_combination_3];
						dayz_combination = _combination;
						_combinationDisplay = _combination;
					};

					case 4: { // 4 safe
						_combination_1 = floor(random 10);
						_combination_2 = floor(random 10);
						_combination_3 = floor(random 10);
						_combination_4 = floor(random 10);
						_combination = format["%1%2%3%4",_combination_1,_combination_2,_combination_3,_combination_4];
						dayz_combination = _combination;
						_combinationDisplay = _combination;
					};
				};

				_tmpbuilt setVariable ["CharacterID",_combination,true]; //set combination as a character ID

				//call publish precompiled function with given args and send public variable to server to save item to database
				PVDZE_obj_Publish = [_combination,_tmpbuilt,[_dir,_location],_classname];
				publicVariableServer "PVDZE_obj_Publish";

				cutText [format[(localize "str_epoch_player_140"),_combinationDisplay,_text], "PLAIN DOWN", 5]; //display new combination


			} else { //if not lockable item
				_tmpbuilt setVariable ["CharacterID",dayz_characterID,true];

				// fire?
				if(_tmpbuilt isKindOf "Land_Fire_DZ") then { //if campfire, then spawn, but do not publish to database
					_tmpbuilt spawn player_fireMonitor;
				} else {
					PVDZE_obj_Publish = [dayz_characterID,_tmpbuilt,[_dir,_location],_classname];
					publicVariableServer "PVDZE_obj_Publish";
				};
			};
		} else { //if magazine was not removed, cancel publish
			deleteVehicle _tmpbuilt;
			cutText [(localize "str_epoch_player_46") , "PLAIN DOWN"];
		};

	} else { //if player was interrupted, cancel publish and stop build animations
		r_interrupt = false;
		if (vehicle player == player) then {
			[objNull, player, rSwitchMove,""] call RE;
			player playActionNow "stop";
		};

		deleteVehicle _tmpbuilt;

		cutText [(localize "str_epoch_player_46") , "PLAIN DOWN"];
	};

} else { //cancel build if passed _cancel arg was true or building on roads/trader city
	cutText [format[(localize "str_epoch_player_47"),_text,_reason], "PLAIN DOWN"];
};

DZE_ActionInProgress = false; //in any case always finish last function with this to "reset" everything.