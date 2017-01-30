private ["_bb","_dir","_nearWaterHole","_pond","_well","_w2m"];

_nearWaterHole = [false,false];

{
	{
		_w2m = _x worldToModel (getPosATL player);
		_bb = (boundingbox _x) select 1;
		_dir = [player, _x] call BIS_fnc_relativeDirTo;
		
		if (_dir > 180) then {
			_dir = _dir - 360;
		};
		
		_well = (abs _dir < 45 && {_x distance player < 2.22}); // wells, kasna, pumpa
		_pond = (("" == typeOf _x && (_w2m select 2 < 0.05)) && {(abs(_w2m select 0) < (_bb select 0)) && (abs(_w2m select 1) < (_bb select 1))});
		
		if (_well or _pond) exitWith {
			_nearWaterHole = [true,_pond];
		};
	} count (nearestObjects [_x, [], 1]);
	
	if (_nearWaterHole select 0) exitWith {};
} forEach (player nearObjects ["waterHoleProxy",50]);

_nearWaterHole