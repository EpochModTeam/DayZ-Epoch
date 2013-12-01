private ["_unit","_selection","_strH","_dam","_damage"];
_unit =			_this select 0;
_selection =	_this select 1;
_damage =		_this select 2;
if (_selection != "") then {
	_strH = "hit_" + (_selection);
	_dam = _unit getVariable [_strH,0];
	_unit setVariable [_strH,(_dam + _damage)];
	if (_selection in USEC_MinorWounds) then {
		_unit setHit[_selection,(_dam + _damage)];
	};
};
_damage;