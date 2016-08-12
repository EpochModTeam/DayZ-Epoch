if (player isKindOf "PZombie_VB") exitWith {};
/*
	Created exclusively for ArmA2:OA - DayZMod.
	Please request permission to use/alter from R4Z0R49.
*/
//private["_holder","_type","_classname","_name"];
_holder = _this select 0;
_type = _this select 1;
_classname = _this select 2;

_name = getText (configFile >> _type >> _classname >> "displayName");

pickupInit = true;

actionMonitor = {
	private["_action","_run","_timeout"];
	_holder = _this select 0;
	_type = _this select 1;
	_classname = _this select 2;
	_name = _this select 3;

	_action = -1;
	_distance = player distance _holder;
	_run = true;
	_timeout = 2;

	//diag_log format["Holder: %1, Type: %2 Classname: %3, Name: %4",_holder, _type, _classname, _name];

	while { _run } do {
		if (alive _holder) then {
			_distance = player distance _holder;
			// Add action to player
			if ((_distance < 1.75) && (_action == -1)) then {
				_action = player addAction [format[(localize "str_init_take"),_name], "\z\addons\dayz_code\actions\object_pickup.sqf",[_type,_classname,_holder], 20, true, true];
				player reveal _holder;
				_timeout = 0.3;
			};
			// Remove action from player
			if ((_distance >= 1.75) && (_action != -1)) then {
				player removeAction _action;
				pickupInit = true;
				_action = -1;
				_timeout = 2;
			};
			// Stop the loop and fall back to old code
			if (_distance > 100) then {
				null = _holder addAction [format[(localize "str_init_take"),_name], "\z\addons\dayz_code\actions\object_pickup.sqf",[_type,_classname,_holder], 20, true, true];
				player reveal _holder;
				_run = false;
				_timeout = 0;
			};
		} else {
			if (_action != -1) then {
				player removeAction _action;
				_action = -1;
				pickupInit = true;
			};
			_timeout = 0;
			_run = false;
		};
		uiSleep _timeout;
	};
};

if (_classname == "1Rnd_Arrow_Wood") then {
	[_holder,_type,_classname,_name] spawn actionMonitor;
} else {
	s_player_holderPickup = _holder addAction [format[(localize "str_init_take"),_name], "\z\addons\dayz_code\actions\object_pickup.sqf",[_type,_classname,_holder], 20, true, true];
	player reveal _holder;
	pickupInit = true;
};