// called by PublicVariableEventHandler "PVCDZ_hlt_Epi", received from the server, 
// because another player sent a PVDZ_send = [_unit,"Epinephrine",[_unit,player,"ItemEpinephrine"]];

_array = _this; //_this select 0;
_unit = _array select 0; // healed
_medic = _array select 1; // healer

_isDead = _unit getVariable["USEC_isDead",false];

//if (local _unit) then {_unit setCaptive false}; // captive ????

if (_unit == player and !(_unit getVariable["USEC_isDead",false]) and _medic != _unit and _medic distance _unit < 5) then {
	_unit setVariable ["NORRN_unconscious", false, false]; r_player_unconscious = false;
	_unit setVariable ["USEC_isCardiac",false, false]; r_player_cardiac = false;
	//AmovPpneMstpSnonWnonDnon_healed
};
