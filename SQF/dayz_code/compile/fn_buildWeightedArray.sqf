scriptName "Functions\arrays\fn_selectRandomWeighted.sqf";
/*
	File: fn_selectRandomWeighted.sqf
	Author: Joris-Jan van 't Land

	Description:
	Function to select a random item from an array, taking into account item weights.
	The weights should be Numbers between 0 and 1, with a maximum precision of hundreds.

	Parameter(s):
	_this select 0: source Array (Array of Any Value)
	_this select 1: weights (Array of Number)

	Returns:
	Any Value selected item

	TODO:
	[*] Algorithm is inefficient?
*/

private["_weighted"];

_array = _this select 0;
_weights = _this select 1;

/*
//Parameter validation.
if ((typeName _array) != (typeName [])) exitWith {debugLog "Log: [selectRandomWeighted] Array (0) must be an Array!"; nil};
if ((typeName _weights) != (typeName [])) exitWith {debugLog "Log: [selectRandomWeighted] Weights (1) must be an Array!"; nil};
if ((count _array) > (count _weights)) exitWith {debugLog "Log: [selectRandomWeighted] There must be at least as many elements in Weights (1) as there are in Array (0)!"; nil};
*/

//Created weighted array of indices.
_weighted = [];
for "_i" from 0 to ((count _weights) - 1) do
{
	private ["_weight"];
	_weight = _weights select _i;

	//Ensure the weight is a Number.
	//If it's not, set weight to 0 to exclude it.
	if ((typeName _weight) != (typeName 0)) then {diag_log "Log: [selectRandomWeighted] Weights should be Numbers; weight set to 0!"; _weight = 0};

	//The weight should be a Number between 0 and 1.
	if (_weight < 0) then {diag_log "Log: [selectRandomWeighted] Weights should be more than or equal to 0; weight set to 0!"; _weight = 0};
	//if (_weight > 1) then {debugLog "Log: [selectRandomWeighted] Weights should be less than or equal to 1; weight set to 1!"; _weight = 1};

	//Normalize the weight for a precision of hundreds.
	_weight = round(_weight * 100);

	for "_k" from 0 to (_weight - 1) do
	{
		_weighted set [(count _weighted), _i];
	};
};
_weighted