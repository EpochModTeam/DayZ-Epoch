private ["_unit","_selection","_strH","_dam","_total","_damage"];
_unit =			_this select 0;
_selection =	_this select 1;
_damage =		_this select 2;
if ((_selection != "")) then {
	_strH = "hit_" + (_selection);
	_dam = _unit getVariable [_strH,0];
	_total = (_dam + _damage);
	if (_total > 1) then {
		_total = 1;
	};
	_unit setVariable [_strH,_total];
} else {
	_damage = 0;
};
_damage;