private["_unit","_selection","_strH","_damage","_total"];
_unit =			_this select 0;
_selection =	_this select 1;
_damage =		_this select 2;

if (_selection != "" and local _unit) then {
	_strH = "hit_" + (_selection);
	_unit setHit[_selection,_damage];
	//player sidechat str _damage;
	_unit setVariable [_strH,_damage,true];
	if (_damage == 0) then {
		[_unit,"repair"] call server_updateObject;
	} else {
		[_unit,"damage"] call server_updateObject;
	};
};