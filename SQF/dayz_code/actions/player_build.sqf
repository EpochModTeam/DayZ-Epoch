/*
	DayZ Base Building
	Made for DayZ Epoch please ask permission to use/edit/distrubute email vbawol@veteranbastards.com.
*/
if (dayz_actionInProgress) exitWith {localize "str_epoch_player_40" call dayz_rollingMessages;};
dayz_actionInProgress = true;

private ["_location","_pos","_dir","_classname","_item","_cancel","_reason","_finished","_tmpbuilt","_onLadder","_text","_offset","_isOk","_location1","_location2","_counter","_limit","_proceed","_num_removed","_position","_object","_distance","_classnametmp","_ghost","_lockable","_zheightchanged","_rotate","_combination_1","_combination_2","_combination_3","_combination_4","_combination","_combination_1_Display","_combinationDisplay","_zheightdirection","_abort","_isNear","_needNear","_vehicle","_inVehicle","_objHDiff","_isAllowedUnderGround","_canBuild","_friendsArr","_vector"];

_pos = [player] call FNC_GetPos;
_onLadder = (getNumber (configFile >> "CfgMovesMaleSdr" >> "States" >> (animationState player) >> "onLadder")) == 1;
_cancel = false;
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

DZE_cancelBuilding = false;

call gear_ui_init;
closeDialog 1;

if (dayz_isSwimming) exitWith {dayz_actionInProgress = false; localize "str_player_26" call dayz_rollingMessages;};
if (_inVehicle) exitWith {dayz_actionInProgress = false; localize "str_epoch_player_42" call dayz_rollingMessages;};
if (_onLadder) exitWith {dayz_actionInProgress = false; localize "str_player_21" call dayz_rollingMessages;};
if (player getVariable["combattimeout",0] >= diag_tickTime) exitWith {dayz_actionInProgress = false; localize "str_epoch_player_43" call dayz_rollingMessages;};

_item =	_this;

// Need Near Requirements
_abort = false;
_reason = "";

_needNear = getArray (configFile >> "CfgMagazines" >> _item >> "ItemActions" >> "Build" >> "neednearby");

{
	call {
		if (_x == "fire") exitwith {
			_distance = 3;
			_isNear = {inflamed _x} count (_pos nearObjects _distance);
			if (_isNear == 0) then {
				_abort = true;
				_reason = localize "STR_EPOCH_FIRE";
			};
		};
		if (_x == "workshop") exitwith {
			_distance = 3;
			_isNear = count (nearestObjects [_pos, DZE_Workshops, _distance]);
			if (_isNear == 0) then {
				_abort = true;
				_reason = localize "STR_EPOCH_WORKBENCH_NEARBY";
			};
		};
		if (_x == "fueltank") exitwith {
			_distance = 30;
			_isNear = count (nearestObjects [_pos, dayz_fuelsources, _distance]);
			if (_isNear == 0) then {
				_abort = true;
				_reason = localize "STR_EPOCH_VEHUP_TNK";
			};
		};
	};
} count _needNear;

if (_abort) exitWith {
	format[localize "str_epoch_player_135",_reason,_distance] call dayz_rollingMessages;
	dayz_actionInProgress = false;
};

