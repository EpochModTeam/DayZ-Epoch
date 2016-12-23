private ["_bb","_dir","_nearWaterHole","_w2m"];

_nearWaterHole = false;

{
	{
		_w2m = _x worldToModel (getPosATL player);
		_bb = (boundingbox _x) select 1;
		_dir = [player, _x] call BIS_fnc_relativeDirTo;
		
		if (_dir > 180) then {
			_dir = _dir - 360;
		};
		
		if ((abs _dir < 45 && {_x distance player < 2.22})  // wells, kasna, pumpa
			or {("" == typeOf _x && (_w2m select 2 < 0.05)) && {(abs(_w2m select 0) < (_bb select 0)) && (abs(_w2m select 1) < (_bb select 1))}}) exitWith { // ponds
			_nearWaterHole = true;
		};
	} count (nearestObjects [_x, [], 1]);
	
	if (_nearWaterHole) exitWith {};
} forEach (nearestObjects [player, ["waterHoleProxy"], 50]);

_nearWaterHole