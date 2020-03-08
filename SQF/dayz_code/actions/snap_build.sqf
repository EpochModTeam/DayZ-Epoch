/*-----------------------------------*/
// by Raymix						//
// July 10 2014					   //
/*--------------------------------*/

private ["_object", "_classname", "_objectHelper", "_selectedAction", "_cfg", "_whitelist", "_points", "_radius"];

snapActionState = _this select 3 select 0;
_object = _this select 3 select 1;
_classname = _this select 3 select 2;
_objectHelper = _this select 3 select 3;
_selectedAction = _this select 3 select 4;

//Snap config file
_cfg = (configFile >> "SnapBuilding" >> _classname);
_whitelist = getArray (_cfg >> "snapTo");
_points = getArray (_cfg >> "points");
_radius = getNumber (_cfg >> "radius");

call {
	if (snapActionState == "Init") exitwith {
		["init",true] call fnc_initSnapTutorial;
		snapActionState = localize "STR_EPOCH_ACTION_SNAP_OFF";
		[1,0,0,_object,_classname,_objectHelper,_points] call fnc_snapActionCleanup;

		[_object,_classname,_objectHelper,_points] spawn {
			private ["_object", "_classname", "_objectHelper", "_points"];

			_object = _this select 0;
			_classname = _this select 1;
			_objectHelper = _this select 2;
			_points = _this select 3;

			while {1==1} do {
				if (DZE_cancelBuilding || {!dayz_actionInProgress}) exitWith {
					call fnc_initSnapPointsCleanup;
					[0,0,0,_object,_classname,_objectHelper,_points] call fnc_snapActionCleanup;
					["",false] call fnc_initSnapTutorial;
					snapActionState = localize "STR_EPOCH_ACTION_SNAP_OFF";
				};

				uiSleep 2;
			};
		};
	};
	if (snapActionState == localize "STR_EPOCH_ACTION_SNAP_OFF") exitwith {
		["OnAuto",true] call fnc_initSnapTutorial;
		snapActionState = localize "STR_EPOCH_ACTION_SNAP_ON";
		snapActionStateSelect = "Auto";
		[1,1,0,_object,_classname,_objectHelper,_points] call fnc_snapActionCleanup;
		[_object,_points] call fnc_initSnapPoints;
		[_object,_whitelist,_radius] call fnc_initSnapPointsNearby;
		uiSleep 0.25;
		[_object,_objectHelper] call fnc_snapDistanceCheck;
	};

	if (snapActionState == localize "STR_EPOCH_ACTION_SNAP_ON") exitwith {
		["init",true] call fnc_initSnapTutorial;
		snapActionState = localize "STR_EPOCH_ACTION_SNAP_OFF";
		[1,0,0,_object,_classname,_objectHelper,_points] call fnc_snapActionCleanup;
		call fnc_initSnapPointsCleanup;
	};

	if (snapActionState == "Auto") exitwith {
		["manual",true] call fnc_initSnapTutorial;
		snapActionState = localize "STR_EPOCH_ACTION_SNAP_ON";
		snapActionStateSelect = localize "STR_EPOCH_ACTION_SNAP_POINT_MANUAL";
		[1,1,1,_object,_classname,_objectHelper,_points] call fnc_snapActionCleanup;
	};

	if (snapActionState == localize "STR_EPOCH_ACTION_SNAP_POINT_MANUAL") exitwith {
		["OnAuto",true] call fnc_initSnapTutorial;
		snapActionState = localize "STR_EPOCH_ACTION_SNAP_ON";
		snapActionStateSelect = "Auto";
		[1,1,0,_object,_classname,_objectHelper,_points] call fnc_snapActionCleanup;
	};

	if (snapActionState == "Selected") exitwith {
		private ["_cnt", "_newPos"];

		_cnt = 0;
		_newPos = [];
		{
			_x setobjecttexture [0,"#(argb,8,8,3)color(0.04,0.84,0.92,0.3,ca)"];
			if (_cnt == _selectedAction) then {
				_newPos = [(getPosATL _x select 0),(getPosATL _x select 1),(getPosATL _x select 2)];
				detach _object;
				detach _objectHelper;
				_objectHelper setDir (getDir _object);
				_objectHelper setPosATL _newPos;
				_object attachTo [_objectHelper];
				_x setobjecttexture [0,"#(argb,8,8,3)color(0,0.92,0.06,1,ca)"];
				if (!helperDetach) then {
					_objectHelper attachTo [player];
					_objectHelper setDir ((getDir _objectHelper)-(getDir player));
				};
				[_objectHelper,[DZE_memForBack,DZE_memLeftRight,DZE_memDir]] call fnc_SetPitchBankYaw;
			};
			_cnt = _cnt + 1;
		} count snapGizmos;
	};
};
