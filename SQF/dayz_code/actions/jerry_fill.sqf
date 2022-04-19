if (dayz_actionInProgress) exitWith {localize "str_player_actionslimit" call dayz_rollingMessages;};
dayz_actionInProgress = true;

player removeAction s_player_fillfuel;
//s_player_fillfuel = -1;
local _cursorTarget	= _this select 3;
local _magazines	= magazines player;
local _wasStanding	= ["perc", animationState player] call fnc_inString;
local _finished		= true;

// Limit Fuel in tankers
local _fuelAmount = _cursorTarget getVariable "FuelAmount";

if (isNil "_fuelAmount") then {
	_fuelAmount = floor(random dayz_randomMaxFuelAmount) max (dayz_randomMaxFuelAmount * 0.10);
	_cursorTarget setVariable ["FuelAmount", _fuelAmount, true];
};

local _qty5	= {_x == "ItemFuelcanEmpty"} count _magazines;
local _qty20	= {_x == "ItemJerrycanEmpty"} count _magazines;
local _qty210	= {_x == "ItemFuelBarrelEmpty"} count _magazines;
local _qty	= _qty5 + _qty20 + _qty210;

local _fuelNeeded = (_qty5 * 5) + (_qty20 * 20) + (_qty210 * 210);

// Inform if there is not enough to fill all containers in inventory, then proceed to fill available containers
if (_fuelAmount < _fuelNeeded) then {format [localize "str_fill_notenough", _fuelAmount, _fuelNeeded] call dayz_rollingMessages;};

// If there is not enough to fill any of their cans then exit
if (_fuelAmount < 5 or (_fuelAmount < 20 && _qty5 == 0) or (_fuelAmount < 210 && (_qty5 == 0 && _qty20 == 0))) exitWith {dayz_actionInProgress = false;};

scopeName "main";
if (_qty > 0) then {
	[player, (getPosATL player), 20, "refuel"] spawn fnc_alertZombies;

	_finished = ["Medic",1] call fn_loopAction;
	if (!_finished) exitWith {};

	// Added Nutrition-Factor for work
	["Working",0,[20,40,15,0]] call dayz_NutritionSystem;

	for "_j" from 1 to _qty5 do {
		_fuelAmount = _cursorTarget getVariable "FuelAmount";

		if (_fuelAmount >= 5) then {
			_fuelAmount = _fuelAmount - 5;
			_cursorTarget setVariable ["FuelAmount", _fuelAmount, true];
			local _removed = [player, "ItemFuelcanEmpty", 1] call BIS_fnc_invRemove;
			if (_removed == 0) then {
				_finished = false;
				breakTo "main";
			};
			player addMagazine "ItemFuelcan";
		} else {
			_qty = _qty - 1;
		};
	};

	for "_j" from 1 to _qty20 do {
		_fuelAmount = _cursorTarget getVariable "FuelAmount";

		if (_fuelAmount >= 20) then {
			_fuelAmount = _fuelAmount - 20;
			_cursorTarget setVariable ["FuelAmount", _fuelAmount, true];
			local _removed = [player, "ItemJerrycanEmpty", 1] call BIS_fnc_invRemove;
			if (_removed == 0) then {
				_finished = false;
				breakTo "main";
			};
			player addMagazine "ItemJerrycan";
		} else {
			_qty = _qty - 1;
		};
	};

	for "_j" from 1 to _qty210 do {
		_fuelAmount = _cursorTarget getVariable "FuelAmount";

		if (_fuelAmount >= 210) then {
			_fuelAmount = _fuelAmount - 210;
			_cursorTarget setVariable ["FuelAmount", _fuelAmount, true];
			local _removed = [player, "ItemFuelBarrelEmpty", 1] call BIS_fnc_invRemove;
			if (_removed == 0) then {
				_finished = false;
				breakTo "main";
			};
			player addMagazine "ItemFuelBarrel";
		} else {
			_qty = _qty - 1;
		};
	};

	format [localize "str_fill_success", _qty, _fuelAmount] call dayz_rollingMessages;
} else {
	localize "str_player_10" call dayz_rollingMessages;
};

if (!_finished) then {
	localize "STR_EPOCH_ACTION_CANCELED" call dayz_rollingMessages;
} else {
	if (_wasStanding) then {
		player playActionNow "PlayerStand";	// once the action has completed, return player to a standing pose if they were standing before the action
	};
};

dayz_actionInProgress = false;
