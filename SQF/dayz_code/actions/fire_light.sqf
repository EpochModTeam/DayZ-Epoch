private["_location","_isOk","_dir","_classname"];
_location = player modeltoworld [0,1,0];
_location set [2,0];
_isOk = count (_location isFlatEmpty [0.5,0,0,4,0,false,player]) > 0;

if (_isOk) then {	
	_dir = getDir player;
	_classname = "Land_Fire";
	[1,1] call dayz_HungerThirst;
	player playActionNow "Medic";
	sleep 6;
	dayz_hasFire = createVehicle [_classname, _location, [], 0, "CAN_COLLIDE"];
	dayz_hasFire setDir _dir;
	player reveal dayz_hasFire;
	cutText [localize "str_fireplace_01", "PLAIN DOWN"];
} else {
	cutText [localize "str_fireplace_02", "PLAIN DOWN"];
};