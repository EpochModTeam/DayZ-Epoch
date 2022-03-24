local _trap = _this select 0;

if (!isNull _trap) then {
	while { true } do {

		local _armed = _trap getVariable "armed";

		if (isNull _trap) exitWith { /* break from loop */ };

		if (!isNil "_armed") exitWith {
			if (isServer) then {
				dayz_traps set [count dayz_traps, _trap];
			};
		};

		uiSleep 0.5;
	};
};
