///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Display Plot Boundary Helpers
//
//	Author:	Victor the Cleaner
//	Date:	August 2021
//
//	- Plot helpers are now displayed in red if they are above DZE_BuildHeightLimit.
//	  Enabled with DZE_HeightLimitColor. Default: true
//	- If the plot pole is on sloping terrain, the red helpers follow the ATL height.
//	- Number of helpers per ring is now evenly divisible by 8 for improved symmetry.
//	- Will ignore helpers that coincide with other rings.
//	- Will only draw helpers above ground/sea level for improved performance.
//	- Helpers now align to the pole direction.
//
///////////////////////////////////////////////////////////////////////////////////////////////////
local _pos	= [player] call FNC_getPos;					// player position
local _plot	= objNull;							// initialize
local _toggle	= false;							// turn plot boundary on/off
local _count	= count _this;							// parameter list

if (_count > 0) then {								// may be called from fn_selfActions
	_plot = _this select (_count -1);					// or modular_build
} else {
	_plot = (_pos nearEntities ["Plastic_Pole_EP1_DZ", 15]) select 0;	// or via the Dome button
};
if (!isNil "PP_Marks") then {

	if (((PP_Marks select 0) distance _plot) < 10) then {_toggle = true};	// if helpers exist
	{deleteVehicle _x;} count PP_Marks;					// remove helpers
	PP_Marks = nil;
};

///////////////////////////////////////////////////////////////////////////////////////////////////
//
//					initialize
//
///////////////////////////////////////////////////////////////////////////////////////////////////

if ((isNil "PP_Marks") && !_toggle) then {

	local _dir	= getDir _plot;
	local _radius	= DZE_PlotPole select 0;		// plot radius
	local _density	= 3;					// helper density per ring
	local _count	= round((2 * pi * _radius) / _density);	// initial count per ring
	local _segments = _count - (_count % 8);		// adjust count for improved symmetry
	local _hemi	= _segments / 2;			// ignore helpers that coincide with equatorial ring
	local _quad	= _segments / 4;			// ignore helpers that coincide with polar/equatorial rings
	local _delta	= 360 / _segments;			// amount of angular change
	local _angle	= 0;					// initialize
	local _sin45	= sin 45;				// setup polar diagonals
	local _color	= [DZE_plotGreen, DZE_plotGreen];	// [<= height limit, > height limit];
	local _col	= [];					// color index

	if (DZE_BuildHeightLimit > 0 && DZE_HeightLimitColor) then {
		_color set [1, DZE_plotRed];			// red color if too high
	};

	local _center	= "Sign_sphere10cm_EP1" createVehicleLocal getPosATL _plot;
	_center setObjectTexture DZE_plotGreen;			// add color
	_center attachTo [_plot, [0,0,0]];			// move to model center
	uiSleep 0.01;						// allow time to attach
	local _origin = getPosASL _center;			// exact center

	PP_Marks = [];						// global array to record plot pole helpers
	PP_Marks set [0, _center];				// record parent object

	///////////////////////////////////////////////////////////////////////////////////////////
	//
	//				calculate ring vectors
	//
	///////////////////////////////////////////////////////////////////////////////////////////

	for "_i" from 0 to (_segments -1) do {			// loop through each point on the ring

		local _a = (sin _angle) * _radius;		// increasing offset
		local _b = (cos _angle) * _radius;		// decreasing offset

		local _v = [[_a, _b, 0]];			// equatorial ring

		if ((_i + _quad) % _hemi != 0) then {		// ignore equator

			_v = _v + [[_a, 0, _b]];		// longitudinal Y ring

			if (_i % _hemi != 0) then {		// longitudinal X ring + polar diagonals. ignore equator and poles
				local _d = _sin45 * _a;		// polar diagonals +/-45°

				_v = _v + [[0, _a, _b], [_d, _d, _b], [-_d, _d, _b]];
			};
		};

		///////////////////////////////////////////////////////////////////////////
		//
		//			realign and draw each ring
		//
		///////////////////////////////////////////////////////////////////////////
		{
			local _rotation	= [_x, -_dir] call BIS_fnc_rotateVector2D;		// align to plot pole
			local _position	= [_origin, _rotation] call BIS_fnc_vectorAdd;		// vector offset
			local _zCheck	= +_position;						// ASL
			if !(surfaceIsWater _position) then {_zCheck = ASLToATL _zCheck;};	// ATL

			local _height = _zCheck select 2;					// Z height
			if (_height > -0.5) then {						// if above terrain/sea

				_obj = "Sign_sphere100cm_EP1" createVehicleLocal [0,0,0];	// create
				_col = _color select (_height > DZE_BuildHeightLimit);		// if too high
				_obj setObjectTexture _col;					// change color
				_obj setPosASL _position;					// draw

				PP_Marks set [count PP_Marks, _obj];				// record object
			};

		} forEach _v;

		_angle = _angle + _delta;	// aggregate radial angle
	};
};
