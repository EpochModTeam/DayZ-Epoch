private ["_canDo","_passArray","_objHDiff","_isOk","_zheightchanged","_zheightdirection","_rotate","_dir","_object","_position","_isAllowedUnderGround","_location1","_location2","_cancel","_reason","_lastDir","_objectHelper","_objectHelperDir","_objectHelperPos"];

_object = _this select 0;
_isAllowedUnderGround = _this select 1;
_location1 = _this select 2;
_position = _this select 3;
_objectHelper  = _this select 4;

_passArray = [];

_objHDiff = 0;
_isOk = true;
_cancel = false;
_reason = "";
_dir = getDir player; //required to pass direction when building
helperDetach = false;
_canDo = (!r_drag_sqf and !r_player_unconscious);

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
		if (helperDetach) then {
			_dir = -45;
		} else {
			_dir = 180;
		};
	};
	if (DZE_6) then {
		_rotate = true;
		DZE_6 = false;
		if (helperDetach) then {
			_dir = 45;
		} else {
			_dir = 0;
		};
	};
	
	if (DZE_F and _canDo) then {	
		if (helperDetach) then {
		_objectHelperDir = getDir _objectHelper; 
		_objectHelper attachTo [player];
		_objectHelper setDir _objectHelperDir-(getDir player);
		helperDetach = false;
		} else {
		_objectHelperPos = getPosATL _objectHelper;
		detach _objectHelper;			
		_objectHelper setPosATL _objectHelperPos;
		_objectHelperDir = getDir _objectHelper;
		_objectHelper setVelocity [0,0,0]; //fix sliding glitch
		helperDetach = true;
		};
		DZE_F = false;
	};

	if(_rotate) then {
		if (helperDetach) then {
			_objectHelperDir = getDir _objectHelper;
			_objectHelperPos = getPosATL _objectHelper;
			_objectHelper setDir _objectHelperDir+_dir;
			_objectHelper setPosATL _objectHelperPos;
		} else {
			_objectHelper setDir _dir;
			_objectHelper setPosATL _position;		
		};
	};

	if(_zheightchanged) then {
		if (!helperDetach) then {
		detach _objectHelper;
		};

		_position = getPosATL _objectHelper;

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

		_objectHelper setDir (getDir _objectHelper);

		if((_isAllowedUnderGround == 0) && ((_position select 2) < 0)) then {
			_position set [2,0];
		};

		_objectHelper setPosATL _position;

		if (!helperDetach) then {
		_objectHelper attachTo [player];
		};
	};

	sleep 0.5;

	_location2 = getPosATL player;
	_objectHelperPos = getPosATL _objectHelper;
	
	if(DZE_5) exitWith {
		_isOk = false;
		detach _object;
		_position = getPosATL _object;
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

	if (player getVariable["combattimeout", 0] >= time) exitWith {
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

_passArray = [_cancel,_reason,_position,_dir];
_passArray //[bool,string,array,int]