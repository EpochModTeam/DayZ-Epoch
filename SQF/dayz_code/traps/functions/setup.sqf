private ["_id", "_uid", "_armed"];
_trap = _this select 0;

if (!isNull _trap) then {
	while { true } do {
		_id = _trap getVariable ["ObjectID", "0"];
		_uid = _trap getVariable ["ObjectUID", "0"];
		_armed = _trap getVariable "armed";

		if (isNull _trap) exitWith { /* break from loop */ };

		if (((parseNumber _id > 0) || (parseNumber _uid > 0)) && !isNil "_armed") exitWith {
			dayz_traps set [count dayz_traps, _trap];
		};

		sleep 0.5;
	};
};
