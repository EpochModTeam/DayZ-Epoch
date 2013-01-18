private["_location","_isOk","_dir","_classname"];
_location = player modeltoworld [0,0.3,0];
if ((_location select 2) < 0) then {
	_location set [2,0];
};
//_location set [2,0];
_isOk = true; //count (_location isFlatEmpty [0.3,0,0,4,0,false,player]) > 0;
_hasWood = 		"PartWoodPile" in magazines player;
_hasChance = 9 > random 100;

if (_hasWood) then {
	if (_isOk) then {	
		if (!_hasChance) then {
		player removeMagazine "PartWoodPile";
		_dir = getDir player;
		_classname = "Land_Fire_DZ";
		player playActionNow "Medic";
		sleep 6;
		_fire = createVehicle [_classname, _location, [], 0, "CAN_COLLIDE"];
		_fire setDir _dir;
		player reveal _fire;
		
		_id = _fire spawn player_fireMonitor;
		
		cutText [localize "str_fireplace_01", "PLAIN DOWN"];
		} else {
			player removeWeapon "ItemMatchbox";
			player addWeapon "ItemMatchboxEmpty";
			cutText [localize "Your box of matches appear to be empty", "PLAIN DOWN"];
		};
	} else {
		cutText [localize "str_fireplace_02", "PLAIN DOWN"];
	};
} else {
	cutText [localize "str_player_22", "PLAIN DOWN"];
};