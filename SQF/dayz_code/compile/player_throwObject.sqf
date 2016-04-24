private ["_distance","_endPos","_doWait","_vel"];
_obj = _this select 0;
_unit = _obj select 0;
//_weapon = _obj select 1;
_ammo = _obj select 4;
_projectile = _obj select 6;

waituntil {!isNil "dayz_sunRise"};

_projectile = nearestObject [_unit,_ammo];
_endPos = getPosATL _projectile;

_doWait = true;
while {_doWait} do {
	_vel = (velocity _projectile) distance [0,0,0];
	if !(alive _projectile) then {_doWait = false};
	if (_vel < 0.1) then {_doWait = false};
	_endPos = getPosATL _projectile;
	uiSleep 0.01;
};

_distance = parseNumber format["%1",(getArray (configFile >> "CfgAmmo" >> _ammo >> "soundHit") select 3)];

if (_ammo isKindOf "ChemLight") then {
	_distance = 10;
};
if (_ammo isKindOf "RoadFlare") then {
	_distance = if ((daytime < (24 - dayz_sunRise)) && (daytime > dayz_sunRise)) then {30} else {60};
};

[_unit,_distance,false,_endPos] call player_alertZombies;
