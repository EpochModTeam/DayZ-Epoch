private "_player";

_player = objNull;
{
	if (getPlayerUID _x == _this) exitWith {
		_player = _x;
	};
} count allUnits;

_player