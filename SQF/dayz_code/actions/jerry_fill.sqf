if (dayz_actionInProgress) exitWith {localize "str_epoch_player_34" call dayz_rollingMessages;};
dayz_actionInProgress = true;
private ["_qty","_dis","_sfx","_started","_finished","_animState","_isRefuel","_fuelCans","_qty20","_qty5","_qty210","_magazines","_cursorTarget","_fuelAmount","_fuelNeeded"];

player removeAction s_player_fillfuel;
//s_player_fillfuel = -1;
_cursorTarget = _this select 3;
_magazines = magazines player;

//Limit Fuel in tankers
_fuelAmount = _cursorTarget getVariable "FuelAmount";

if (isNil "_fuelAmount") then {
	_fuelAmount = floor(Random dayz_randomMaxFuelAmount) max (dayz_randomMaxFuelAmount * 0.10);
    _cursorTarget setVariable ["FuelAmount",_fuelAmount,true];
};

_qty5 = {_x == "ItemFuelcanEmpty"} count _magazines;
_qty20 = {_x == "ItemJerrycanEmpty"} count _magazines;
_qty210 = {_x == "ItemFuelBarrelEmpty"} count _magazines;

_fuelNeeded = (_qty5 * 5) + (_qty20 * 20) + (_qty210 * 210);

if (_fuelAmount < _fuelNeeded) then {format[localize "str_fill_notenough",typeOf _cursorTarget,_fuelAmount,_fuelNeeded] call dayz_rollingMessages;};

_fuelCans = ["ItemFuelcanEmpty","ItemJerrycanEmpty","ItemFuelBarrelEmpty"];

_qty = 0;
_qty = {_x in _fuelCans} count _magazines;

if (("ItemJerrycanEmpty" in _magazines) or ("ItemFuelcanEmpty" in _magazines) or ("ItemFuelBarrelEmpty" in _magazines)) then {
	player playActionNow "Medic";

	_dis=5;
	_sfx = "refuel";
	[player,_sfx,0,false,_dis] call dayz_zombieSpeak;
	[player,_dis,true,(getPosATL player)] call player_alertZombies;

	// Added Nutrition-Factor for work
	["Working",0,[20,40,15,0]] call dayz_NutritionSystem;

	r_doLoop = true;
	_started = false;
	_finished = false;
	while {r_doLoop} do {
		_animState = animationState player;
		_isRefuel = ["medic",_animState] call fnc_inString;
		if (_isRefuel) then {
			_started = true;
		};
		if (_started and !_isRefuel) then {
			r_doLoop = false;
			_finished = true;
		};
		uiSleep 0.1;
	};

	r_doLoop = false;

	if (_finished) then {
		for "_x" from 1 to _qty5 do {
			_fuelAmount = _cursorTarget getVariable "FuelAmount";
			
			if (_fuelAmount >= 5) then {
				_fuelAmount = _fuelAmount - 5;
				_cursorTarget setVariable ["FuelAmount",_fuelAmount,true];
				player removeMagazine "ItemFuelcanEmpty";
				player addMagazine "ItemFuelcan";
			} else {
				_qty = _qty - 1;
			};
		};
		for "_x" from 1 to _qty20 do {
			_fuelAmount = _cursorTarget getVariable "FuelAmount";
			
			if (_fuelAmount >= 20) then {
				_fuelAmount = _fuelAmount - 20;
				_cursorTarget setVariable ["FuelAmount",_fuelAmount,true];
				player removeMagazine "ItemJerrycanEmpty";
				player addMagazine "ItemJerrycan";
			} else {
				_qty = _qty - 1;
			};
		};
		for "_x" from 1 to _qty210 do {
			_fuelAmount = _cursorTarget getVariable "FuelAmount";
			
			if (_fuelAmount >= 210) then {
				_fuelAmount = _fuelAmount - 210;
				_cursorTarget setVariable ["FuelAmount",_fuelAmount,true];
				player removeMagazine "ItemFuelBarrelEmpty";
				player addMagazine "ItemFuelBarrel";
			} else {
				_qty = _qty - 1;
			};
		};
	};

	//format[localize "str_player_09",_qty] call dayz_rollingMessages;
	format[localize "str_fill_success",_qty,typeOf _cursorTarget,_fuelAmount] call dayz_rollingMessages;
	//diag_log format[localize "str_fill_success",_qty,typeOf _cursorTarget,_fuelAmount];
} else {
	localize "str_player_10" call dayz_rollingMessages;
};
dayz_actionInProgress = false;
