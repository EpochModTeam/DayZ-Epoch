///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Find Plots by RimBlock (http://epochmod.com/forum/index.php?/user/12612-rimblock/)
//	Updated by:	Victor the Cleaner
//	Date:		August 2021
//
///////////////////////////////////////////////////////////////////////////////////////////////////

local _player		= _this select 0;		// object
local _isPole		= _this select 1;		// bool
local _pos		= [vehicle _player] call FNC_getPos;
local _radius		= DZE_PlotPole select 0;	// plot radius
local _minDistance	= DZE_PlotPole select 1;	// minimum distance between plot poles
local _nearestPole	= objNull;			// default
local _distance		= _radius;			// default

if (_isPole) then {
	_distance = _minDistance;
};
// check for near plot
local _findNearestPole = _pos nearEntities ["Plastic_Pole_EP1_DZ", _distance];

local _isNearPlot = count _findNearestPole;

if (_isNearPlot > 0) then {				// found one or more
	_nearestPole = _findNearestPole select 0;	// get first entry
};
[_distance, _isNearPlot, _nearestPole];
