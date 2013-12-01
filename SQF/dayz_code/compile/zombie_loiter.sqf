private ["_unit","_originalPos","_pos","_chance","_playerpos"];
_unit = 		_this select 0;
_originalPos = 	_this select 1;
_pos = 			getPosATL _unit;
_playerpos = 	getPos player;

if (count _this > 2) then {
	_pos = _this select 2;
} else {
	//_unit enableAI "MOVE";
	//_unit enableAI "ANIM";
	
	_chance =	round(random 12);
	if ((_chance % 4) == 0) then {
		//_Offset = [0,0,0];
		//_playerworldPos = _playerpos modelToWorld _Offset;
		_pos = [_playerpos,30,120,4,0,5,0] call BIS_fnc_findSafePos;
	} else {
	_pos = [_originalPos,10,90,4,0,5,0] call BIS_fnc_findSafePos;
	};
	
	if (_unit distance player > 250) then {
		_pos = [_playerpos,120,200,4,0,5,0] call BIS_fnc_findSafePos;
	};
};

if(isNull group _unit) then {
	_unit moveTo _pos;
} else {
	_unit domove _pos;		
};	
_unit forceSpeed 2;
_unit setVariable ["myDest",_pos];
