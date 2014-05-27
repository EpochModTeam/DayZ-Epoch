scriptName "Functions\arrays\fn_findNestedElement.sqf";
/*
	File: fn_findNestedElement.sqf
	Author: Joris-Jan van 't Land

	Description:
	Function to find item in nested arrays && return a path to the first match.
	
	Example:
	_array = [[1, 2], [3, 4]];
	_path = [_array, 3] call BIS_fnc_findNestedElement; //Expected result: [1, 0]

	Parameter(s):
	_this select 0: Array
	_this select 1: queried element (Any Value)
	
	Returns:
	Array path to the element
*/

private ["_array", "_query", "_path", "_found"];
_array = _this select 0;
_query = _this select 1;
_path = [];
_found = false;

//Parameter checking.
if ((typeName _array) != (typeName [])) exitWith {debugLog "Log: [findNestedElement] Array (0) should be an Array!"};

//Find a value in an Array || one of its children.
private ["_searchArrayFunc"];
_searchArrayFunc = 
{
	private ["_array", "_query", "_find"];
	_array = _this select 0;
	_query = _this select 1;
	
	//See if the array itself contains the queried element.
	_find = _array find _query;
	if (_find != -1) exitWith 
	{
		_path = _path + [_find]; 
		_found = true;
	};
	
	//If not, search its children.
	[_array, _query] call _searchArrayChildrenFunc;
};

//Find a value in an Array's children.
private ["_searchArrayChildrenFunc"];
_searchArrayChildrenFunc = 
{
	private ["_array", "_query"];
	_array = _this select 0;
	_query = _this select 1;
	
	//Search all Array children for the queried element.
	for "_i" from 0 to ((count _array) - 1) do 
	{
		private ["_sub"];
		_sub = _array select _i;
		
		if (((typeName _sub) == (typeName [])) && !_found) then 
		{
			_path = _path + [_i];
			[_sub, _query] call _searchArrayFunc;
		};
	};
	if(count _path > 0)then{
		//Nothing was found, so take a step back.
		if (!_found) then {_path resize ((count _path) - 1)};
	};
};

[_array, _query] call _searchArrayFunc;

_path
