private ["_vehicle","_player","_attached"];

if (DZE_HeliLift) then {
	_vehicle = _this select 0;
	_player = _this select 2;
	_attached = _vehicle getVariable ["attached",false];
	if (typeName _attached == "OBJECT") then {
		_player action ["eject",_vehicle];
		detach _vehicle;
		_vehicle setVariable ["attached",false,true];
		_attached setVariable ["hasAttached",false,true];
	};
};