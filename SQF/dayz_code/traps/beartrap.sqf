_init = {
	//if (isServer) then {
		[_trap] call setup_trap;

		if (_trap getVariable ["armed", false]) then {
			[] call _arm;
		} else {
			[] call _disarm;
		};
	//};
};

_arm = {
	//if (isServer) then {
		_trap animate ["LeftShutter", 0];
		_trap animate ["RightShutter", 0];

		_trigger = createTrigger ["EmptyDetector", getPosATL _trap];
		_trigger setpos getPosATL _trap;
		_trigger setTriggerArea [0.5, 0.5, 0, false];
		_trigger setTriggerActivation ["ANY", "PRESENT", false];
		_trigger setTriggerStatements [
			"this",
			"['trigger', thisTrigger, thisList] spawn beartrap;",
			""
		];

		[_trap, _trigger] call arm_trap;
	//} else {
		_trap setVariable ["armed", true, true];
	//};
};

_disarm = {
	if (isServer) then {
		[_trap] call disarm_trap;
	} else {
		_trap setVariable ["armed", false, true];
	};
};

_remove = {
	if (isServer) then {
		[_trap] call remove_trap;
	} else {
		[_trap] call remove_trap;
		[0,0,0,["cfgMagazines","TrapBear",_trap]] spawn object_pickup;
	};
};

_trigger = {
	if (isServer) then {
		private ["_entity"];
		_entity = _this select 0;

		_trap animate ["LeftShutter", 1];
		_trap animate ["RightShutter", 1];

		[nil,_trap,rSAY,["trap_bear_0",60]] call RE;

		if (_entity isKindOf "Animal") then {
			_entity setDamage 1;
		} else {
			[_entity, "Legs", [_entity]] call server_sendToClient;
		};

		[_trap] call trigger_trap;
	};
};

private ["_event", "_trap", "_args"];
_event = _this select 0;
_trap = if (typeOf (_this select 1) == "EmptyDetector") then { dayz_traps_active select (dayz_traps_trigger find (_this select 1)) } else { _this select 1 };
_args = if (count _this > 2) then { _this select 2 } else { [] };

switch (_event) do {
	case "init": {
		[] call _init;
	};
	case "remove": {
		[] call _remove;
	};
	case "arm": {
		[] call _arm;
	};
	case "disarm": {
		[] call _disarm;
	};
	case "trigger": {
		_args call _trigger;
	};
};
