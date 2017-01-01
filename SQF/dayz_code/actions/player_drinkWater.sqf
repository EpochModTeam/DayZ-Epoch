private ["_canFill","_onLadder","_chance","_posASL","_posATL"];

call gear_ui_init;
closeDialog 0;

_onLadder = (getNumber (configFile >> "CfgMovesMaleSdr" >> "States" >> (animationState player) >> "onLadder")) == 1;
if (_onLadder) exitWith {localize "str_player_21" call dayz_rollingMessages;};

_posASL = getPosASL player;
_posATL = ASLtoATL _posASL;

_canFill = switch true do {
	//Return: [nearWaterHole, isPond]
	case (count nearestObjects [_posATL,["Land_pumpa","Land_Barrel_water"],4] > 0): {[true,false]}; //"Land_water_tank" has no spout or opening, doesn't make sense to include
	case (toLower worldName == "chernarus"): {(call fn_nearWaterHole)};
	//Slow searches for maps without waterHoleProxy objects added yet
	case ({["_well",str _x] call fnc_inString} count nearestObjects [_posATL,[],4] > 0): {[true,false]};
	case ({["pond",str _x] call fnc_inString && {_posASL select 2 < ((getPosASL _x) select 2)}} count nearestObjects [player,[],50] > 0): {[true,true]};
	default {[false,false]};
};

if (_canFill select 0) then {
	if (_this in boil_tin_cans) then {
		_chance = 0.06;
		["FoodDrink",0,[0,0,300,0]] call dayz_NutritionSystem; //[Energy,food,water,temp]
	} else {
		_chance = 0.03;
		["FoodDrink",0,[0,0,150,0]] call dayz_NutritionSystem; //[Energy,food,water,temp]
	};
	
	if (!dayz_isSwimming) then {
		player playActionNow "PutDown";
	};
	
	[player,"drink",0,false,5] call dayz_zombieSpeak;
	[player,10,true,_posATL] call player_alertZombies;
	
	//Check if water source is infected only for ponds
	if (dayz_infectiousWaterholes && {_canFill select 1} && {count nearestObjects [_posATL,["Body","Body1","Body2","Mass_grave"],50] > 0}) then {
		r_player_infected = true;
	} else {
		if ([_chance] call fn_chance) then {
			r_player_infected = true;
		};
	};
	
	localize "str_drinkwithhands" call dayz_rollingMessages;
} else {
	localize "str_player_32" call dayz_rollingMessages;
};