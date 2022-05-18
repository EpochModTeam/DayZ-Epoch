/*
Author: TeeTime

Does: Manages the body temperature of a Player

Possible Problems:
	=>  Balancing

Missing:
	Save Functions

	Should Effects Sum Up?

	Math Functions for Water

	Player Update GUI Colours need to be checked

	Shivering Function need improvements
*/
///////////////////////////////////////////////////////////////////////////////////////////////////

local _looptime	= _this;
local _pos	= [player] call FNC_getPos;

// Factors are equal to win/loss of factor*basic value
// All Values can be seen as x of 100: 100 / x = minutes from min temperature to max temperature (without other effects)

// Positive effects
local _vehicle_factor	=	DZE_TempVars select 0;
local _fire_factor	=	DZE_TempVars select 1;
local _building_factor 	=  	DZE_TempVars select 2;
local _moving_factor 	=  	DZE_TempVars select 3;
local _sun_factor	= 	DZE_TempVars select 4;
local _heatpack_factor	= 	DZE_TempVars select 5;
local _warm_clothes	= 	DZE_TempVars select 6;

// Negative effects
local _water_factor	= 	DZE_TempVars select 7;
local _stand_factor 	= 	DZE_TempVars select 8;
local _rain_factor	=	DZE_TempVars select 9;
local _wind_factor	=	DZE_TempVars select 10;
local _night_factor	= 	DZE_TempVars select 11;
local _snow_factor	= 	DZE_TempVars select 12;

// Shivering
local _shivering	= 	DZE_TempVars select 13;	// Set this to 26 to disable shivering

local _difference	= 0;
local _isInVehicle	= false;
local _raining		= (rain > 0);
local _sunrise		= call world_sunRise;

///////////////////////////////////////////////////////////////////////////////////////////////////
//
//					POSITIVE EFFECTS
//
///////////////////////////////////////////////////////////////////////////////////////////////////

// Vehicle
if ((vehicle player) != player) then {
	_difference	= _difference + _vehicle_factor;
	_isInVehicle	= true;
} else {
	//speed factor
	local _vel	= velocity player;
	local _speed	= round ((_vel distance [0,0,0]) * 3.6);
	_difference	= (_moving_factor * (_speed / 20)) min 7;
};

///////////////////////////////////////////////////////////////////////////////////////////////////

// Fire
if (!_isInVehicle) then {
	local _fireplaces = nearestObjects [_pos, ["flamable_DZ","Land_Fire","Land_Campfire"], 8];

	if (({inflamed _x} count _fireplaces) > 0) then {
		// Math: factor * 1 / (0.5*(distance max 1)^2) 0.5 = 12.5% of the factor effect in a distance o 4 meters
		_difference = _difference + (_fire_factor / (0.5* ((player distance (_fireplaces select 0)) max 1)^2));
	};
};

///////////////////////////////////////////////////////////////////////////////////////////////////

// Building
local _inside = (dayz_inside || (DZE_roofOverhead && {DZE_sheltered > 0.96}));
if (_inside) then {_difference = _difference + _building_factor;};

///////////////////////////////////////////////////////////////////////////////////////////////////

// Sun
if (daytime > _sunrise && {daytime < (24 - _sunrise)} && {!_raining} && {overcast <= 0.6} && !_inside) then {
	/*
		Mathematics Basic

		t = temperature effect

		a = calcfactor
		f = sunfactor
		s = sunrise
		d = daytime

		I:	a = f / (12 - s)
		II:	t = -a * (d - 12) + f

		I + II =>

		t = -(f / (12 - s)) * (d - 12) + f

		Parabola with highest Point( greatest Effect == _sun_factor) always at 12.00
		Zero Points are always at sunrise and sunset -> Only Positive Values Possible
	*/

	_difference = _difference + (-((_sun_factor / (12 - _sunrise)^2)) * ((daytime - 12)^2) + _sun_factor);
};

///////////////////////////////////////////////////////////////////////////////////////////////////

// Heatpack
if (r_player_warming_heatpack select 0) then {
	_difference = _difference + _heatpack_factor;

	if ((diag_tickTime - (r_player_warming_heatpack select 1)) >= r_player_warming_heatpack_time) then {
		r_player_warming_heatpack = [false, 0];
	};
};

///////////////////////////////////////////////////////////////////////////////////////////////////

// Warm Clothes
if ((typeOf player) in DZE_WarmClothes) then {
	if (DZE_Weather in [3,4]) then {_warm_clothes = _warm_clothes + 14;};
	_difference = _difference + _warm_clothes;
};

///////////////////////////////////////////////////////////////////////////////////////////////////
//
//					NEGATIVE EFFECTS
//
///////////////////////////////////////////////////////////////////////////////////////////////////

if (!_isInVehicle) then {

	// Water
	if ((surfaceIsWater _pos) || dayz_isSwimming) then {
		_difference = _difference - _water_factor;
	};

	///////////////////////////////////////////////////////////////////////////////////////////

	// Night
	if (daytime < _sunrise || daytime > (24 - _sunrise)) then {
		local _daytime = if (daytime < 12) then {daytime + 24} else {daytime};

		if (_inside) then {
			_difference = _difference - ((((_night_factor * -1) / (_sunrise^2)) * ((_daytime - 24)^2) + _night_factor)) / 2;
		} else {
			_difference = _difference - (((_night_factor * -1) / (_sunrise^2)) * ((_daytime - 24)^2) + _night_factor);
		};
	};

	///////////////////////////////////////////////////////////////////////////////////////////

	// Altitude
	if (overcast >= 0.6) then {
		local _height_mod = ((getPosASL player select 2) / 100) / 2;
		_difference = _difference - _height_mod;
	};

	///////////////////////////////////////////////////////////////////////////////////////////

	if (!_inside) then {
		// Rain
		if (_raining) then {
			_difference = _difference - (rain * _rain_factor);
		};

		// Wind
		if ((wind select 0) > 4 || (wind select 1) > 4) then {
			_difference = _difference - _wind_factor;
		};

		// Standing cooldown
		if (speed player == 0) then {
			_difference = _difference - _stand_factor;
		};

		// Snow Fall
		if (snow > 0) then {
			_difference = _difference - _snow_factor;
		};
	};
};

///////////////////////////////////////////////////////////////////////////////////////////////////

// Calculate Change Value Basic Factor Looptime Correction Adjust Value to current used temperature scale
// First value = Minutes until player reaches the coldest point at night (without other effects! night factor expected to be -1) //TeeChange

_sleepTemperature = 90 / 100;
_difference = _difference * _sleepTemperature / (60 / _looptime) * ((dayz_temperaturmax - dayz_temperaturmin) / 100);

if (dayz_temperature_override) then {
	_difference = 0;
	dayz_temperatur = 37 max dayz_temperatur;
};

// Change Temperature Should be moved to its own Function to allow adding of Items which increase the Temp like "hot tea"

r_player_temp_factor = _difference;
dayz_temperatur = ((dayz_temperatur + _difference) max dayz_temperaturmin) min dayz_temperaturmax;

// Add Shivering
// Percent when the Shivering will start

if (dayz_temperatur <= _shivering) then { // if the current players temperature is under 34, to disabled set _shivering to 26.
	// CamShake as linear Function Maximum reached when Temp is at temp minimum. First Entry = Max Value
	local _temp = 0.6 * (dayz_temperaturmin / dayz_temperatur);

	addCamShake [_temp, (_looptime + 1), 30];	// [0.5,looptime,6] -> Maximum is 25% of the Pain Effect
} else {
	addCamShake [0,0,0];				// Not needed at the Moment, but will be necessary for possible Items
};
