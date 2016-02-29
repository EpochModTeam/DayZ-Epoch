/*
        Created exclusively for ArmA2:OA - DayZMod.
        Please request permission to use/alter/distribute from project leader (R4Z0R49) AND the author (facoptere@gmail.com)
*/

// Check/find a spot before pitching "Land_Fire_DZ", "TentStorage", "Wire_cat1", "Sandbag1_DZ" or "Hedgehog_DZ"
// _this 0: object class
// _this 1: object (player) or array (ATL format)
// _this 2: optional, empty array that will be filled by computed boolean: _testonLadder, _testSea, _testPond, _testBuilding, _testSlope, _testDistance
// return a worldspace consisting of array [ direction, ATL position ] or empty array if no position is found
// if 2nd argument is a player, the position returned is just in front of the player, direction is so that the object is "looking to" the player

private ["_booleans","_class","_isPlayer","_size","_testPond","_testBuilding","_testonLadder","_testSlope","_testSea","_testDistance","_noCollision","_dir","_obj","_objectsPond","_ok","_maxdistance","_x","_new","_pos"];

_class = _this select 0;
_pos = _this select 1;

_realSize = {
	[[0,0], (boundingBox _this) select 1] call BIS_fnc_distance2D
};

// check that tent position is outside the pool footprint.
// we can't check altitude since pool has no height
_checkPerimeter = {
	private ["_inside","_relPos","_point","_boundingBox","_min","_max","_myX","_myY","_building"];

	_building = _this select 0;
	_point = _this select 1;
	_inside = false;

	_relPos = _building worldToModel _point;
	_boundingBox = boundingBox _building;
	//diag_log format ["%1 %2", _relPos, _boundingBox];
	_min = _boundingBox select 0;
	_max = _boundingBox select 1;
	_myX = _relPos select 0;
	_myY = _relPos select 1;

	if ((_myX > (_min select 0)) and {(_myX < (_max select 0))}) then {
		if ((_myY > (_min select 1)) and {(_myY < (_max select 1))}) then {
			_inside = true;
		};
	};

	_inside
};

// check if _pos a player object or some ATL coordinates array
_isPlayer = (typeName _pos != "ARRAY");

_testBuilding = true;
_testDistance = _isPlayer;
_maxdistance = 5;
_testonLadder = _isPlayer;
_testPond = false;
_testSea = false;
_testSlope = false;
_noCollision = false;
switch _class do {
	case "TentStorage" : { // tent pitching must follow all restrictions
		_testPond = true;
		_testSea = true;
	};
	case "DomeTentStorage" : { // tent pitching must follow all restrictions
		_testPond = true;
		_testSea = true;
	};
	case "StashSmall" : {
		_testPond = true;
		_testSea = true;
	};
	case "StashMedium" : {
		_testPond = true;
		_testSea = true;
	};
	case "Land_Fire_DZ" : { // no fire in the water :)
		_testPond = true;
		_testSea = true;
	};
	case "CamoNet_DZ" : { // no fire in the water :)
		_testPond = true;
		_testSea = true;
		_testSlope = false;
		_noCollision = false;
		_testBuilding = false;
	};
	case "Wire_cat1" : {};
	case "Sandbag1_DZ" : {};
	case "Hedgehog_DZ" : {};
	default { // = vehicles (used for hive maintenance on startup)
		_testBuilding = false;
		_testSlope = false;
		_noCollision = false;
	};
};

//diag_log(format["niceSpot: will test: pond:%1 building:%2 slope:%3 sea:%4 distance:%5 collide:%6", _testPond, _testBuilding, _testSlope, _testSea, _testDistance, _noCollision]);

_dir = if (_isPlayer) then {getDir(_pos)} else {0};
_obj = _class createVehicleLocal (getMarkerpos "respawn_west");
sleep 0.01;
_size = _obj call _realSize;
if (_isPlayer) then { _size = _size + (_pos call _realSize); };

// compute initial position. If _pos is the player, then the object will be in front of him/her
_new = nil;
_new = if (_isPlayer) then { _pos modeltoworld [0,_size/2,0] } else { _pos };
_new set [2, 0];