_canBuild = [_pos, _item, true] call dze_buildChecks;
if (_canBuild select 0) then {
	_classname = 	getText (configFile >> "CfgMagazines" >> _item >> "ItemActions" >> "Build" >> "create");
	_classnametmp = _classname;

	if (isText (configFile >> "CfgMagazines" >> _item >> "ItemActions" >> "Build" >> "buildText")) then {
		_text = getText (configFile >> "CfgMagazines" >> _item >> "ItemActions" >> "Build" >> "buildText");
	} else {
		_text = getText (configFile >> "CfgVehicles" >> _classname >> "displayName");
	};
	_ghost = getText (configFile >> "CfgVehicles" >> _classname >> "ghostpreview");

	_lockable = 0;
	if (isNumber (configFile >> "CfgVehicles" >> _classname >> "lockable")) then {
		_lockable = getNumber(configFile >> "CfgVehicles" >> _classname >> "lockable");
	};

	_isAllowedUnderGround = 1;
	if (isNumber (configFile >> "CfgVehicles" >> _classname >> "nounderground")) then {
		_isAllowedUnderGround = getNumber(configFile >> "CfgVehicles" >> _classname >> "nounderground");
	};

	_offset = getArray (configFile >> "CfgVehicles" >> _classname >> "offset");

	_location = [0,0,0];
	_isOk = true;
	_location1 = [player] call FNC_GetPos; // get inital players position
	_dir = getDir player;

	// if ghost preview available use that instead
	if (_ghost != "") then {
		_classname = _ghost;
	};

	_object = createVehicle [_classname, _location, [], 0, "CAN_COLLIDE"];

	if ((count _offset) <= 0) then {
		_offset = [0,(abs(((boundingBox _object)select 0) select 1)),0];
	};

	_object attachTo [player,_offset];

	_position = getPosATL _object;

	localize "str_epoch_player_45" call dayz_rollingMessages;

	_objHDiff = 0;

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

		if (_rotate) then {
			_object setDir _dir;
			_object setPosATL _position;
			//diag_log format["DEBUG Rotate BUILDING POS: %1", _position];
		};

		if (_zheightchanged) then {
			detach _object;

			_position = getPosATL _object;

			if (_zheightdirection == "up") then {
				_position set [2,((_position select 2)+0.1)];
				_objHDiff = _objHDiff + 0.1;
			};
			if (_zheightdirection == "down") then {
				_position set [2,((_position select 2)-0.1)];
				_objHDiff = _objHDiff - 0.1;
			};

			if (_zheightdirection == "up_alt") then {
				_position set [2,((_position select 2)+1)];
				_objHDiff = _objHDiff + 1;
			};
			if (_zheightdirection == "down_alt") then {
				_position set [2,((_position select 2)-1)];
				_objHDiff = _objHDiff - 1;
			};

			if (_zheightdirection == "up_ctrl") then {
				_position set [2,((_position select 2)+0.01)];
				_objHDiff = _objHDiff + 0.01;
			};
			if (_zheightdirection == "down_ctrl") then {
				_position set [2,((_position select 2)-0.01)];
				_objHDiff = _objHDiff - 0.01;
			};

			_object setDir (getDir _object);

			if ((_isAllowedUnderGround == 0) && {(_position select 2) < 0}) then {
				_position set [2,0];
			};

			_object setPosATL _position;

			//diag_log format["DEBUG Change BUILDING POS: %1", _position];

			_object attachTo [player];

		};

		uiSleep 0.5;

		_location2 = getPosATL player;

		if (DZE_5) exitWith {
			_isOk = false;
			detach _object;
			_dir = getDir _object;
			_position = getPosATL _object;
			_vector = [(vectorDir _object),(vectorUp _object)];
			//diag_log format["DEBUG BUILDING POS: %1", _position];
			deleteVehicle _object;
		};

		if (_location1 distance _location2 > DZE_buildMaxMoveDistance) exitWith {
			_isOk = false;
			_cancel = true;
			_reason = format[localize "STR_EPOCH_BUILD_FAIL_MOVED",DZE_buildMaxMoveDistance];
			detach _object;
			deleteVehicle _object;
		};

		if (abs(_objHDiff) > DZE_buildMaxHeightDistance) exitWith {
			_isOk = false;
			_cancel = true;
			_reason = format[localize "STR_EPOCH_BUILD_FAIL_HEIGHT",DZE_buildMaxHeightDistance];
			detach _object;
			deleteVehicle _object;
		};

		if (DZE_BuildHeightLimit > 0 && {_position select 2 > DZE_BuildHeightLimit}) exitWith {
			_isOk = false;
			_cancel = true;
			_reason = format[localize "STR_EPOCH_PLAYER_168",DZE_BuildHeightLimit];
			detach _object;
			deleteVehicle _object;
		};

		if (player getVariable["combattimeout",0] >= diag_tickTime) exitWith {
			_isOk = false;
			_cancel = true;
			_reason = localize "str_epoch_player_43";
			detach _object;
			deleteVehicle _object;
		};

		if (DZE_cancelBuilding) exitWith {
			_isOk = false;
			_cancel = true;
			_reason = localize "STR_EPOCH_PLAYER_46";
			detach _object;
			deleteVehicle _object;
		};
	};

	//No building on roads unless toggled
	if (!DZE_BuildOnRoads) then {
		if (isOnRoad _position) then { _cancel = true; _reason = localize "STR_EPOCH_BUILD_FAIL_ROAD"; };
	};

	// No building in trader zones
	if (!canbuild) then { _cancel = true; _reason = format[localize "STR_EPOCH_PLAYER_136",localize "STR_EPOCH_TRADER"]; };

	if (!_cancel) then {

		_classname = _classnametmp;

		// Start Build
		_tmpbuilt = createVehicle [_classname, _location, [], 0, "CAN_COLLIDE"];

		_tmpbuilt setdir _dir;

		// Get position based on object
		_location = _position;

		if ((_isAllowedUnderGround == 0) && {(_location select 2) < 0}) then {
			_location set [2,0];
		};

		_tmpbuilt setPosATL _location;

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

		_isOk = true;
		_proceed = false;
		_counter = 0;

		while {_isOk} do {
			format[localize "str_epoch_player_139",_text, (_counter + 1),_limit] call dayz_rollingMessages;

			[player,(getPosATL player),40,"repair"] spawn fnc_alertZombies;

			_finished = ["Medic",1,{player getVariable["combattimeout",0] >= diag_tickTime or DZE_cancelBuilding}] call fn_loopAction;

			if (!_finished) exitWith {
				_isOk = false;
				_proceed = false;
			};

			if (_finished) then {
				_counter = _counter + 1;
			};

			if (_counter == _limit) exitWith {
				_isOk = false;
				_proceed = true;
			};
		};

		if (_proceed) then {

			_num_removed = ([player,_item] call BIS_fnc_invRemove);
			if (_num_removed == 1) then {
				["Working",0,[20,10,5,0]] call dayz_NutritionSystem;
				call player_forceSave;
				format[localize "str_build_01",_text] call dayz_rollingMessages;

				_tmpbuilt setVariable ["OEMPos",_location,true];

				if (_lockable > 1) then {

					_combinationDisplay = "";

					call { //generate random combinations depending on item type

						if (_lockable == 2) exitwith { // 2 lockbox
							dayz_combination = "";
							dayz_selectedVault = objNull;

							createDialog "KeyPadUI";
							waitUntil {!dialog};

							_combinationDisplay = dayz_combination call fnc_lockCode;
							if (keypadCancel || {typeName _combinationDisplay == "SCALAR"}) then {
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
							} else {
								_combination = dayz_combination;
							};
						};

						if (_lockable == 3) exitwith { // 3 combolock
							DZE_topCombo = 0;
							DZE_midCombo = 0;
							DZE_botCombo = 0;
							DZE_Lock_Door = "";
							dayz_selectedDoor = objNull;

							dayz_actionInProgress = false;
							createDialog "ComboLockUI";
							waitUntil {!dialog};
							dayz_actionInProgress = true;

							if (keypadCancel || {parseNumber DZE_Lock_Door == 0}) then {
								_combination_1 = floor(random 10);
								_combination_2 = floor(random 10);
								_combination_3 = floor(random 10);
								_combination = format["%1%2%3",_combination_1,_combination_2,_combination_3];
								DZE_Lock_Door = _combination;
							} else {
								_combination = DZE_Lock_Door;
							};
							_combinationDisplay = _combination;
						};

						if (_lockable == 4) exitwith { // 4 safe
							dayz_combination = "";
							dayz_selectedVault = objNull;

							createDialog "SafeKeyPad";
							waitUntil {!dialog};

							if (keypadCancel || {(parseNumber dayz_combination) > 9999} || {count (toArray (dayz_combination)) < 4}) then {
								_combination_1 = floor(random 10);
								_combination_2 = floor(random 10);
								_combination_3 = floor(random 10);
								_combination_4 = floor(random 10);
								_combination = format["%1%2%3%4",_combination_1,_combination_2,_combination_3,_combination_4];
								dayz_combination = _combination;
							} else {
								_combination = dayz_combination;
							};
							_combinationDisplay = _combination;
						};
					};

					_tmpbuilt setVariable ["CharacterID",_combination,true];
					if (DZE_permanentPlot) then {
						_tmpbuilt setVariable ["ownerPUID",dayz_playerUID,true];
						PVDZ_obj_Publish = [_combination,_tmpbuilt,[_dir,_location,dayz_playerUID],[],player,dayz_authKey];
						if (_lockable == 3) then {
							_friendsArr = [[dayz_playerUID,toArray (name player)]];
							_tmpbuilt setVariable ["doorfriends", _friendsArr, true];
							PVDZ_obj_Publish = [_combination,_tmpbuilt,[_dir,_location,dayz_playerUID,_vector],_friendsArr,player,dayz_authKey];
						};
					} else {
						PVDZ_obj_Publish = [_combination,_tmpbuilt,[_dir,_location],[],player,dayz_authKey];
					};
					publicVariableServer "PVDZ_obj_Publish";

					[format[localize "str_epoch_player_140",_combinationDisplay,_text],1] call dayz_rollingMessages;
                    systemChat format[localize "str_epoch_player_140",_combinationDisplay,_text];

				} else {
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
								PVDZ_obj_Publish = [dayz_characterID,_tmpbuilt,[_dir,_location,dayz_playerUID],_friendsArr,player,dayz_authKey];
							} else {
								PVDZ_obj_Publish = [dayz_characterID,_tmpbuilt,[_dir,_location,dayz_playerUID],[],player,dayz_authKey];
							};
						} else {
							PVDZ_obj_Publish = [dayz_characterID,_tmpbuilt,[_dir,_location],[],player,dayz_authKey];
						};
						publicVariableServer "PVDZ_obj_Publish";
					};
				};
				if (DZE_GodModeBase && {!(_classname in DZE_GodModeBaseExclude)}) then {
					_tmpbuilt addEventHandler ["HandleDamage",{false}];
				};
			} else {
				deleteVehicle _tmpbuilt;
				localize "str_epoch_player_46" call dayz_rollingMessages;
			};
		} else {
			deleteVehicle _tmpbuilt;
			localize "str_epoch_player_46" call dayz_rollingMessages;
		};
	} else {
		format[localize "str_epoch_player_47",_text,_reason] call dayz_rollingMessages;
	};
};

dayz_actionInProgress = false;
