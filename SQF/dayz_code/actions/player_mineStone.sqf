///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Mine Stone
//
//	Updated by:	Victor the Cleaner
//	Date:		January 2022
//
///////////////////////////////////////////////////////////////////////////////////////////////////
if (dayz_actionInProgress) exitWith {localize "str_player_actionslimit" call dayz_rollingMessages;};
dayz_actionInProgress = true;

call gear_ui_init;
closeDialog 1;

local _pos1	= eyePos player;					// ASL line start
local _line	= ATLToASL screenToWorld [0.5,0.5];			// ASL terminus
local _dist	= 4;
local _vec1	= [_pos1, _line] call BIS_fnc_vectorFromXToY;		// sight vector
local _vec2	= [_vec1, _dist] call BIS_fnc_vectorMultiply;		// extend line-of-sight
local _pos2	= [_pos1, _vec2] call BIS_fnc_vectorAdd;		// ASL line stop
local _pos3	= +_pos2;
local _pos4	= +_pos1;
local _found	= false;
local _rocks	= [];
local _model	= "";

_pos3 set [2, (_pos3 select 2) - _dist];				// player is looking over low rock
_pos4 set [2, (_pos4 select 2) - _dist];				// player is directly above rock

{
	_rocks = lineIntersectsWith [_pos1, _x, player, objNull, true];		// detect objects
	_model = "";

	if (count _rocks > 0) then {
		_model = (_rocks call BIS_fnc_arrayPop) call fn_getModelName;	// get model name of nearest target
	};
	if (_model in DZE_rocks) exitWith {_found = true;};			// found one
} forEach [_pos2, _pos3, _pos4];

if (!_found) then {								// if none found, try the old method
	{
		_model = _x call fn_getModelName;
		if (_model in DZE_rocks) exitWith {_found = true;};
	} forEach nearestObjects [getPosATL player, [], 8];
};

if (_found) then {

	local _countOut = 2 + floor(random 4);

	// Start stone mining loop
	local _counter	= 0;
	local _isOk	= true;
	local _proceed	= false;

	// check chance before loop, for a maximum amount of 5 loops allowing 5 possible chances
	local _mineChance = dayz_HarvestingChance call fn_chance;

	while {_isOk} do {
		[player,(getPosATL player),50,"minestone"] spawn fnc_alertZombies;

		local _finished = ["Medic",1] call fn_loopAction;
		local _weapons = weapons player;

		// Make sure player did not drop pickaxe
		if (!_finished || !("ItemPickaxe" in _weapons)) exitWith {
			_isOk	 = false;
			_proceed = false;
		};

		local _breaking = false;

		if (_finished) then {
			["Working",0,[100,15,10,0]] call dayz_NutritionSystem;

			if (dayz_toolBreaking && _mineChance) then {
				_breaking = true;

				if ("ItemPickaxe" in _weapons) then {
					player removeWeapon "ItemPickaxe";
				};
				if !("ItemPickaxeBroken" in _weapons) then {
					player addWeapon "ItemPickaxeBroken";
				};
			};

			// Drop item to ground
			["ItemStone",1,1] call fn_dropItem;	// item, magazine, amount

			_counter = _counter + 1;
		};

		if ((_counter >= _countOut) || _breaking) exitWith {
			if (_breaking) then {
				localize "str_PickAxeHandleBreaks" call dayz_rollingMessages;
			} else {
				localize "str_mining_finished" call dayz_rollingMessages;
			};
			_isOk	 = false;
			_proceed = true;
		};
		format[localize "str_mining_progress", _counter, (_countOut - _counter)] call dayz_rollingMessages;
	};

	if (!_proceed) then {
		localize "str_mining_canceled" call dayz_rollingMessages;
	};
} else {
	localize "str_mining_no_rocks" call dayz_rollingMessages;
};

dayz_actionInProgress = false;
