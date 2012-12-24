private["_radius","_position","_inVehicle","_dateNow","_age","_locationstypes","_nearestCity","_nearbyBuildings","_nearby","_type","_config","_canZombie","_canLoot","_dis","_keepAwayDist","_isNoone","_looted","_cleared"];//_radius, _position, _inVehicle, _dateNow, _age, _locationstypes, _nearestCity, _nearbyBuildings

_radius = _this select 0;
_position = _this select 1;
_inVehicle = _this select 2;
_dateNow = _this select 3;
_age = _this select 4;
_locationstypes = _this select 5;
_nearestCity = _this select 6;
_nearby = _this select 7;

diag_log ("Loot Started");

{
	if (!_inVehicle) then {    
		_looted = (_x getVariable ["looted",-0.1]);
		_dateNow = (DateToNumber date);
		_age = (_dateNow - _looted) * 525948;
		if (_age > 8) then {
			_keepAwayDist = ((sizeOf _type) + 5);
			_noPlayerNear = (count ((getPosATL _x) nearEntities ["CAManBase",_keepAwayDist])) == 0;
			if (_noPlayerNear) then {
				_x setVariable ["looted",_dateNow,true];
				[_x] call building_spawnLoot;
			};
		};
	};
} forEach _nearby;