///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Author:	Raymix
//	Date:	July 10 2014
//
//	Updated by Victor the Cleaner
//
///////////////////////////////////////////////////////////////////////////////////////////////////

local _p = _this select 3;

snapActionState		= _p select 0;
local _object		= _p select 1;
local _classname	= _p select 2;
local _objectHelper	= _p select 3;
local _selectedAction	= _p select 4;

local _points = getArray (configFile >> "SnapBuilding" >> _classname >> "points");

_moveHelper = {
	detach _objectHelper;
	detach _object;

	if (DZE_SnapSelIdx >= 0) then {
		_objectHelper setPosATL (getPosATL (snapGizmos select DZE_SnapSelIdx));
	} else {
		// reset helper to modelBase or modelCenter position (not necessarily the same as pivot/bottom)
		_objectHelper setPosATL (getPosATL modelSelect);
	};
	_object attachTo [_objectHelper];

	if (!helperDetach) then {
		_objectHelper attachTo [player];
	};
	[_objectHelper, [DZE_memForBack, DZE_memLeftRight, DZE_memDir]] call fnc_SetPitchBankYaw;
};

call {
	if (snapActionState == "Init") exitWith {
		snapActionState = localize "STR_EPOCH_ACTION_SNAP_OFF";
		[1,0,0, _object, _classname, _objectHelper, _points] call fnc_snapActionCleanup;

		[_object, _classname, _objectHelper, _points] spawn {

			local _object = _this select 0;
			local _classname = _this select 1;
			local _objectHelper = _this select 2;
			local _points = _this select 3;

			while {1==1} do {
				if (DZE_cancelBuilding || !dayz_actionInProgress || DZE_nowBuilding) exitWith {
					call fnc_initSnapPointsCleanup;
					[0,0,0, _object, _classname, _objectHelper, _points] call fnc_snapActionCleanup;
					snapActionState = localize "STR_EPOCH_ACTION_SNAP_OFF";
				};

				uiSleep 0.2;
			};
		};
	};
	if (snapActionState == localize "STR_EPOCH_ACTION_SNAP_OFF") exitWith {			// OFF to Auto
		snapActionState = localize "STR_EPOCH_ACTION_SNAP_ON";
		snapActionStateSelect = "Auto";
		[1,1,0, _object, _classname, _objectHelper, _points] call fnc_snapActionCleanup;
		[_object, _points] call fnc_initSnapPoints;
		[_object] call fnc_initSnapPointsNearby;
		uiSleep 0.25;
		[_object, _objectHelper] call fnc_snapDistanceCheck;
	};

	if (snapActionState == localize "STR_EPOCH_ACTION_SNAP_ON") exitWith {			// ON to OFF
		snapActionState = localize "STR_EPOCH_ACTION_SNAP_OFF";
		DZE_SnapSelIdx = -2;
		[1,0,0, _object, _classname, _objectHelper, _points] call fnc_snapActionCleanup;
		call _moveHelper;
		call fnc_initSnapPointsCleanup;
	};

	if (snapActionState == "Auto") exitWith {						// Auto to Manual, but nothing selected
		snapActionState = localize "STR_EPOCH_ACTION_SNAP_ON";
		snapActionStateSelect = localize "STR_EPOCH_ACTION_SNAP_POINT_MANUAL";
		[1,1,1, _object, _classname, _objectHelper, _points] call fnc_snapActionCleanup;
	};

	if (snapActionState == localize "STR_EPOCH_ACTION_SNAP_POINT_MANUAL") exitWith {	// Manual to Auto
		snapActionState = localize "STR_EPOCH_ACTION_SNAP_ON";
		snapActionStateSelect = "Auto";
		[1,1,0, _object, _classname, _objectHelper, _points] call fnc_snapActionCleanup;
	};

	if (snapActionState == "Selected") exitWith {						// select snapping point
		{
			if (_forEachIndex == _selectedAction) then {
				DZE_SnapSelIdx = _forEachIndex;			// snap selection index
				call _moveHelper;
				_x setObjectTexture DZE_SNAP_POINT_FOUND;	// red
			} else {
				_x setObjectTexture DZE_SNAP_POINT_RESET;	// green
			};
		} forEach snapGizmos;
		[1,1,1, _object, _classname, _objectHelper, _points] call fnc_snapActionCleanup;
	};
};
