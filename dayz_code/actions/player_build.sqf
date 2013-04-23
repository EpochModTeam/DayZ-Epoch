private ["_location","_dir","_classname","_item","_hasrequireditem","_missing","_hastoolweapon","_cancel","_reason","_isBuilding","_started","_finished","_animState","_isMedic","_dis","_sfx","_hasbuilditem","_tmpbuilt","_buildings","_onLadder","_isWater","_require","_text","_offset","_IsNearPlot","_isOk","_location1","_location2","_counter","_limit","_proceed","_num_removed","_position","_object"];

if(TradeInprogress) exitWith { cutText ["Building already in progress." , "PLAIN DOWN"]; };
TradeInprogress = true;

_onLadder =		(getNumber (configFile >> "CfgMovesMaleSdr" >> "States" >> (animationState player) >> "onLadder")) == 1;
_isWater = 		(surfaceIsWater (getPosATL player)) or dayz_isSwimming;
_cancel = false;
_reason = "";
_canBuildOnPlot = false;

call gear_ui_init;

if(_isWater) exitWith {TradeInprogress = false; cutText [localize "str_player_26", "PLAIN DOWN"];};
if(_onLadder) exitWith {TradeInprogress = false; cutText [localize "str_player_21", "PLAIN DOWN"];};
if(player getVariable["combattimeout", 0] >= time) exitWith {TradeInprogress = false; cutText ["Cannot build while in combat.", "PLAIN DOWN"];};

_item =			_this;
_classname = 	getText (configFile >> "CfgMagazines" >> _item >> "ItemActions" >> "Build" >> "create");
_require =  getArray (configFile >> "cfgMagazines" >> _this >> "ItemActions" >> "Build" >> "require");

_text = 		getText (configFile >> "CfgVehicles" >> _classname >> "displayName");
_offset = 	getArray (configFile >> "CfgVehicles" >> _classname >> "offset");

// check for near plot
_findNearestPole = [player, ["Plastic_Pole_EP1_DZ"], 30];

_IsNearPlot =  count (_findNearestPole);

if(_IsNearPlot == 0) then {

	// Allow building of plot
	if(_classname == "Plastic_Pole_EP1_DZ") then {
		if(count ([player, ["Plastic_Pole_EP1_DZ"], 60]) == 0) then {
			_canBuildOnPlot = true;	
		};
	};
	
} else {
	// Since there are plots nearby we check for ownership and then for friend status
	
	// select closest pole
	_nearestPole = _findNearestPole select 0;

	// Find owner 
	_ownerID = _nearestPole getVariable["CharacterID","0"];

	// check if friendly to owner
	if(dayz_characterID == _ownerID) then {
		// owner can build anything within his plot
		
		if(_classname == "Plastic_Pole_EP1_DZ") then {
			if(count ([player, ["Plastic_Pole_EP1_DZ"], 30]) == 0) then {
				_canBuildOnPlot = true;	
			};
		} else {
			_canBuildOnPlot = true;	
		};
		
	} else {
		// not the owner so check if user is friendly to owner.

		_friendlies		= player getVariable ["friendlies",[]];
		// check if friendly to owner
		if(_ownerID in _friendlies) then {
			if(_classname != "Plastic_Pole_EP1_DZ") then {
				_canBuildOnPlot = true;
			};
		};
	};
};


if(!_canBuildOnPlot) exitWith {  TradeInprogress = false; cutText ["Building requires plot within 30m" , "PLAIN DOWN"]; };

_missing = "";
_hasrequireditem = true;
{
	_hastoolweapon = _x in weapons player;
	if(!_hastoolweapon) exitWith { _hasrequireditem = false; _missing = _x; }
} forEach _require;

_hasbuilditem = _this in magazines playwer;
if (!_hasbuilditem) exitWith {TradeInprogress = false; cutText [format[(localize "str_player_31"),_text,"build"] , "PLAIN DOWN"]; };

if (!_hasrequireditem) exitWith {TradeInprogress = false; cutText [format["Missing tool %1",_missing] , "PLAIN DOWN"]; };
if (_hasrequireditem) then {

	_location = [0,0,0];
	_dir = getDir player;

	player allowDamage false;
	
	_position = player modeltoworld _offset;
	_position = [(_position select 0),(_position select 1), 0];

	_object = createVehicle [_classname, _location, [], 0, "CAN_COLLIDE"];

	_object setDir _dir;

	_object setPos _position;
	
	_object allowDamage false;

	_object attachTo [player];

	_counter = 0;
	_isOk = true;

	while {_isOk} do {
		
		if (player getVariable["combattimeout", 0] >= time) exitWith {
			_isOk = false;
			_cancel = true;
			_reason = "Cannot build while in combat.";
		};

		cutText ["Planning consruction stand still 5 seconds to build.", "PLAIN DOWN"];
		
		_location1 = getPosATL player;
		sleep 5;
		_location2 = getPosATL player;

		if(_location1 distance _location2 < 0.1) exitWith {
			_isOk = false;
		};

		if(_location1 distance _location2 > 5) exitWith {
			_isOk = false;
			_cancel = true;
			_reason = "Moving to fast."; 
		};
		
		if(_counter >= 3) exitWith {
			_isOk = false;
			_cancel = true;
			_reason = "Ran out of time to find position."; 
		};
		_counter = _counter + 1;
	};

	detach _object;
	deleteVehicle _object;


	// Start Build 
	_tmpbuilt = createVehicle [_classname, _location, [], 0, "CAN_COLLIDE"];
	
	_dir = getDir player;
	_tmpbuilt setdir _dir;
	
	// Get position based on player
	_location = player modeltoworld _offset;

	// No building on roads
	if (isOnRoad _location) then { _cancel = true; _reason = "Cannot build on a road."; };

	// set building with ground
	_location = [(_location select 0),(_location select 1), 0];
	_tmpbuilt setpos _location;
	
	// set building with offset
	// _tmpbuilt setpos _location;

	player allowDamage true;

	
	// testing new way of finding building
	_buildings = nearestObjects [(vehicle player), ["Building"], 100];
	{
		_isBuilding = [(vehicle player),_x] call fnc_isInsideBuilding;
		if(_isBuilding) exitWith {
			_cancel = true;
			_reason = "Cannot build inside another building.";
		};
	} forEach _buildings;

	// No building in trader zones
	if(!placevault) then { _cancel = true; _reason = "Cannot build in a city."; };

	if(!_cancel) then {

		cutText [format["Placing %1, move to cancel.",_text], "PLAIN DOWN"];
		
		_limit = 5;

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
	
				//["dayzPublishObj",[dayz_characterID,_tmpbuilt,[_dir,_location],_classname]] call callRpcProcedure;
				dayzPublishObj = [dayz_characterID,_tmpbuilt,[_dir,_location],_classname];
				publicVariableServer "dayzPublishObj";
			} else {
				deleteVehicle _tmpbuilt;
				cutText ["Canceled building." , "PLAIN DOWN"];
			};

		} else {
			r_interrupt = false;
			[objNull, player, rSwitchMove,""] call RE;
			player playActionNow "stop";

			deleteVehicle _tmpbuilt;

			cutText ["Canceled building." , "PLAIN DOWN"];
		};

	} else {
		deleteVehicle _tmpbuilt;
		cutText [format["Canceled construction of %1 %2.",_text,_reason], "PLAIN DOWN"];
	};
};

TradeInprogress = false;