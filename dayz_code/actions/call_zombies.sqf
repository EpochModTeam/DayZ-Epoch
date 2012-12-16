private["_hasKnife","_qty","_item","_text","_string","_type","_loop","_meat","_timer"];
_item = _this select 3;

//player removeAction s_player_callzombies;
//s_player_callzombies = -1;

player playActionNow "Surrender";

[player,"spotted",0,false] call dayz_zombieSpeak;

_id = [player,200,true,(getPosATL player)] spawn player_alertZombies;

// cutText ["Calling Zombies...", "PLAIN DOWN"];