/*
	DayZ Base Building
	Made for DayZ Epoch please ask permission to use/edit/distrubute email vbawol@veteranbastards.com.
*/
private ["_location","_dir","_classname","_item","_hasrequireditem","_missing","_hastoolweapon","_cancel","_reason","_started","_finished","_animState","_isMedic","_dis","_sfx","_hasbuilditem","_tmpbuilt","_onLadder","_isWater","_require","_text","_offset","_IsNearPlot","_isOk","_location1","_location2","_counter","_limit","_proceed","_num_removed","_position","_object","_canBuildOnPlot","_friendlies","_nearestPole","_ownerID","_findNearestPoles","_findNearestPole","_distance","_classnametmp","_ghost","_isPole","_needText","_lockable","_zheightchanged","_rotate","_combination_1","_combination_2","_combination_3","_combination_4","_combination","_combination_1_Display","_combinationDisplay","_zheightdirection","_abort","_isNear","_need","_objHupDiff","_objHdwnDiff","_needNear"];

if(TradeInprogress) exitWith { cutText ["\n\nBuilding already in progress." , "PLAIN DOWN"]; };
TradeInprogress = true;

// disallow building if too many objects are found within 30m
if((count ((position player) nearObjects ["All",30])) >= DZE_BuildingLimit) exitWith {TradeInprogress = false; cutText ["\n\nCannot build, too many objects witin 30m.", "PLAIN DOWN"];};

_onLadder =		(getNumber (configFile >> "CfgMovesMaleSdr" >> "States" >> (animationState player) >> "onLadder")) == 1;
_isWater = 		dayz_isSwimming;
_cancel = false;
_reason = "";
_canBuildOnPlot = false;

DZE_Q = false;
DZE_Z = false;

DZE_Q_alt = false;
DZE_Z_alt = false;

DZE_Q_ctrl = false;
DZE_Z_ctrl = false;

DZE_5 = false;
DZE_4 = false;
DZE_6 = false;

DZE_cancelBuilding = false;

call gear_ui_init;
closeDialog 1;

if(_isWater) exitWith {TradeInprogress = false; cutText [localize "str_player_26", "PLAIN DOWN"];};
if(_onLadder) exitWith {TradeInprogress = false; cutText [localize "str_player_21", "PLAIN DOWN"];};
if(player getVariable["combattimeout", 0] >= time) exitWith {TradeInprogress = false; cutText ["Cannot build while in combat.", "PLAIN DOWN"];};

_item =	_this;

// Need Near Requirements
_abort = false;
_distance = 3;
_reason = "";

_needNear = 	getArray (configFile >> "CfgMagazines" >> _item >> "ItemActions" >> "Build" >> "neednearby");

{
	_need = _x select 0;
	_distance = _x select 1;
	switch(_need) do{
		case "fire":
		{
			_isNear = {inflamed _x} count (position player nearObjects _distance);
			if(_isNear == 0) then {  
				_abort = true;
				_reason = "fire";
			};
		};
		case "workshop":
		{
			_isNear = count (nearestObjects [player, ["Wooden_shed_DZ","WoodShack_DZ","WorkBench_DZ"], _distance]);
			if(_isNear == 0) then {  
				_abort = true;
				_reason = "workshop";
			};
		};
		case "fueltank":
		{
			_isNear = count (nearestObjects [player, dayz_fuelsources, _distance]);
			if(_isNear == 0) then {  
				_abort = true;
				_reason = "fuel tank";
			};
		};
	};
} forEach _needNear;


if(_abort) exitWith {
	cutText [format["\n\nThis building needs a %1 within %2 meters",_reason,_distance], "PLAIN DOWN"];
	TradeInprogress = false;
};




_classname = 	getText (configFile >> "CfgMagazines" >> _item >> "ItemActions" >> "Build" >> "create");
_classnametmp = _classname;
_require =  getArray (configFile >> "cfgMagazines" >> _this >> "ItemActions" >> "Build" >> "require");
_text = 		getText (configFile >> "CfgVehicles" >> _classname >> "displayName");
_ghost = getText (configFile >> "CfgVehicles" >> _classname >> "ghostpreview");

