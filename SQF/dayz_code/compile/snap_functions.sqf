/*-----------------------------------*/
// by Raymix						//
// July 10 2014					   //
/*--------------------------------*/

fnc_snapActionCleanup = {
	private ["_s1","_s2","_s3","_cnt","_object","_classname","_objectHelper","_points"];

	_s1 = _this select 0;
	_s2 = _this select 1;
	_s3 = _this select 2;
	_object = _this select 3;
	_classname = _this select 4;
	_objectHelper = _this select 5;
	_points = _this select 6;

	player removeAction s_player_toggleSnap;
	s_player_toggleSnap = -1;
	player removeAction s_player_toggleSnapSelect;
	s_player_toggleSnapSelect = -1;

	if (count s_player_toggleSnapSelectPoint != 0) then {
		{
			player removeAction _x;
		} count s_player_toggleSnapSelectPoint;

		s_player_toggleSnapSelectPoint = [];
		snapActions = -1;
	};
	if (_s1 > 0) then {
		s_player_toggleSnap = player addaction [format["<t color=""#ffffff"">" + "Snap: %1" +"</t>",snapActionState],"\z\addons\dayz_code\actions\snap_build.sqf",[snapActionState,_object,_classname,_objectHelper,0],10,false,true];
	};
	if (_s2 > 0) then {
		s_player_toggleSnapSelect = player addaction [format["<t color=""#ffffff"">" + localize "STR_EPOCH_ACTION_SNAP_POINT" + " %1" +"</t>",snapActionStateSelect],"\z\addons\dayz_code\actions\snap_build.sqf",[snapActionStateSelect,_object,_classname,_objectHelper,0],9,false,true];
	};
	if (_s3 > 0) then {
		s_player_toggleSnapSelectPoint = [];
		_cnt = 0;
		{
			snapActions = player addaction [format["<t color=""#ffffff"">" + "			%1. " + localize "STR_EPOCH_ACTION_SNAP_SELECT" + " %2" + "</t>",_cnt+1,_x select 3],"\z\addons\dayz_code\actions\snap_build.sqf",["Selected",_object,_classname,_objectHelper,_cnt],8,false,false];
			s_player_toggleSnapSelectPoint set [count s_player_toggleSnapSelectPoint,snapActions];
			_cnt = _cnt + 1;
		} count _points;
	};
};

fnc_initSnapPoints = {
	private ["_objectSnapGizmo","_object","_points"];

	_object = _this select 0;
	_points = _this select 1;

	snapGizmos = [];
	{
		_objectSnapGizmo = "Sign_sphere10cm_EP1" createVehicleLocal [0,0,0];
		_objectSnapGizmo setobjecttexture [0,"#(argb,8,8,3)color(0.04,0.84,0.92,0.3,ca)"];
		_objectSnapGizmo attachTo [_object,[_x select 0,_x select 1,_x select 2]];
		snapGizmos set [count snapGizmos,_objectSnapGizmo];
	} count _points;
};

fnc_initSnapPointsNearby = {
	private ["_pos","_findWhitelisted","_pointsNearby","_nearbyObject","_objectSnapGizmo","_posNearby","_object","_whitelist","_radius"];

	_object = _this select 0;
	_whitelist = _this select 1;
	_radius = _this select 2;

	_pos = [_object] call FNC_GetPos;
	_findWhitelisted = [];
	_pointsNearby = [];
	_findWhitelisted = nearestObjects [_pos,_whitelist,(_radius + DZE_snapExtraRange)]-[_object];
	snapGizmosNearby = [];
	{
		_nearbyObject = _x;
		_pointsNearby = getArray (configFile >> "SnapBuilding" >> (typeOf _x) >> "points");

		{
			_objectSnapGizmo = "Sign_sphere10cm_EP1" createVehicleLocal [0,0,0];
			_objectSnapGizmo setobjecttexture [0,"#(argb,8,8,3)color(0.04,0.84,0.92,0.3,ca)"];
			_objectSnapGizmo setDir (_nearbyObject getVariable["memDir",0]);
			_posNearby = _nearbyObject modelToWorld [_x select 0,_x select 1,_x select 2];
			if (surfaceIsWater _posNearby) then {
				_objectSnapGizmo setPosASL [(_posNearby) select 0,(_posNearby) select 1,(getPosASL _nearbyObject select 2) + (_x select 2)];
			} else {
				_objectSnapGizmo setPosATL _posNearby;
			};
			snapGizmosNearby set [count snapGizmosNearby,_objectSnapGizmo];
		} count _pointsNearby;
	} forEach _findWhitelisted;
};

