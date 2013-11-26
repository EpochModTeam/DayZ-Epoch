private ["_v","_int","_t","_b"];

_v=_this select 0;
if (_v isKindOf "Helicopter"||_v isKindOf "Plane") then {
	["AirDestruction",_v] call BIS_Effects_globalEvent;
};
if (_v isKindOf "Tank") then {
	_int=(fuel _v)*(2+random 2);
	_t=time;
	[_v,_int] spawn BIS_Effects_Secondaries;
};
if (_v isKindOf "Car"||_v isKindOf "Ship") then {
	_int=(fuel _v)*(2+random 1);
	_t=time;
	[_v,_int] spawn BIS_Effects_Secondaries;
	if ((random _int)>2.2) then {
		_b = createVehicle ["SmallSecondary",(getPosATL _v),[],0,"CAN_COLLIDE"];
	};
};
