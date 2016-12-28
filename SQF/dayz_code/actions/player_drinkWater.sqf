private ["_canFill","_infected","_chance"];
#include "\z\addons\dayz_code\util\player.hpp"

call gear_ui_init;
closeDialog 0;

if Player_IsOnLadder() exitWith {localize "str_player_21" call dayz_rollingMessages;};

_infected = false;
_canFill = false;

_canFill = count nearestObjects [player, ["Land_pumpa","Land_water_tank","Land_Barrel_water","waterholeproxy"], 4] > 0;

if (!_canFill) then { // Fall back to the wider search if we can't find it
	_canfill = count nearestObjects [player, ["waterholeproxy"], 50] > 0;
};

if (!_canFill) exitWith {localize "str_player_20" call dayz_rollingMessages};

_infected = count nearestObjects [player,["grave"],50] > 0;

if (!dayz_isSwimming) then {player playActionNow "PutDown";};

if (_canFill) then {
	_chance = 0.1;
	
	if (_this in boil_tin_cans) then {
		_chance = 0.06;
		["FoodDrink",0,[0,0,300,0]] call dayz_NutritionSystem; //[Energy,food,water,temp]
	} else {
		_chance = 0.03;
		["FoodDrink",0,[0,0,150,0]] call dayz_NutritionSystem; //[Energy,food,water,temp]
	};
	
	[player,"drink",0,false,5] call dayz_zombieSpeak;
	[player,10,true,(getPosATL player)] call player_alertZombies;
	
	if (_infected) then {
		r_player_infected = true;
		player setVariable["USEC_infected",true,true];
	} else {
		if ([_chance] call fn_chance) then {
			r_player_infected = true;
			player setVariable["USEC_infected",true,true];
		};
	};
	localize "str_drinkwithhands" call dayz_rollingMessages;
} else {
	localize "str_player_32" call dayz_rollingMessages;
};