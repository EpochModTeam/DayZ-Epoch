private ["_unit","_projectile","_isInCombat","_currentNear","_projectilespeed","_projectflight","_listNear","_callCount","_nearVehicle"];
_unit =         _this select 0;
_projectile = 	_this select 6;

//diag_log ("0");

//_isInComat = _unit getVariable["startcombattimer",0];

//diag_log ("Bullit Speed: " +str(Speed _projectile));
//diag_log ("Bullit Velocity: " +str(velocity _projectile));

_listNear = [];
_callCount = 0;

//approx 1020 meters
while {(alive _projectile) && !(isNull _projectile) && _callCount < 85;} do {
	_projectilespeed = Speed _projectile;
	_projectflight = (((_projectilespeed / 60) * 1000));
	if (_projectflight > 0) then {
		sleep (12 / (_projectflight));
	};
	if (alive _projectile && !(isNull _projectile)) then {_currentNear = ([_projectile] call FNC_GetPos) nearEntities [["CAManBase","AllVehicles"],15];};
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
		if ((alive _nearVehicle) && _isInCombat == 0) then {
			_nearVehicle setVariable["startcombattimer", 1];
			//diag_log("Now in Combat (Player): " + name _unit);
		};
	};

	if (_nearVehicle isKindOf "AllVehicles") then {
		{
			_isInCombat = _x getVariable["startcombattimer",0];
			if (isPlayer _x && _isInCombat == 0 && alive _x) then {
				_x setVariable["startcombattimer", 1];
				//diag_log("Now in Combat (Crew): " + name _x);
			};
		} forEach (crew _nearVehicle);
	};

} forEach _listNear;
