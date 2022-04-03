///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Updated for 1.0.7.1
//
//	- Kill sound when player cancels an action
//
///////////////////////////////////////////////////////////////////////////////////////////////////

local _count	= count _this;
local _unit	= _this select 0;
local _type	= _this select 1;
local _chance	= _this select 2;

local _dis = call {
	if (_count > 4) exitWith {_this select 4;};
	if (_type in ["shout","hit","attack","scream","breath"]) exitWith {100};
	40
};

local _local = false;
if (_count > 3) then {_local = _this select 3;};

if (!_local) then {
	// we override _local according to number of players inside _dis radius
	_local = {_unit distance _x < _dis;} count playableUnits <= 1;
};

local _num = {if (_type == (_x select 0)) exitWith {_x select 1}} count [
	["idle",		35],
	["spotted",		13],
	["chase",		14],
	["attack",		13],
	["hit",			 6],
	["open_inventory",	 4],
	["open_backpack",	 4],
	["bandage",		 2],
	["fracture",		 1],
	["panic",		 1],
	["scream",		 4],
	["eat",			 3],
	["pills",		 3],
	["cough",		 2],
	["cook",		 2],
	["attach_weap",		 1],
	["detach_weap",		 1],
	["keypad_tick",		 2],
	["dog_bark",		 4],
	["dog_growl",		 3],
	["dog_qq",		 2],
	[_type,			 0]];

local _isWoman = getText(configFile >> "cfgVehicles" >> (typeOf _unit) >> "TextPlural") == "Women";
if (_isWoman and {_type in ["scream","panic"]}) then {
	_type = _type + "_w";
};

if ((round(random _chance) == _chance) or (_chance == 0)) then {
	local _rnd	= floor random (_num + 1);
	local _sound	= "z_" + _type + "_" + str(_rnd);

	///////////////////////////////////////////////////////////////////////////////////////////
	//
	//	Attach sound source to helper object so that long duration sfx can be muted if
	//	action is cancelled.
	//
	///////////////////////////////////////////////////////////////////////////////////////////
	local _killSound = (dayz_actionInProgress && (_type in ["bandage","chopwood","cook","gut","minestone","refuel","repair","tentpack"]));

	if (_killSound) then {
		local _helper = "Helper_1_DZE" createVehicle [0,0,0];	// invisible helper
		_helper setPosATL (getPosATL _unit);			// move to player

		if (_type == "bandage") then {
			_helper attachTo [_unit, [0,0,0]];		// medical actions will be heard as player moves
		};
		_unit = _helper;					// sound source is now the helper object

		_helper spawn {
			r_interrupt = false;

			while {dayz_actionInProgress && !r_interrupt} do {
				uisleep 0.1;
			};
			if (r_interrupt) then {		// if player cancels the action
				1.5 fadeSpeech 0;	// fade out
				uisleep 1.5;		// wait
			};
			deleteVehicle _this;		// kill sound
			0 fadeSpeech 1;			// restore sound
		};
	};

	///////////////////////////////////////////////////////////////////////////////////////////

	if (_local) then {
		_unit say [_sound, _dis];
	} else {
		[nil, _unit, rSAY, [_sound, _dis]] call RE;
	};
};
