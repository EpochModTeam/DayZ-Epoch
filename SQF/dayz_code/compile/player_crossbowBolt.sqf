private ["_unit","_ammo","_distance","_weapon","_projectile","_vUp","_endPos","_dir","_height","_bolt","_hitArray","_hitObject","_hitSelection","_config","_hitMemoryPt","_variation","_val","_doLoop","_countr","_magazine"];
_unit = 		_this select 0;
_weapon = 		_this select 1;
_ammo = 		_this select 4;
_magazine =		_this select 5;
_projectile = 	_this select 6;

_projectile = nearestObject [_unit, _ammo];
_vUp = vectorUp _projectile;
_endPos = getPosATL _projectile;
_dir = 0;

if (_magazine == "Quiver") then {
	_ammo = player ammo "Crossbow_DZ";
	if (_ammo > 0) then {
		player removeMagazines "Quiver";
		player addMagazine ["Quiver", _ammo];
	};
};

while {alive _projectile} do {
	_endPos = getPosATL _projectile;
	_vUp = vectorUp _projectile;
	sleep 0.01;
};

_distance = _unit distance _endPos;
_height = _endPos select 2;
_doLoop = true;
_countr = 0;

if (_height < 100) then {
	_bolt = createVehicle ["WoodenArrowF", _endPos, [], 0, "CAN_COLLIDE"];
	_bolt setPosATL _endPos;
	_bolt setDir (getDir _unit);
	_bolt setVectorUp _vUp;
	
	_hitArray = _unit getVariable["firedHit",[]];
	while {_doLoop} do {
		_hitArray = _unit getVariable["firedHit",[]];
		if (count _hitArray > 0) then {_doLoop = false};
		if (_countr > 50) then {_doLoop = false};
		_countr = _countr + 1;
		sleep 0.1;
	};
		
	if (count _hitArray > 0) then {
		_hitObject = _hitArray select 0;
		_hitSelection = _hitArray select 1;
		_config = configFile >> "cfgBody" >> _hitSelection;
		_hitMemoryPt = 	getText(_config >> "memoryPoint");
		_variation = 	getNumber(_config >> "variation");
		_val = [((random (_variation * 2)) - _variation),((random (_variation * 2)) - _variation),((random (_variation * 2)) - _variation)];
		_bolt attachTo [_hitObject,_val,_hitMemoryPt];
		_dir = ([_hitObject,_unit] call BIS_fnc_relativeDirTo) + 180;
		_bolt setDir (_dir);
		[_bolt] call FNC_GetSetPos;
		_unit setVariable["firedHit",[]];
		_unit setVariable["firedDamage",0,true];
	};
};