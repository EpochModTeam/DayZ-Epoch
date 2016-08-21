private ["_nearPlayers","_object"];
_object = _this select 3;

_nearPlayers = {(isPlayer _x && _x != player)} count (player nearEntities ["CAManBase",8]);

if (!(_object isKindOf "ATV_Base_EP1") && _nearPlayers < 1) exitWith {
	localize "STR_EPOCH_NEED_HELP" call dayz_rollingMessages;
};

//Kneel Down
player playMove "amovpknlmstpslowwrfldnon_amovpercmstpsraswrfldnon";
waitUntil { animationState player != "amovpknlmstpslowwrfldnon_amovpercmstpsraswrfldnon"};

_object setVectorUp [0,0,1];

// Alert Zombies
[player,20,true,(getPosATL player)] call player_alertZombies;

// Added Nutrition-Factor for work
["Working",0,[20,40,15,0]] call dayz_NutritionSystem;