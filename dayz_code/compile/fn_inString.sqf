private["_findarray","_stringarray","_findcount","_stringcount","_found","_y","_i","_x"];
	
_findarray = toArray (_this select 0);
_stringarray = toArray (_this select 1);
_findcount = count _findarray;
_stringcount = count _stringarray;
_found = false;
scopeName "main";

if (_findcount <= _stringcount) then {
	for "_y" from 0 to (_stringcount - _findcount) do {
		_i = 0;
		{
			scopeName "loop1";
			if (_x == (_stringarray select (_y + _i))) then {
			_i = _i + 1;
			} else {breakOut "loop1";};
		} forEach _findarray;
		if (_i == _findcount) then {_found = true; breakTo "main";};
	};
};
_found