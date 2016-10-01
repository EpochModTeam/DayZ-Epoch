private ["_currentNear","_listNear","_callCount"];
_unit = _this select 0;
_projectile = _this select 6;

//diag_log ("0");

//_isInComat = _unit getVariable["startcombattimer",0];

//diag_log ("Bullit Speed: " +str(Speed _projectile));
//diag_log ("Bullit Velocity: " +str(velocity _projectile));

_listNear = [];
_callCount = 0;

//approx 1020 meters
while {(alive _projectile) && !(isNull _projectile) && (_callCount < 85)} do {
	_projectilespeed = Speed _projectile;
	_projectflight = (((_projectilespeed / 60) * 1000));
	if (_projectflight > 0) then {
		uiSleep (12 / (_projectflight));
	};
	if (alive _projectile && !(isNull _projectile)) then {_currentNear = (getPosATL _projectile) nearEntities [["CAManBase","AllVehicles"],15];};
	_listNear = _listNear + _currentNear;
	_callCount = _callCount + 1;
};
//diag_log ("2");
{
	_nearVehicle = _x;
	_listNear = _listNear - [_x];

	//diag_log ("3");

	if (isPlayer _nearVehicle) then {
		_isInCombat = _nearVehicle getVariable["startcombattimer",0];
		if ((alive _nearVehicle) and _isInCombat == 0) then {
			_nearVehicle setVariable["startcombattimer", 1];
			_nearVehicle setVariable["inCombat", true, true];
			diag_log("Now in Combat (Player): " + name _unit);
		};
	};

	if (_nearVehicle isKindOf "AllVehicles") then {
		{
			_isInCombat = _x getVariable["startcombattimer",0];
			if (isPlayer _x and _isInCombat == 0 and alive _x) then {
				_x setVariable["startcombattimer", 1];
				_x setVariable["inCombat", true, true];
				diag_log("Now in Combat (Crew): " + name _x);
			};
		} forEach (crew _nearVehicle);
	};

} forEach _listNear;