_lockable = 0;
if(isNumber (configFile >> "CfgVehicles" >> _classname >> "lockable")) then {
	_lockable = getNumber(configFile >> "CfgVehicles" >> _classname >> "lockable");
};

_offset = 	getArray (configFile >> "CfgVehicles" >> _classname >> "offset");

if((count _offset) <= 0) then {
	_offset = [0,1.5,0];
};

_isPole = (_classname == "Plastic_Pole_EP1_DZ");

_distance = 30;
_needText = "Plot Pole";

if(_isPole) then {
	_distance = 45;
};

// check for near plot
_findNearestPoles = nearestObjects [(vehicle player), ["Plastic_Pole_EP1_DZ"], _distance];
_findNearestPole = [];

{
	if (alive _x) then {
		_findNearestPole set [(count _findNearestPole),_x];
	};
} foreach _findNearestPoles;

_IsNearPlot = count (_findNearestPole);

// If item is plot pole and another one exists within 45m
if(_isPole and _IsNearPlot > 0) exitWith {  TradeInprogress = false; cutText ["Cannot build plot pole within 45m of an existing plot." , "PLAIN DOWN"]; };

if(_IsNearPlot == 0) then {
	_canBuildOnPlot = true;
} else {
	
	// check nearby plots ownership and then for friend status
	_nearestPole = _findNearestPole select 0;

	// Find owner 
	_ownerID = _nearestPole getVariable["CharacterID","0"];

	// diag_log format["DEBUG BUILDING: %1 = %2", dayz_characterID, _ownerID];

	// check if friendly to owner
	if(dayz_characterID == _ownerID) then {
		_canBuildOnPlot = true;		
	} else {
		_friendlies		= player getVariable ["friendlyTo",[]];
		// check if friendly to owner
		if(_ownerID in _friendlies) then {
			_canBuildOnPlot = true;
		};
	};
};

// _message
if(!_canBuildOnPlot) exitWith {  TradeInprogress = false; cutText [format["Unable to build %1 nearby.",_needText,_distance] , "PLAIN DOWN"]; };

_missing = "";
_hasrequireditem = true;
{
	_hastoolweapon = _x in weapons player;
	if(!_hastoolweapon) exitWith { _hasrequireditem = false; _missing = _x; }
} forEach _require;

_hasbuilditem = _this in magazines player;
if (!_hasbuilditem) exitWith {TradeInprogress = false; cutText [format[(localize "str_player_31"),_text,"build"] , "PLAIN DOWN"]; };

