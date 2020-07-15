/*
Author: TeeTime

Does: Manages the body temperatur of a Player

Possible Problems:
	=>  Balancing

Missing:
	Save Functions

	Should Effects Sum Up?

	Math Functions for Water

	Player Update GUI Colours need to be checked

	Shivering Function need improments
*/
private ["_difference","_isinvehicle","_daytime","_height_mod","_temp","_looptime","_vehicle_factor","_moving_factor","_fire_factor","_building_factor","_sun_factor","_water_factor","_rain_factor","_night_factor","_wind_factor","_raining","_sunrise","_fireplaces","_building","_heatpack_factor","_warm_clothes","_stand_factor","_snow_factor","_pPos","_sleepTemperatur","_shivering"];
_looptime = _this;

//Factors are equal to win/loss of factor*basic value
//All Values can be seen as x of 100: 100 / x = minutes from min temperetaure to max temperature (without other effects)

//Positive effects
	_vehicle_factor		=	DZE_TempVars select 0;
	_fire_factor		=	DZE_TempVars select 1;
	_building_factor 	=  	DZE_TempVars select 2;
	_moving_factor 		=  	DZE_TempVars select 3;
	_sun_factor			= 	DZE_TempVars select 4;
	_heatpack_factor	= 	DZE_TempVars select 5;
	_warm_clothes		= 	DZE_TempVars select 6;

//Negative effects
	_water_factor		= 	DZE_TempVars select 7;
	_stand_factor 		= 	DZE_TempVars select 8;
	_rain_factor		=	DZE_TempVars select 9;
	_wind_factor		=	DZE_TempVars select 10;
	_night_factor		= 	DZE_TempVars select 11;
	_snow_factor		= 	DZE_TempVars select 12;

//Shivering
_shivering				= 	DZE_TempVars select 13; //Set this to 26 to disabled shivering

_difference = 0;
//_hasfireffect = false;
_isinvehicle = false;

_raining = (rain > 0);
_sunrise = call world_sunRise;

//POSITIV EFFECTS
//vehicle
if((vehicle player) != player) then {
	_difference = _difference + _vehicle_factor;
	_isinvehicle = true;
} else {
	//speed factor
	private["_vel","_speed"];
	_vel = velocity player;
	_speed = round((_vel distance [0,0,0]) * 3.6);
	_difference = (_moving_factor * (_speed / 20)) min 7;
};
	//diag_log format["Moving - %1",_difference];

//fire
if !(_isinvehicle) then {
	_pPos = [player] call FNC_GetPos;
	_fireplaces = nearestObjects [_pPos, ["flamable_DZ","Land_Fire","Land_Campfire"], 8];
	if (({inflamed _x} count _fireplaces) > 0) then {
		//Math: factor * 1 / (0.5*(distance max 1)^2) 0.5 = 12.5% of the factor effect in a distance o 4 meters
		_difference = _difference + (_fire_factor /(0.5*((player distance (_fireplaces select 0)) max 1)^2));
		//_hasfireffect = true;

		//diag_log format["fire - %1",_difference];
	};
};

if (dayz_inside) then {_difference = _difference + _building_factor;};

//sun
if (daytime > _sunrise && {daytime < (24 - _sunrise)} && {!_raining} && {overcast <= 0.6} && !dayz_inside) then {
	/*Mathematic Basic

	t = temperature effect

	a = calcfactor
	f = sunfactor
	s = sunrise
	d = daytime

	I:	a = f / (12 - s)
	II:	t = -a * (d - 12) + f

	I + II =>

	t = -(f / (12 - s)) * (d - 12) + f

	Parabel with highest Point( greatest Effect == _sun_factor) always at 12.00
	Zero Points are always at sunrise and sunset -> Only Positiv Values Possible
	*/

	_difference = _difference + (-((_sun_factor / (12 - _sunrise)^2)) * ((daytime - 12)^2) + _sun_factor);

	//diag_log format["sun - %1",_difference];
};

//heatpack
if (r_player_warming_heatpack select 0) then {
	_difference = _difference + _heatpack_factor;
	if ((diag_tickTime - (r_player_warming_heatpack select 1)) >= r_player_warming_heatpack_time) then {
		r_player_warming_heatpack = [false,0];
	};
};

//warm clothes
if ((typeOf player) in DZE_WarmClothes) then {
	//if (DZE_SnowFall) then {_warm_clothes = _warm_clothes + 14;};
	if (DZE_Weather in [3,4]) then {_warm_clothes = _warm_clothes + 14;};
	_difference = _difference + _warm_clothes;
};

//NEGATIVE EFFECTS

if !(_isinvehicle) then {

	//water
	if ((surfaceIsWater getPosATL player) || dayz_isSwimming) then {
		_difference = _difference - _water_factor;

		//diag_log format["water - %1",_difference];
	};

	//night
	if((daytime < _sunrise || daytime > (24 - _sunrise)) ) then {
		_daytime = if(daytime < 12) then {daytime + 24} else {daytime};
		if(dayz_inside) then {
			_difference = _difference - ((((_night_factor * -1) / (_sunrise^2)) * ((_daytime - 24)^2) + _night_factor)) / 2;
		} else {
			_difference = _difference - (((_night_factor * -1) / (_sunrise^2)) * ((_daytime - 24)^2) + _night_factor);
		};

		//diag_log format["night - %1",_difference];
	};

	//height
	if (overcast >= 0.6) then {
		_height_mod = ((getPosASL player select 2) / 100) / 2;
		_difference = _difference - _height_mod;

		//diag_log format["height - %1",_difference];
	};

	if !(dayz_inside) then {
		//rain
		if(_raining) then {
			_difference = _difference - (rain * _rain_factor);

			//diag_log format["night - %1",_difference];
		};
		//wind
		if ((wind select 0) > 4 || (wind select 1) > 4) then {
			_difference = _difference - _wind_factor;

			//diag_log format["Wind - %1",_difference];
		};
		//Standing cooldown.
		if (speed player == 0) then {
			_difference = _difference - _stand_factor;

			//diag_log format["Standing - %1",_difference];
		};
		//Snow fall
		if (snow > 0) then {
			_difference = _difference - _snow_factor;
		};
	};
};

//Calculate Change Value Basic Factor Looptime Correction Adjust Value to current used temperatur scala
_sleepTemperatur = 90 / 100; //First value = Minutes until player reaches the coldest point at night (without other effects! night factor expected to be -1) //TeeChange
_difference = _difference * _sleepTemperatur / (60 / _looptime) * ((dayz_temperaturmax - dayz_temperaturmin) / 100);

if (dayz_temperature_override) then { _difference = 0; if (dayz_temperatur < 37) then { dayz_temperatur = 37; } };

//Change Temperatur Should be moved in a own Function to allow adding of Items which increase the Temp like "hot tea"
r_player_temp_factor = _difference;
dayz_temperatur = (((dayz_temperatur + _difference) max dayz_temperaturmin) min dayz_temperaturmax);

//Add Shivering
// Percent when the Shivering will start
if (dayz_temperatur <= _shivering) then { // if the current players temperature is under 34, to disabled set _shivering to 26.
    //CamShake as linear Function Maximum reached when Temp is at temp minimum. First Entry = Max Value
    _temp = 0.6 * (dayz_temperaturmin / dayz_temperatur );
    addCamShake [_temp,(_looptime + 1),30]; //[0.5,looptime,6] -> Maximum is 25% of the Pain Effect
} else {
    addCamShake [0,0,0]; //Not needed at the Moment, but will be necesarry for possible Items
};
