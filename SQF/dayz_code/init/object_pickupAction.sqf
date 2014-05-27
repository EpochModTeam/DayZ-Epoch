private["_holder","_type","_classname","_name"];
_holder = _this select 0;
_type = _this select 1;
_classname = _this select 2;

_name = getText (configFile >> _type >> _classname >> "displayName");

// Exit if player zombie
if(player isKindOf "PZombie_VB") exitWith {};

actionMonitor = {
	private ["_holder","_type","_classname","_name","_action","_distance","_run","_timeout","_null"];
	_holder = _this select 0;
	_type = _this select 1;
	_classname = _this select 2;
	_name = _this select 3;

	_action = -1;
	_distance = player distance _holder;
	_run = true;
	_timeout = 2;

	while { _run } do {
		if (alive _holder) then {
			_distance = player distance _holder;
			// Add action to player
			if ((_distance < 1.75) && (_action == -1)) then {
				_action = player addAction [format[(localize "STR_DAYZ_CODE_1"),_name], "\z\addons\dayz_code\actions\object_pickup.sqf",[_type,_classname,_holder], 20, true, true];
				player reveal _holder;
				_timeout = 0.3;
			};
			// Remove action from player
			if ((_distance >= 1.75) && (_action != -1)) then {
				player removeAction _action;
				_action = -1;
				_timeout = 2;
			};
			// Stop the loop && fall back to old code
			if (_distance > 100) then {
				_null = _holder addAction [format[(localize "STR_DAYZ_CODE_1"),_name], "\z\addons\dayz_code\actions\object_pickup.sqf",[_type,_classname,_holder], 20, true, true];
				player reveal _holder;
				_run = false;
				_timeout = 0;
			};
		} else {
			if (_action != -1) then {
				player removeAction _action;
				_action = -1;
			};
			_timeout = 0;
			_run = false;
		};
		sleep _timeout;
	};
};

if (_classname == "WoodenArrow") then {
	[_holder,_type,_classname,_name] spawn actionMonitor;
} else {
	_holder addAction [format[(localize "STR_DAYZ_CODE_1"),_name], "\z\addons\dayz_code\actions\object_pickup.sqf",[_type,_classname,_holder], 20, true, true, "", "DZE_CanPickup"];
	player reveal _holder;
};