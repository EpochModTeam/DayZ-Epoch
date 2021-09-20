///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DayZ Base Building
//
//	Author:		vbawol@veteranbastards.com
//	Updated by:	Victor the Cleaner
//	Date:		August 2021
//
//	- Players may no longer build objects outside the plot radius.
//	  This is calculated using the object's pivot point, not its geometry nor its bounding box.
//	- Players may move an object any distance or height within the plot boundary/sphere.
//	  Therefore, DZE_buildMaxMoveDistance and DZE_buildMaxHeightDistance are now obsolete.
//
//	- Players may move a small distance outside the plot radius, provided the object remains inside.	Enabled with DZE_PlotOzone.	Default: 10 meters.
//	- A line of helpers now appears through the plot's vertical axis to aid line-of-sight to the pole.	Enabled with DZE_AxialHelper.
//	  This may be useful for nearby plots that are grouped together, or where their radii overlap.
//
//	- Players may now cancel the build by fast movement, i.e. running, or fast walking on steep terrain.
//	  This only applies when the player is holding the object. They may press F to release it, then run without cancelling.
//	  Crouch-walking or slow-walking will not cancel the build.
//	  Pressing ESC will also cancel without opening the exit menu.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

if (dayz_actionInProgress) exitWith {localize "str_epoch_player_40" call dayz_rollingMessages;};	// Building already in progress.
dayz_actionInProgress = true;

///////////////////////////////////////////////////////////////////////////////////////////////////
//
//				_misc_checks function
//
///////////////////////////////////////////////////////////////////////////////////////////////////
local _misc_checks = {

	local _onLadder		= (getNumber (configFile >> "CfgMovesMaleSdr" >> "States" >> (animationState player) >> "onLadder")) == 1;
	local _inVehicle	= ((vehicle player) != player);
	local _ctime		= (player getVariable["combattimeout",0] >= diag_tickTime);
	local _reason		= "";

	call {
		if (_onLadder)		exitWith {_reason = "str_player_21"};		// You cannot do this while you are on a ladder.
		if (dayz_isSwimming)	exitWith {_reason = "str_player_26"};		// You cannot do this while you are in the water.
		if (_inVehicle)		exitWith {_reason = "str_epoch_player_42"};	// You cannot build while in a vehicle.
		if (_ctime)		exitWith {_reason = "str_epoch_player_43"};	// You cannot build while in combat.
	};

	_reason;
};

///////////////////////////////////////////////////////////////////////////////////////////////////
//
//				_cancel_build function
//
///////////////////////////////////////////////////////////////////////////////////////////////////
_cancel_build = {

	_isOk	= false;
	_cancel	= true;
	detach _object;
	deleteVehicle _object;
	detach _objectHelper;
	deleteVehicle _objectHelper;
};

///////////////////////////////////////////////////////////////////////////////////////////////////

local _reason = call _misc_checks;

if (_reason != "") exitWith {
	dayz_actionInProgress = false;
	localize _reason call dayz_rollingMessages;
};

///////////////////////////////////////////////////////////////////////////////////////////////////
//
//					Initialise
//
///////////////////////////////////////////////////////////////////////////////////////////////////
DZE_buildItem = _this;	// buildable classname, e.g. "full_cinder_wall_kit"

DZE_5 = false;		// space bar - build
DZE_4 = false;		// Q Key - rotate left
DZE_6 = false;		// E Key - rotate right
DZE_F = false;		// F Key - hold/release

DZE_Q = false;		// PgUp
DZE_Z = false;		// PgDn
DZE_Q_alt = false;	// Alt + PgUp
DZE_Z_alt = false;	// Alt + PgDn
DZE_Q_ctrl = false;	// Ctrl + PgUp
DZE_Z_ctrl = false;	// Ctrl + PgDn

DZE_cancelBuilding	= false;	// ESC Key
DZE_updateVec		= false;	// vector changed via build_vectors.sqf
DZE_memDir		= 0;		// object rotation (Q/E keys)
DZE_memForBack		= 0;		// pitch forward/back
DZE_memLeftRight	= 0;		// bank left/right

