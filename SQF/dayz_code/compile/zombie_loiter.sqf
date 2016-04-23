private["_unit","_originalPos","_pos"];
_unit = 		_this select 0;
_originalPos = 	_this select 1;
_pos = 			getPosATL _unit;

if (count _this > 2) then {
	_pos = _this select 2;
} else {
	//_unit enableAI "MOVE";
	//_unit enableAI "ANIM";
	//_pos = [_originalPos,10,90,4,0,5,0] call BIS_fnc_findSafePos;
	_pos = [_originalPos,10,(10 - (random (90 * 2))),0] call fn_selectRandomLocation;
};

/*
if(isNull group _unit) then {
	_unit moveTo _pos;
} else {
	_unit domove _pos;		
};	
_unit forceSpeed 2;
_unit setVariable ["myDest",_pos];
*/

_pos
