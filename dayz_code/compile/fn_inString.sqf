/*
	File: inString.sqf
	Author: Mika Hannola
	
	Description:
	Find a string within a string.
	
	Parameter(s):
	_this select 0: BOOL - when true, displays all units, otherwise just player positions 
	_this select 0: <string> string to be found
	_this select 1: <string> string to search from
	_this select 2 (Optional): search is case sensitive (default: false)
	
	Returns:
	Boolean (true when string is found).
	
	How to use:
	BIS_fnc_inString = compile preprocessFile "inString.sqf"; //Compile the function
	_found = ["string","String",true] call BIS_fnc_inString; //Find a string within a string
*/

private ["_casesensitive","_find","_string","_findarray","_stringarray","_findcount","_stringcount","_found","_match","_y","_i","_x"];

_find = _this select 0;
_string =  _this select 1;

//modification : default _casesensitive is false
_casesensitive = false;
if(count(_this) > 2) then {_casesensitive =  _this select 2;};

_findarray = toArray _find;
_stringarray = toArray _string;
_findcount = count _findarray;
_stringcount = count _stringarray;
_found = false;

scopeName "main";
if (_findcount <= _stringcount and !_found) then
{
	for "_y" from 0 to (_stringcount - _findcount) do
	{
		_match = [];
		for "_i" from 0 to (_findcount - 1) do
		{
			_match set [count _match,_stringarray select (_y + _i)];
		};
		_found = true;
		_i = 0;
		{
			if (_x != _match select _i) then
			{
				_found = false;
			};
			_i = _i + 1;
		} forEach _findarray;
		if (_found) then {breakTo "main";};
	};
};
_found;