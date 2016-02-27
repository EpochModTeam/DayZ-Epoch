/*
Spawns the fire and smoke effect at a crash site.
Based heavily on "\ca\data\particleeffects\scripts\destruction\burn.sqf"

Single parameter:
	object		crashsite

Author:
	Foxy
*/

#define INTENSITY 2

//Local space position of the effects
//Get coordinates from config, if not found use the memory point "smoke"
_position =  getArray (configFile >> "CfgVehicles" >> typeOf _this >> "smoke");
if ((count _position) == 0) then { _position = "smoke" };



/**** SMOKE ****/

_color = 0.8 / INTENSITY;

_smoke = "#particlesource" createVehicleLocal getpos _this;
_smoke setDropInterval (0.02 * INTENSITY);

_smoke setParticleParams [
/*Sprite*/					["\Ca\Data\ParticleEffects\Universal\Universal", 16, 7, 48],
/*????*/					"",
/*Type*/					"Billboard",
/*Frequency*/				1,
/*Lifetime*/				3 * INTENSITY,
/*Position*/				_position,
/*MoveVelocity*/			[0, 0, 0.5 * INTENSITY],
/*Simulation*/				0, 0.05, 0.04, 0.05,
/*Scale*/					[0.5 + 0.5 * INTENSITY, 3 + 3 * INTENSITY],
/*Color*/					[
/**/							[_color, _color, _color, 0.2],
/**/							[_color, _color, _color, 1],
/**/							[_color, _color, _color, 1],
/**/							[0.05 + _color, 0.05 + _color, 0.05 + _color, 0.9],
/**/							[0.1  + _color, 0.1  + _color, 0.1  + _color, 0.6],
/**/							[0.2  + _color, 0.2  + _color, 0.2  + _color, 0.3],
/**/							[1, 1, 1, 0]
/**/						], 
/*Animspeed*/				[0.8, 0.3, 0.25],
/*RandDirPeriod*/			1,
/*RandDirIntensity*/		0,
/*OnTimerScript*/			"",
/*DestroyScript*/			"",
/*Follow*/					_this];

_smoke setParticleRandom [
/*LifeTime*/				0.7 * INTENSITY,
/*Position*/				[1 - INTENSITY / 10, 1 - INTENSITY / 10, 1 - INTENSITY / 10],
/*MoveVelocity*/			[0.2 * INTENSITY, 0.2 * INTENSITY, 0.05 * INTENSITY],
/*RotVelocity*/				0,
/*Scale*/					0.3,
/*Color*/					[0.05, 0.05, 0.05, 0],
/*RandDirPeriod*/			0,
/*RandDirIntensity*/		0];



/**** LIGHT ****/

_light = "#lightpoint" createVehicleLocal getpos _this;
_light setLightBrightness (INTENSITY / 30);
_light setLightAmbient[0.8, 0.6, 0.2];
_light setLightColor[1, 0.5, 0.4];
if ((typeName _position) == (typeName []))
	then { _light lightAttachObject [_this, _position]; }
	else { _light lightAttachObject [_this, _this selectionPosition _position]; };