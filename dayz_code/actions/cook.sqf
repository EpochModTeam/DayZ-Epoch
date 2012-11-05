private["_hasFoodMeat","_hasFoodTin","_item","_wait"];

player removeAction s_player_cook;
s_player_cook = -1;

_qty = {_x == "FoodSteakRaw"} count magazines player;
_wait = 5 - _qty;

if ("FoodSteakRaw" in magazines player) then {
	player playActionNow "Medic";
	[player,"cook",0,false] call dayz_zombieSpeak;
	_id = [player,70,true,(getPosATL player)] spawn player_alertZombies;
	sleep _wait;
	for "_x" from 1 to _qty do {
		_hasFoodMeat = 	"FoodSteakRaw" in magazines player;
		if (!_hasFoodMeat) exitWith {cutText [format[(localize "str_player_31"),_text,"cook"] , "PLAIN DOWN"]};
		player removeMagazine "FoodSteakRaw";
		player addMagazine "FoodSteakCooked";
		sleep 1;
	};	
	cutText [format[(localize  "str_success_cooked"),_qty,(localize  "STR_EQUIP_NAME_24")], "PLAIN DOWN"];
};

/*
_hasFoodMeat = 	"FoodSteakRaw" in magazines player;
_qty = {_x == "ItemWaterbottleUnfilled"} count magazines player;

if (_hasFoodMeat) then {
	player removeMagazine "FoodSteakRaw";
	player playActionNow "Medic";
	[player,"eat",0,false] call dayz_zombieSpeak;
	sleep 6;
	player addMagazine "FoodSteakCooked";
	cutText [localize "str_success_cooked_steak", "PLAIN DOWN"];
};
*/
