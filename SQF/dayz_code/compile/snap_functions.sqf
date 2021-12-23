///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Author:	Raymix
//	Date:	July 10 2014
//
//	Updated by Victor the Cleaner
//
///////////////////////////////////////////////////////////////////////////////////////////////////

fnc_snapActionCleanup = {
	local _s1 = _this select 0;
	local _s2 = _this select 1;
	local _s3 = _this select 2;
	local _object = _this select 3;
	local _classname = _this select 4;
	local _objectHelper = _this select 5;
	local _points = _this select 6;

	local _WHT = "<t color='#ffffff'>";
	local _GRN = "<t color='#20E020'>";
	local _RED = "<t color='#ff0000'>";
	local _TB3 = "			";
	local _END = "</t>";
	local _txt = "";

	player removeAction s_player_toggleSnap;
	s_player_toggleSnap = -1;

	player removeAction s_player_toggleSnapSelect;
	s_player_toggleSnapSelect = -1;

	{player removeAction _x;} count s_player_toggleSnapSelectPoint;
	s_player_toggleSnapSelectPoint = [];
	snapActions = -1;

	if (_s1 > 0) then {
		local _menuState = snapActionState;
		if (snapActionState == "Selected") then {_menuState = localize "STR_EPOCH_ACTION_SNAP_ON";};

		_txt = format[_WHT + "Snap: %1" + _END, _menuState];
		s_player_toggleSnap = player addAction [_txt, "\z\addons\dayz_code\actions\snap_build.sqf", [_menuState, _object, _classname, _objectHelper, 0], 10, false, true];
	};
	if (_s2 > 0) then {
		local _COL = _GRN;	// Auto
		if (snapActionState == "Selected") then {_COL = _WHT;};		// manual

		_txt = format[_WHT + localize "STR_EPOCH_ACTION_SNAP_POINT" + _COL + " %1" + _END, snapActionStateSelect];
		s_player_toggleSnapSelect = player addAction [_txt, "\z\addons\dayz_code\actions\snap_build.sqf", [snapActionStateSelect, _object, _classname, _objectHelper, 0], 9, false, true];
	};
	if (_s3 > 0) then {
		{
			local _COL = _WHT;
			if (_forEachIndex == DZE_SnapSelIdx) then {_COL = _GRN;};

			_txt = format[_TB3 + _COL + "%1. " + localize "STR_EPOCH_ACTION_SNAP_SELECT" + " %2" + _END, _forEachIndex + 1, _x select 3];
			snapActions = player addAction [_txt, "\z\addons\dayz_code\actions\snap_build.sqf", ["Selected", _object, _classname, _objectHelper, _forEachIndex], 8, false, false];

			s_player_toggleSnapSelectPoint set [count s_player_toggleSnapSelectPoint, snapActions];
		} forEach _points;
	};
};

fnc_initSnapPoints = {
	local _object = _this select 0;
	local _points = _this select 1;

	snapGizmos = [];
	{
		local _objectSnapGizmo = DZE_SNAP_HELPER_CLASS createVehicleLocal [0,0,0];
		_objectSnapGizmo setObjectTexture DZE_SNAP_POINT_RESET;				// green
		_x resize 3;									// remove text element
		_objectSnapGizmo attachTo [_object, _x];
		snapGizmos set [count snapGizmos, _objectSnapGizmo];
	} count _points;
};

fnc_initSnapPointsNearby = {
	local _object	 = _this select 0;
	local _findObjects = nearestObjects [_object, [], DZE_snapRadius] - [_object];

	{deleteVehicle _x;} count snapGizmosNearby;	// clean up previous radius
	snapGizmosNearby = [];
	{
		local _nearbyObject = _x;
		local _typeOf = typeOf _x;

		local _pointsNearby = getArray (configFile >> "SnapBuilding" >> _typeOf >> "points");
		local _displayName = getText (configFile >> "CfgVehicles" >> _typeOf >> "displayName");
		{
			local _objectSnapGizmo = DZE_SNAP_HELPER_CLASS createVehicleLocal [0,0,0];
			_objectSnapGizmo setObjectTexture DZE_SNAP_POINT_RESET;				// green
			_objectSnapGizmo setDir (_nearbyObject getVariable["memDir",0]);
			_objectSnapGizmo setVariable ["snappoint", [_displayName, _x select 3], false];	// store object and snapping point display names

			_x resize 3;									// remove text element
			_objectSnapGizmo attachTo [_nearbyObject, _x];

			snapGizmosNearby set [count snapGizmosNearby, _objectSnapGizmo];		// rebuild helper list
		} count _pointsNearby;
	} forEach _findObjects;
};

fnc_initSnapPointsCleanup = {
	{deleteVehicle _x;} count snapGizmos;
	snapGizmos = [];

	{deleteVehicle _x;} count snapGizmosNearby;
	snapGizmosNearby = [];

	snapActionState = localize "STR_EPOCH_ACTION_SNAP_OFF";
};