// place a temporary object (not colliding or can colliding)
if (_noCollision) then {
	deleteVehicle _obj;
	sleep 0.01;
	_obj = _class createVehicleLocal _new;
	// get non colliding position
	_new = getPosATL _obj;
	// get relative angle of object position according to player PoV
	if (_isPlayer) then {
		_x = _pos worldToModel _new;
		_dir = _dir + (if ((_x select 1)==0) then { 0 } else { (_x select 0) atan2 (_x select 1) });
	};
} else {
	_obj setDir _dir;
	_obj setPosATL(_new);
};

if (_testBuilding) then { // let's proceed to the "something or its operator in a building" test
	_testBuilding = (([_obj, true] call fnc_isInsideBuilding) // obj in/close to a building (enterable or not)
		 // or _pos is a player who is in a *enterable* building
		OR {(_isPLayer AND {([_pos, false] call fnc_isInsideBuilding)})});
};

deleteVehicle _obj;
sleep 0.01;

if (_testPond) then { // let's proceed to the "object in the pond" test (not dirty)
	_testPond = false;
	_objectsPond = nearestObjects [_new, [], 100];
	{
		if (((typeOf(_x) == "") // unnamed class?
			AND {((((_x worldToModel _new) select 2) < 0)) // below water level?
			AND {([_x, _new] call _checkPerimeter)}}) // inside pond square footprint?
			AND {(["pond", str(_x), false] call fnc_inString)} // and is actually a pond?
			) exitWith { 
				_testPond = true;
		};
	} forEach _objectsPond;
};

if (_testSlope) then { // "flat spot" test
	_testSlope = false;
	_x = _new isflatempty [
		0, // don't check collisions
		0, // don't look around
		(0.1*_size), // slope gradient
		_size, // object size
		1, // do not check in the sea
		false, // don't check far from shore
		if (_isPlayer) then {_pos} else {objNull} // not used -- seems buggy.
	];
	if (count _x < 2) then { // safepos found (gradient ok AND not in sea water)
		_testSlope = true;
	};
};

if (_testSea) then { // "not in the sea, not on the beach" test
	_testSea = false;
	_x = _new isflatempty [
		0, // don't check collisions
		0, // don't look around
		999, // do not check slope gradient
		_size, // object size
		0, // check not in the sea
		false, // don't check far from shore
		if (_isPlayer) then {_pos} else {objNull} // not used -- seems buggy.
	];
	if (count _x < 2) then { // safepos found (gradient ok AND not in sea water)
		_testSea = true;
	}
	else {
		_x set [2,0];
		_x = ATLtoASL _x;
		if (_x select 2 < 3) then { // in the wave foam
			_testSea = true;
		};
	};
};

if (_testDistance) then { // check effective distance from the player
	_testDistance = ((_pos distance _new) > _maxdistance);
};

if (_testonLadder) then { // forbid item install process if player is on a ladder (or in a vehicle)
	_testonLadder = (
		((getNumber (configFile >> "CfgMovesMaleSdr" >> "States" >> (animationState _pos) >> "onLadder")) == 1)
	OR {((isPlayer _pos) AND {((vehicle _pos) != _pos)})}
	);
};

//diag_log(format["niceSpot: result pond:%1 building:%2 slope:%3 sea:%4 distance:%5 collide:%6", _testPond, _testBuilding, _testSlope, _testSea, _testDistance, _noCollision]);

_ok = !_testPond AND !_testBuilding AND !_testSlope AND !_testSea AND !_testDistance AND !_testonLadder;
if (count _this > 2) then {
	_booleans = _this select 2;
	_booleans set [0, _testonLadder];
	_booleans set [1, _testSea];
	_booleans set [2, _testPond];
	_booleans set [3, _testBuilding];
	_booleans set [4, _testSlope];
	_booleans set [5, _testDistance];
	//diag_log(format["niceSpot: booleans: %1", _booleans]);
};

if (_ok) then { [round(_dir), _new] } else { [] }
