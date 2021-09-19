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
//	- Helper texture values are defined in configVariables.sqf
//	- DZE_removeTexture = green | DZE_deconstructTexture = blue | DZE_NoRefundTexture = red
//	- If no texture is passed, it will default to green.
//	- If no identical object types are nearby, then do not display green helpers.
//	- Use DZE_displayOnlyIfNearby to enable/disable. Does not affect blue & green helpers.
//	- If the object's door is open during selection, no helper will display at that position.
//
///////////////////////////////////////////////////////////////////////////////////////////////////
if (DZE_displayHelpers) then {

	if (isNil "HelperArray") then {HelperArray = []};

	local _p = count _this;

	if (_p > 0) then {

		local _obj		= _this select 0;		// selected object
		local _objType		= typeOf _obj;			// object's class name
		local _green		= [0, format["#(argb,8,8,3)color(0,1,0,%1,ca)", (DZE_removeTransparency max 0.1)]];	// reformat with transparency
		local _helperTexture	= DZE_removeTexture;		// default: green

		if (_p == 2) then {
			_helperTexture	= _this select 1;		// specified texture
		};

		///////////////////////////////////////////////////////////////////////////////////
		//
		//	If no identical objects are nearby, then do not display green helpers
		//
		///////////////////////////////////////////////////////////////////////////////////
		local _cancel = false;

		if (DZE_displayOnlyIfNearby && [_helperTexture, DZE_removeTexture] call BIS_fnc_areEqual) then {	// if only green required

			local _radius	= getNumber (configFile >> "HelperVectors" >> _objType >> "radius");		// get object's scan radius

			if (_radius == 0) then {
				_radius = getNumber (configFile >> "SnapBuilding" >> _objType >> "radius");		// check here too
			};

			local _objects = _obj nearObjects [_objType, _radius];						// get nearby objects

			if (count _objects == 1) then {									// if no identical objects are near
				_cancel = true;										// do not display helpers
			};
		};
		if (_cancel) exitWith {};

		local _helperSize	= DZE_helperSizeDefault;	// see configVariables.sqf
		local _helperClass	= "";
		local _points		= [];				// vector array

		_points = getArray (configFile >> "HelperVectors" >> _objType >> "points");		// get helper vector array

		local _size = getNumber (configFile >> "HelperVectors" >> _objType >> "size");		// get size
		if (_size != 0) then {
			_helperSize = _size;								// overwrite default size if it exists
		};

		if (count _points > 0) then {								// found helper vector

			if (_objType in ["Concrete_Bunker_DZ","Concrete_Bunker_Locked_DZ","Door_DZ"]) exitWith{};	// exclude from helper removal

			///////////////////////////////////////////////////////////////////////////
			//
			//			Prevent floating helper
			//
			///////////////////////////////////////////////////////////////////////////
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
			///////////////////////////////////////////////////////////////////////////

			local _resize	= false;
			local _door	= "Open_door";
			local _doorL	= ["MetalGate_DZ","Land_DZE_WoodOpenTopGarageDoor","Land_DZE_WoodOpenTopGarageLocked","CinderGarageOpenTop_DZ","CinderGarageOpenTopLocked_DZ"];
			local _open	= ["StorageShed_DZ","StorageShed2_DZ"];
			local _dvere1	= ["OutHouse_DZ"];
			local _custom1	= ["Wooden_shed_DZ","Wooden_shed2_DZ"];
			local _custom2	= ["Metal_Drawbridge_DZ","Metal_DrawbridgeLocked_DZ"];

			call {
				if (_objType in _doorL)		exitWith {_door = "doorl"};
				if (_objType in _open)		exitWith {_door = "open"};
				if (_objType in _dvere1)	exitWith {_door = "dvere1"};
			};
			call {
				if (_objType in _custom1 && _obj animationPhase "dvere1" < 1)		exitWith {_resize = true};	// door is open
				if (_objType in _custom2 && _obj animationPhase "Open_inner" < 1)	exitWith {_resize = true};	// door is open
				if (_obj animationPhase _door > 0)					exitWith {_resize = true};	// door is open
			};
			if (_resize) then {
				_points resize (count _points) - 1;					// do not display center helper
			};
		} else {										// if no vector array exists
			_points = getArray (ConfigFile >> "SnapBuilding" >> _objType >> "points");	// try snapping points array
		};

		{
			if (_helperSize == _x select 0) exitWith {
				_helperClass = _x select 1;
			};								// get helper class
		} count DZE_helperSize;

		{	
			local _helperObj = _helperClass createVehicleLocal [0,0,0];	// create helper object
			_helperObj setObjectTexture _helperTexture;			// set colour

			local _offset = +_x;						// copy position array
			_offset resize 3;						// truncate if necessary

			local _pos = _obj modelToWorld _offset;				// translate

			if (surfaceIsWater _pos) then {					// adjust for land and sea
				_pos set [2, (getPosASL _obj select 2) + (_offset select 2)];
				_helperObj setPosASL _pos;
			} else {
				_helperObj setPosATL _pos;
			};

			HelperArray set [count HelperArray, _helperObj];		// record list of helpers
		} count _points;							// if no vectors were found, do nothing

	} else {

		{deleteVehicle _x;} count HelperArray;	// delete helpers
		HelperArray = [];
	};
};
