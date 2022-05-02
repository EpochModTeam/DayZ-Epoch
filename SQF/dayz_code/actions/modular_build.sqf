/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DayZ Base Building
//
//	Author:		vbawol@veteranbastards.com
//	Updated by:	Victor the Cleaner
//	Date:		August 2021
//
//	- Players may not build objects outside the plot boundary.
//	- Distance from plot pole is calculated using the model center, not its ATL/ASL value.
//	- Players may move an object any distance or height within the plot boundary.
//
//	- Players may move a small distance outside the plot boundary, provided the object remains inside.	Enabled with DZE_PlotOzone.	Default: 10 meters.
//	- A line of helpers now appears through the plot's vertical axis to aid line-of-sight to the pole.	Enabled with DZE_AxialHelper.
//	  This may be useful for nearby plots that are grouped together, or where their radii overlap.
//
//	- Players may now cancel the build by fast movement, i.e. running, or fast walking on steep terrain.
//	  This only applies when the player is holding the object. They may press F to release it, then run without cancelling.
//	  Crouch-walking or slow-walking will not cancel the build.
//	  Pressing ESC will also cancel without opening the exit menu.
//
//	- A collision check is performed only if the held object is collidable, i.e. it has no ghost preview.
//	  Now the player will let go of the object, preventing them from being knocked across the map.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

if (dayz_actionInProgress) exitWith {localize "str_epoch_player_40" call dayz_rollingMessages;};	// Building already in progress.
dayz_actionInProgress = true;

///////////////////////////////////////////////////////////////////////////////////////////////////
//
//					Miscellaneous Checks
//
///////////////////////////////////////////////////////////////////////////////////////////////////

local _misc_checks = {

	local _inCombat		= (player getVariable["combattimeout",0] >= diag_tickTime);
	local _inVehicle	= ((vehicle player) != player);
	local _onLadder		= (getNumber (configFile >> "CfgMovesMaleSdr" >> "States" >> (animationState player) >> "onLadder")) == 1;
	local _reason		= "";

	call {
		if (_inCombat)		exitWith {_reason = "str_epoch_player_43"};	// You cannot build while in combat.
		if (_inVehicle)		exitWith {_reason = "str_epoch_player_42"};	// You cannot build while in a vehicle.
		if (_onLadder)		exitWith {_reason = "str_player_21"};		// You cannot do this while you are on a ladder.
		if (dayz_isSwimming)	exitWith {_reason = "str_player_26"};		// You cannot do this while you are in the water.
	};

	_reason;
};

///////////////////////////////////////////////////////////////////////////////////////////////////

local _reason = call _misc_checks;

if (_reason != "") exitWith {
	dayz_actionInProgress = false;
	localize _reason call dayz_rollingMessages;
};

call gear_ui_init;
closeDialog 1;

DZE_buildItem		= _this;							// CfgMagazines class, e.g. "full_cinder_wall_kit"
local _playerPos	= [player] call FNC_GetPos;
local _buildCheck	= [_playerPos, DZE_buildItem, true] call dze_buildChecks;	// input: [player position, class, toolcheck] // return value: [_canBuild, _isPole, _nearestPole];
local _canBuild		= _buildCheck select 0;						// bool