fnc_initSnapPointsCleanup = {
	{detach _x; deleteVehicle _x;} count snapGizmos;
	snapGizmos = [];
	{detach _x; deleteVehicle _x;} count snapGizmosNearby;
	snapGizmosNearby = [];
	snapActionState = localize "STR_EPOCH_ACTION_SNAP_OFF";
};

fnc_snapDistanceCheck = {
	private ["_distClosestPointFound","_distCheck","_distClosest","_testXPos","_distClosestPointFoundPos","_distClosestPointFoundDir","_distClosestAttached","_distCheckAttached","_distClosestAttachedFoundPos","_onWater","_objectHelper","_object"];

	_object = _this select 0;
	_objectHelper = _this select 1;

	while {snapActionState != localize "STR_EPOCH_ACTION_SNAP_OFF"} do {
		_distClosestPointFound = objNull;
		_distCheck = 0;
		_distClosest = 10;
		_testXPos = [];
		_distClosestPointFoundPos =[];
		_distClosestPointFoundDir = 0;

		{
			if (_x !=_distClosestPointFound) then {_x setobjecttexture [0,"#(argb,8,8,3)color(0.04,0.84,0.92,0.3,ca)"];};
			_testXPos = [_x] call FNC_GetPos;
			_distCheck = _objectHelper distance _testXPos;
				if (_distCheck < _distClosest) then {
					_distClosest = _distCheck;
					_distClosestPointFound setobjecttexture [0,"#(argb,8,8,3)color(0.04,0.84,0.92,0.3,ca)"];
					_distClosestPointFound = _x;
					_distClosestPointFound setobjecttexture [0,"#(argb,8,8,3)color(0,0.92,0.06,1,ca)"];
				};
		} count snapGizmosNearby;

		if (!isNull _distClosestPointFound) then {
			if (snapActionStateSelect == localize "STR_EPOCH_ACTION_SNAP_POINT_MANUAL") then {
				if (helperDetach) then {
					_onWater = surfaceIsWater position _distClosestPointFound;
					_distClosestPointFoundDir = getDir _distClosestPointFound;
					if (_onWater) then {
						_distClosestPointFoundPos = getPosASL _distClosestPointFound;
						_objectHelper setPosASL _distClosestPointFoundPos;
					} else {
						_distClosestPointFoundPos = getPosATL _distClosestPointFound;
						_objectHelper setPosATL _distClosestPointFoundPos;
					};
					//_objectHelper setDir _distClosestPointFoundDir;
					DZE_memDir = _distClosestPointFoundDir;
					[_objectHelper,[DZE_memForBack,DZE_memLeftRight,DZE_memDir]] call fnc_SetPitchBankYaw;
					waitUntil {uiSleep 0.1; !helperDetach};
				};
			} else {
				_distClosestAttached = objNull;
				_distCheckAttached = 0;
				_distClosest = 10;
				_distClosestAttachedFoundPos = [];

				{
					if (_x !=_distClosestAttached) then {_x setobjecttexture [0,"#(argb,8,8,3)color(0.04,0.84,0.92,0.3,ca)"];};
					_testXPos = [_x] call FNC_GetPos;
					_distCheckAttached = _distClosestPointFound distance _testXPos;
						if (_distCheckAttached < _distClosest) then {
							_distClosest = _distCheckAttached;
							_distClosestAttached setobjecttexture [0,"#(argb,8,8,3)color(0.04,0.84,0.92,0.3,ca)"];
							_distClosestAttached = _x;
							_distClosestAttached setobjecttexture [0,"#(argb,8,8,3)color(0,0.92,0.06,1,ca)"];
						};
				} count snapGizmos;

				if (helperDetach) then {
					_distClosestPointFoundDir = getDir _distClosestPointFound;
					_onWater = surfaceIsWater position _distClosestPointFound;
					if (_onWater) then {
						_distClosestPointFoundPos = getPosASL _distClosestPointFound;
						_distClosestAttachedFoundPos = getPosASL _distClosestAttached;
						detach _object;
						_objectHelper setPosASL _distClosestAttachedFoundPos;
						_object attachTo [_objectHelper];
						_objectHelper setPosASL _distClosestPointFoundPos;
					} else {
						_distClosestPointFoundPos = getPosATL _distClosestPointFound;
						_distClosestAttachedFoundPos = getPosATL _distClosestAttached;
						detach _object;
						_objectHelper setPosATL _distClosestAttachedFoundPos;
						_object attachTo [_objectHelper];
						_objectHelper setPosATL _distClosestPointFoundPos;
					};
					//_objectHelper setDir _distClosestPointFoundDir;
					DZE_memDir = _distClosestPointFoundDir;
					[_objectHelper,[DZE_memForBack,DZE_memLeftRight,DZE_memDir]] call fnc_SetPitchBankYaw;
					waitUntil {uiSleep 0.1; !helperDetach};
				};
			};
		};
		uiSleep 0.1;
	};
};

