/*
	DayZ Epoch snowfall script by JasonTM
	Credit to Sumrak for DZN snowfall script.
	Credit to Karel Moricky for particle array definitions in "modules_e/Weather/data/fsms/particle.fsm"
*/

private ["_density","_i","_d","_h","_pos","_dpos","_vel"];

_density = _this;
if (_density > 1) then {_density = 1;};
_density = round (25 * _density);
_d = 35;
_h = 15;
snow = 1;

if !(isNil "DZE_WeatherDebugTime") then {diag_log format ["Snowfall started at %1",(diag_tickTime - DZE_WeatherDebugTime)];};

while {!DZE_WeatherEndThread} do {
	uiSleep .01;
	_pos = getPos vehicle player;
	_vel = velocity vehicle player;
	_i = 0;
	
	if !(dayz_inside) then {
		while {_i < _density} do {
			_dpos = [((_pos select 0) + (_d - (random (2 * _d))) + ((_vel select 0) * 6)), ((_pos select 1) + (_d - (random (2 * _d))) + ((_vel select 1) * 6)), ((_pos select 2) + 15)];
			drop [["\Ca\Data\ParticleEffects\Universal\Universal", 16, 12, 8, 1],"","Billboard",1,10,_dpos,[0,0,0],1,0.000001,0,1.1,[0.09,0.09],[[1,1,1,1]],[0,1],0.2,1.2,"","",""];
			_i = _i + 1;
		};
	};
};

snow = 0;

if !(isNil "DZE_WeatherDebugTime") then {diag_log format ["Snowfall ended at %1",(diag_tickTime - DZE_WeatherDebugTime)];};