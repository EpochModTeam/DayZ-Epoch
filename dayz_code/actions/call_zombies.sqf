private ["_item","_id"];
_item = _this select 3;

// remove menu
player removeAction s_player_callzombies;
s_player_callzombies = 1;

// player playActionNow "Surrender";

// for now try reseting animation when this is called to test preventing animation lockups
// player switchMove "";

[player,"spotted",0,false] call dayz_zombieSpeak;

_id = [player,50,true,(getPosATL player)] spawn player_alertZombies;

// wait a bit
sleep 15;

// allow menu again
s_player_callzombies = -1;

// cutText ["Calling Zombies...", "PLAIN DOWN"];