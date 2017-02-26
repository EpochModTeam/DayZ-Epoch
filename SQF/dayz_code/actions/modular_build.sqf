// If an array was passed redirect to vanilla player_build (Epoch items pass a string)
if (!isNil "_this" && {typeName _this == "ARRAY"} && {count _this > 0}) exitWith {_this spawn player_buildVanilla;};
private ["_abort","_reason","_distance","_isNear","_lockable","_isAllowedUnderGround","_offset","_classname","_zheightdirection","_zheightchanged","_rotate","_objectHelperPos","_objectHelperDir","_objHDiff","_position","_isOk","_dir","_vector","_cancel","_location2","_buildOffset","_location","_limit","_started","_finished","_animState","_isMedic","_proceed","_counter","_dis","_sfx","_combination_1_Display","_combination_1","_combination_2","_combination_3","_combination","_combinationDisplay","_combination_4","_num_removed","_tmpbuilt","_vUp","_classnametmp","_text","_ghost","_ghost2","_VectorWorkAround","_objectHelper","_location1","_object","_object2","_helperColor","_canDo","_pos","_onLadder","_vehicle","_inVehicle","_needNear","_canBuild"];


if (dayz_actionInProgress) exitWith {localize "str_epoch_player_40" call dayz_rollingMessages;};
dayz_actionInProgress = true;

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

DZE_updateVec = false;
DZE_memDir = 0;
DZE_memForBack = 0;
DZE_memLeftRight = 0;

call gear_ui_init;
closeDialog 1;

if (dayz_isSwimming) exitWith {dayz_actionInProgress = false; localize "str_player_26" call dayz_rollingMessages;};
if (_inVehicle) exitWith {dayz_actionInProgress = false; localize "str_epoch_player_42" call dayz_rollingMessages;};
if (_onLadder) exitWith {dayz_actionInProgress = false; localize "str_player_21" call dayz_rollingMessages;};
if (player getVariable["combattimeout",0] >= diag_tickTime) exitWith {dayz_actionInProgress = false; localize "str_epoch_player_43" call dayz_rollingMessages;};

DZE_buildItem = _this;

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
				_reason = localize "STR_EPOCH_FIRE";
			};
		};
		case "workshop":
		{
			_distance = 3;
			_isNear = count (nearestObjects [_pos, ["Wooden_shed_DZ","WoodShack_DZ","WorkBench_DZ"], _distance]);
			if(_isNear == 0) then {
				_abort = true;
				_reason = localize "STR_BLD_name_ItemWorkshop";
			};
		};
		case "fueltank":
		{
			_distance = 30;
			_isNear = count (nearestObjects [_pos, dayz_fuelsources, _distance]);
			if(_isNear == 0) then {
				_abort = true;
				_reason = localize "STR_EPOCH_VEHUP_TNK";
			};
		};
	};
} forEach _needNear;

if (_abort) exitWith {
	format[localize "str_epoch_player_135",_reason,_distance] call dayz_rollingMessages;
	dayz_actionInProgress = false;
};

