private["_position","_size","_loot","_zeds","_groups","_group"];
_position = _this select 0;
_size =		_this select 1;
_type = 	_this select 2;
_town =		nearestLocation [_position, _type];

//Clean Loot
_loot = nearestObjects [_position, ["WeaponHolder"], _size];
{
	deleteVehicle _x;
} forEach _loot;

//Clean Zeds
_zeds = _position nearEntities ["zZombie_Base",_size];
_groups = [];
{
	if (!(isNull _group)) then {
		_group = group _x;
		if (!(_group in _groups)) then {_groups set [count _groups,_group];};
		_x setDamage 1;
	};
} forEach _zeds;
diag_log "Dezombify Town";
dayz_zombifiedTowns = dayz_zombifiedTowns - [_town];