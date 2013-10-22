// bleed.sqf

private ["_unit","_isDead","_isCardiac"];
_unit = (_this select 3);
_isDead = _unit getVariable["USEC_isDead",false];
_isCardiac = _unit getVariable["USEC_isCardiac",false];

sleep 1;
if (_isDead) then {
	TitleText["Pulse is extremely weak","PLAIN DOWN",3];
} else {
	if (_isCardiac) then {
		TitleText["Pulse is weak","PLAIN DOWN",3];
	} else {
		TitleText["Pulse is strong","PLAIN DOWN",3];
	};
};

//r_action = false;