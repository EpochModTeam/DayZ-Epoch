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

private ["_unit","_inside","_building","_size"];

_check = {
	private ["_inside"];

	_building = _this select 0;
	_point = _this select 1;
	_inside = false;
	_offset = 1; // shrink building boundingbox by this length.

	_relPos = _building worldToModel _point;
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

_size = 0;
_unit = _this select 0;
if (typeName _unit == "OBJECT") then {
	_size = sizeOf typeOf _unit;
	_unit = getPosATL _unit;
};

_inside = false;

if (count _this > 1 AND {(typeName (_this select 1) == "OBJECT")}) then {
	// optional argument #1 can be the building used for the check
	_building = _this select 1;
	_inside = [_building, _unit] call _check;
}
else {
	// else perform check with nearest enterable building (contains a path LOD)
	if (typeName _unit == "OBJECT") then {
		_building = nearestBuilding _unit;
		_inside = [_building,getPosATL _unit] call _check;
	};
	if ((!_inside) AND {(count _this > 1)}) then { // if optional argument is a boolean
		{
			_building = _x;
			_type = typeOf _x;
			if ((((!(_type IN DayZ_SafeObjects)) // not installable objects
				AND {(!(_type isKindOf "ReammoBox"))}) // not lootpiles (weaponholders and ammoboxes)
				AND {((_size + (sizeOf _type)) > _unit distance _x)}) // objects might colliding
				AND {([_x, _unit] call _check)}) exitWith { // perform the check. exitWith works only in non-nested "if"
					_inside = true;
			};
		} forEach(nearestObjects [_unit, ["Building"], 50]);
	};
};
//diag_log ("fnc_isInsideBuilding Check: " + str(_inside)+ " last building:"+str(_building));

_inside