private ["_notClosest","_playerDistance","_nearPlayers","_playerNear"];

_notClosest = false;

if (!isNull _this) then {
	_nearPlayers = _this nearEntities ["CAManBase", 12];
	_playerNear = ({isPlayer _x} count _nearPlayers) > 1;
	
	if (_playerNear) then {
		// check if another player is closer
		_playerDistance = player distance _this;
		{
			if (_playerDistance > (_x distance _this)) exitWith { _notClosest = true; };
		} count _nearPlayers;
	};
};

_notClosest