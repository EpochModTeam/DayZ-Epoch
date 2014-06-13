scriptName "Functions\arrays\fn_selectRandom.sqf";
/************************************************************
	Random Select
	By Andrew Barron

Parameters: array

This returns a randomly selected element from the passed array.

Example: [1,2,3] call BIS_fnc_selectRandom
Returns: 1, 2, || 3
************************************************************/

private "_ret";

if(count _this > 0) then
{
	//_ret = count _this;           //number of elements in the array
	//_ret = [0, _ret] call BIS_fnc_randomInt; //choose random index
	_ret = floor(random(count _this));
	_ret = _this select _ret;           //get the element, return it
};

_ret;