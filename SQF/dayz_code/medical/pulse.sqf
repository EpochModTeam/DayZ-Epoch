private["_unit","_isDead","_isCardiac"];
_unit = _this select 3;
_isDead = _unit getVariable["USEC_isDead",false];
_isCardiac = _unit getVariable["USEC_isCardiac",false];

uiSleep 1;
if (_isDead) then {
	localize "str_pulse_extremely_weak" call dayz_rollingMessages;
} else {
	if (_isCardiac) then {
		localize "str_pulse_weak" call dayz_rollingMessages;
	} else {
		localize "str_pulse_strong" call dayz_rollingMessages;
	};
};
