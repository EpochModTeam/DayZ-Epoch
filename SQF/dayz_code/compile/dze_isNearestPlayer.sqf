private ["_notClosest","_playerDistance","_nearPlayers","_obj","_playerNear"];

if (!isNull _this) then {
	_nearPlayers = _this nearEntities ["CAManBase", 12];
	_playerNear = ({isPlayer _x} count _nearPlayers) > 1;
	_notClosest = false;
	if (_playerNear) then {
		// check if another player is closer
		_playerDistance = player distance _this;
		{
			if (_playerDistance > (_x distance _this)) exitWith { _notClosest = true; };
		} count _nearPlayers;
	};
} else {
	_notClosest = false;
};

_notClosest