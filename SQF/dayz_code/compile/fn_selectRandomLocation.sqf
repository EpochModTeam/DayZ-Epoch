private["_location","_minDistance","_maxDistance","_minobjectDistance","_X","_Y","_index"];

_position = _this select 0;
_minDistance = _this select 1;
_maxDistance = _this select 2;
_minobjectDistance = _this select 3;

_X = _position select 0;
_Y = _position select 1;

//_location = [_position, _minDistance, _maxDistance, 5, 0, 2000, 0] call BIS_fnc_findSafePos;
_index = 0;
while {_index < 50} do {
	private["_PosX","_PosY","_isFlat"];
	_PosX = _X + (_maxDistance - (random (_maxDistance * 2)));
	_PosY = _Y + (_maxDistance - (random (_maxDistance * 2)));
	_location = [_PosX, _PosY, 0];
		
	_isFlat = _location isflatempty [
		_minobjectDistance,	//--- Minimal distance from another object
		0,				//--- If 0, just check position. If >0, select new one
		0.7,				//--- Max gradient
		5,	//--- Gradient area
		0,				//--- 0 for restricted water, 2 for required water,
		false,				//--- True if some water can be in 25m radius
		objNull			//--- Ignored object
	];

	//if (!surfaceIsWater _location) then { _index = 50; };
	if (count _isFlat > 1) then { _index = 50; };
	
	_index = _index + 1;
};

//_location = [_location select 0,_location select 1,0];
//diag_log(str(_position));
//diag_log(str(_location));
_location