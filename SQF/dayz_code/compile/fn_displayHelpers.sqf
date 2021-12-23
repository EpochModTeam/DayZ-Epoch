///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Display Helpers on buildable/removable objects
//
//	Author:	Victor the Cleaner
//	Date:	August 2021
//
///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	- Display helper spheres on the selected object when removing, deconstructing,
//	  upgrading, downgrading, maintaining, and packing.
//	- Call this function first by passing the object, and optional texture, e.g.:
//
//		[_object] call fn_displayHelpers;			// create helpers
//		[_object, DZE_removeTexture] call fn_displayHelpers;	// create helpers
//
//	- And then a second time following the looped animation cycle, but without a parameter.
//
//		[] call fn_displayHelpers;				// delete helpers
//
//	- Helper texture values are defined in variables.sqf
//	- DZE_removeTexture = green | DZE_deconstructTexture = blue | DZE_NoRefundTexture = red
//	- If no texture is passed, it will default to green.
//	- If no identical class names are nearby, then do not display green helpers.
//	- Use DZE_displayOnlyIfNearby to enable/disable. Does not affect blue & green helpers.
//	- If the object's door is open during selection, no helper will display at that position.
//
///////////////////////////////////////////////////////////////////////////////////////////////////
if (!DZE_displayHelpers) exitWith {};

if (isNil "HelperArray") then {HelperArray = []};

local _p = count _this;

if (_p > 0) then {

	local _object		= _this select 0;		// selected object
	local _typeOf		= typeOf _object;		// object's class name
	local _helperTexture	= DZE_removeTexture;		// default: green

	if (_p == 2) then {
		_helperTexture	= _this select 1;		// specified texture
	};

	///////////////////////////////////////////////////////////////////////////////////////////
	//
	//	If no identical objects are nearby, then do not display green helpers
	//
	///////////////////////////////////////////////////////////////////////////////////////////

	local _objects = [];

	if (DZE_displayOnlyIfNearby && [_helperTexture, DZE_removeTexture] call BIS_fnc_areEqual) then {	// if only green required

		//
		// sizeOf and BIS_fnc_boundingBoxDimensions are not useful here, but boundingBox will work
		//
		local _box	= boundingBox _object;
		local _b0	= _box select 0;					// lower diagonal
		local _b1	= _box select 1;					// upper diagonal
		local _bx	= abs (_b0 select 0) + abs (_b1 select 0);
		local _by	= abs (_b0 select 1) + abs (_b1 select 1);
		local _bz	= abs (_b0 select 2) + abs (_b1 select 2);
		local _diag	= sqrt (_bx^2 + _by^2 + _bz^2);				// get diagonal of boundingBox
		local _radius	= _diag + 0.5;						// radius should extend just beyond diagonals
		_objects	= _object nearObjects [_typeOf, _radius];		// get nearby objects
	};

	if (count _objects == 1) exitWith {};						// if no identical objects are near, do not display helpers

	local _helperSize	= DZE_helperSizeDefault;	// see configVariables.sqf
	local _helperClass	= "";
	local _points		= [];				// vector array

	_points = getArray (configFile >> "HelperVectors" >> _typeOf >> "points");	// get helper vector array

	local _size = getNumber (configFile >> "HelperVectors" >> _typeOf >> "size");	// get size
	if (_size != 0) then {
		_helperSize = _size;							// overwrite default size if it exists
	};

	local _count = count _points;

	if (_count > 0) then {	// found helper vector

		if (_typeOf in ["Concrete_Bunker_DZ","Concrete_Bunker_Locked_DZ","Door_DZ"]) exitWith{};	// exclude from helper removal

		///////////////////////////////////////////////////////////////////////////////////
		//
		//				Prevent floating helper
		//
		///////////////////////////////////////////////////////////////////////////////////
		//
		//	"DoorL"		for	MetalGate_DZ,
		//				Land_DZE_WoodOpenTopGarageDoor,
		//				Land_DZE_WoodOpenTopGarageLocked,
		//				CinderGarageOpenTop_DZ,
		//				CinderGarageOpenTopLocked_DZ
		//	"dvere1"	for	Wooden_shed_DZ, Wooden_shed2_DZ
		//	"open"		for	StorageShed_DZ, StorageShed2_DZ (Land_Shed_M01)
		//	"Open_inner"	for	Metal_Drawbridge_DZ, Metal_DrawbridgeLocked_DZ
		//	"Open_door"	for	default
		//
		///////////////////////////////////////////////////////////////////////////////////

		local _resize	= false;
		local _door	= "Open_door";
		local _doorL	= ["MetalGate_DZ","Land_DZE_WoodOpenTopGarageDoor","Land_DZE_WoodOpenTopGarageLocked","CinderGarageOpenTop_DZ","CinderGarageOpenTopLocked_DZ"];
		local _open	= ["StorageShed_DZ","StorageShed2_DZ"];
		local _dvere1	= ["OutHouse_DZ"];
		local _custom1	= ["Wooden_shed_DZ","Wooden_shed2_DZ"];
		local _custom2	= ["Metal_Drawbridge_DZ","Metal_DrawbridgeLocked_DZ"];

		call {
			if (_typeOf in _doorL)	exitWith {_door = "doorl"};
			if (_typeOf in _open)	exitWith {_door = "open"};
			if (_typeOf in _dvere1)	exitWith {_door = "dvere1"};
		};
		call {
			if (_typeOf in _custom1 && _object animationPhase "dvere1" < 1)		exitWith {_resize = true};	// door is open
			if (_typeOf in _custom2 && _object animationPhase "Open_inner" < 1)	exitWith {_resize = true};	// door is open
			if (_object animationPhase _door > 0)					exitWith {_resize = true};	// door is open
		};
		if (_resize) then {
			_points resize (_count - 1);						// do not display center helper
		};
	} else {										// if no vector array exists
		_points = getArray (configFile >> "SnapBuilding" >> _typeOf >> "points");	// use snapping points array
	};

	{
		if (_helperSize == _x select 0) exitWith {
			_helperClass = _x select 1;
		};								// get helper class
	} count DZE_helperSize;

	{	
		local _helperObj = _helperClass createVehicleLocal [0,0,0];	// create helper object
		_helperObj setObjectTexture _helperTexture;			// set colour
		_x resize 3;							// remove snapping text if necessary
		_helperObj attachTo [_object, _x];				// translate

		HelperArray set [count HelperArray, _helperObj];		// record list of helpers
	} count _points;							// if no vectors were found, do nothing

} else {

	{deleteVehicle _x;} count HelperArray;	// delete helpers
	HelperArray = [];
};
