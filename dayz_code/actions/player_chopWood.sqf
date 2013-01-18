private["_location","_isOk","_dir","_classname"];
private["_item"];
_item = _this;
call gear_ui_init;
_hasChance = 9 > random 100;

if (["forest",dayz_surfaceType] call fnc_inString) then {
	if (!_hasChance) then {
	_result = [player,"PartWoodPile"] call BIS_fnc_invAdd;
	if (_result) then {
		cutText [localize "str_player_25", "PLAIN DOWN"];
	} else {
		cutText [localize "str_player_24", "PLAIN DOWN"];
	};
	} else {
		player removeWeapon "ItemHatchet";
		player addWeapon "ItemBrokeHatchet";
		cutText [localize "str_player_23", "PLAIN DOWN"];
	}
} else {
	cutText [localize "str_player_23", "PLAIN DOWN"];
};