if (_canBuild) then {

	///////////////////////////////////////////////////////////////////////////////////////////
	//
	//				Initialise
	//
	///////////////////////////////////////////////////////////////////////////////////////////

	local _wasStanding	= ["perc", animationState player] call fnc_inString;

	player playActionNow "PlayerCrouch";					// prevent instant cancel from moving too fast

	local _isPole		= _buildCheck select 1;				// bool
	local _nearestPole	= _buildCheck select 2;				// object or objNull
	local _findNearestPole	= [];
	local _inRadius		= (!_isPole && !(isNull _nearestPole));		// is the player attempting to place an object within a plot boundary?
	local _radius		= DZE_PlotPole select 0;			// max distance from plot pole an object may be built
	local _minDistance	= DZE_PlotPole select 1;			// minimum distance between plot poles
	local _diameter		= _radius * 2;					// plot diameter
	local _ozone		= _radius + DZE_PlotOzone;			// zone outside plot radius where a player may stand before placing an object, but the object must remain within the plot radius
	local _isBHL		= DZE_BuildHeightLimit > 0;			// is build height limit enabled
	local _BHL		= DZE_BuildHeightLimit;				// short name
	local _sphere		= "Sign_sphere100cm_EP1";			// axial helper class name
	local _polePos		= [];
	local _pArray		= [];						// used to store axial helper objects
	local _isAdmin		= dayz_playerUID in DZE_PlotManagementAdmins;

	local _dir		= 0;						// object direction
	local _vector		= [];						// object vector
	local _object		= objNull;
	local _objectHelper	= objNull;
	local _objectHelperPos	= [];
	local _noColor		= [0,"#(argb,8,8,3)color(0,0,0,0,ca)"];		// transparent helper color

	local _boundingCenter	= [];						// model center offset
	local _modelOffset	= 0;						// model center Z offset
	local _modelBase	= objNull;					// Attached to logical base of model
	local _modelBasePos	= [];
	local _modelCenter	= objNull;					// Attached to logical center of model
	local _modelCenterPos	= [];
	local _modelCenterPrevPos = [];
	useModelCenter		= 0;						// use visual center of model instead of base when determining transforms and ground collision
	modelSelect		= objNull;

	local _tooLow		= false;					// warn player object cannot go below ground
	local _isOnWater	= false;					// object placed in or above water
	local _heightASL	= 0;						// test if object is below max sea level
	local _minHeight	= 0;						// used for nounderground
	local _startPos		= [];
	local _playerASL	= 0;
	local _startHeight	= 0;						// raise object up on creation if necessary
	local _staticOffset	= 0;
	local _staticOffsetSet	= false;
	local _isStaticWeapon	= false;
	local _vectoringEnabled	= false;
	local _snappingEnabled	= false;
	local _snapList		= [];						// helper panel array of valid snapping points
	local _snapTabMax	= 0;						// hotkey index
	local _snapSelMax	= 0;						// snapping point index
	local _points		= [];						// snapping point array

	local _distFromPlot	= "-";
	if (!isNull _nearestPole) then {_distFromPlot = "0";};

	local _degreeCount	= count DZE_vectorDegrees;			// index count of degree array
	local _refreshDist	= 0;						// init snap auto-refresh distance
	local _OFF		= localize "STR_EPOCH_ACTION_SNAP_OFF";
	DZR_snapRefresh		= false;					// notify snap functions an auto-refresh is in progress
	skipUpdates		= false;					// skip over multiple snapActionState updates from single keypress
	distanceFromPlot	= 0;						// realtime updates on snap building panel
	DZE_snapRadius		= 0;
	DZE_SnapTabIdx		= 0;						// tab hotkey array index
	DZE_SnapSelIdx		= -2;						// array of object snapping points
	DZE_nowBuilding		= false;					// notify snap build so it can clean up helpers
	snapGizmosNearby	= [];

	local _walk		= "amovpercmwlk";				// animation state substrings
	local _run		= "amovpercmrun";
	local _sprint		= "meva";					// evasive manoeuvre
	local _collisionCheck	= false;
	local _hitSfx		= [[0,1,3,5],4] call fn_shuffleArray;		// used in collision check
	local _hitIdx		= 0;
	local _hitCount		= 4;
	local _scream		= "z_scream_";					// male Sfx class
	local _scrSfx		= [[0,1,2,3],4] call fn_shuffleArray;		// male scream index
	local _scrIdx		= 0;
	local _scrCount		= 4;
	local _isWoman		= getText(configFile >> "cfgVehicles" >> (typeOf player) >> "TextSingular") == "Woman";
	if (_isWoman) then {
		_scream		= _scream + "w_";				// female Sfx class
		_scrSfx		= [[1,3,4],3] call fn_shuffleArray;		// female scream index
		_scrCount	= 3;
	};

	local _isOk		= true;
	local _cancel		= false;

	DZE_Q			= false;	// PgUp
	DZE_Z			= false;	// PgDn
	DZE_Q_alt		= false;	// Alt-PgUp
	DZE_Z_alt		= false;	// Alt-PgDn
	DZE_Q_ctrl		= false;	// Ctrl-PgUp
	DZE_Z_ctrl		= false;	// Ctrl-PgDn
	DZE_5			= false;	// space bar - build
	DZE_4			= false;	// Q Key - rotate left
	DZE_6			= false;	// E Key - rotate right
	DZE_F			= false;	// F Key - hold/release
	DZE_P			= false;	// P Key - show/hide plot pole
	DZE_T			= false;	// T Key - terrain align
	DZE_L			= false;	// L Key - local mode
	DZE_H			= false;	// H Key - hide/unhide panel
	DZE_LEFT		= false;	// Left Arrow Key - Bank Left
	DZE_RIGHT		= false;	// Right Arrow Key - Bank Right
	DZE_UP			= false;	// Up Arrow Key - Pitch Forward
	DZE_DOWN		= false;	// Down Arrow Key - Pitch Back
	DZE_MINUS		= false;	// Minus Key - Decrease Degrees
	DZE_PLUS		= false;	// Plus Key (=+) - Increase Degrees
	DZE_BACK		= false;	// Backspace Key - reset vectors
	DZE_TAB			= false;	// Tab Key - Next Snap
	DZE_TAB_SHIFT		= false;	// Shift-Tab - Prev Snap
	DZE_cancelBuilding	= false;	// ESC Key

	///////////////////////////////////////////////////////////////////////////////////////////
	//
	//					Axial Helper
	//
	///////////////////////////////////////////////////////////////////////////////////////////

	local _axial_helper = {		// Create vertical helpers at the plot center to which the object will be assigned

		if !(DZE_AxialHelper && _inRadius) exitWith {};

		local _density	= 4;						// minimum distance between helpers
		local _segments	= floor (_diameter / _density);			// total helpers = _segments + 1
		local _segments	= _segments - (_segments % 2);			// get even number of segments
		local _spacing	= -(_diameter / _segments);			// actual distance between helpers
		local _zenith	= _radius;
		local _color	= [DZE_plotGreen, DZE_plotGreen];
		if (_isBHL && DZE_HeightLimitColor) then {
			_color set [1, DZE_plotRed];				// red helpers above building height limit
		};

		if (!isNil "PP_Marks") then {
			_zenith = _zenith + _spacing;				// subtract upper and lower positions
		};

		for "_i" from _zenith to -_zenith step _spacing do {		// decrement from zenith to nadir
			local _helper = _sphere createVehicleLocal [0,0,0];	// create helper
			_helper setObjectTexture _noColor;

			_helper attachTo [_nearestPole, [0,0,_i]];		// pre-position
			uiSleep 0.001;
			local _height = ([_helper] call FNC_GetPos) select 2;	// test ATL/ASL

			if (_height < 0) exitWith {deleteVehicle _helper};	// prevent placing below ground/sea

			local _texture = _color select (_height > _BHL);	// red if too high
			_helper setObjectTexture _texture;			// or green

			_pArray = _pArray + [_helper];				// record helper
		};
	};

	///////////////////////////////////////////////////////////////////////////////////////////
	//
	//					Setup Object
	//
	///////////////////////////////////////////////////////////////////////////////////////////

	local _setup_object = {

		if (!_staticOffsetSet) then {
			_object setVectorUp [0,0,1];
			_staticOffset = ((getPosASL _object) select 2) - ((getPosASL _modelBase) select 2);
			_staticOffsetSet = true;
		};

		DZE_updateVec		= false;	// trigger update on true
		DZE_memDir		= 0;		// object rotation (Q/E keys)
		DZE_memForBack		= 0;		// pitch forward/back
		DZE_memLeftRight	= 0;		// bank left/right

		_tooLow = false;

		_dir = getDir player;
		_objectHelper setDir _dir;

		modelSelect	= [_modelBase, _modelCenter] select useModelCenter;		// substitute base with center if required
		_visualBase = [0,0,[_modelOffset,0] select useModelCenter];			// update visual position
		_object attachTo [_objectHelper, _visualBase];					// align to helper

		_minHeight	= _offset select 2;						// min Z height allowed
		_startPos	= player modelToWorld _offset;					// AGL = ATL/ASLW (variable height over ocean waves)
		_playerASL	= (getPosASL player) select 2;					// player ASL height

		if (surfaceIsWater _startPos) then {						// if object in/over water
			_startPos set [2, _playerASL + _minHeight];				// match player height + min height
		};
		_startHeight = _startPos select 2;						// current start height

		if ((_isAllowedUnderGround == 0) && (_startHeight < _minHeight)) then {		// if too low
			_startPos set [2, _minHeight];						// raise up
		};

		if (surfaceIsWater _startPos) then {						// adjust for land and sea
			_objectHelper setPosASL _startPos;
		} else {
			_objectHelper setPosATL _startPos;
		};

		_objectHelper attachTo [player];
		helperDetach = false;

		uiSleep 0.05;

		_modelCenterPrevPos = getPosASL _modelCenter;					// used in snap auto-refresh check
	};

	///////////////////////////////////////////////////////////////////////////////////////////
	//
	//					Player is Stopped
	//
	///////////////////////////////////////////////////////////////////////////////////////////

	_isStopped = {
		local _stopped = ["mstp", animationState player] call fnc_inString;

		_stopped;
	};

	///////////////////////////////////////////////////////////////////////////////////////////
	//
	//					Move Check
	//
	///////////////////////////////////////////////////////////////////////////////////////////

	_moveCheck = {
		// if the object is attached and the player is still moving in some way
		local _isMoving = (!helperDetach && (speed player != 0 || {!(call _isStopped)}));
	
		_isMoving;
	};

	///////////////////////////////////////////////////////////////////////////////////////////
	//
	//					Change Height
	//
	///////////////////////////////////////////////////////////////////////////////////////////

	local _change_height = {
		if (call _moveCheck) exitWith {};

		local _distance		= _this;						// height vector
		local _level		= "";							// ground/sea level message
		local _notify		= false;						// notify player that object is too low

		local _zHeightOld	= 0;
		local _zHeightNew	= 0;
		local _terrainOld	= true;
		local _terrainNew	= true;

		local _helperPos	= getPosASL _objectHelper;				// helper ASL
		local _helperPosZ	= _helperPos select 2;					// helper ASL height
		local _modelOldASL	= getPosASL modelSelect;				// old pos
		local _modelOldASLZ	= _modelOldASL select 2;				// old pos height

		local _vector1		= [];							// safe vector
		local _vector2		= [];							// terrain intersect

		if (DZE_LOCAL_MODE) then {
			_vector1 = vectorUp _object;						// local vectorUp
		} else {
			_vector1 = [0,0,1];							// world vectorUp
		};
		{_vector1 set [_forEachIndex, _x * _distance];} forEach _vector1;		// vector distance

		local _modelNewASL	= [_modelOldASL, _vector1] call BIS_fnc_vectorAdd;	// new pos
		local _modelNewASLZ	= _modelNewASL select 2;				// new pos height
		local _modelNewATL	= ASLToATL _modelNewASL;				// new ATL
		local _modelNewATLZ	= _modelNewATL select 2;				// new ATL height

		if (surfaceIsWater _modelNewASL) then {
			_terrainNew = false;
			_zHeightNew = _modelNewASLZ;	// sea
		} else {
			_zHeightNew = _modelNewATLZ;	// terrain
		};

		///////////////////////////////////////////////////////////////////////////////////////////////////////
		//
		//					Object is below ground/sea
		//
		///////////////////////////////////////////////////////////////////////////////////////////////////////

		if ((_isAllowedUnderGround == 0) && {_zHeightNew < _minHeight}) then {		// if new height too low, raise up along vector

			if (!_tooLow && {_distance != 0}) then {
				_tooLow	= true;
				_notify	= true;							// notify once only while building
			};

			local _modelOldATL	= ASLToATL _modelOldASL;			// old ATL
			local _modelOldATLZ	= _modelOldATL select 2;			// old ATL height

			if (surfaceIsWater _modelOldASL) then {
				_terrainOld = false;
				_zHeightOld = _modelOldASLZ;	// sea
			} else {
				_zHeightOld = _modelOldATLZ;	// terrain
			};

			if (_zHeightOld < _minHeight) exitWith {				// if both points are too low
				_helperPos set [2, _helperPosZ + _minHeight - _zHeightOld];	// set to ground/sea level
			};

			///////////////////////////////////////////////////////////////////////////////////////////////
			//
			//			Simulate terrainIntersectAtASL from Arma 3
			//
			///////////////////////////////////////////////////////////////////////////////////////////////

			_modelNewASL	= +_modelOldASL;						// start pos
			_modelNewASLZ	= _modelNewASL select 2;					// current height
			local _vector2	= +_vector1;							// vector distance

			local _water	= !_terrainOld && !_terrainNew;					// water only
			local _terrain	= _terrainOld && _terrainNew;					// land only
			local _coast	= (_terrainOld || _terrainNew) && !(_terrainOld && _terrainNew);// coastline (water and land)
			local _heightZ	= _minHeight + 0.001;						// prevent asymptote curve

			local _count	= 0;								// loop counter

			if (_terrain) then {_modelNewASLZ = (ASLToATL _modelNewASL) select 2;};		// ignore loop if already touching ground/sea level

			while {_modelNewASLZ > _heightZ} do {						// while object is above ground/sea level

				{_vector2 set [_forEachIndex, _x * 0.5]} forEach _vector2;		// get half the previous vector distance

				local _newPos	= [_modelNewASL, _vector2] call BIS_fnc_vectorAdd;	// test start position + half previous distance
				local _newPosZ	= _newPos select 2;					// ASL height

				call {
					if (_water) exitWith {};					// transform is entirely over water

					local _ATLZ = (ASLToATL _newPos) select 2;			// prepare for terrain check

					if (_terrain) exitWith {					// transform is entirely over land
						_newPosZ = _ATLZ;					// ATL
					};
					if (_coast) exitWith {						// transform crosses threshold between land and water
						if !(surfaceIsWater _newPos) then {
							_newPosZ = _ATLZ;				// ATL
						};
					};
				};
				if (_newPosZ > _minHeight) then {					// test new height
					_modelNewASL	= +_newPos;					// move closer
					_modelNewASLZ	= _newPosZ;					// update height
					_helperPos = [_helperPos, _vector2] call BIS_fnc_vectorAdd;	// vector aggregate
				};
				_count = _count + 1;
				if (_count > 15) exitWith {};						// prevent endless looping (usually resolves within 10 loops)
			};

		///////////////////////////////////////////////////////////////////////////////////////////////////////

		} else {
			_helperPos = [_helperPos, _vector1] call BIS_fnc_vectorAdd;			// safe vector
		};

		///////////////////////////////////////////////////////////////////////////////////////////////////////

		if (!helperDetach) then {detach _objectHelper;};

		_objectHelper setPosASL _helperPos;
		uiSleep 0.04;

		if (!helperDetach) then {_objectHelper attachTo [player];};			// re-attach helper

		_modelNewASL	= getPosASL modelSelect;
		_modelNewASLZ	= _modelNewASL select 2;					// get current ASL height

		if (surfaceIsWater _modelNewASL) then {
			_level = localize "STR_EPOCH_PLAYER_NO_UGROUND_03";			// object cannot be placed below sea level
		} else {
			_level = localize "STR_EPOCH_PLAYER_NO_UGROUND_02";			// object cannot be placed below ground
		};

		local _floodArea = (_distance == 0 && {_modelNewASLZ < DZE_maxSeaLevel});	// No need to check surfaceIsWater. The surface area will change significantly near coastlines.

		if (DZE_buildOnWater && _floodArea) then {
			localize "STR_EPOCH_BEWARE_RISING_TIDE" call dayz_rollingMessages;	// Warn only when player tries to place the object so this message does not coincide with the next one.
		};

		if (_notify) then {
			format[localize "STR_EPOCH_PLAYER_NO_UGROUND_01", _text, _level] call dayz_rollingMessages;
		};

		[true] call _update;								// update with collision check
	};

	///////////////////////////////////////////////////////////////////////////////////////////
	//
	//					Degree Change
	//
	///////////////////////////////////////////////////////////////////////////////////////////

	local _degrees = {
		local _index = DZE_vectorDegrees find DZE_curDegree;		// get current degree index
		_index = (_index + _this + _degreeCount) % _degreeCount;	// get adjacent value
		DZE_curDegree = DZE_vectorDegrees select _index;		// update degrees

		if (_vectoringEnabled) then {
			degreeActionState = localize "STR_EPOCH_VECTORS_CLOSE";
			[1,1] call fnc_degreeActionCleanup;			// keep action menu in sync
		};
	};

	///////////////////////////////////////////////////////////////////////////////////////////
	//
	//					Rotate Object
	//
	///////////////////////////////////////////////////////////////////////////////////////////

	local _rotate = {
		if (call _moveCheck) exitWith {};

		DZE_memDir = DZE_memDir + _this;
		[true] call _update;
	};

	///////////////////////////////////////////////////////////////////////////////////////////
	//
	//					Bank Object
	//
	///////////////////////////////////////////////////////////////////////////////////////////

	local _bank = {
		if (!_vectoringEnabled || (call _moveCheck)) exitWith {};

		DZE_memLeftRight = DZE_memLeftRight + _this;
		DZE_updateVec = true;
	};

	///////////////////////////////////////////////////////////////////////////////////////////
	//
	//					Pitch Object
	//
	///////////////////////////////////////////////////////////////////////////////////////////

	local _pitch = {
		if (!_vectoringEnabled || (call _moveCheck)) exitWith {};

		DZE_memForBack = DZE_memForBack + _this;
		DZE_updateVec = true;
	};

	///////////////////////////////////////////////////////////////////////////////////////////
	//
	//					Vector Object
	//
	///////////////////////////////////////////////////////////////////////////////////////////

	local _vector = {
		vectorActionState = localize "STR_EPOCH_VECTORS_CLOSE";
		[1,1] call fnc_vectorActionCleanup;

		[true] call _update;
		DZE_updateVec = false;
	};

	///////////////////////////////////////////////////////////////////////////////////////////
	//
	//				Hold / Release Object
	//
	///////////////////////////////////////////////////////////////////////////////////////////

	local _hold_release = {
		if (!r_drag_sqf && !r_player_unconscious) then {

			if (helperDetach) then {

				call _attach;
			} else {
				call _detach;
			};
		};
	};

	///////////////////////////////////////////////////////////////////////////////////////////
	//
	//					Attach Object
	//
	///////////////////////////////////////////////////////////////////////////////////////////

	local _attach = {
		detach _objectHelper;
		_objectHelper attachTo [player];
		DZE_memDir = DZE_memDir - (getDir player);

		[false] call _update;	// update, without collision check

		helperDetach = false;
	};
	
	///////////////////////////////////////////////////////////////////////////////////////////
	//
	//					Detach Object
	//
	///////////////////////////////////////////////////////////////////////////////////////////
	
	local _detach = {
		detach _objectHelper;								// release object

		DZE_memDir = getDir _objectHelper;						// get current Z rotation

		if (DZE_memLeftRight == 0) then {						// if object is not banked (left/right)

			local _absMem = abs DZE_memForBack;

			if ((_absMem >= 90) && (_absMem < 270)) then {				// but is pitched upside down (forward/back)
				DZE_memDir = DZE_memDir + 180;					// prevent flipping around X axis
			};
		} else {									// if object is banked (left/right)
			if (DZE_memForBack != 0) then {						// and object is pitched (forward/back)

				local _dX = (sin DZE_memForBack) * (sin DZE_memLeftRight);	// Pre-calculate Z rotation
				local _dY = cos DZE_memForBack;
				local _delta = _dX atan2 _dY;					// convert to degrees on world axis

				DZE_memDir = DZE_memDir - _delta;				// prevent Z rotation bug on sloping terrain
			};
		};
		if (!_collisionCheck) then {
			[false] call _update;							// update rotations, without collision check
		};

		_objectHelper setVelocity [0,0,0];

		helperDetach = true;
	};

	///////////////////////////////////////////////////////////////////////////////////////////
	//
	//				Update Pitch/Bank/Yaw
	//
	///////////////////////////////////////////////////////////////////////////////////////////

	local _update = {
		DZE_memForBack		= DZE_memForBack % 360;		// clamp rotation angles
		DZE_memLeftRight	= DZE_memLeftRight % 360;
		DZE_memDir		= DZE_memDir % 360;

		[_objectHelper, [DZE_memForBack, DZE_memLeftRight, DZE_memDir]] call fnc_SetPitchBankYaw;

		if ((_this select 0) && !helperDetach) then {
			call _collision_check;
		};
	};

	///////////////////////////////////////////////////////////////////////////////////////////
	//
	//					Collision Check
	//
	///////////////////////////////////////////////////////////////////////////////////////////
	//
	//	Small movements can occur from turning on the spot, or the beginning phase of a
	//	new animation state. Therefore the _tolerance variable is the distance in meters
	//	the player can move before a collision check is considered valid.
	//
	///////////////////////////////////////////////////////////////////////////////////////////

	local _collision_check = {

		local _prevPos = _playerPos;						// previous position
		uiSleep 0.05;								// allow time for player to be knocked back
		_playerPos = getPosASL player;						// current position

		local _tolerance	= 0.01;						// movement threshold
		local _distance		= _prevPos distance _playerPos;			// distance moved
		local _hasMoved		= _distance > _tolerance;			// collision check valid

		if (_hasMoved && (call _isStopped)) then {				// if player is hit
			_collisionCheck = true;						// disable updates
			call _detach;							// let go of object
			_collisionCheck = false;					// enable updates

			_objectHelper setPosASL _objectHelperPos;			// reposition object

			player say ["z_hit_" + str(_hitSfx select _hitIdx), 10];	// hit sound (local only)
			uiSleep 0.2;							// wait
			player say [_scream  + str(_scrSfx select _scrIdx), 70];	// scream sound (local only)

			[player, 70, true, _playerPos] spawn player_alertZombies;	// check if zombies hear the scream
			_hitIdx = (_hitIdx + 1) % _hitCount;				// cue next hit
			_scrIdx = (_scrIdx + 1) % _scrCount;				// cue next scream

			format[localize "STR_EPOCH_PLAYER_COLLISION_01", _text] call dayz_rollingMessages;
		};

	};

	///////////////////////////////////////////////////////////////////////////////////////////
	//
	//		 			Plot boundary
	//
	///////////////////////////////////////////////////////////////////////////////////////////

	local _plot_pole = {
		if (_inRadius) then {
			[_nearestPole] call PlotPreview;
		};
	};

	///////////////////////////////////////////////////////////////////////////////////////////
	//
	//					Terrain Align
	//
	///////////////////////////////////////////////////////////////////////////////////////////

	local _terrain = {
		if (call _moveCheck) exitWith {};

		skipUpdates = true;							// prevent temporary values updating on the snap panel

		detach _objectHelper;
		detach _object;

		local _pos = getPosATL modelSelect;
		_objectHelper setPosATL _pos;						// the helper must align with the model base or center
		_object attachTo [_objectHelper];

		_pos = [_objectHelper] call FNC_GetPos;					// ATL/ASL
		local _vector = surfaceNormal _pos;					// get terrain vector
		_pos set [2, _minHeight];						// set default height to touch the ground/water

		if (surfaceIsWater _pos) then {						// place on ground or at sea level
			_objectHelper setPosASL _pos;
			_objectHelperPos = _pos;
		} else {
			_objectHelper setPosATL _pos;
			_objectHelperPos = ATLToASL _pos;
		};
 
		if (_vectoringEnabled || _isStaticWeapon) then {
			_objectHelper setVectorUp _vector;				// align
		};

		local _pb	= _objectHelper call BIS_fnc_getPitchBank;		// not fully accurate according to the wiki, but for this purpose it will do
		DZE_memForBack	= _pb select 0;						// pitch
		DZE_memLeftRight= _pb select 1;						// bank
		DZE_memDir	= getDir _objectHelper;					// rotation

		if (DZE_memForBack != 0) then {

			local _dX = (sin DZE_memForBack) * (sin DZE_memLeftRight);	// Pre-calculate Z rotation
			local _dY = cos DZE_memForBack;
			local _delta = _dX atan2 _dY;					// convert to degrees on world axis

			DZE_memDir = DZE_memDir - _delta;				// prevent Z rotation bug on sloping terrain
		};

		if (!helperDetach) then {
			call _attach;		// reattach if object was attached prior
		};
		[true] call _update;		// update with collision check

		call _resetMenu;		// snap and vector settings must yield to the terrain vector

		skipUpdates = false;
	};

	///////////////////////////////////////////////////////////////////////////////////////////
	//
	//					Snap Next / Prev
	//
	///////////////////////////////////////////////////////////////////////////////////////////

	local _snap = {
		if (_snappingEnabled) then {

			DZE_SnapTabIdx = DZE_SnapTabIdx + _this;
			DZE_SnapSelIdx = DZE_SnapSelIdx + _this;

			call {
				if (DZE_SnapTabIdx < 0) exitWith {		// selection was Shift-Tabbed left and looped around
					DZE_SnapTabIdx	= _snapTabMax;
					DZE_SnapSelIdx	= _snapSelMax;
				};
				if (DZE_SnapTabIdx > _snapTabMax) exitWith {	// selection was Tabbed right and looped around
					DZE_SnapTabIdx	= 0;
					DZE_SnapSelIdx	= -2;
				};
			};

			local _snapParams = [];

			local _ON	= [localize "STR_EPOCH_ACTION_SNAP_ON", _object, _classname, _objectHelper];			// Click ON to Turn OFF
			local _OFF	= [localize "STR_EPOCH_ACTION_SNAP_OFF", _object, _classname, _objectHelper];			// From OFF to ON/Auto
			local _MANUAL	= [localize "STR_EPOCH_ACTION_SNAP_POINT_MANUAL", _object, _classname, _objectHelper];		// From Manual to ON/Auto
			local _AUTO	= ["Auto", _object, _classname, _objectHelper];							// From Auto to Manual (nothing selected)
			local _SELECT	= ["Selected", _object, _classname, _objectHelper, DZE_SnapSelIdx];				// Select snapping point

			//
			// keep action menu in sync with hotkeys
			//
			call {
				if (DZE_SnapTabIdx == 0) exitWith {
					_snapParams = [_ON];					// ON to OFF
				};
				if (DZE_SnapTabIdx == 1) exitWith {
					if (_this == 1) then {
						_snapParams = [_OFF];				// From OFF to ON/Auto
					} else {
						_snapParams = [_MANUAL];			// Shift-Tab left from Manual to ON/Auto
					};
				};
				if (DZE_SnapTabIdx > 1)	exitWith {
					if (_this == -1) then {
						if (DZE_SnapTabIdx == _snapTabMax) then {
							_snapParams = [_OFF, _AUTO];		// Shift-Tab left and loop back to select the last snapping point
						};
					} else {
						if (DZE_SnapSelIdx == 0) then {
							_snapParams = [_AUTO];			// Tab right from Auto to first snapping point
						};
					};
					_snapParams = _snapParams + [_SELECT];			// Tab/Shift-Tab through snapping points
				};
			};

			skipUpdates = true;	// prevent display of multiple snapping states on helper panel until complete

			{
				["", "", "", _x] spawn snap_build;
				uiSleep 0.04;
			} count _snapParams;

			skipUpdates = false;	// re-enable snapping state display
		};
	};

	///////////////////////////////////////////////////////////////////////////////////////////
	//
	//					Snap Auto-Refresh
	//
	///////////////////////////////////////////////////////////////////////////////////////////

	local _refresh = {
		if !(_snappingEnabled && DZE_snapAutoRefresh && {snapActionState != _OFF}) exitWith {};

		_modelCenterPos		= getPosASL _modelCenter;
		local _objectMove	= _modelCenterPrevPos distance _modelCenterPos;

		if (_objectMove > _refreshDist) then {
			_modelCenterPrevPos = _modelCenterPos;

			DZR_snapRefresh = true;				// suspend fnc_snapDistanceCheck

			[_object] call fnc_initSnapPointsNearby;	// create new snap point radius

			DZR_snapRefresh = false;			// resume fnc_snapDistanceCheck
		};
	};

	///////////////////////////////////////////////////////////////////////////////////////////
	//
	//					Reset functions
	//
	///////////////////////////////////////////////////////////////////////////////////////////
	
	local _resetMenu = {
		if (_snappingEnabled) then {
			snapActionState = localize "STR_EPOCH_ACTION_SNAP_OFF";					// close Snap menu
			[1,0,0, _object, _classname, _objectHelper, _points] call fnc_snapActionCleanup;
			call fnc_initSnapPointsCleanup;
		};
		if (_vectoringEnabled) then {
			vectorActionState = localize "STR_EPOCH_VECTORS_OPEN";					// close Vectors menu
			[1,0] call fnc_vectorActionCleanup;

			degreeActionState = localize "STR_EPOCH_VECTORS_OPEN";					// close Degrees menu
			[1,0] call fnc_degreeActionCleanup;
		};
	};

	local _reset = {
		detach _objectHelper;
		detach _object;

		call _setup_object;		// reset object
		call _resetMenu;
		DZE_LOCAL_MODE	= false;
		DZE_HIDE_PANEL	= false;
	};

	///////////////////////////////////////////////////////////////////////////////////////////
	//
	//					Cancel Build
	//
	///////////////////////////////////////////////////////////////////////////////////////////

	_cancel_build = {

		DZE_cancelBuilding = true;	// snapping point cleanup

		_isOk	= false;
		_cancel	= true;

		deleteVehicle _modelBase;
		deleteVehicle _modelCenter;
		deleteVehicle _object;
		deleteVehicle _objectHelper;
	};

	///////////////////////////////////////////////////////////////////////////////////////////
	//
	//				Get config data
	//
	///////////////////////////////////////////////////////////////////////////////////////////

	local _classname	= getText	(configFile >> "CfgMagazines" >> DZE_buildItem >> "ItemActions" >> "Build" >> "create");	// e.g. "CinderWall_DZ"
	local _classnameBuild	= _classname;
	local _text		= getText	(configFile >> "CfgVehicles" >> _classname >> "displayName");					// e.g. "Cinder Wall Full"
	local _ghost		= getText	(configFile >> "CfgVehicles" >> _classname >> "ghostpreview");					// e.g. "CinderWall_Preview_DZ"
	local _lockable		= getNumber	(configFile >> "CfgVehicles" >> _classname >> "lockable");					// defaults to 0

	local _offset = getArray (configFile >> "CfgVehicles" >> _classname >> "offset");
	if (count _offset == 0) then {
		_offset = [0, abs (((boundingBox _object) select 0) select 1), 0];
	};

	local _isAllowedUnderGround = 1;

	if (isNumber (configFile >> "CfgVehicles" >> _classname >> "nounderground")) then {
		_isAllowedUnderGround = getNumber(configFile >> "CfgVehicles" >> _classname >> "nounderground");
	};

	local _requireplot = 1;

	if (isNumber (configFile >> "CfgVehicles" >> _classname >> "requireplot")) then {
		_requireplot = getNumber(configFile >> "CfgVehicles" >> _classname >> "requireplot");
	};
	if (_classname in DZE_requirePlotOverride) then {_requireplot = 1;};

	useModelCenter = 0;	// global

	if (isNumber (configFile >> "CfgVehicles" >> _classname >> "useModelCenter")) then {
		useModelCenter = getNumber(configFile >> "CfgVehicles" >> _classname >> "useModelCenter");
	};

	if (_ghost != "") then {
		_classname = _ghost;
	};

	///////////////////////////////////////////////////////////////////////////////////////////
	//
	//			Create ghost preview and object helpers
	//
	///////////////////////////////////////////////////////////////////////////////////////////
	//
	//  Some models have a non-zero boundingCenter, i.e. values other than [0,0,0], so this
	//  needs to be offset from their ATL/ASL position. They use only the Z value returned
	//  from "boundingCenter _object" for this purpose. Furthermore, these objects require
	//  a second offset position value saved to the database to correctly handle vectoring
	//  and rotation data.
	//
	//  To improve accuracy, we can attach a dummy object to the base of the model, and to
	//  the model center, and use these position values when performing calculations.
	//
	//  This setup works for any model type.
	//
	///////////////////////////////////////////////////////////////////////////////////////////

	_object = _classname createVehicle [0,0,0];

	_boundingCenter	= boundingCenter _object;				// model center offset
	_modelOffset	= _boundingCenter select 2;				// Z offset

	_modelBase = "Sign_sphere10cm_EP1" createVehicleLocal [0,0,0];
	_modelBase setObjectTexture _noColor;
	_modelBase attachTo [_object, [0,0,-_modelOffset]];			// getPosATL/ASL position

	_modelCenter = "Sign_sphere25cm_EP1" createVehicleLocal [0,0,0];
	_modelCenter setObjectTexture _noColor;
	_modelCenter attachTo [_object, [0,0,0]];				// model center

	_objectHelper = "Sign_sphere10cm_EP1" createVehicle [0,0,0];		// main helper during building
	_objectHelper setObjectTexture _noColor;

	///////////////////////////////////////////////////////////////////////////////////////////
	//
	//				Initialize Snapping and Vectoring
	//
	///////////////////////////////////////////////////////////////////////////////////////////

	if (isClass (configFile >> "SnapBuilding" >> _classname)) then {
		_points = getArray(configFile >> "SnapBuilding" >> _classname >> "points");				// get all snapping points

		_snapList = [localize "STR_EPOCH_ACTION_SNAP_OFF", localize "STR_EPOCH_ACTION_SNAP_POINT_AUTO"];	// initialize
		{_snapList = _snapList + [_x select 3];} count _points;							// append

		_snappingEnabled	= true;
		snapActionState		= "";
		snapActionStateSelect	= "";
		_snapTabMax		= (count _snapList) - 1;
		_snapSelMax		= (count _points) - 1;

		["", "", "", ["Init", _object, _classname, _objectHelper]] spawn snap_build;

		local _box	= boundingBox _object;
		local _b0	= _box select 0;				// lower diagonal
		local _b1	= _box select 1;				// upper diagonal
		local _bx	= abs (_b0 select 0) + abs (_b1 select 0);
		local _by	= abs (_b0 select 1) + abs (_b1 select 1);
		local _bz	= abs (_b0 select 2) + abs (_b1 select 2);
		local _diag	= sqrt (_bx^2 + _by^2 + _bz^2);			// get diagonal of boundingBox

		DZE_snapRadius	= _diag * 0.5 + 9;				// 9 is half the largest bounding box diagonal (rounded up) of the largest snappable objects in the game; currently the Land_WarfareBarrier10xTall_DZ and the MetalContainer2D_DZ.
		_refreshDist	= DZE_snapRadius * 0.5;				// distance object moves before the snap auto-refresh triggers
	};

	_isStaticWeapon = ((_object isKindof "StaticWeapon") || {_classname in DZE_StaticWeapons});

	if (!(DZE_buildItem in DZE_noRotate) && !_isStaticWeapon) then {
		_vectoringEnabled = true;
		["","","",["Init", "Init", 0]] spawn build_vectors;
	};

	///////////////////////////////////////////////////////////////////////////////////////////
	//
	//		 			Main Loop
	//
	///////////////////////////////////////////////////////////////////////////////////////////

	call _axial_helper;
	call _setup_object;
	[_distFromPlot, _radius, _snappingEnabled, _vectoringEnabled, _isStaticWeapon, _snapList, _object] spawn dze_snap_building;
	
	while {_isOk} do {

		_playerPos	 = getPosASL player;		// current position used in collision check
		_objectHelperPos = getPosASL _objectHelper;	// used to reposition object after a collision

		// scan for key press

		call {
			// adjust height of object
			if (DZE_Q)		exitWith {DZE_Q = false;		 0.10 call _change_height;};		// +10cm
			if (DZE_Z)		exitWith {DZE_Z = false;		-0.10 call _change_height;};		// -10cm
			if (DZE_Q_alt)		exitWith {DZE_Q_alt = false;		 1.00 call _change_height;};		// +1m
			if (DZE_Z_alt)		exitWith {DZE_Z_alt = false;		-1.00 call _change_height;};		// -1m
			if (DZE_Q_ctrl)		exitWith {DZE_Q_ctrl = false;		 0.01 call _change_height;};		// +1cm
			if (DZE_Z_ctrl)		exitWith {DZE_Z_ctrl = false;		-0.01 call _change_height;};		// -1cm

			// rotate object
			if (DZE_4)		exitWith {DZE_4 = false;		-DZE_curDegree call _rotate;};		// Q Key / CCW
			if (DZE_6)		exitWith {DZE_6 = false;		 DZE_curDegree call _rotate;};		// E Key / CW

			// vector object using arrow keys
			if (DZE_LEFT)		exitWith {DZE_LEFT = false;		-DZE_curDegree call _bank;};		// Left Arrow Key
			if (DZE_RIGHT)		exitWith {DZE_RIGHT = false;		 DZE_curDegree call _bank;};		// Right Arrow Key
			if (DZE_UP)		exitWith {DZE_UP = false;		-DZE_curDegree call _pitch;};		// Up Arrow Key
			if (DZE_DOWN)		exitWith {DZE_DOWN = false;		 DZE_curDegree call _pitch;};		// Down Arrow Key

			// adjust degrees
			if (DZE_MINUS)		exitWith {DZE_MINUS = false;		-1 call _degrees;};			// Minus Key
			if (DZE_PLUS)		exitWith {DZE_PLUS = false;		 1 call _degrees;};			// Plus Key (=+)

			// snapping points
			if (DZE_TAB)		exitWith {DZE_TAB = false;		 1 call _snap;};			// Tab Key
			if (DZE_TAB_SHIFT)	exitWith {DZE_TAB_SHIFT = false;	-1 call _snap;};			// Shift-Tab

			// hold or release object
			if (DZE_F)		exitWith {DZE_F = false;		call _hold_release;};			// F Key

			// terrain align
			if (DZE_T)		exitWith {DZE_T = false;		call _terrain;};			// T Key

			// show plot boundary
			if (DZE_P)		exitWith {DZE_P = false;		call _plot_pole;};			// P Key

			// local mode
			if (DZE_L)		exitWith {DZE_L = false;		DZE_LOCAL_MODE = !DZE_LOCAL_MODE;};	// L Key

			// hide panel
			if (DZE_H)		exitWith {DZE_H = false;		DZE_HIDE_PANEL = !DZE_HIDE_PANEL;};	// H Key

			// reset object
			if (DZE_BACK)		exitWith {DZE_BACK = false;		call _reset;};				// Backspace Key
		};

		// vector object
		if (DZE_updateVec) then {call _vector;};

		// Swimming, in vehicle, on ladder, in combat
		_reason = call _misc_checks;
		if (_reason != "") exitWith {
			call _cancel_build;
			_reason = localize _reason;
		};

		// auto-refresh snap radius
		call _refresh;

		///////////////////////////////////////////////////////////////////////////////////
		//
		//				Player has plot pole
		//
		///////////////////////////////////////////////////////////////////////////////////

		_modelCenterPos = [_modelCenter] call FNC_GetPos;

		if (_isPole) then {
			_findNearestPole = _modelCenterPos nearEntities ["Plastic_Pole_EP1_DZ", _minDistance];	// check for nearby plots within range of current pole
			_findNearestPole = _findNearestPole - [_object];					// exclude current pole
		};
		if (count _findNearestPole > 0) exitWith {							// pole is too close to another plot
			call _cancel_build;
			_reason	= format[localize "str_epoch_player_44", _minDistance];
		};

		///////////////////////////////////////////////////////////////////////////////////
		//
		//			Object was initially within plot radius
		//
		///////////////////////////////////////////////////////////////////////////////////

		if (_inRadius) then {
			distanceFromPlot = _nearestPole distance _object;		// distance is calculated from model center, not getPosATL/ASL

			if (_requireplot != 0) then {
				call {
					if ((_nearestPole distance player)  > _ozone)	exitWith {_reason = localize "STR_EPOCH_BUILD_MOVE_TOO_FAR"};		// You moved too far!
					if (distanceFromPlot > _radius)			exitWith {_reason = localize "STR_EPOCH_BUILD_OBJ_MOVE_TOO_FAR"};	// Object moved too far!
				};
			};
		};
		if (_reason != "") exitWith {
			call _cancel_build;
		};

		///////////////////////////////////////////////////////////////////////////////////
		//
		//				Other checks
		//
		///////////////////////////////////////////////////////////////////////////////////

		local _anim		= animationState player;
		local _speed		= floor(abs(speed player));
		local _isWalking	= ([_walk, _anim] call fnc_inString);
		local _isRunning	= ([_run, _anim] call fnc_inString);
		local _isSprinting	= ([_sprint, _anim] call fnc_inString);
		local _isFastWalking	= (_isWalking && (_speed >= 10));					// fast walking on steep incline
		local _tooFast		= (!helperDetach && (_isRunning || _isSprinting || _isFastWalking));	// fast movement on level ground
		local _tooHigh		= (_isBHL && {(_modelCenterPos select 2) > _BHL});

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
		//			Space Bar - Place Object
		//
		///////////////////////////////////////////////////////////////////////////////////

		if (DZE_5 && !(call _moveCheck)) exitWith {
			DZE_nowBuilding = true;
			_isOk = false;

			0 call _change_height;	// raise up to ground/sea level if necessary
			uiSleep 0.01;

			_modelBasePos	= [_modelBase] call FNC_GetPos;
			_modelCenterPos	= [_modelCenter] call FNC_GetPos;
			_isOnWater	= surfaceIsWater _modelBasePos;
			_heightASL	= (getPosASL _modelBase) select 2;

			detach _object;
			detach _objectHelper;

			_dir		= getDir _object;
			_vector		= [vectorDir _object, vectorUp _object];

			deleteVehicle _modelBase;
			deleteVehicle _modelCenter;
			deleteVehicle _object;
			deleteVehicle _objectHelper;
		};

		uiSleep 0.02;
	};

	///////////////////////////////////////////////////////////////////////////////////////////

	helperDetach = false;	// set false to terminate fnc_snapDistanceCheck

	// Delete Helper Array
	{deleteVehicle _x;} count _pArray;
	_pArray = [];

	///////////////////////////////////////////////////////////////////////////////////////////
	//
	//	Check that the auto-adjusted height does not violate distance requirements.
	//
	///////////////////////////////////////////////////////////////////////////////////////////

	if (!_cancel) then {
		if (_isPole) then {									// check for nearby plots within range
			local _findNearestPole = [];
			_findNearestPole = _modelCenterPos nearEntities ["Plastic_Pole_EP1_DZ", _minDistance];
			_findNearestPole = _findNearestPole - [_object];

			if (count _findNearestPole > 0) then {
				_cancel = true;
				_reason	= format[localize "str_epoch_player_44", _minDistance];		// pole is too close to another plot
			};
		} else {
			if (_inRadius && {_requireplot != 0 && {(_nearestPole distance _modelCenterPos) > _radius}}) then {
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

	if (!_cancel && !DZE_BuildOnRoads && (isOnRoad _modelCenterPos)) then {
		_cancel = true;
		_reason = localize "STR_EPOCH_BUILD_FAIL_ROAD";
	};

	///////////////////////////////////////////////////////////////////////////////////////////
	//
	//			You do not have access to build on this plot.
	//
	///////////////////////////////////////////////////////////////////////////////////////////

	if (!_cancel) then {
	
		_findNearestPole = _modelCenterPos nearEntities ["Plastic_Pole_EP1_DZ", _minDistance];	// check for nearby plots within range of current pole
		_findNearestPole = _findNearestPole - [_object];					// exclude current pole

		if (count _findNearestPole > 0) then {							// is near plot

			_nearestPole = _findNearestPole select 0;					// get first entry
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

	///////////////////////////////////////////////////////////////////////////////////////////
	//
	//			You are not allowed to build over sea water.
	//
	///////////////////////////////////////////////////////////////////////////////////////////

	if (!_cancel && !DZE_buildOnWater && (_isOnWater || {_heightASL < DZE_maxSeaLevel})) then {
		_cancel = true;
		_reason = localize "STR_EPOCH_BUILD_FAIL_WATER";
	};

	///////////////////////////////////////////////////////////////////////////////////////////
	//
	//	You cannot build. There are too many objects within the maintain range.
	//
	///////////////////////////////////////////////////////////////////////////////////////////

	if (!_cancel) then {
		_buildables = DZE_maintainClasses + DZE_LockableStorage + ["DZ_storage_base"];

		if (_isPole && ((count (nearestObjects [_modelCenterPos, _buildables, DZE_maintainRange])) >= DZE_BuildingLimit)) then {
			_cancel = true;
			_reason = format[localize "str_epoch_player_41", floor DZE_maintainRange];	// You cannot build. There are too many objects within %1m.
		};
	};

	///////////////////////////////////////////////////////////////////////////////////////////
	//
	//		You cannot build within X meters of a restricted zone.
	//
	///////////////////////////////////////////////////////////////////////////////////////////

	if (!_cancel) then {
		{
			local _dis = (_x select 2);				// minimum distance
			local _chk = _modelCenterPos distance (_x select 1);	// current distance
			
			if (_chk <= _dis) then {				// object is within restricted zone
				_cancel = true;
				_reason = format[localize "STR_EPOCH_PLAYER_RES_ZONE", _dis, (_x select 0), floor _chk];
			};
		} count DZE_RestrictedBuildingZones;
	};

	///////////////////////////////////////////////////////////////////////////////////////////
	//
	//		You cannot build within X meters of a blacklisted building.
	//
	///////////////////////////////////////////////////////////////////////////////////////////

	if (!_cancel) then {
		{
			local _dis = (_x select 2);							// minimum distance
			local _chk = count (nearestObjects [_modelCenterPos, [(_x select 1)], _dis]);	// blacklisted buildings
			
			if (_chk > 0) exitWith {							// object is too close
				_cancel = true;
				_reason = format[localize "STR_EPOCH_PLAYER_RES_BUILDING", _dis, (_x select 0)];
			};
		} count DZE_BlacklistedBuildings;
	};

	///////////////////////////////////////////////////////////////////////////////////////////
	//
	//		You can't build an object within X meters of a safe zone.
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
			_canBuild = !([_modelCenterPos, _distance] call DZE_SafeZonePosCheck);
		};
		if (!_canBuild) then {
			_cancel = true;
			_reason = format [localize "STR_EPOCH_PLAYER_166", _text, _distance];	// You can't build a %1 within %2 meters of a safe zone.
		};
	};

	///////////////////////////////////////////////////////////////////////////////////////////
	//
	//	You can't build an object within X meters of a specified building.
	//
	///////////////////////////////////////////////////////////////////////////////////////////

	if (!_cancel) then {
		if ((count DZE_NoBuildNear > 0) && !_isAdmin) then {
			_near = (nearestObjects [_modelCenterPos, DZE_NoBuildNear, DZE_NoBuildNearDistance]);

			if ((count _near) > 0) then {
				_cancel = true;
				_reason = format [localize "STR_EPOCH_PLAYER_167", _text, DZE_NoBuildNearDistance, typeOf (_near select 0)];	// You can't build a %1 within %2 meters of a %3.
			};
		};
	};

	///////////////////////////////////////////////////////////////////////////////////////////

	if (!_cancel) then {

		_classname = _classnameBuild;

		local _builtObject = _classname createVehicle [0,0,0];

		//_builtObject setDir _dir; // setDir is incompatible with setVectorDirAndUp and should not be used together on the same object https://community.bistudio.com/wiki/setVectorDirAndUp
		_builtObject setVariable["memDir", _dir, true];
		_builtObject setVectorDirAndUp _vector;

		local _position	= _modelBasePos;						// ATL/ASL
		local _vectorUp	= _vector select 1;
		local _isWater	= surfaceIsWater _position;

		if (_isStaticWeapon) then {							// handle static weapons
			local _positionASL = _position;

			if (!_isWater) then {_positionASL = ATLToASL _position;};		// must be ASL

			for "_i" from 0 to 2 do {
				_positionASL set [_i, (_positionASL select _i) + ((_vectorUp select _i) * _staticOffset)];		// add static weapon vectorUp offset to ASL position (world coordinates)
			};
			if (!_isWater) then {							// convert back to
				_position = ASLToATL _positionASL;				// ATL
			} else {
				_position = _positionASL;					// or ASL
			};
		};

		if (_isWater) then {
			_position = ASLToATL _position;						// position must be ATL
		};
		_builtObject setPosATL _position;

		///////////////////////////////////////////////////////////////////////////////////

		if (!_isStaticWeapon) then {
			_position = _modelCenterPos;						// ATL/ASL. Update db position in case model center is non-zero
			_position set [2, (_position select 2) - _modelOffset];			// adjust world Z-height

			if (surfaceIsWater _position) then {
				_position = ASLToATL _position;					// ensure position passed to db is ATL
			};
		};

		///////////////////////////////////////////////////////////////////////////////////

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

			if (_wasStanding) then {player playActionNow "PlayerStand";};	// once the action has completed, return player to a standing pose if they were standing before the action

			local _num_removed = ([player, DZE_buildItem] call BIS_fnc_invRemove); // remove item's magazine from inventory

			if (_num_removed == 1) then {

				local _friendsArr = [];

				["Working", 0, [20,10,5,0]] call dayz_NutritionSystem;
				call player_forceSave;

				[format[localize "str_build_01", _text], 1] call dayz_rollingMessages;

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
							if (_classname in DZE_LockedGates) then {
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

					_builtObject setVariable ["CharacterID", _combination, true];	// set combination as a character ID

					// call publish precompiled function with given args and send public variable to server to save item to database

					_builtObject setVariable ["ownerPUID", dayz_playerUID, true];

					PVDZ_obj_Publish = [_combination, _builtObject, [_dir, _position, dayz_playerUID, _vector], [], player, dayz_authKey];

					if (_lockable == 3) then {

						_friendsArr = [[dayz_playerUID, toArray (name player)]];
						_builtObject setVariable ["doorfriends", _friendsArr, true];

						PVDZ_obj_Publish = [_combination, _builtObject, [_dir, _position, dayz_playerUID, _vector], _friendsArr, player, dayz_authKey];
					};

					publicVariableServer "PVDZ_obj_Publish";

					[format[localize "str_epoch_player_140", _combinationDisplay, _text], 1] call dayz_rollingMessages; // display new combination
					systemChat format[localize "str_epoch_player_140", _combinationDisplay, _text];	// You have setup your %2. The combination is %1

				} else { // if not lockable item
					local _charID = "0";
					_builtObject setVariable ["CharacterID", _charID];

					// fireplace
					if (_builtObject isKindOf "Land_Fire_DZ") then { // if campfire, then spawn, but do not publish to database

						[_builtObject, true] call dayz_inflame;
						_builtObject spawn player_fireMonitor;
					} else {
						_builtObject setVariable ["ownerPUID", dayz_playerUID, true];

						if (_isPole) then {

							_friendsArr = [[dayz_playerUID, toArray (name player)]];
							_builtObject setVariable ["plotfriends", _friendsArr, true];

							PVDZ_obj_Publish = [_charID, _builtObject, [_dir, _position, dayz_playerUID, _vector], _friendsArr, player, dayz_authKey];
						} else {
							PVDZ_obj_Publish = [_charID, _builtObject, [_dir, _position, dayz_playerUID, _vector], [], player, dayz_authKey];
						};
						publicVariableServer "PVDZ_obj_Publish";
					};
					if (_isStaticWeapon) then {
						[_builtObject,DZE_clearStaticAmmo,false] call fn_vehicleAddons;
					};
				};
				if (DZE_GodModeBase && {!(_classname in DZE_GodModeBaseExclude)}) then {
					_builtObject addEventHandler ["HandleDamage", {0}];
				};
			} else { // if magazine was not removed, cancel publish
				deleteVehicle _builtObject;
				localize "str_epoch_player_46" call dayz_rollingMessages;		// Canceled building.
			};
		} else { // if player was interrupted cancel publish
			deleteVehicle _builtObject;
			localize "str_epoch_player_46" call dayz_rollingMessages;			// Canceled building.
		};
	} else { // cancel build if passed _cancel arg was true or building on roads/trader city
		format[localize "str_epoch_player_47", _text, _reason] call dayz_rollingMessages;	// Canceled construction of %1, %2.
	};
};
DZE_buildItem		= nil;
dayz_actionInProgress	= false;