call gear_ui_init;
closeDialog 1;

local _playerPos	= [player] call FNC_GetPos;
local _buildCheck	= [_playerPos, DZE_buildItem, true] call dze_buildChecks;	// input: [player position, kit classname, toolcheck] // return value: [_canBuild, _isPole, _nearestPole];
local _canBuild		= (_buildCheck select 0);					// bool

///////////////////////////////////////////////////////////////////////////////////////////////////

if (_canBuild) then {

	player playActionNow "Crouch";	// prevent instant cancel from moving too fast

	local _isPole		= (_buildCheck select 1);		// bool
	local _nearestPole	= (_buildCheck select 2);		// object or objNull
	local _findNearestPole	= [];
	local _inRadius		= (!_isPole && !(isNull _nearestPole));	// bool // is the player attempting to place an object within a plot boundary?
	local _radius		= DZE_PlotPole select 0;		// max distance from plot pole an object may be built
	local _minDistance	= DZE_PlotPole select 1;		// minimum distance between plot poles
	local _diameter		= _radius * 2;				// plot diameter
	local _ozone		= _radius + DZE_PlotOzone;		// zone outside plot radius where a player may stand before placing an object, but the object must remain within the plot radius
	local _isBHL		= (DZE_BuildHeightLimit > 0);		// is build height limit enabled
	local _BHL		= DZE_BuildHeightLimit;			// short name
	local _sphere		= "Sign_sphere100cm_EP1";		// helper classname
	local _polePos		= [];
	local _pArray		= [];
	local _isAdmin		= dayz_playerUID in DZE_PlotManagementAdmins;
	local _dir		= 0;
	local _vector		= [];
	local _object		= objNull;
	local _objectPos	= [];
	local _zPos		= 0;
	local _objectHelper	= objNull;
	local _objectHelperPos	= [];
	local _walk		= "amovpercmwlk";	// animation state substrings
	local _run		= "amovpercmrun";
	local _sprint	= "meva";

	helperDetach		= false;
	local _isOk		= true;
	local _cancel		= false;

	///////////////////////////////////////////////////////////////////////////////////////////
	//
	//	create vertical helpers at the plot center to which the object will be assigned
	//
	///////////////////////////////////////////////////////////////////////////////////////////

	if (_inRadius && DZE_AxialHelper) then {

		local _density	= 4;						// minimum distance between helpers
		local _segments	= floor (_diameter / _density);			// total helpers = _segments + 1
		local _segments	= _segments - (_segments % 2);			// get even number of segments
		local _spacing	= -(_diameter / _segments);			// actual distance between helpers
		local _zenith	= _radius;
		local _polePos	= [_nearestPole] call FNC_GetPos;

		if (!isNil "PP_Marks") then {
			_zenith = _zenith + _spacing;				// subtract upper and lower positions
		};

		for "_i" from _zenith to -_zenith step _spacing do {		// start at the zenith
			local _offset	= [0,0,_i];				// decrement towards nadir
			local _pos	= _nearestPole modelToWorld _offset;	// translate to world
			local _pZ	= (_pos select 2);			// get Z height

			if (_pZ < 0) exitWith {};				// too low

			local _texture = DZE_plotGreen;				// green
			if (_isBHL && (_pZ > _BHL)) then {			// too high
				_texture = DZE_plotRed;				// red
			};
			local _helper = _sphere createVehicleLocal [0,0,0];	// create helper
			_helper setObjectTexture _texture;			// add colour

			_pos set [2,(_polePos select 2) + _i];			// align to radial height

			if (surfaceIsWater _pos) then {				// adjust for land and sea
				_helper setPosASL _pos;
			} else {
				_helper setPosATL _pos;
			};
			_pArray = _pArray + [_helper];				// record helper
		};
	};
	
	///////////////////////////////////////////////////////////////////////////////////////////
	//
	//				get config data
	//
	///////////////////////////////////////////////////////////////////////////////////////////

	local _classname	= getText	(configFile >> "CfgMagazines" >> DZE_buildItem >> "ItemActions" >> "Build" >> "create");	// e.g. "CinderWall_DZ"
	local _classnametmp	= _classname;

	local _text		= getText	(configFile >> "CfgVehicles" >> _classname >> "displayName");					// e.g. "Cinder Wall Full"
	local _ghost		= getText	(configFile >> "CfgVehicles" >> _classname >> "ghostpreview");					// e.g. "CinderWall_Preview_DZ"
	local _lockable		= getNumber	(configFile >> "CfgVehicles" >> _classname >> "lockable");					// defaults to 0
	local _offset		= getArray	(configFile >> "CfgVehicles" >> _classname >> "offset");

	local _isAllowedUnderGround = 1;

	if (isNumber (configFile >> "CfgVehicles" >> _classname >> "nounderground")) then {
		_isAllowedUnderGround = getNumber(configFile >> "CfgVehicles" >> _classname >> "nounderground");
	};

	if (_ghost != "") then {
		_classname = _ghost;
	};

	///////////////////////////////////////////////////////////////////////////////////////////
	//
	//		create ghost object and helper during pre-build
	//
	///////////////////////////////////////////////////////////////////////////////////////////

	_object = _classname createVehicle [0,0,0];

	if (count _offset == 0) then {
		_offset = [0, abs (((boundingBox _object) select 0) select 1), 0];
	};

	_objectHelper = "Sign_sphere10cm_EP1" createVehicle [0,0,0];
	_objectHelper setobjecttexture [0,"#(argb,8,8,3)color(0,1,0,1,ca)"];	// solid helper sphere

	local _tempPos = player modelToWorld _offset;

	_dir = getDir player;
	_objectHelper setDir _dir;
	_object setDir _dir;

	if ((_isAllowedUnderGround == 0) && ((_tempPos select 2) < (_offset select 2))) then {

		_tempPos set [2, _offset select 2];	// raise up to ground/sea level
	};

	if (surfaceIsWater _tempPos) then {
		_objectHelper setPosASL _tempPos;
		_object setPosASL _tempPos;
	} else {
		_objectHelper setPosATL _tempPos;
		_object setPosATL _tempPos;
	};

	_objectHelper attachTo [player];
	_object attachTo [_objectHelper];

	if (isClass (configFile >> "SnapBuilding" >> _classname)) then {
		["","","",["Init", _object, _classname, _objectHelper]] spawn snap_build;
	};
	if !(DZE_buildItem in DZE_noRotate) then {
		["","","",["Init", "Init", 0]] spawn build_vectors;
	};

	///////////////////////////////////////////////////////////////////////////////////////////
	//
	//				_change_height function
	//
	///////////////////////////////////////////////////////////////////////////////////////////

	local _change_height = {
		local _delta = _this;
		local _helperPos = [_objectHelper] call FNC_GetPos;

		if (!helperDetach) then {
			detach _objectHelper;
		};

		_helperPos set [2,((_helperPos select 2) + _delta)];

		if (_isAllowedUnderGround == 0 && (_helperPos select 2) < (_offset select 2)) then {
			_helperPos set [2, _offset select 2];
		};

		if (surfaceIsWater _helperPos) then {
			_objectHelper setPosASL _helperPos;
		} else {
			_objectHelper setPosATL _helperPos;
		};
		if (!helperDetach) then {
			_objectHelper attachTo [player];
		};

		[_objectHelper, [DZE_memForBack, DZE_memLeftRight, DZE_memDir]] call fnc_SetPitchBankYaw;

		_helperPos = _objectHelper modelToWorld [0,0,0];
		local _objectPos = _object modelToWorld [0,0,0];
	};

	///////////////////////////////////////////////////////////////////////////////////////////
	//
	//				_rotate function
	//
	///////////////////////////////////////////////////////////////////////////////////////////

	local _rotate = {
		local _degrees = [45, DZE_curDegree] select DZE_dirWithDegrees;

		if (_this == -1) then {_degrees = -_degrees};	// Q Key
		DZE_memDir = DZE_memDir + _degrees;

		[_objectHelper, [DZE_memForBack, DZE_memLeftRight, DZE_memDir]] call fnc_SetPitchBankYaw;
	};

	///////////////////////////////////////////////////////////////////////////////////////////
	//
	//				_attach function
	//
	///////////////////////////////////////////////////////////////////////////////////////////

	local _attach = {
		_objectHelper attachTo [player];

		DZE_memDir = DZE_memDir - (getDir player);
		[_objectHelper, [DZE_memForBack, DZE_memLeftRight, DZE_memDir]] call fnc_SetPitchBankYaw;

		helperDetach = false;
	};
	
	///////////////////////////////////////////////////////////////////////////////////////////
	//
	//				_detach function
	//
	///////////////////////////////////////////////////////////////////////////////////////////
	
	local _detach = {
		_objectHelperPos = getPosATL _objectHelper;
		detach _objectHelper;

		DZE_memDir = getDir _objectHelper;
		[_objectHelper, [DZE_memForBack, DZE_memLeftRight, DZE_memDir]] call fnc_SetPitchBankYaw;

		_objectHelper setPosATL _objectHelperPos;
		_objectHelper setVelocity [0,0,0];

		helperDetach = true;
	};

	///////////////////////////////////////////////////////////////////////////////////////////
	//
	//		 			Main Loop
	//
	///////////////////////////////////////////////////////////////////////////////////////////

	while {_isOk} do {

		// raise/lower object
		call {
			if (DZE_Q)	exitWith {DZE_Q = false;	 0.10 call _change_height;};	// +10cm
			if (DZE_Z)	exitWith {DZE_Z = false;	-0.10 call _change_height;};	// -10cm
			if (DZE_Q_alt)	exitWith {DZE_Q_alt = false;	 1.00 call _change_height;};	// +1m
			if (DZE_Z_alt)	exitWith {DZE_Z_alt = false;	-1.00 call _change_height;};	// -1m
			if (DZE_Q_ctrl)	exitWith {DZE_Q_ctrl = false;	 0.01 call _change_height;};	// +1cm
			if (DZE_Z_ctrl)	exitWith {DZE_Z_ctrl = false;	-0.01 call _change_height;};	// -1cm
		};

		// rotate object
		call {
			if (DZE_4) exitWith {DZE_4 = false; -1 call _rotate;};	// Q Key
			if (DZE_6) exitWith {DZE_6 = false;  1 call _rotate;};	// E Key
		};

		// vector object
		if (DZE_updateVec) then {
			[_objectHelper, [DZE_memForBack, DZE_memLeftRight, DZE_memDir]] call fnc_SetPitchBankYaw;
			DZE_updateVec = false;
		};

		local _canDo = (!r_drag_sqf && !r_player_unconscious);

		// hold or release object
		if (DZE_F and _canDo) then {		// F Key

			if (helperDetach) then {

				call _attach;
			} else {
				call _detach;
			};

			DZE_F = false;
		};

		uiSleep 0.1; // default: 0.5

		// Swimming, in vehicle, on ladder, in combat
		_reason = call _misc_checks;
		if (_reason != "") exitWith {
			call _cancel_build;
			_reason = localize _reason;
		};

		///////////////////////////////////////////////////////////////////////////////////
		//
		//				player has plot pole
		//
		///////////////////////////////////////////////////////////////////////////////////

		_objectPos = [_object] call FNC_GetPos;	// object position

		if (_isPole) then {
			_findNearestPole = _objectPos nearEntities ["Plastic_Pole_EP1_DZ", _minDistance];	// check for nearby plots within range of current pole
			_findNearestPole = _findNearestPole - [_object];					// exclude current pole
		};
		if (count _findNearestPole > 0) exitWith {							// pole is too close to another plot
			call _cancel_build;
			_reason	= format[localize "str_epoch_player_44", _minDistance];
		};

		///////////////////////////////////////////////////////////////////////////////////
		//
		//			object was initially within plot radius
		//
		///////////////////////////////////////////////////////////////////////////////////

		_playerPos = [player] call FNC_GetPos;	// player's current position

		if (_inRadius) then {
			_polePos = [_nearestPole] call FNC_GetPos;

			call {
				if ((_polePos distance _playerPos) > _ozone)	exitWith {_reason = localize "STR_EPOCH_BUILD_MOVE_TOO_FAR"};		// You moved too far!
				if ((_polePos distance _objectPos) > _radius)	exitWith {_reason = localize "STR_EPOCH_BUILD_OBJ_MOVE_TOO_FAR"};	// Object moved too far!
			};
		};
		if (_reason != "") exitWith {
			call _cancel_build;
		};

		///////////////////////////////////////////////////////////////////////////////////
		//
		//				other checks
		//
		///////////////////////////////////////////////////////////////////////////////////

		local _anim		= animationState player;
		local _speed		= floor(abs(speed player));
		local _isWalking	= ([_walk, _anim] call fnc_inString);
		local _isRunning	= ([_run, _anim] call fnc_inString);
		local _isSprinting	= ([_sprint, _anim] call fnc_inString);
		local _isFastWalking	= (_isWalking && (_speed >= 10));					// fast walking on steep incline
		local _tooFast		= (!helperDetach && (_isRunning || _isSprinting || _isFastWalking));	// fast movement on level ground
		local _tooHigh		= (_isBHL && ((_objectPos select 2) > _BHL));

		call {
			if (_tooFast)		exitWith {_reason = localize "STR_EPOCH_BUILD_MOVE_TOO_FAST"};					// You moved too fast!
			if (_tooHigh)		exitWith {_reason = format[localize "STR_EPOCH_PLAYER_168", _BHL]};				// object moved above height limit
			if (!canbuild)		exitWith {_reason = format[localize "STR_EPOCH_PLAYER_136", localize "STR_EPOCH_TRADER"]};	// trader nearby
			if (DZE_cancelBuilding)	exitWith {_reason = localize "STR_EPOCH_PLAYER_46"};						// ESC Key
		};
		if (_reason != "") exitWith {
			call _cancel_build;
		};

		///////////////////////////////////////////////////////////////////////////////////
		//
		//			space bar - place object
		//
		///////////////////////////////////////////////////////////////////////////////////

		if (DZE_5) exitWith {
			_isOk = false;
			_objectPos = [_object] call FNC_GetPos;
			_zPos = (_objectPos select 2);
			detach _object;
			_dir = getDir _object;
			_vector = [(vectorDir _object),(vectorUp _object)];
			deleteVehicle _object;
			detach _objectHelper;
			deleteVehicle _objectHelper;
		};
	};

	///////////////////////////////////////////////////////////////////////////////////////////

	// Delete Helper Array
	{deleteVehicle _x;} count _pArray;
	_pArray = [];

	///////////////////////////////////////////////////////////////////////////////////////////
	//
	//	Double check that object/pole height does not violate distance requirements
	//
	///////////////////////////////////////////////////////////////////////////////////////////

	if (!_cancel && (_isAllowedUnderGround == 0) && (_zPos < (_offset select 2))) then {		// object/pole was improperly placed below ground

		_objectPos set [2, _offset select 2];							// raise up to ground/sea level

		if (_isPole) then {									// check for nearby plots within range
			local _findNearestPole = [];
			_findNearestPole = _objectPos nearEntities ["Plastic_Pole_EP1_DZ", _minDistance];
			_findNearestPole = _findNearestPole - [_object];

			if (count _findNearestPole > 0) then {
				_cancel = true;
				_reason	= format[localize "str_epoch_player_44", _minDistance];		// pole is too close to another plot
			};
		} else {
			if (_inRadius && ((_polePos distance _objectPos) > _radius)) then {
				_cancel = true;
				_reason = localize "STR_EPOCH_BUILD_OBJ_MOVE_TOO_FAR";			// object has moved outside radius
			};
		};
	};

	///////////////////////////////////////////////////////////////////////////////////////////
	//
	//				You cannot build on a road.
	//
	///////////////////////////////////////////////////////////////////////////////////////////

	if (!_cancel && !DZE_BuildOnRoads && (isOnRoad _objectPos)) then {
		_cancel = true;
		_reason = localize "STR_EPOCH_BUILD_FAIL_ROAD";
	};

	///////////////////////////////////////////////////////////////////////////////////////////
	//
	//			You do not have access to build on this plot.
	//
	///////////////////////////////////////////////////////////////////////////////////////////

	if (!_cancel) then {
	
		_findNearestPole = _objectPos nearEntities ["Plastic_Pole_EP1_DZ", _minDistance];	// check for nearby plots within range of current pole
		_findNearestPole = _findNearestPole - [_object];					// exclude current pole

		if (count _findNearestPole > 0) then {							// is near plot

			_nearestPole = _findNearestPole select 0;					// get first entry
			_ownerID = _nearestPole getVariable["CharacterID","0"];

			if (dayz_characterID != _ownerID) then {					// not the owner
				_buildcheck	= [player, _nearestPole] call FNC_check_access;
				_isowner	= _buildcheck select 0;
				_isfriendly	= ((_buildcheck select 1) || (_buildcheck select 3));
				if (!_isowner && !_isfriendly) then {
					_cancel = true;
				};
				if (_cancel) then {
					_reason = localize "STR_EPOCH_PLAYER_134";	// You do not have access to build on this plot.
				};
			};
		};
	};

	///////////////////////////////////////////////////////////////////////////////////////////
	//
	//	You cannot build. There are too many objects within "DZE_maintainRange" m.
	//
	///////////////////////////////////////////////////////////////////////////////////////////

	if (!_cancel) then {
		_buildables = DZE_maintainClasses + DZE_LockableStorage + ["DZ_storage_base"];

		if (_isPole && ((count (nearestObjects [_objectPos, _buildables, DZE_maintainRange])) >= DZE_BuildingLimit)) then {	// object's position
			_cancel = true;
			_reason = format[localize "str_epoch_player_41", floor DZE_maintainRange];	// You cannot build. There are too many objects within %1m.
		};
	};

	///////////////////////////////////////////////////////////////////////////////////////////
	//
	//	You can't build a "displayName" within "_distance" meters of a safe zone.
	//
	///////////////////////////////////////////////////////////////////////////////////////////

	if (!_cancel) then {

		local _checkOK	= false;
		local _distance	= DZE_SafeZoneNoBuildDistance;
		{
			if (typeName _x == "ARRAY") then {
				if (_x select 0 == _classname) then {
					_checkOK = true;
					_distance = _x select 1;
				};
			} else {
				if (_x == _classname) then {
					_checkOK = true;
				};
			};
			if (_checkOK) exitWith {};
		} count DZE_SafeZoneNoBuildItems;

		if (_checkOK && !_isAdmin) then {
			_canBuild = !([_objectPos, _distance] call DZE_SafeZonePosCheck);	// object's position
		};
		if (!_canBuild) then {
			_cancel = true;
			_reason = format [localize "STR_EPOCH_PLAYER_166", _text, _distance];	// You can't build a %1 within %2 meters of a safe zone.
		};
	};

	///////////////////////////////////////////////////////////////////////////////////////////
	//
	//	You can't build a "displayName" within "DZE_NoBuildNearDistance" meters of a "class".
	//
	///////////////////////////////////////////////////////////////////////////////////////////

	if (!_cancel) then {
		if ((count DZE_NoBuildNear > 0) && !_isAdmin) then {
			_near = (nearestObjects [_objectPos, DZE_NoBuildNear, DZE_NoBuildNearDistance]);	// object's position

			if ((count _near) > 0) then {
				_cancel = true;
				_reason = format [localize "STR_EPOCH_PLAYER_167", _text, DZE_NoBuildNearDistance, typeOf (_near select 0)];	// You can't build a %1 within %2 meters of a %3.
			};
		};
	};

	///////////////////////////////////////////////////////////////////////////////////////////

	if (!_cancel) then {

		_classname = _classnametmp;
		local _tmpbuilt = _classname createVehicle [0,0,0];
		//_tmpbuilt setdir _dir; // setdir is incompatible with setVectorDirAndUp and should not be used together on the same object https://community.bistudio.com/wiki/setVectorDirAndUp
		_tmpbuilt setVariable["memDir", _dir, true];
		local _position = _objectPos;

		_tmpbuilt setVectorDirAndUp _vector;

		if (surfaceIsWater _position) then {
			_tmpbuilt setPosASL _position;
			_position = ASLtoATL _position;
		} else {
			_tmpbuilt setPosATL _position;
		};

		//format[localize "str_epoch_player_138", _text] call dayz_rollingMessages;	// Placing %1, move to cancel.

		local _limit = 3;

		if (DZE_StaticConstructionCount > 0) then {
			_limit = DZE_StaticConstructionCount;
		} else {
			if (isNumber (configFile >> "CfgVehicles" >> _classname >> "constructioncount")) then {
				_limit = getNumber(configFile >> "CfgVehicles" >> _classname >> "constructioncount");
			};
		};

		_isOk = true;
		local _counter = 0;
		local _proceed = false;

		while {_isOk} do {
			format[localize "str_epoch_player_139", _text, (_counter + 1), _limit] call dayz_rollingMessages; // Constructing %1 stage %2 of %3, move to cancel.

			[player, (getPosATL player), 40, "repair"] spawn fnc_alertZombies;

			local _finished = ["Medic", 1, {player getVariable["combattimeout", 0] >= diag_tickTime or DZE_cancelBuilding}] call fn_loopAction;

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

			local _num_removed = ([player, DZE_buildItem] call BIS_fnc_invRemove); // remove item's magazine from inventory

			if (_num_removed == 1) then {

				local _friendsArr = [];

				["Working", 0, [20,10,5,0]] call dayz_NutritionSystem;
				call player_forceSave;

				[format[localize "str_build_01", _text], 1] call dayz_rollingMessages;
				_tmpbuilt setVariable ["OEMPos", _position, true]; // store original location as a variable

				if (_lockable > 1) then { //if item has code lock on it

					local _combination		= "";
					local _combinationDisplay	= ""; //define new display
					local _combination_1_Display	= "";
					local _combination_1		= 0;
					local _combination_2		= 0;
					local _combination_3		= 0;
					local _combination_4		= 0;

					dayz_combination		= "";
					dayz_selectedVault		= objNull;

					call { // generate random combinations depending on item type

						///////////////////////////////////////////////////
						//
						//		2 Lockbox
						//
						///////////////////////////////////////////////////

						if (_lockable == 2) exitWith {

							createDialog "KeyPadUI";
							waitUntil {!dialog};

							_combinationDisplay = dayz_combination call fnc_lockCode;

							if (keypadCancel || {typeName _combinationDisplay == "SCALAR"}) then {

								_combination_1 = (floor(random 3)) + 100; // 100=red / 101=green / 102=blue
								_combination_2 = floor(random 10);
								_combination_3 = floor(random 10);

								_combination = format["%1%2%3",_combination_1,_combination_2,_combination_3];
								dayz_combination = _combination;

								call {
									if (_combination_1 == 100) exitWith {_combination_1_Display = localize "STR_TEAM_RED"};
									if (_combination_1 == 101) exitWith {_combination_1_Display = localize "STR_TEAM_GREEN"};
									if (_combination_1 == 102) exitWith {_combination_1_Display = localize "STR_TEAM_BLUE"};
								};
								_combinationDisplay = format["%1%2%3", _combination_1_Display, _combination_2, _combination_3];
							} else {
								_combination = dayz_combination;
							};
						};

						///////////////////////////////////////////////////
						//
						//		3 Combo Lock
						//
						///////////////////////////////////////////////////

						if (_lockable == 3) exitWith {

							DZE_topCombo	= 0;
							DZE_midCombo	= 0;
							DZE_botCombo	= 0;
							DZE_Lock_Door	= "";
							dayz_selectedDoor = objNull;

							dayz_actionInProgress = false;
							createDialog "ComboLockUI";
							waitUntil {!dialog};
							dayz_actionInProgress = true;

							if (keypadCancel || {parseNumber DZE_Lock_Door == 0}) then {

								_combination_1	= floor(random 10);
								_combination_2	= floor(random 10);
								_combination_3	= floor(random 10);

								_combination	= format["%1%2%3", _combination_1, _combination_2, _combination_3];

								DZE_Lock_Door = _combination;
							} else {
								_combination = DZE_Lock_Door;
							};
							if (_classname in ["WoodenGate_1_DZ","WoodenGate_2_DZ","WoodenGate_3_DZ","WoodenGate_4_DZ"]) then {
								GateMethod = DZE_Lock_Door;
							};

							_combinationDisplay = _combination;
						};

						///////////////////////////////////////////////////
						//
						//		4 Safe
						//
						///////////////////////////////////////////////////

						if (_lockable == 4) exitWith {

							createDialog "SafeKeyPad";
							waitUntil {!dialog};

							if (keypadCancel || {(parseNumber dayz_combination) > 9999} || {count (toArray (dayz_combination)) < 4}) then {

								_combination_1	= floor(random 10);
								_combination_2	= floor(random 10);
								_combination_3	= floor(random 10);
								_combination_4	= floor(random 10);

								_combination	= format["%1%2%3%4", _combination_1, _combination_2, _combination_3, _combination_4];

								dayz_combination = _combination;
							} else {
								_combination = dayz_combination;
							};
							_combinationDisplay = _combination;
						};
					};

					_tmpbuilt setVariable ["CharacterID", _combination, true];	// set combination as a character ID

					// call publish precompiled function with given args and send public variable to server to save item to database

					_tmpbuilt setVariable ["ownerPUID", dayz_playerUID, true];

					PVDZ_obj_Publish = [_combination, _tmpbuilt, [_dir, _position, dayz_playerUID, _vector], [], player, dayz_authKey];

					if (_lockable == 3) then {
						_friendsArr = [[dayz_playerUID, toArray (name player)]];
						_tmpbuilt setVariable ["doorfriends", _friendsArr, true];

						PVDZ_obj_Publish = [_combination, _tmpbuilt, [_dir, _position, dayz_playerUID, _vector], _friendsArr, player, dayz_authKey];
					};
					publicVariableServer "PVDZ_obj_Publish";

					[format[localize "str_epoch_player_140", _combinationDisplay, _text], 1] call dayz_rollingMessages; // display new combination
					systemChat format[localize "str_epoch_player_140", _combinationDisplay, _text];	// You have setup your %2. The combination is %1

				} else { // if not lockable item

					_tmpbuilt setVariable ["CharacterID", dayz_characterID, true];

					// fireplace
					if (_tmpbuilt isKindOf "Land_Fire_DZ") then { // if campfire, then spawn, but do not publish to database

						[_tmpbuilt, true] call dayz_inflame;
						_tmpbuilt spawn player_fireMonitor;
					} else {
						_tmpbuilt setVariable ["ownerPUID", dayz_playerUID, true];

						if (_isPole) then {

							_friendsArr = [[dayz_playerUID, toArray (name player)]];
							_tmpbuilt setVariable ["plotfriends", _friendsArr, true];

							PVDZ_obj_Publish = [dayz_characterID, _tmpbuilt, [_dir, _position, dayz_playerUID, _vector], _friendsArr, player, dayz_authKey];
						} else {
							PVDZ_obj_Publish = [dayz_characterID, _tmpbuilt, [_dir, _position, dayz_playerUID, _vector], [], player, dayz_authKey];
						};
						publicVariableServer "PVDZ_obj_Publish";
					};
				};
				if (DZE_GodModeBase && {!(_classname in DZE_GodModeBaseExclude)}) then {
					_tmpbuilt addEventHandler ["HandleDamage", {false}];
				};
			} else { // if magazine was not removed, cancel publish
				deleteVehicle _tmpbuilt;
				localize "str_epoch_player_46" call dayz_rollingMessages;		// Canceled building.
			};
		} else { // if player was interrupted cancel publish
			deleteVehicle _tmpbuilt;
			localize "str_epoch_player_46" call dayz_rollingMessages;			// Canceled building.
		};
	} else { // cancel build if passed _cancel arg was true or building on roads/trader city
		format[localize "str_epoch_player_47", _text, _reason] call dayz_rollingMessages;	// Canceled construction of %1, %2.
	};
};
DZE_buildItem = nil;
dayz_actionInProgress = false;
