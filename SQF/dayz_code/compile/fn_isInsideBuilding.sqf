/*
        Created exclusively for ArmA2:OA - DayZMod.
        Please request permission to use/alter/distribute from project leader (R4Z0R49) AND the author (facoptere@gmail.com)
*/

// check if arg#0 is inside or on the roof of a building
// second argument is optional:
//  - arg#1 is an object: check whether arg#0 is inside (bounding box of) arg#1
//  - missing arg#1: check whether arg#0 is inside (bounding box of) the nearest enterable building
//  - arg#1 is a boolean: check also whether arg#0 is inside (bounding box of) some non-enterable buildings around. Can be used to check if a player or an installed item is on a building roof.
//  - arg#0 is posATL, arg#1 should be a building

private ["_check","_unit","_inside","_building","_type","_option"];

_check = {
	private ["_building", "_pos", "_inside", "_offset", "_relPos", "_boundingBox", "_min", "_max", "_myX", "_myY", "_myZ"];

	_building = _this select 0;
	_inside = false;
	if (isNull _building) exitWith {_inside};
	_pos = _this select 1;	
	_offset = 1; // shrink building boundingbox by this length.

	_relPos = _building worldToModel _pos;
	_boundingBox = boundingBox _building;

	_min = _boundingBox select 0;
	_max = _boundingBox select 1;
	_myX = _relPos select 0;
	_myY = _relPos select 1;
	_myZ = _relPos select 2;

	if ((_myX > (_min select 0)+_offset) and {(_myX < (_max select 0)-_offset)}) then {
		if ((_myY > (_min select 1)+_offset) and {(_myY < (_max select 1)-_offset)}) then {
			if ((_myZ > (_min select 2)) and {(_myZ < (_max select 2))}) then {
				_inside = true;
			};
		};
	};
	//diag_log(format["fnc_isInsideBuilding: building:%1 typeOf:%2 bbox:%3 relpos:%4 result:%5", _building, typeOf(_building), _boundingBox, _relPos, _inside ]);

	_inside
};

_unit = _this select 0;
_inside = false;

// [object] call fnc_isInsideBuilding;
// This option is called continuously from player_checkStealth.
if (count _this == 1) exitWith {
	//_building = nearestObject [_unit, "Building"];
	_building = nearestBuilding _unit; // Not sure if this command is faster.
	_inside = [_building,(getPosATL _unit)] call _check;
	_inside
};

_option = _this select 1;
// [object,building] call fnc_isInsideBuilding;
if (typeName _option == "OBJECT") then {
	// optional argument is a specific building
	_inside = [_option,(getPosATL _unit)] call _check;
} else {
	// [object,boolean] call fnc_isInsideBuilding; This is used in fn_niceSpot.
	{
		_building = _x;
		_type = typeOf _building;
		if (!(_type in DayZ_SafeObjects) // not installable objects
		&& {!(_type isKindOf "ReammoBox")} // not lootpiles (weaponholders and ammoboxes)
		&& {((sizeOf typeOf _unit) + (sizeOf _type)) > (_unit distance _building)} // objects might colliding
		&& {[_building, _unit] call _check}) exitWith { // perform the check. exitWith works only in non-nested "if"
			_inside = true;
		};
	} forEach (nearestObjects [_unit, ["Building"], 50]);
};
//diag_log ("fnc_isInsideBuilding Check: " + str(_inside)+ " last building:"+str(_building));

_inside
