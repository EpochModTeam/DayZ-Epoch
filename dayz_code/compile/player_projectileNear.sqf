private["_unit","_shooter","_distance","_ammo","_position","_isInCombat"];
_unit = 		_this select 0;
_shooter =         _this select 1;
_ammo =         _this select 2;
_distance =        _this select 3;
_position =        _this select 4;
_projectile = 	_this select 6;

_isInComat = _unit getVariable["startcombattimer",0];
_endPos = getPosATL _projectile;

_listNear = _unit nearEntities [["CAManBase","AllVehicles"],25];
{
	_nearVehicle = _x;
	_isInCombat = _nearVehicle getVariable["startcombattimer",0];

	if ((alive _unit) and (isPlayer _unit) and _isInCombat == 0) then {
		_unit setVariable["startcombattimer", 1, true];
		diag_log("Now in Combat (Player): " + name _unit);
	};
	if (_nearVehicle isKindOf "AllVehicles") then {
		{
			_isInCombat = _x getVariable["startcombattimer",0];
			if (isPlayer _x and _isInCombat == 0) then {
				_x setVariable["startcombattimer", 1, true];
				diag_log("Now in Combat (Crew): " + name _x);
			};
		} forEach (crew _nearVehicle);
	};
} forEach _listNear;