// If parameters were passed redirect to vanilla player_build (Epoch items don't pass anything)
if (!isNil "_this" && {typeName _this == "ARRAY"} && {count _this > 0}) exitWith {_this spawn player_buildVanilla;};
private ["_classname","_classnametmp","_require","_text","_ghost","_lockable","_requireplot","_isAllowedUnderGround","_offset","_isPole","_isLandFireDZ","_hasRequired","_hasrequireditem","_reason","_buildObject","_location1","_object","_objectHelper","_position","_controls","_cancel","_dir","_cnt","_pos","_distance","_buildables","_onLadder","_vehicle","_inVehicle","_abort","_needNear","_isNear","_needText","_findNearestPoles","_findNearestPole","_IsNearPlot","_canBuildOnPlot","_nearestPole","_ownerID","_friendlies","_missing","_checkMag","_enableGhost","_helperColor","_canDo","_objHDiff","_isOk","_zheightchanged","_zheightdirection","_rotate","_location2","_lastDir","_objectHelperDir","_objectHelperPos","_tmpbuilt","_limit","_proceed","_counter","_dis","_sfx","_started","_finished","_animState","_isMedic","_num_removed","_combinationDisplay","_combination_1","_combination_2","_combination_3","_combination_4","_combination","_combination_1_Display"];

//Check if building already in progress, exit if so.
if (DZE_ActionInProgress) exitWith {localize "str_epoch_player_40" call dayz_rollingMessages;};
DZE_ActionInProgress = true;
_pos = [player] call FNC_GetPos;

_onLadder =	(getNumber (configFile >> "CfgMovesMaleSdr" >> "States" >> (animationState player) >> "onLadder")) == 1;

_vehicle = vehicle player;
_inVehicle = (_vehicle != player);

DZE_Q = false;
DZE_Z = false;

DZE_Q_alt = false;
DZE_Z_alt = false;

DZE_Q_ctrl = false;
DZE_Z_ctrl = false;

DZE_5 = false;
DZE_4 = false;
DZE_6 = false;

DZE_F = false;

DZE_cancelBuilding = false;

call gear_ui_init;
closeDialog 1;

if (dayz_isSwimming) exitWith {DZE_ActionInProgress = false; localize "str_player_26" call dayz_rollingMessages;};
if (_inVehicle) exitWith {DZE_ActionInProgress = false; localize "str_epoch_player_42" call dayz_rollingMessages;};
if (_onLadder) exitWith {DZE_ActionInProgress = false; localize "str_player_21" call dayz_rollingMessages;};
if (player getVariable["combattimeout",0] >= diag_tickTime) exitWith {DZE_ActionInProgress = false; localize "str_epoch_player_43" call dayz_rollingMessages;};

DZE_buildItem = _this; //This is a magazine! It's global to allow access to it from outside functions

// Need Near Requirements
_abort = false;
_reason = "";

_needNear = getArray (configFile >> "CfgMagazines" >> DZE_buildItem >> "ItemActions" >> "Build" >> "neednearby");

{
	switch(_x) do{
		case "fire":
		{
			_distance = 3;
			_isNear = {inflamed _x} count (_pos nearObjects _distance);
			if(_isNear == 0) then {
				_abort = true;
				_reason = "fire";
			};
		};
		case "workshop":
		{
			_distance = 3;
			_isNear = count (nearestObjects [_pos, ["Wooden_shed_DZ","WoodShack_DZ","WorkBench_DZ"], _distance]);
			if(_isNear == 0) then {
				_abort = true;
				_reason = "workshop";
			};
		};
		case "fueltank":
		{
			_distance = 30;
			_isNear = count (nearestObjects [_pos, dayz_fuelsources, _distance]);
			if(_isNear == 0) then {
				_abort = true;
				_reason = "fuel tank";
			};
		};
	};
} forEach _needNear;

if (_abort) exitWith {
	format[localize "str_epoch_player_135",_reason,_distance] call dayz_rollingMessages;
	DZE_ActionInProgress = false;
};

