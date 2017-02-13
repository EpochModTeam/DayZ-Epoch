private ["_v","_int","_t","_b"];
_v=_this select 0;
if (!DZE_NoVehicleExplosions) then {
	if (_v iskindof "helicopter" || _v iskindof "plane") then {
		["AirDestruction", _v] call BIS_Effects_globalEvent;
	};
	if (_v iskindof "tank") then {
		_int = (fuel _v)*(2+random 2);
		_t = time;
		[_v,_int] spawn BIS_Effects_Secondaries;
		["Eject", _v] call BIS_Effects_globalEvent;
	};
	if (_v iskindof "car" || _v iskindof "ship") then {
		_int = (fuel _v)*(2 + random 1);
		_t = time;
		[_v,_int] spawn BIS_Effects_Secondaries;
		["Eject", _v] call BIS_Effects_globalEvent;
		if ((random _int)>2.2) then
		{
			_b = "SmallSecondary" createvehicle (getpos _v);
		};
	};
} else {
	_isVeh = ({_v isKindOf _x} count ["Helicopter","Plane","Tank","Car","Ship"] > 0);
	if (_isVeh && {player in (crew _v)}) then {
		["Eject", _v] call BIS_Effects_globalEvent;
	};
};
