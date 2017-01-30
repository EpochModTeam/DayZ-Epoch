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
private ["_difference","_isinvehicle","_isinbuilding","_daytime","_height_mod","_temp","_looptime","_vehicle_factor","_moving_factor","_fire_factor","_building_factor","_sun_factor","_water_factor","_rain_factor","_night_factor","_wind_factor","_raining","_sunrise","_fireplaces","_building"];
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
	
//Negative effects
	_water_factor		= 	DZE_TempVars select 6;
	_stand_factor 		= 	DZE_TempVars select 7;
	_rain_factor		=	DZE_TempVars select 8;
	_wind_factor		=	DZE_TempVars select 9;
	_night_factor		= 	DZE_TempVars select 10;

_difference = 0; 
//_hasfireffect = false;
_isinbuilding = false;
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
_pPos = [player] call FNC_GetPos;
_fireplaces = nearestObjects [_pPos, ["flamable_DZ","Land_Fire","Land_Campfire"], 8];
if(({inflamed _x} count _fireplaces) > 0 && !_isinvehicle ) then {
	//Math: factor * 1 / (0.5*(distance max 1)^2) 0.5 = 12.5% of the factor effect in a distance o 4 meters
	_difference = _difference + (_fire_factor /(0.5*((player distance (_fireplaces select 0)) max 1)^2));
	//_hasfireffect = true;
	
	//diag_log format["fire - %1",_difference];
};

//building
_building = nearestObject [player, "HouseBase"];
if(!isNull _building) then {
	if([player,_building] call fnc_isInsideBuilding) then {
		//Make sure thate Fire and Building Effect can only appear single Not used at the moment
		//if(!_hasfireffect && _fire_factor > _building_factor) then {
			_difference = _difference + _building_factor;
		//};
		_isinbuilding = true;
		dayz_inside = true;
	} else {
		dayz_inside = false;
	};
} else {
	dayz_inside = false;
};

//sun
if(daytime > _sunrise && daytime < (24 - _sunrise) && !_raining && overcast <= 0.6 && !_isinbuilding) then {
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
if(r_player_warming_heatpack select 0) then {
	_difference = _difference + _heatpack_factor;
	if ((diag_tickTime - (r_player_warming_heatpack select 1)) >= r_player_warming_heatpack_time) then {
		r_player_warming_heatpack = [false,0];
	};
};
//NEGATIVE EFFECTS

//water
if((surfaceIsWater getPosATL player || dayz_isSwimming) && !_isinvehicle) then {
	_difference = _difference - _water_factor;
	
	//diag_log format["water - %1",_difference];
};

//rain
if(_raining && !_isinvehicle && !_isinbuilding) then {
	_difference = _difference - (rain * _rain_factor);
	
	//diag_log format["night - %1",_difference];
};

//night
if((daytime < _sunrise || daytime > (24 - _sunrise)) && !_isinvehicle) then {
	_daytime = if(daytime < 12) then {daytime + 24} else {daytime};
	if(_isinbuilding) then {
		_difference = _difference - ((((_night_factor * -1) / (_sunrise^2)) * ((_daytime - 24)^2) + _night_factor)) / 2;
	} else {
		_difference = _difference - (((_night_factor * -1) / (_sunrise^2)) * ((_daytime - 24)^2) + _night_factor);
	};
	
	//diag_log format["night - %1",_difference];
};

//wind
if(((wind select 0) > 4 || (wind select 1) > 4) && !_isinvehicle && !_isinbuilding ) then {
	_difference = _difference - _wind_factor;
	
	//diag_log format["Wind - %1",_difference];
};

//height
if (!_isinvehicle && overcast >= 0.6) then {
	_height_mod = ((getPosASL player select 2) / 100) / 2;
	_difference = _difference - _height_mod;
	
	//diag_log format["height - %1",_difference];
};

//Standing cooldown.
if ((speed player == 0) && !_isinvehicle && !_isinvehicle && !_isinbuilding) then {
	_difference = _difference - _stand_factor;
	
	//diag_log format["Standing - %1",_difference];
};


//Calculate Change Value Basic Factor Looptime Correction Adjust Value to current used temperatur scala
_difference = _difference * SleepTemperatur / (60 / _looptime) * ((dayz_temperaturmax - dayz_temperaturmin) / 100);

if (dayz_temperature_override) then { _difference = 0; if (dayz_temperatur < 37) then { dayz_temperatur = 37; } };

//Change Temperatur Should be moved in a own Function to allow adding of Items which increase the Temp like "hot tea"
r_player_temp_factor = _difference;
dayz_temperatur = (((dayz_temperatur + _difference) max dayz_temperaturmin) min dayz_temperaturmax);