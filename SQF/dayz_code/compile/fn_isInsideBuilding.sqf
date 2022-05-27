///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	fn_isInsideBuilding.sqf
//
//	Author:	Victor the Cleaner
//	Date:	April 2022
//
//	[_unit] call fnc_isInsideBuilding;
//
//	Called continuously from player_checkStealth.
//	Used for temperature, stealth vs zombies, and blizzard effects.
//
///////////////////////////////////////////////////////////////////////////////////////////////////
local _unit		= _this select 0;		// player
local _inside		= false;
local _scan		= 3;				// horizontal radius around player (in meters)
local _zenith		= 50;				// scan height above and below player
local _posASL		= aimPos _unit;			// center of mass (ASL)
local _posLowASL	= getPosASL _unit;		// foot of player (ASL)
_posLowASL set [2, (_posLowASL select 2) + 0.3];	// shin level, below most windows

local _posX		= _posASL select 0;
local _posY		= _posASL select 1;
local _posZ		= _posASL select 2;
local _posLowZ		= _posLowASL select 2;

local _insideBox	= objNull;			// object the player is inside of
local _dir		= 0;
local _type		= "";				// class name
local _roofAbove	= false;			// is there geometry above
local _intersect	= false;			// for raycast
local _hit		= [];				// array to record hits and misses
local _idx		= 0;				// initialize
local _truth		= [];				// used with the _hit array

local _cowsheds		= ["Land_Farm_Cowshed_a","Land_Farm_Cowshed_b","Land_Farm_Cowshed_c"];
local _isCowshed	= false;			// special case objects

///////////////////////////////////////////////////////////////////////////////////////////////////
//
//					Functions
//
///////////////////////////////////////////////////////////////////////////////////////////////////
local _checkBox = {
	local _object	= _this select 0;	// object
	_type		= typeOf _object;	// class name

	if (_type isKindOf "House" || {_type isKindOf "Church" || {_type in DZE_insideExceptions}}) then {

		local _pos = _object worldToModel (ASLToATL _posASL);
		local _max = (boundingBox _object) select 1;
		_insideBox = _object;

		for "_i" from 0 to 2 do {
			if (abs (_pos select _i) > (_max select _i)) exitWith {_insideBox = objNull;};
		};
	};
};
local _scanUp = {
	local _pos = [_posX, _posY, _posZ + _zenith];
	local _arr = lineIntersectsWith [_posASL, _pos, _unit, objNull, true];		// sorted (nearest last)

	for "_i" from (count _arr - 1) to 0 step -1 do {				// count backwards
		[_arr select _i] call _checkBox;					// validate object
		if (!isNull _insideBox) exitWith {_roofAbove = true;};			// player is within bounds of a candidate object
	};
};
local _scanDown = {
	local _pos = [_posX, _posY, _posZ - _zenith];
	local _arr = lineIntersectsWith [_posASL, _pos, _unit, objNull, true];		// sorted (nearest last)

	for "_i" from (count _arr - 1) to 0 step -1 do {				// count backwards
		[_arr select _i] call _checkBox;					// validate object
		if (!isNull _insideBox) exitWith {};					// player is within bounds of a candidate object
	};
};
local _scanNear = {
	local _north	= [_posX, _posY + _scan, _posZ];
	local _east	= [_posX + _scan, _posY, _posZ];
	local _south	= [_posX, _posY - _scan, _posZ];
	local _west	= [_posX - _scan, _posY, _posZ];
	local _cp	= [_north, _east, _south, _west, _north];			// compass points

	scopeName "near";
	for "_i" from 0 to 3 do {
		local _arr = lineIntersectsWith [_cp select _i, _cp select (_i + 1)];	// unsorted
		{
			[_x] call _checkBox;						// validate object
			if (!isNull _insideBox) then {breakTo "near";};			// player is within bounds of a candidate object
		} count _arr;
	};
};

///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Cowsheds are arranged from 3 separate classes. Therefore, we need to allow adjacent
//	cowshed class names as substitutes for the object we're scanning.
//
///////////////////////////////////////////////////////////////////////////////////////////////////
local _cowshedCheck = {
	local _array = _this select 0;
	if (_isCowshed) then {
		{
			if (typeOf _x in _cowsheds) exitWith {		// is object of similar type?
				_intersect = true;			// override radial scan
				_truth set [0,49];			// force hit detection
			};
		} forEach _array;
	};
};
local _checkWalls = {
	// known problem buildings
	if (_type == (_cowsheds select 2) && _idx in [3])	exitWith {_hit set [_idx, 49];};	// simulate wall at East sector
	if (_type == (_cowsheds select 1) && _idx in [3,11])	exitWith {_hit set [_idx, 49];};	// simulate walls at East and West sectors
	if (_type == (_cowsheds select 0) && _idx in [11])	exitWith {_hit set [_idx, 49];};	// simulate wall at West sector
};


///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Initial scan to determine if player is above, below, or near a building
//
///////////////////////////////////////////////////////////////////////////////////////////////////
call _scanUp;
if (isNull _insideBox) then {		// no detectable roof
	call _scanDown;
	if (isNull _insideBox) then {	// no detectable floor
		call _scanNear;
	};
};

///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	If player is inside a bounding box, perform radial scan and determine the outcome
//
///////////////////////////////////////////////////////////////////////////////////////////////////
if (!isNull _insideBox) then {					// bounding box detected
	_dir		= getDir _insideBox;			// direction of object on map
	local _rad	= sizeOf (typeOf _insideBox);		// scan radius
	local _seg	= 16;					// radial scan density (must be evenly divisible by 4)
	local _arc	= 360 / _seg;				// radial scan delta
	local _miss	= "00000";				// must be (_seg / 4 + 1) characters in length -- the number of consecutive misses before player is determined to be outside
	_isCowshed	= _type in _cowsheds;			// special case for known problem buildings

	for "_n" from _arc to 360 step _arc do {		// perform radial scan
		local _angle = (_dir + _n) % 360;		// normalize from 0 to 360
		local _a = (sin _angle) * _rad;			// X offset
		local _b = (cos _angle) * _rad;			// Y offset
		local _v = [_posX + _a, _posY + _b, _posZ];	// radial vector
		_truth = [48,49];				// [miss,hit]

		local _arr = lineIntersectsWith [_posASL, _v, _unit];		// raycast
		_intersect = (_insideBox in _arr);				// did an intersect occur?
		[_arr] call _cowshedCheck;					// check known problem buildings

		if (!_intersect && _roofAbove) then {				// if no hit at chest level, check lower. This eliminates most normal windows.
			_v	= [_posX + _a, _posY + _b, _posLowZ];		// radial vector Low
			_arr	= lineIntersectsWith [_posLowASL, _v, _unit];	// raycast
			[_arr] call _cowshedCheck;				// re-check known problem buildings
		};
		_hit set [_idx, _truth select (_insideBox in _arr)];		// record hit or miss
		call _checkWalls;						// simulate walls for known problem buildings, and override scan
		_idx = _idx + 1;
	};

	for "_i" from 0 to 3 do {
		_hit set [_seg + _i, _hit select _i];		// loop (_seg / 4) times to allow wrap-around search
	};
	if (!_roofAbove) then {_miss = "0000";};		// if player is on a roof or in an open area, reduce the consecutive miss criteria by one arc

	if !([_miss, toString _hit] call fnc_inString) then {	// if there are no sufficient consecutive misses, then player is deemed to be inside
		_inside = true;
	};
};
dayz_insideBuilding = [objNull, _insideBox] select _inside;
[_unit, _dir] call fnc_isSheltered;	// [vehicle player, direction of boundingBox if appropriate]
_inside
