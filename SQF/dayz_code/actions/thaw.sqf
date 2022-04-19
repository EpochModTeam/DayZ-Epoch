if (dayz_actionInProgress) exitWith {localize "str_player_actionslimit" call dayz_rollingMessages;};
dayz_actionInProgress = true;

player removeAction s_player_boil;
player removeAction s_player_cook;
player removeAction s_player_thaw;
a_player_thaw		= true;
//s_player_thaw		= -1;

local _wasStanding	= ["perc", animationState player] call fnc_inString;
local _alert		= [player, getPosATL player, 10, "cook"];
local _foodArr		= [];	// [["classname",idx],["classname",idx]];
local _drinkArr		= [];	// [["classname",idx],["classname",idx]];

{	// build array(s) of frozen food & drink classes
	call {
		local _foodIdx = DZE_frozenFood find _x;
		if (_foodIdx > -1) exitWith {_foodArr set [count _foodArr, [DZE_frozenFood select _foodIdx, _foodIdx]];};

		local _drinkIdx = DZE_frozenDrink find _x;
		if (_drinkIdx > -1) exitWith {_drinkArr set [count _drinkArr, [DZE_frozenDrink select _drinkIdx, _drinkIdx]];};
	};
} count (magazines player);

local _qtyFood	= count _foodArr;
local _qtyDrink	= count _drinkArr;
local _finished	= true;

scopeName "main";
// Thaw Frozen Food
if (_qtyFood > 0) then {
	_alert spawn fnc_alertZombies;
	_finished = ["Medic",1] call fn_loopAction;

	if (!_finished) exitWith {};
	{
		local _thawedFood = (DZE_thawedFood select (_x select 1)) call BIS_fnc_selectRandom;	// refund
		local _removed = [player, _x select 0] call BIS_fnc_invRemove;
		if (_removed == 0) then {
			_finished = false;
			breakTo "main";
		};
		player addMagazine _thawedFood;
	} forEach _foodArr;
	format [localize (["STR_SUCCESS_THAWED_FOOD1","STR_SUCCESS_THAWED_FOOD2"] select (_qtyFood > 1)), _qtyFood] call dayz_rollingMessages;
};

// Thaw Frozen Drink
if (_qtyDrink > 0 && _finished) then {
	_alert spawn fnc_alertZombies;
	_finished = ["Medic",1] call fn_loopAction;

	if (!_finished) exitWith {};
	{
		local _thawedDrink = (DZE_thawedDrink select (_x select 1)) call BIS_fnc_selectRandom;	// refund
		local _removed = [player, _x select 0] call BIS_fnc_invRemove;
		if (_removed == 0) then {
			_finished = false;
			breakTo "main";
		};
		player addMagazine _thawedDrink;
	} forEach _drinkArr;
	format [localize (["STR_SUCCESS_THAWED_DRINK1","STR_SUCCESS_THAWED_DRINK2"] select (_qtyDrink > 1)), _qtyDrink] call dayz_rollingMessages;
};
if (!_finished) then {
	localize "STR_EPOCH_ACTION_CANCELED" call dayz_rollingMessages;
} else {
	if (_wasStanding) then {
		player playActionNow "PlayerStand";	// once the action has completed, return player to a standing pose if they were standing before the action
	};
};

a_player_thaw = false;
dayz_actionInProgress = false;
