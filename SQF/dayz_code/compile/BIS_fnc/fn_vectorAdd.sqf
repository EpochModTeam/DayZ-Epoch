scriptName "Functions\vectors\fn_vectorAdd.sqf";
/************************************************************
	Vector Add
	From VBS1 Core, modified by Vilem (arbitrary no of dimensions dimensions)

<difference> = [<vector1>,<vector2>] call BIS_fnc_vectorAdd

Operand types:
<difference>: array
<vector1>: array
<vector2>: array

Returns a vector that is the sum of <vector1> and <vector2>.

************************************************************/

private["_p1","_p2","_return","_i"];

_p1 = _this select 0;
_p2 = _this select 1;

if ((count _p1) != (count _p2)) then {textLogFormat ["BIS_FNC Error: vectors not of same size"]};

_return = [];
_i = 0;
{
  if(_i <= (count(_p2) - 1)) then {
	_return = _return + [_x + (_p2 select _i)];
  } else {
	_return = _return + [_x];
  };
  _i = _i + 1;  
} forEach _p1;

_return