fnc_initSnapTutorial = {
/*
	Shows help dialog for player ONCE per log in, explaining controls.
	Add snapTutorial = false; to your init.sqf to disable this tutorial completely.
	You can also add this bool to the end of this function to only show tutorial once per player login (not recommended)
*/
	private ["_bldTxtSwitch","_bldTxtEnable","_bldTxtClrO","_bldTxtClrW","_bldTxtClrR","_bldTxtClrG","_bldTxtSz","_bldTxtSzT","_bldTxtShdw","_bldTxtAlgnL","_bldTxtUndrln","_bldTxtBold","_bldTxtFinal","_bldTxtStringTitle","_bldTxtStringSD","_bldTxtStringSE","_bldTxtStringSA","_bldTxtStringSM","_bldTxtStringPG","_bldTxtStringAPG","_bldTxtStringCPG","_bldTxtStringQE","_bldTxtStringQEF","_bldTxtStringFD","_bldTxtStringFS"];

	if (isNil "snapTutorial") then {
		_bldTxtSwitch = _this select 0;
		_bldTxtEnable = _this select 1;
		_bldTxtClrO = "color='#ff8800'"; //orange
		_bldTxtClrW = "color='#ffffff'"; //white
		_bldTxtClrR = "color='#fd0a05'"; //red
		_bldTxtClrG = "color='#11ef00'"; //green
		_bldTxtSz = "size='0.76'"; //Title font size
		_bldTxtSzT = "size='0.4'"; //Text font size
		_bldTxtShdw = "shadow='1'"; //Font shadow
		_bldTxtAlgnL = "align='left'"; //Text align left
		_bldTxtUndrln = "underline='true'";
		_bldTxtBold = "font='Zeppelin33'"; //Bold text
		_bldTxtFinal = "";

		//Delete on init
		17 cutRsc ["Default", "PLAIN"];
		uiSleep 0.1;

		//Init Tutorial text
		if (_bldTxtEnable) then {
			_bldTxtStringTitle = format ["<t %1%2%3%4%6>Epoch<t %5%7> Snap Building</t></t><br />",_bldTxtClrW,_bldTxtSz,_bldTxtShdw,_bldTxtAlgnL,_bldTxtClrO,_bldTxtUndrln,_bldTxtBold];
			_bldTxtStringSD = format["<t %1%4%5%6>[Snap]<t %2> %7</t> <t %3>%8</t></t><br /><br />",_bldTxtClrO,_bldTxtClrR,_bldTxtClrW,_bldTxtSzT,_bldTxtShdw,_bldTxtAlgnL,localize "STR_EPOCH_SNAP_TUTORIAL_DISABLE",localize "STR_EPOCH_SNAP_TUTORIAL_DISABLE_MSG"];
			_bldTxtStringSE = format["<t %1%4%5%6>[Snap]<t %2> %7</t> <t %3>%8</t></t><br /><br />",_bldTxtClrO,_bldTxtClrG,_bldTxtClrW,_bldTxtSzT,_bldTxtShdw,_bldTxtAlgnL,localize "STR_EPOCH_SNAP_TUTORIAL_ENABLE",localize "STR_EPOCH_SNAP_TUTORIAL_ENABLE_MSG"];
			_bldTxtStringSA = format["<t %1%3%4%5>[Auto]<t %2>: %6</t></t><br /><br />",_bldTxtClrO,_bldTxtClrW,_bldTxtSzT,_bldTxtShdw,_bldTxtAlgnL,localize "STR_EPOCH_SNAP_TUTORIAL_AUTO_DETECT"];
			_bldTxtStringSM = format["<t %1%3%4%5>[%6]<t %2>: %7</t></t><br /><br />",_bldTxtClrO,_bldTxtClrW,_bldTxtSzT,_bldTxtShdw,_bldTxtAlgnL,localize "STR_EPOCH_ACTION_SNAP_POINT_MANUAL",localize "STR_EPOCH_SNAP_TUTORIAL_MANUAL_DETECT"];
			_bldTxtStringPG = format["<t %1%3%4%5>%6<t %2>: %7</t></t><br />",_bldTxtClrO,_bldTxtClrW,_bldTxtSzT,_bldTxtShdw,_bldTxtAlgnL,localize "STR_EPOCH_SNAP_TUTORIAL_PGUPPGDOWN",localize "STR_EPOCH_SNAP_TUTORIAL_PGUPPGDOWN_MSG"];
			_bldTxtStringAPG = format["<t %1%3%4%5>%6<t %2>: %7</t></t><br />",_bldTxtClrO,_bldTxtClrW,_bldTxtSzT,_bldTxtShdw,_bldTxtAlgnL,localize "STR_EPOCH_SNAP_TUTORIAL_ALT_PGUPPGDOWN",localize "STR_EPOCH_SNAP_TUTORIAL_ALT_PGUPPGDOWN_MSG"];
			_bldTxtStringCPG = format["<t %1%3%4%5>%6<t %2>: %7</t></t><br />",_bldTxtClrO,_bldTxtClrW,_bldTxtSzT,_bldTxtShdw,_bldTxtAlgnL,localize "STR_EPOCH_SNAP_TUTORIAL_CTRL_PGUPPGDOWN",localize "STR_EPOCH_SNAP_TUTORIAL_CTRL_PGUPPGDOWN_MSG"];
			_bldTxtStringQE = format["<t %1%3%4%5>[Q / E]<t %2>: %6</t></t><br />",_bldTxtClrO,_bldTxtClrW,_bldTxtSzT,_bldTxtShdw,_bldTxtAlgnL,localize "STR_EPOCH_SNAP_TUTORIAL_ROTATE180_MSG"];
			_bldTxtStringQEF = format["<t %1%3%4%5>[Q / E]<t %2>: %6</t></t><br /><br />",_bldTxtClrO,_bldTxtClrW,_bldTxtSzT,_bldTxtShdw,_bldTxtAlgnL,localize "STR_EPOCH_SNAP_TUTORIAL_ROTATE45_MSG"];
			_bldTxtStringFD = format["<t %1%3%4%5>[F]<t %2>: %6</t></t><br />",_bldTxtClrO,_bldTxtClrW,_bldTxtSzT,_bldTxtShdw,_bldTxtAlgnL,localize "STR_EPOCH_SNAP_TUTORIAL_F_DROP_MSG"];
			_bldTxtStringFS = format["<t %1%3%4%5>[F]<t %2>: %6</t></t><br />",_bldTxtClrO,_bldTxtClrW,_bldTxtSzT,_bldTxtShdw,_bldTxtAlgnL,localize "STR_EPOCH_SNAP_TUTORIAL_F_SNAP_MSG"];
			switch (_bldTxtSwitch) do {
				case "init": {
					_bldTxtFinal = _bldTxtStringTitle + _bldTxtStringSD + _bldTxtStringPG + _bldTxtStringAPG + _bldTxtStringCPG + _bldTxtStringQE + _bldTxtStringQEF + _bldTxtStringFD;
				};
				case "OnAuto": {
					_bldTxtFinal = _bldTxtStringTitle + _bldTxtStringSE + _bldTxtStringSA + _bldTxtStringPG + _bldTxtStringAPG + _bldTxtStringCPG + _bldTxtStringQE + _bldTxtStringQEF + _bldTxtStringFS;
				};
				case "manual": {
					_bldTxtFinal = _bldTxtStringTitle + _bldTxtStringSE + _bldTxtStringSM + _bldTxtStringPG + _bldTxtStringAPG + _bldTxtStringCPG + _bldTxtStringQE + _bldTxtStringQEF + _bldTxtStringFS;
				};
			};

			[
				_bldTxtFinal, //structured text
				0.73 * safezoneW + safezoneX, //number - x
				0.65 * safezoneH + safezoneY, //number - y
				30, //number - duration
				1, // number - fade in time
				0, // number - delta y
				17 //number - layer ID
			] spawn bis_fnc_dynamicText;
		};
	};
};