_canBuild = [_pos, _this, true] call DZE_BuildChecks;
if (_canBuild select 0) then {
	_classname = getText (configFile >> "CfgMagazines" >> DZE_buildItem >> "ItemActions" >> "Build" >> "create");
	_classnametmp = _classname;
	_text = getText (configFile >> "CfgVehicles" >> _classname >> "displayName");
	_ghost = getText (configFile >> "CfgVehicles" >> _classname >> "ghostpreview");

	_lockable = 0; //default define if lockable not found in config file below
	if(isNumber (configFile >> "CfgVehicles" >> _classname >> "lockable")) then { //find out if item is lockable object
		_lockable = getNumber(configFile >> "CfgVehicles" >> _classname >> "lockable"); // 2=lockbox, 3=combolock, 4=safe
	};

	_isAllowedUnderGround = 1; //check if allowed to build under terrain
	if(isNumber (configFile >> "CfgVehicles" >> _classname >> "nounderground")) then {
		_isAllowedUnderGround = getNumber(configFile >> "CfgVehicles" >> _classname >> "nounderground");
	};

	_offset = 	getArray (configFile >> "CfgVehicles" >> _classname >> "offset"); //check default distance offset, define if does not exist
	if((count _offset) <= 0) then {
		_offset = [0,1.5,0];
	};

	_objectHelper = objNull;
	_isOk = true;
	_location1 = [player] call FNC_GetPos; // get inital players position
	_dir = getDir player; //required to pass direction when building

	// if ghost preview available use that instead
	if (_ghost != "") then {
		_classname = _ghost;
	};

	_object = createVehicle [_classname, [0,0,0], [], 0, "CAN_COLLIDE"]; //object preview, not an actual object that will be built

	_objectHelper = "Sign_sphere10cm_EP1" createVehicle [0,0,0];
	_helperColor = "#(argb,8,8,3)color(0,0,0,0,ca)";
	_objectHelper setobjecttexture [0,_helperColor];
	_objectHelper attachTo [player,_offset];
	_object attachTo [_objectHelper,[0,0,0]];

	if (isClass (configFile >> "SnapBuilding" >> _classname)) then {	
		["","","",["Init",_object,_classname,_objectHelper]] spawn snap_build;
	};

	_objHDiff = 0;	
	_cancel = false;
	_reason = "";
	
	helperDetach = false;
	_canDo = (!r_drag_sqf and !r_player_unconscious);
	_position = [_objectHelper] call FNC_GetPos;

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
			_dir = -45;
		};
		if (DZE_6) then {
			_rotate = true;
			DZE_6 = false;
			_dir = 45;
		};
		
		if (DZE_F and _canDo) then {	
			if (helperDetach) then { 
				_objectHelperDir = getDir _objectHelper;
				_objectHelper attachTo [player];
				_objectHelper setDir _objectHelperDir-(getDir player);
				helperDetach = false;
			} else {
				_objectHelperDir = getDir _objectHelper;
				detach _objectHelper;
				[_objectHelper]	call FNC_GetSetPos;
				_objectHelper setVelocity [0,0,0]; //fix sliding glitch
				helperDetach = true;
			};
			DZE_F = false;
		};

		if(_rotate) then {
			if (helperDetach) then {
				_objectHelperDir = getDir _objectHelper;
				_objectHelper setDir _objectHelperDir+_dir;
				[_objectHelper]	call FNC_GetSetPos;
			} else {
				detach _objectHelper;
				_objectHelperDir = getDir _objectHelper;
				_objectHelper setDir _objectHelperDir+_dir;
				[_objectHelper]	call FNC_GetSetPos;
				_objectHelperDir = getDir _objectHelper;
				_objectHelper attachTo [player];
				_objectHelper setDir _objectHelperDir-(getDir player);
			};
		};

		if(_zheightchanged) then {
			if (!helperDetach) then {
			detach _objectHelper;
			_objectHelperDir = getDir _objectHelper;
			};

			_position = [_objectHelper] call FNC_GetPos;

			if(_zheightdirection == "up") then {
				_position set [2,((_position select 2)+0.1)];
				_objHDiff = _objHDiff + 0.1;
			};
			if(_zheightdirection == "down") then {
				_position set [2,((_position select 2)-0.1)];
				_objHDiff = _objHDiff - 0.1;
			};

			if(_zheightdirection == "up_alt") then {
				_position set [2,((_position select 2)+1)];
				_objHDiff = _objHDiff + 1;
			};
			if(_zheightdirection == "down_alt") then {
				_position set [2,((_position select 2)-1)];
				_objHDiff = _objHDiff - 1;
			};

			if(_zheightdirection == "up_ctrl") then {
				_position set [2,((_position select 2)+0.01)];
				_objHDiff = _objHDiff + 0.01;
			};
			if(_zheightdirection == "down_ctrl") then {
				_position set [2,((_position select 2)-0.01)];
				_objHDiff = _objHDiff - 0.01;
			};

			if((_isAllowedUnderGround == 0) && ((_position select 2) < 0)) then {
				_position set [2,0];
			};

			if (surfaceIsWater _position) then {
				_objectHelper setPosASL _position;
			} else {
				_objectHelper setPosATL _position;
			};

			if (!helperDetach) then {
			_objectHelper attachTo [player];
			_objectHelper setDir _objectHelperDir-(getDir player);
			};
		};

		uiSleep 0.5;

		_location2 = [player] call FNC_GetPos;
		_objectHelperPos = [_objectHelper] call FNC_GetPos;
		
		if(DZE_5) exitWith {
			_isOk = false;
			_position = [_object] call FNC_GetPos;
			detach _object;
			_dir = getDir _object;
			deleteVehicle _object;
			detach _objectHelper;
			deleteVehicle _objectHelper;
		};

		if(_location1 distance _location2 > 10) exitWith {
			_isOk = false;
			_cancel = true;
			_reason = "You've moved to far away from where you started building (within 10 meters)";
			detach _object;
			deleteVehicle _object;
			detach _objectHelper;
			deleteVehicle _objectHelper;
		};
		
		if(_location1 distance _objectHelperPos > 10) exitWith {
			_isOk = false;
			_cancel = true;
			_reason = "Object is placed to far away from where you started building (within 10 meters)";
			detach _object;
			deleteVehicle _object;
			detach _objectHelper;
			deleteVehicle _objectHelper;
		};

		if(abs(_objHDiff) > 10) exitWith {
			_isOk = false;
			_cancel = true;
			_reason = "Cannot move up or down more than 10 meters";
			detach _object;
			deleteVehicle _object;
			detach _objectHelper;
			deleteVehicle _objectHelper;
		};

		if (player getVariable["combattimeout",0] >= diag_tickTime) exitWith {
			_isOk = false;
			_cancel = true;
			_reason = (localize "str_epoch_player_43");
			detach _object;
			deleteVehicle _object;
			detach _objectHelper;
			deleteVehicle _objectHelper;
		};

		if (DZE_cancelBuilding) exitWith {
			_isOk = false;
			_cancel = true;
			_reason = "Cancelled building.";
			detach _object;
			deleteVehicle _object;
			detach _objectHelper;
			deleteVehicle _objectHelper;
		};
	};
	
	_isOk = true;
	_proceed = false;
	_counter = 0;
	_location = [0,0,0];

	//No building on roads unless toggled
	if (!DZE_BuildOnRoads) then {
		if (isOnRoad _position) then { _cancel = true; _reason = "Cannot build on a road."; };
	};

	// No building in trader zones
	if(!canbuild) then { _cancel = true; _reason = "Cannot build in a city."; };

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

		format[localize "str_epoch_player_138",_text] call dayz_rollingMessages;

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

			["Working",0,[100,15,10,0]] call dayz_NutritionSystem;
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
				if (r_interrupt || (player getVariable["combattimeout",0] >= diag_tickTime)) then {
					r_doLoop = false;
				};
				if (DZE_cancelBuilding) exitWith {
					r_doLoop = false;
				};
				uiSleep 0.1;
			};
			r_doLoop = false;


			if(!_finished) exitWith { //exit if interrupted
				_isOk = false;
				_proceed = false;
			};

			if(_finished) then { //if animation finished, add to build count
				_counter = _counter + 1;
			};

			format[localize "str_epoch_player_139",_text, _counter,_limit] call dayz_rollingMessages; //report how many steps are done out of total limit

			if(_counter == _limit) exitWith { //if all steps done proceed with next step, otherwise cancel publish
				_isOk = false;
				_proceed = true;
			};

		};

		if (_proceed) then {

			_num_removed = ([player,DZE_buildItem] call BIS_fnc_invRemove); //remove item's magazine from inventory
			if(_num_removed == 1) then {

				format[localize "str_build_01",_text] call dayz_rollingMessages;

				if (_canBuild select 1) then { //if item was a plotpole, build a visual radius around it
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
					PVDZ_obj_Publish = [_combination,_tmpbuilt,[_dir,_location],[]];
					publicVariableServer "PVDZ_obj_Publish";

					format[localize "str_epoch_player_140",_combinationDisplay,_text] call dayz_rollingMessages; //display new combination
					systemChat format[localize "str_epoch_player_140",_combinationDisplay,_text];

				} else { //if not lockable item
					_tmpbuilt setVariable ["CharacterID",dayz_characterID,true];

					// fire?
					if(_tmpbuilt isKindOf "Land_Fire_DZ") then { //if campfire, then spawn, but do not publish to database
						_tmpbuilt spawn player_fireMonitor;
					} else {
						PVDZ_obj_Publish = [dayz_characterID,_tmpbuilt,[_dir,_location],[]];
						publicVariableServer "PVDZ_obj_Publish";
					};
				};
			} else { //if magazine was not removed, cancel publish
				deleteVehicle _tmpbuilt;
				localize "str_epoch_player_46" call dayz_rollingMessages;
			};

		} else { //if player was interrupted, cancel publish and stop build animations
			r_interrupt = false;
			if (vehicle player == player) then {
				[objNull, player, rSwitchMove,""] call RE;
				player playActionNow "stop";
			};

			deleteVehicle _tmpbuilt;

			localize "str_epoch_player_46" call dayz_rollingMessages;
		};

	} else { //cancel build if passed _cancel arg was true or building on roads/trader city
		format[localize "str_epoch_player_47",_text,_reason] call dayz_rollingMessages;
	};
};

DZE_ActionInProgress = false;