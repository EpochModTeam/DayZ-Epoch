private ["_object","_position"];
_object = _this select 3;

//Kneel Down
player playMove "amovpknlmstpslowwrfldnon_amovpercmstpsraswrfldnon";
waitUntil { animationState player != "amovpknlmstpslowwrfldnon_amovpercmstpsraswrfldnon"};

//_object setpos _position;
_object setvectorup [0,0,1];

// Alert Zombies
[player,20,true,(getPosATL player)] call player_alertZombies;

// Added Nutrition-Factor for work
["Working",0,[20,40,15,0]] call dayz_NutritionSystem;