fnc_snapDistanceCheck = {
	local _object		= _this select 0;
	local _objectHelper	= _this select 1;

	///////////////////////////////////////////////////////////////////////////////////////////
	//
	//				_snapObject function
	//
	///////////////////////////////////////////////////////////////////////////////////////////

	_snapObject = {
		_objectHelper setPosASL (getPosASL _closestNearCurr);	// snap object

		DZE_memDir = getDir _closestNearCurr;
		[_objectHelper, [DZE_memForBack, DZE_memLeftRight, DZE_memDir]] call fnc_SetPitchBankYaw;

		waitUntil {uiSleep 0.1; !helperDetach};
	};

	///////////////////////////////////////////////////////////////////////////////////////////
	//
	//				_uiSnapText function
	//
	///////////////////////////////////////////////////////////////////////////////////////////

	_uiSnapText = {
		if (!DZE_uiSnapText) exitWith {};

		local _pos	= worldToScreen (_closestNearCurr modelToWorld [0,0,0]);

		if (count _pos == 0) exitWith {};				// object may be off screen

		local _screenX	= (_pos select 0) - 0.5;			// center to snap point
		local _screenY	= (_pos select 1) - 0.06 * safeZoneH;		// 6% of screen height

		local _format	= "<t align='Center' size='0.4' font='Zeppelin33' shadow='2' color=";
		local _WHT	= _format + "'#E0E0E0'>";
		local _GRN	= _format + "'#20E020'>";
		local _END	= "</t>";
		local _NL	= _END + "<br/>";
		local _txt	= _WHT + "%1" + _NL + _WHT + (localize "STR_EPOCH_BUILD_UI_SNAP") + ": " + _GRN + "%2" + _END;

		local _var	= _closestNearCurr getVariable ["snappoint", ["",""]];

		local _nearName	= _var select 0;
		local _snapName	= _var select 1;

		if (_nearName == "") exitWith {};

		local _txt = format[_txt, _nearName, _snapName];
		[_txt, _screenX, _screenY, 0.1, 0, 0, 18] spawn BIS_fnc_dynamicText;
	};

	///////////////////////////////////////////////////////////////////////////////////////////

	local _OFF		= localize "STR_EPOCH_ACTION_SNAP_OFF";
	local _MANUAL		= localize "STR_EPOCH_ACTION_SNAP_POINT_MANUAL";
	
	local _closestHeldPrev	= objNull;
	local _closestNearPrev	= objNull;

	while {snapActionState != _OFF} do {

		local _closestHeldCurr	= objNull;
		local _closestNearCurr	= objNull;
		local _closestDistance	= DZE_snapDistance;

		if (snapActionStateSelect == _MANUAL) then {
		
			if (DZR_snapRefresh) exitWith {};	// currently refreshing

			///////////////////////////////////////////////////////////////////////////
			//
			//				Manual Snap
			//
			///////////////////////////////////////////////////////////////////////////
			{							// scan all nearby points
				local _distance = _objectHelper distance _x;	// compare to current selected

				if (_distance < _closestDistance) then {	// found a closer match
					_closestDistance = _distance;
					_closestNearCurr = _x;			// update current
				};
			} forEach snapGizmosNearby;

			if ((isNull _closestNearCurr) || {_closestNearCurr != _closestNearPrev}) then {
				_closestNearPrev setObjectTexture DZE_SNAP_POINT_RESET;		// near OFF
			};
			if (!isNull _closestNearCurr) then {
				_closestNearCurr setObjectTexture DZE_SNAP_POINT_FOUND;		// near ON
				_closestNearPrev = _closestNearCurr;

				call _uiSnapText;						// display text

				if (helperDetach) then {
					call _snapObject;					// snap object
				};
			};
		} else {

			if (DZR_snapRefresh) exitWith {};	// currently refreshing

			///////////////////////////////////////////////////////////////////////////
			//
			//				Auto Snap
			//
			///////////////////////////////////////////////////////////////////////////
			{
				local _nearCurr = _x;					// scan all nearby points
				{
					local _distance = _nearCurr distance _x;	// compare to all points of held object

					if (_distance < _closestDistance) then {	// found a closer match
						_closestDistance = _distance;
						_closestHeldCurr = _x;			// update current
						_closestNearCurr = _nearCurr;		// paired points
					};
				} count snapGizmos;
			} forEach snapGizmosNearby;

			if ((isNull _closestHeldCurr) || {_closestHeldCurr != _closestHeldPrev}) then {
				_closestHeldPrev setObjectTexture DZE_SNAP_POINT_RESET;		// held OFF
			};
			if ((isNull _closestNearCurr) || {_closestNearCurr != _closestNearPrev}) then {
				_closestNearPrev setObjectTexture DZE_SNAP_POINT_RESET;		// near OFF
			};
			if (!isNull _closestNearCurr) then {
				_closestHeldCurr setObjectTexture DZE_SNAP_POINT_FOUND;		// held ON
				_closestHeldPrev = _closestHeldCurr;

				_closestNearCurr setObjectTexture DZE_SNAP_POINT_FOUND;		// near ON
				_closestNearPrev = _closestNearCurr;

				call _uiSnapText;						// display text

				if (helperDetach) then {
					detach _object;
					_objectHelper setPosASL (getPosASL _closestHeldCurr);	// select snapping point on held object
					_object attachTo [_objectHelper];

					call _snapObject;					// snap object
				};
			};
		};

		uiSleep 0.02;
	};
};
