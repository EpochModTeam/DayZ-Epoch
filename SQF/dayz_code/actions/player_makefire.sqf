private ["_location","_isOk","_dir","_classname","_fire","_hasWood"];
_location = player modeltoworld [0,0.3,0];
if ((_location select 2) < 0) then {
	_location set [2,0];
};
//_location set [2,0];
_isOk = true; //count (_location isFlatEmpty [0.3,0,0,4,0,false,player]) > 0;
_hasWood = 		"PartWoodPile" in magazines player;

if (_hasWood) then {
	if (_isOk) then {	
		player removeMagazine "PartWoodPile";
		_dir = getDir player;
		_classname = "Land_Fire_DZ";
		[1,1] call dayz_HungerThirst;
		player playActionNow "Medic";
		sleep 6;
		_fire = createVehicle [_classname, _location, [], 0, "CAN_COLLIDE"];
		_fire setDir _dir;
		player reveal _fire;
		
		_fire spawn player_fireMonitor;
		
		cutText [localize "str_fireplace_01", "PLAIN DOWN"];
	} else {
		cutText [localize "str_fireplace_02", "PLAIN DOWN"];
	};
} else {
	cutText [localize "str_player_22", "PLAIN DOWN"];
};