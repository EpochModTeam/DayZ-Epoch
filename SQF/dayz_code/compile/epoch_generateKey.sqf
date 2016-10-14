/*
	- Generates key
	- Attempts to add to toolbelt	
	Usage: _result = call epoch_generateKey;
	Returns array:
	[bool, string]
	[(key added successfully or not), ItemKey## class name]
*/

private ["_isKeyOK","_keyColor","_keyNumber","_keySelected"];

// First select key color
_keyColor = ["Green","Red","Blue","Yellow","Black"] call BIS_fnc_selectRandom;

// then select number from 1 - 2500
_keyNumber = (floor(random 2500)) + 1;

// Combine to key (eg.ItemKeyYellow2494) classname
_keySelected = format["ItemKey%1%2",_keyColor,_keyNumber];

_isKeyOK = isClass(configFile >> "CfgWeapons" >> _keySelected);

//Remove melee magazines (BIS_fnc_invAdd fix)
false call dz_fn_meleeMagazines;
_isOk = [player,_keySelected] call BIS_fnc_invAdd;
true call dz_fn_meleeMagazines;
[(_isOk && _isKeyOK),_keySelected]