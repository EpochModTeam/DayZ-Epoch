if (player isKindOf "PZombie_VB") exitWith {
	DAYZ_disAudial = 0;
	DAYZ_disVisual = 0;
	player_zombieAttack = {}; // Other zombies don't attack player zombies
	player_zombieCheck = {};
};

///////////////////////////////////////////////////////////////////////////////////////////////////

local _vp		= vehicle player;
local _speed		= (velocity _vp) distance [0,0,0];
local _scalePose	= 0.9;
local _scaleMvmt	= 0.2;	//0.4;

///////////////////////////////////////////////////////////////////////////////////////////////////

// Assess Players Position

local _anim = animationState player;
local _anim4 = toArray _anim;
_anim4 resize 4;
_anim4 = toString _anim4;

if (["pknl",_anim] call fnc_inString) then {		// kneeling
	_scaleMvmt = 0.2;	//0.1;
	_scalePose = 0.6;	//0.4
} else {
	if (["ppne",_anim] call fnc_inString) then {	// prone
		_scaleMvmt = 0.3;
		_scalePose = 0.14;
	};
};

if (_anim4 == "aswm") then {
	_scaleMvmt = 0.3;
	dayz_isSwimming = true;
} else {
	dayz_isSwimming = false;
};

///////////////////////////////////////////////////////////////////////////////////////////////////

local _initial = 20 + (sunOrMoon * 20);

local _scaleLight = (
	(sunOrMoon * 2)		// add sunlight
	+ moonIntensity		// add moonlight
	- (overcast * 0.2)	// remove for cloud state
	- (rain * 0.2)		// remove for rain state
	- (fog * 0.5)		// remove for fog state
);
dayz_scaleLight = _scaleLight;

local _scaleSound = (
	1
	- (rain * 0.3)		// remove for rain state
) max 0;

///////////////////////////////////////////////////////////////////////////////////////////////////

// Assess if near light source

if (_scaleLight < 0.9) then {
	local _scaler = 0;
	local _nearFlare = nearestObject [getPosATL _vp,"RoadFlare"];

	if (!isNull _nearFlare) then {
		_scaler = (_nearFlare distance _vp);
		if (_scaler <= 30) then {
			_scaler = 30 - _scaler;
			_scaleLight = ((_scaler / 30) * 2) + _scaleLight;
		};
	};

	local _nearLight = nearestObject [_vp,"StreetLamp"];

	if (!isNull _nearLight) then {
		_scaler = 50 - (_nearLight distance _vp);
		_scaleLight = ((_scaler / 50) * 2) + _scaleLight;
	};

	local _nearFire = nearestObject [getPosATL _vp,"Land_Fire"];

	if (!isNull _nearFire) then {
		_scaler = 50 - (_nearFire distance _vp);
		_scaleLight = ((_scaler / 50) * 2) + _scaleLight;
	};
};

_scaleLight = _scaleLight max 0;	// Ensure zero or above

///////////////////////////////////////////////////////////////////////////////////////////////////

// Terrain Visibility

call {
	if (["grass",dayz_surfaceType] call fnc_inString) exitWith {
		_initial = _initial * 0.65;
		_scaleMvmt = _scaleMvmt - 0.05;
	};
	if (["forest",dayz_surfaceType] call fnc_inString) exitWith {
		_initial = _initial * 0.5;
		_scaleMvmt = _scaleMvmt - 0.1;
	};
	if (["concrete",dayz_surfaceType] call fnc_inString) exitWith {
		_initial = _initial * 0.85;
		_scaleMvmt = _scaleMvmt + 0.1;
	};
	if (["rock",dayz_surfaceType] call fnc_inString) exitWith {
		_initial = _initial * 0.80;
		_scaleMvmt = _scaleMvmt + 0.05;
	};
};

///////////////////////////////////////////////////////////////////////////////////////////////////

if (isOnRoad (getPosATL player)) then {
	_initial = _initial * 1.3;
	_scaleMvmt = _scaleMvmt + 0.2;
};

///////////////////////////////////////////////////////////////////////////////////////////////////

// Are they inside a building

dayz_inside = [vehicle player] call fnc_isInsideBuilding;
if (dayz_inside) then {
	_initial = round (5 + (20 * (1 - DZE_sheltered)));		// inside building
} else {
	if (DZE_sheltered > 0.75) then {
		_initial = round (5 + (60 * (1 - DZE_sheltered)));	// possibly inside base or sheltered by other objects
	};
};

///////////////////////////////////////////////////////////////////////////////////////////////////

// Work out result

local _audial = round (_speed * dayz_surfaceNoise * _scaleMvmt * _scaleSound);

if ((_audial > DAYZ_disAudial) or ((time - dayz_firedCooldown) > 0.3)) then {
	DAYZ_disAudial = _audial;
};
DAYZ_disVisual = (round ((_initial + (_speed * 3)) * _scalePose * _scaleLight)) * 1.5;