if (!_hasrequireditem) exitWith {TradeInprogress = false; cutText [format["Missing tool %1",_missing] , "PLAIN DOWN"]; };
if (_hasrequireditem) then {

	_location = [0,0,0];
	_isOk = true;

	// get inital players position
	_location1 = getPosATL player;
	_dir = getDir player;

	// if ghost preview available use that instead
	if (_ghost == "") then {
		_object = createVehicle [_classname, _location, [], 0, "CAN_COLLIDE"];
	} else {
		_classname = _ghost;
		_object = createVehicle [_classname, _location, [], 0, "CAN_COLLIDE"];
	};
	
	_object attachTo [player,_offset];
	
	_position = getPosATL _object;

	cutText ["Planning construction: PgUp = raise, PgDn = lower, Q or E = flip 180, and Space-Bar to build.", "PLAIN DOWN"];
	_previewCounter = 60;
	_objHupDiff = 0;
	_objHdwnDiff = 0;
	
	while {_isOk} do {
		
		_zheightchanged = false;
		_zheightdirection = "";
		_rotate = false;
	
		if (DZE_Q) then {
			DZE_Q = false;
			_zheightdirection = "up";
			_zheightchanged = true;
		};
		if (DZE_Z) then {
			DZE_Z = false;
			_zheightdirection = "down";
			_zheightchanged = true;	
		};


		if (DZE_Q_alt) then {
			DZE_Q_alt = false;
			_zheightdirection = "up_alt";
			_zheightchanged = true;
		};
		if (DZE_Z_alt) then {
			DZE_Z_alt = false;
			_zheightdirection = "down_alt";
			_zheightchanged = true;
		};


		if (DZE_Q_ctrl) then {
			DZE_Q_ctrl = false;
			_zheightdirection = "up_ctrl";
			_zheightchanged = true;
		};
		if (DZE_Z_ctrl) then {
			DZE_Z_ctrl = false;
			_zheightdirection = "down_ctrl";
			_zheightchanged = true;
		};

		if (DZE_4) then {
			_rotate = true;
			DZE_4 = false;
			_dir = 180;
		};
		if (DZE_6) then {
			_rotate = true;
			DZE_6 = false;
			_dir = 0;
		};
		
		if(_rotate) then {
			_object setDir _dir;
			_object setPosATL _position;
			diag_log format["DEBUG Rotate BUILDING POS: %1", _position];
		};

		if(_zheightchanged) then {
			detach _object;

			_position = getPosATL _object;

			if(_zheightdirection == "up") then {
				_position set [2,((_position select 2)+0.1)];
				_objHupDiff = _objHupDiff + 0.1;
				_objHdwnDiff = _objHdwnDiff - 0.1;
			};
			if(_zheightdirection == "down") then {
				_position set [2,((_position select 2)-0.1)];
				_objHdwnDiff = _objHdwnDiff + 0.1;
				_objHupDiff = _objHupDiff - 0.1;
			};

			if(_zheightdirection == "up_alt") then {
				_position set [2,((_position select 2)+1)];
				_objHupDiff = _objHupDiff + 1;
				_objHdwnDiff = _objHdwnDiff - 1;
			};
			if(_zheightdirection == "down_alt") then {
				_position set [2,((_position select 2)-1)];
				_objHdwnDiff = _objHdwnDiff + 1;
				_objHupDiff = _objHupDiff - 1;
			};

			if(_zheightdirection == "up_ctrl") then {
				_position set [2,((_position select 2)+0.01)];
				_objHupDiff = _objHupDiff + 0.01;
				_objHdwnDiff = _objHdwnDiff - 0.01;
			};
			if(_zheightdirection == "down_ctrl") then {
				_position set [2,((_position select 2)-0.01)];
				_objHdwnDiff = _objHdwnDiff + 0.01;
				_objHupDiff = _objHupDiff - 0.01;
			};
			
			_object setDir (getDir _object);

			_object setPosATL _position;
			
			diag_log format["DEBUG Change BUILDING POS: %1", _position];
			
			_object attachTo [player];
			
		};
		
		sleep 1;

		_location2 = getPosATL player;

		if(DZE_5) exitWith {
			_isOk = false;
			detach _object;
			_dir = getDir _object;
			_position = getPosATL _object;
			diag_log format["DEBUG BUILDING POS: %1", _position];
			deleteVehicle _object;
		};

		if(_location1 distance _location2 > 5) exitWith {
			_isOk = false;
			_cancel = true;
			_reason = "Moving too fast."; 
			detach _object;
			deleteVehicle _object;
		};
		
		cutText [format["%1",_previewCounter], "PLAIN DOWN"];
		
		if(_previewCounter <= 0) exitWith {
			_isOk = false;
			_cancel = true;
			_reason = "Ran out of time to find position."; 
			detach _object;
			deleteVehicle _object;
		};

		_previewCounter = _previewCounter - 1;
		
		if((_objHdwnDiff > 5) or (_objHupDiff > 5)) exitWith {
			_isOk = false;
			_cancel = true;
			_reason = "Cannot move up or down more than 5 meters"; 
			detach _object;
			deleteVehicle _object;
		};

		if (player getVariable["combattimeout", 0] >= time) exitWith {
			_isOk = false;
			_cancel = true;
			_reason = "Cannot build while in combat.";
			detach _object;
			deleteVehicle _object;
		};

		if (DZE_cancelBuilding) exitWith {
			_isOk = false;
			_cancel = true;
			_reason = "Cancelled building.";
			detach _object;
			deleteVehicle _object;
		};
	};

	// No building on roads
	if (isOnRoad _location) then { _cancel = true; _reason = "Cannot build on a road."; };

	// No building in trader zones
	if(!canbuild) then { _cancel = true; _reason = "Cannot build in a city."; };
	if(!placevault) then { _cancel = true; _reason = "Cannot build in a city."; };

	if(!_cancel) then {

		_classname = _classnametmp;

		// Start Build 
		_tmpbuilt = createVehicle [_classname, _location, [], 0, "CAN_COLLIDE"];

		_tmpbuilt setdir _dir;
	
		// Get position based on object
		_location = _position;
	
		_tmpbuilt setPosATL _location;

		
		cutText [format["Placing %1, move to cancel.",_text], "PLAIN DOWN"];
		
		_limit = 3;

		if(isNumber (configFile >> "CfgVehicles" >> _classname >> "constructioncount")) then {
			_limit = getNumber(configFile >> "CfgVehicles" >> _classname >> "constructioncount");
		};

		_isOk = true;
		_proceed = false;
		_counter = 0;
		
		while {_isOk} do {

			player playActionNow "Medic";
			
			_dis=20;
			_sfx = "repair";
			[player,_sfx,0,false,_dis] call dayz_zombieSpeak;  
			[player,_dis,true,(getPosATL player)] spawn player_alertZombies;
	
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
				if (r_interrupt or (player getVariable["combattimeout", 0] >= time)) then {
					r_doLoop = false;
				};
				if (DZE_cancelBuilding) exitWith {
					r_doLoop = false;
				};
				sleep 0.1;
			};
			r_doLoop = false;


			if(!_finished) exitWith {
				_isOk = false;
				_proceed = false;
			};

			if(_finished) then {
				_counter = _counter + 1;
			};

			cutText [format["Constructing %1 stage %2 of %3, move to cancel.",_text, _counter,_limit], "PLAIN DOWN"];

			if(_counter == _limit) exitWith {
				_isOk = false;
				_proceed = true;
			};
	
		};

		if (_proceed) then {
	
			_num_removed = ([player,_item] call BIS_fnc_invRemove);
			if(_num_removed == 1) then {

				cutText [format[localize "str_build_01",_text], "PLAIN DOWN"];

				_tmpbuilt setVariable ["OEMPos",_location,true];

				if(_lockable > 1) then {
					
					_combinationDisplay = "";

					switch (_lockable) do {
						
						case 2: { // 2 lockbox
							_combination_1 = (floor(random 3)) + 100; // 100=red,101=green,102=blue
							_combination_2 = floor(random 10);
							_combination_3 = floor(random 10);
							_combination = format["%1%2%3",_combination_1,_combination_2,_combination_3];

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
							_combinationDisplay = _combination;
						};
						
						case 4: { // 4 safe
							_combination_1 = floor(random 10);
							_combination_2 = floor(random 10);
							_combination_3 = floor(random 10);
							_combination_4 = floor(random 10);
							_combination = format["%1%2%3%4",_combination_1,_combination_2,_combination_3,_combination_4];
							_combinationDisplay = _combination;
						};
					};

					_tmpbuilt setVariable ["CharacterID",_combination,true];
					

					PVDZE_obj_Publish = [_combination,_tmpbuilt,[_dir,_location],_classname];
					publicVariableServer "PVDZE_obj_Publish";

					cutText [format["You have setup your %2. Combination is %1",_combinationDisplay,_text], "PLAIN DOWN", 5];
					

				} else {
					_tmpbuilt setVariable ["CharacterID",dayz_characterID,true];
					
					// fire?
					if(_tmpbuilt isKindOf "Land_Fire") then {
						_tmpbuilt spawn player_fireMonitor;
					} else {
						PVDZE_obj_Publish = [dayz_characterID,_tmpbuilt,[_dir,_location],_classname];
						publicVariableServer "PVDZE_obj_Publish";
					};
				};


			} else {
				deleteVehicle _tmpbuilt;
				cutText ["Canceled building." , "PLAIN DOWN"];
			};

		} else {
			r_interrupt = false;
			if (vehicle player == player) then {
				[objNull, player, rSwitchMove,""] call RE;
				player playActionNow "stop";
			};

			deleteVehicle _tmpbuilt;

			cutText ["Canceled building." , "PLAIN DOWN"];
		};

	} else {
		deleteVehicle _tmpbuilt;
		cutText [format["Canceled construction of %1 %2.",_text,_reason], "PLAIN DOWN"];
	};
};

TradeInprogress = false;
