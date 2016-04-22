if (DZE_ActionInProgress) exitWith {localize "str_epoch_player_24" call dayz_rollingMessages;};
DZE_ActionInProgress = true;
private ["_vehicle","_canSize","_configVeh","_capacity","_nameType","_curFuel","_newFuel","_dis","_sfx","_fueling","_array","_cantype",
"_emptycan","_started","_finished","_animState","_isRefuel"];

_array = _this select 3;
_cantype = _array select 0;
_vehicle = _array select 1;
_canSize = getNumber(configFile >> "cfgMagazines" >> _cantype >> "fuelQuantity");
_emptycan = getText(configFile >> "cfgMagazines" >> _cantype >> "emptycan");
_configVeh = configFile >> "cfgVehicles" >> TypeOf(_vehicle);
_capacity = getNumber(_configVeh >> "fuelCapacity");
_nameType = getText(_configVeh >> "displayName");
_curFuel = ((fuel _vehicle) * _capacity);
_newFuel = (_curFuel + _canSize);
_fueling = player getVariable ["fueling",false];

if (fuel _vehicle == 1) exitWith {DZE_ActionInProgress = false;};

player removeAction s_player_fillfuel + _capacity;
a_player_jerryfilling = true;
player setVariable ["fueling", true];

if (!_fueling) then {
	[player] allowGetIn false;

	if (_newFuel > _capacity) then {_newFuel = _capacity};
	_newFuel = (_newFuel / _capacity);

	player removeMagazine _cantype;
	player addMagazine _emptycan;
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
		if (_isRefuel or dayz_isSwimming) then {
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
		if (local _vehicle) then {
			[_vehicle,_newFuel] call local_setFuel;
		} else {
			PVDZ_send = [_vehicle,"SetFuel",[_vehicle,_newFuel]];
			publicVariableServer "PVDZ_send";
		};

		format[localize "str_player_05",_nameType,_canSize] call dayz_rollingMessages;
		uiSleep 1;
		call fnc_usec_medic_removeActions;
	};
	[player] allowGetIn true;
} else {
	localize "str_refuel_fail" call dayz_rollingMessages;
};
a_player_jerryfilling = false;
r_action = false;
player setVariable ["fueling", false];
DZE_ActionInProgress = false;