_canBuild = [_pos, _this, true] call dze_buildChecks;
if (_canBuild select 0) then {
	_classname = getText (configFile >> "CfgMagazines" >> DZE_buildItem >> "ItemActions" >> "Build" >> "create");
	_classnametmp = _classname;
	if (isText (configFile >> "CfgMagazines" >> DZE_buildItem >> "ItemActions" >> "Build" >> "buildText")) then {
		_text = getText (configFile >> "CfgMagazines" >> DZE_buildItem >> "ItemActions" >> "Build" >> "buildText");
	} else {
		_text = getText (configFile >> "CfgVehicles" >> _classname >> "displayName");
	};
	_ghost = getText (configFile >> "CfgVehicles" >> _classname >> "ghostpreview");

	_lockable = 0;
	if(isNumber (configFile >> "CfgVehicles" >> _classname >> "lockable")) then {
		_lockable = getNumber(configFile >> "CfgVehicles" >> _classname >> "lockable");
	};

	_isAllowedUnderGround = 1;
	if(isNumber (configFile >> "CfgVehicles" >> _classname >> "nounderground")) then {
		_isAllowedUnderGround = getNumber(configFile >> "CfgVehicles" >> _classname >> "nounderground");
	};

	_offset = 	getArray (configFile >> "CfgVehicles" >> _classname >> "offset");
	_objectHelper = objNull;
	_isOk = true;
	_location1 = [player] call FNC_GetPos;
	_dir = getDir player;
	_ghost2 = "";
	_VectorWorkAround = false;

	if (_classname == "CinderWall_DZ") then {
		_ghost2 = _ghost;
		_ghost = "CinderWallHalf_Preview_DZ";
		_VectorWorkAround = true;
	};

	if (_ghost != "") then {
		_classname = _ghost;
	};

	_object = createVehicle [_classname, [0,0,0], [], 0, "CAN_COLLIDE"];
	_object2 = ObjNull;
	if (_VectorWorkAround) then {
		_object2 = _ghost2 createVehicleLocal [0,0,0];
		hideObject _object;
	};

	if((count _offset) <= 0) then {
		_offset = [0,(abs(((boundingBox _object)select 0) select 1)),0];
	};

	_objectHelper = "Sign_sphere10cm_EP1" createVehicle [0,0,0];
	_helperColor = "#(argb,8,8,3)color(0,0,0,0,ca)";
	_objectHelper setobjecttexture [0,_helperColor];
	_objectHelper attachTo [player,_offset];
	if (_VectorWorkAround) then {
		_object attachTo [_objectHelper,[0,0,-1.65]];
		_object2 attachTo [_object,[0,0,1.65]];
	} else {
		_object attachTo [_objectHelper,[0,0,0]];
	};

	if (isClass (configFile >> "SnapBuilding" >> _classname)) then {	
		["","","",["Init",_object,_classname,_objectHelper]] spawn snap_build;
	};

	if !(DZE_buildItem in DZE_noRotate) then{
		["","","",["Init","Init",0]] spawn build_vectors;
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
			if(DZE_dirWithDegrees) then{
				DZE_memDir = DZE_memDir - DZE_curDegree;
			}else{
				DZE_memDir = DZE_memDir - 45;
			};
		};
		if (DZE_6) then {
			_rotate = true;
			DZE_6 = false;
			if(DZE_dirWithDegrees) then{
				DZE_memDir = DZE_memDir + DZE_curDegree;
			}else{
				DZE_memDir = DZE_memDir + 45;
			};
		};
		
		if(DZE_updateVec) then{
			[_objectHelper,[DZE_memForBack,DZE_memLeftRight,DZE_memDir]] call fnc_SetPitchBankYaw;
			DZE_updateVec = false;
		};
		
		if (DZE_F and _canDo) then {
			if (helperDetach) then {
				_objectHelper attachTo [player];
				DZE_memDir = DZE_memDir-(getDir player);
				helperDetach = false;
				[_objectHelper,[DZE_memForBack,DZE_memLeftRight,DZE_memDir]] call fnc_SetPitchBankYaw;
			} else {		
				_objectHelperPos = getPosATL _objectHelper;
				detach _objectHelper;			
				DZE_memDir = getDir _objectHelper;
				[_objectHelper,[DZE_memForBack,DZE_memLeftRight,DZE_memDir]] call fnc_SetPitchBankYaw;
				_objectHelper setPosATL _objectHelperPos;
				_objectHelper setVelocity [0,0,0];
				helperDetach = true;
			};
			DZE_F = false;
		};

		if(_rotate) then {
			[_objectHelper,[DZE_memForBack,DZE_memLeftRight,DZE_memDir]] call fnc_SetPitchBankYaw;
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
			};
			[_objectHelper,[DZE_memForBack,DZE_memLeftRight,DZE_memDir]] call fnc_SetPitchBankYaw;
		};

		uiSleep 0.5;

		_location2 = [player] call FNC_GetPos;
		_objectHelperPos = [_objectHelper] call FNC_GetPos;
		
		if(DZE_5) exitWith {
			_isOk = false;
			_position = [_object] call FNC_GetPos;
			detach _object;
			_dir = getDir _object;
			_vector = [(vectorDir _object),(vectorUp _object)];	
			deleteVehicle _object;
			if (_VectorWorkAround) then {
				detach _object2;
				deleteVehicle _object2;
			};
			detach _objectHelper;
			deleteVehicle _objectHelper;
		};

		if(_location1 distance _location2 > DZE_buildMaxMoveDistance) exitWith {
			_isOk = false;
			_cancel = true;
			_reason = format[localize "STR_EPOCH_BUILD_FAIL_MOVED",DZE_buildMaxMoveDistance];
			detach _object;
			deleteVehicle _object;
			if (_VectorWorkAround) then {
				detach _object2;
				deleteVehicle _object2;
			};
			detach _objectHelper;
			deleteVehicle _objectHelper;
		};
		
		if(_location1 distance _objectHelperPos > DZE_buildMaxMoveDistance) exitWith {
			_isOk = false;
			_cancel = true;
			_reason = format[localize "STR_EPOCH_BUILD_FAIL_TOO_FAR",DZE_buildMaxMoveDistance];
			detach _object;
			deleteVehicle _object;
			if (_VectorWorkAround) then {
				detach _object2;
				deleteVehicle _object2;
			};
			detach _objectHelper;
			deleteVehicle _objectHelper;
		};

		if(abs(_objHDiff) > DZE_buildMaxHeightDistance) exitWith {
			_isOk = false;
			_cancel = true;
			_reason = format[localize "STR_EPOCH_BUILD_FAIL_HEIGHT",DZE_buildMaxHeightDistance];
			detach _object;
			deleteVehicle _object;
			if (_VectorWorkAround) then {
				detach _object2;
				deleteVehicle _object2;
			};
			detach _objectHelper;
			deleteVehicle _objectHelper;
		};

		if (player getVariable["combattimeout",0] >= diag_tickTime) exitWith {
			_isOk = false;
			_cancel = true;
			_reason = localize "str_epoch_player_43";
			detach _object;
			deleteVehicle _object;
			if (_VectorWorkAround) then {
				detach _object2;
				deleteVehicle _object2;
			};
			detach _objectHelper;
			deleteVehicle _objectHelper;
		};

		if (DZE_cancelBuilding) exitWith {
			_isOk = false;
			_cancel = true;
			_reason = localize "STR_EPOCH_PLAYER_46";
			detach _object;
			deleteVehicle _object;
			if (_VectorWorkAround) then {
				detach _object2;
				deleteVehicle _object2;
			};
			detach _objectHelper;
			deleteVehicle _objectHelper;
		};
	};
	
	_isOk = true;
	_proceed = false;
	_counter = 0;
	_location = [0,0,0];

	if (!DZE_BuildOnRoads) then {
		if (isOnRoad _position) then { _cancel = true; _reason = localize "STR_EPOCH_BUILD_FAIL_ROAD"; };
	};
	if(!canbuild) then { _cancel = true; _reason = format[localize "STR_EPOCH_PLAYER_136",localize "STR_EPOCH_TRADER"]; };

	if(!_cancel) then {
		_classname = _classnametmp;
		_tmpbuilt = createVehicle [_classname, _location, [], 0, "CAN_COLLIDE"];
		_tmpbuilt setdir _dir;
		_tmpbuilt setVariable["memDir",_dir,true];
		_location = _position;

		if((_isAllowedUnderGround == 0) && ((_location select 2) < 0)) then {
			_location set [2,0];
		};
		
		_tmpbuilt setVectorDirAndUp _vector;
		
		_buildOffset = [0,0,0];
		_vUp = _vector select 1;
		switch (_classname) do {
			case "MetalFloor_DZ": { _buildOffset = [(_vUp select 0) * .148, (_vUp select 1) * .148,0]; };
		};
		
		_location = [
			(_location select 0) - (_buildOffset select 0),
			(_location select 1) - (_buildOffset select 1),
			(_location select 2) - (_buildOffset select 2)
		];
	
		if (surfaceIsWater _location) then {
			_tmpbuilt setPosASL _location;
			_location = ASLtoATL _location;
		} else {
			_tmpbuilt setPosATL _location;
		};

		format[localize "str_epoch_player_138",_text] call dayz_rollingMessages;

		_limit = 3;

		if (DZE_StaticConstructionCount > 0) then {
			_limit = DZE_StaticConstructionCount;
		}
		else {
			if (isNumber (configFile >> "CfgVehicles" >> _classname >> "constructioncount")) then {
				_limit = getNumber(configFile >> "CfgVehicles" >> _classname >> "constructioncount");
			};
		};

		while {_isOk} do {
			format[localize "str_epoch_player_139",_text, (_counter + 1),_limit] call dayz_rollingMessages; //report how many steps are done out of total limit
			player playActionNow "Medic";
			_dis=20;
			_sfx = "repair";
			[player,_sfx,0,false,_dis] call dayz_zombieSpeak;
			[player,_dis,true,(getPosATL player)] spawn player_alertZombies;

			r_interrupt = false;
			r_doLoop = true;
			_started = false;
			_finished = false;

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
				if (r_interrupt || (player getVariable["combattimeout",0] >= diag_tickTime)) then {
					r_doLoop = false;
				};
				if (DZE_cancelBuilding) exitWith {
					r_doLoop = false;
				};
				uiSleep 0.1;
			};
			r_doLoop = false;


			if(!_finished) exitWith {
				_isOk = false;
				_proceed = false;
			};

			if(_finished) then {
				_counter = _counter + 1;
			};

			if(_counter == _limit) exitWith {
				_isOk = false;
				_proceed = true;
			};

		};

		if (_proceed) then {

			_num_removed = ([player,DZE_buildItem] call BIS_fnc_invRemove); //remove item's magazine from inventory
			if(_num_removed == 1) then {
				["Working",0,[20,10,5,0]] call dayz_NutritionSystem;
				call player_forceSave;
				format[localize "str_build_01",_text] call dayz_rollingMessages;

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
								_combination_1_Display = localize "STR_TEAM_RED";
							};
							if (_combination_1 == 101) then {
								_combination_1_Display = localize "STR_TEAM_GREEN";
							};
							if (_combination_1 == 102) then {
								_combination_1_Display = localize "STR_TEAM_BLUE";
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
					if (DZE_permanentPlot) then {
						_tmpbuilt setVariable ["ownerPUID",dayz_playerUID,true];
						PVDZ_obj_Publish = [_combination,_tmpbuilt,[_dir,_location,dayz_playerUID,_vector],[]];
						if (_lockable == 3) then {
							_friendsArr = [[dayz_playerUID,toArray (name player)]];
							_tmpbuilt setVariable ["doorfriends", _friendsArr, true];
							PVDZ_obj_Publish = [_combination,_tmpbuilt,[_dir,_location,dayz_playerUID,_vector],_friendsArr];
						};
					} else {
						PVDZ_obj_Publish = [_combination,_tmpbuilt,[_dir,_location, _vector],[]];
					};
					publicVariableServer "PVDZ_obj_Publish";

					[format[localize "str_epoch_player_140",_combinationDisplay,_text],1] call dayz_rollingMessages; //display new combination
					systemChat format[localize "str_epoch_player_140",_combinationDisplay,_text];

				} else { //if not lockable item
					_tmpbuilt setVariable ["CharacterID",dayz_characterID,true];
					// fire?
					if (_tmpbuilt isKindOf "Land_Fire_DZ") then { //if campfire, then spawn, but do not publish to database
						[_tmpbuilt,true] call dayz_inflame;
						_tmpbuilt spawn player_fireMonitor;
					} else {
						if (DZE_permanentPlot) then {
							_tmpbuilt setVariable ["ownerPUID",dayz_playerUID,true];
							if (_canBuild select 1) then {
								_friendsArr = [[dayz_playerUID,toArray (name player)]];
								_tmpbuilt setVariable ["plotfriends", _friendsArr, true];
								PVDZ_obj_Publish = [dayz_characterID,_tmpbuilt,[_dir,_location,dayz_playerUID,_vector],_friendsArr];
							} else {
								PVDZ_obj_Publish = [dayz_characterID,_tmpbuilt,[_dir,_location,dayz_playerUID,_vector],[]];
							};
						} else {
							PVDZ_obj_Publish = [dayz_characterID,_tmpbuilt,[_dir,_location, _vector],[]];
						};
						publicVariableServer "PVDZ_obj_Publish";
					};
				};
				if (DZE_GodModeBase && {!(_classname in DZE_GodModeBaseExclude)}) then {
					_tmpbuilt addEventHandler ["HandleDamage",{false}];
					_tmpbuilt enableSimulation false;
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

dayz_actionInProgress = false;
