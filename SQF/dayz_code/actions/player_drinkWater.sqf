private["_playerPos","_canFill","_isPond","_isWell","_pondPos","_objectsWell","_onLadder","_hasbottleitem","_config","_item","_text","_objectsPond","_qty","_dis","_sfx","_isInfected","_bodiesNear","_chance"];

call gear_ui_init;
closeDialog 0;
_item = _this;
_playerPos = getPosATL player;
_canFill = count nearestObjects [_playerPos, ["Land_pumpa","Land_water_tank"], 4] > 0;
_isPond = false;
_isWell = false;
_isInfected = false;
_pondPos = [];
_objectsWell = [];

_onLadder = (getNumber (configFile >> "CfgMovesMaleSdr" >> "States" >> (animationState player) >> "onLadder")) == 1;
if (_onLadder) exitWith {cutText [localize "str_player_21", "PLAIN DOWN"]};

_itemorignal = _this;
//diag_log(str(_itemorignal));

if (!dayz_isSwimming) then {
	player playActionNow "PutDown";
};

if (!_canFill) then {
	_objectsWell = nearestObjects [_playerPos, [], 4];
	{
		//Check for Well
		_isWell = ["_well",str(_x),false] call fnc_inString;
		if (_isWell) then {_canFill = true};
	} forEach _objectsWell;
};

if (!_canFill) then {
	_objectsPond = nearestObjects [_playerPos, [], 100];
	{
		//Check for pond
		_isPond = ["pond",str(_x),false] call fnc_inString;	
		//Check for Dead Bodies
		_bodiesNear = ["dead",str(_x),false] call fnc_inString;
		if (!_bodiesNear) then {
			_bodiesNear = ["massgrave",str(_x),false] call fnc_inString;
		};
		if (_bodiesNear) then {
			_isInfected = true; 
		};
		if (_isPond) then {	
			_pondPos = (_x worldToModel _playerPos) select 2;
			if (_pondPos < 0) then {
				_canFill = true;
			};
		};
	} forEach _objectsPond;
};

if (_canFill) then {
	_chance = 0.1;
	
	if (_itemorignal in boil_tin_cans) then {
		_chance = 0.06;
		["FoodDrink",0,[0,0,300,0]] call dayz_NutritionSystem; //[Energy,food,water,temp]
	} else {
		_chance = 0.03;
		["FoodDrink",0,[0,0,150,0]] call dayz_NutritionSystem; //[Energy,food,water,temp]
	};
	
	[player,"drink",0,false,5] call dayz_zombieSpeak;
	[player,10,true,(getPosATL player)] call player_alertZombies;
	
	if(!_isWell) then {
		if (_isInfected) then {
			r_player_infected = true;
			player setVariable["USEC_infected",true,true];
		} else {
			if ([_chance] call fn_chance) then {
				r_player_infected = true;
				player setVariable["USEC_infected",true,true];
			};
		};
	};
	cutText [localize "str_drinkwithhands", "PLAIN DOWN"];
} else {
	cutText [localize "str_player_32", "PLAIN DOWN"];
};