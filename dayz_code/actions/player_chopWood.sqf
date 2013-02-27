private["_location","_isOk","_dir","_classname"];
private["_item"];
_item = _this;
call gear_ui_init;

if (["forest",dayz_surfaceType] call fnc_inString) then {
		_result = [player,"PartWoodPile"] call BIS_fnc_invAdd;
		[player,"chopwood",0,false] call dayz_zombieSpeak;
		if (_result) then {
			cutText [localize "str_player_25", "PLAIN DOWN"];
		} else {
			cutText [localize "str_player_24", "PLAIN DOWN"];
		};
		[player,20,false,(getPosATL player)] spawn player_alertZombies;
		player playActionNow "Medic";
		sleep 3;
} else {
	cutText [localize "str_player_23", "PLAIN DOWN"];
};