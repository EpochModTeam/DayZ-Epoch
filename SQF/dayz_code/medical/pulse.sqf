private["_unit","_isDead","_isCardiac"];
_unit = _this select 3;
_isDead = _unit getVariable["USEC_isDead",false];
_isCardiac = _unit getVariable["USEC_isCardiac",false];

uiSleep 1;
if (_isDead) then {
	cutText [localize "str_pulse_extremely_weak","PLAIN DOWN"];
} else {
	if (_isCardiac) then {
		cutText [localize "str_pulse_weak","PLAIN DOWN"];
	} else {
		cutText [localize "str_pulse_strong","PLAIN DOWN"];
	};
};
