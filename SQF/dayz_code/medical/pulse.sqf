// bleed.sqf

private ["_unit","_isDead","_isCardiac"];
_unit = (_this select 3);
_isDead = _unit getVariable["USEC_isDead",false];
_isCardiac = _unit getVariable["USEC_isCardiac",false];

sleep 1;
if (_isDead) then {
	TitleText[(localize "str_epoch_player_3"),"PLAIN DOWN",3];
} else {
	if (_isCardiac) then {
		TitleText[(localize "str_epoch_player_4"),"PLAIN DOWN",3];
	} else {
		TitleText[(localize "str_epoch_player_5"),"PLAIN DOWN",3];
	};
};

//r_action = false;