
private ["_array","_location","_dir","_classname","_weapon"];
_array = _this select 3;
_location = player modeltoworld [0,1,0];
_dir = getDir player;
_classname = _array select 0;
removeBackpack player;
player playActionNow "Medic";
sleep 8;
player removeAction r_player_action_bag;
r_action_bag = false;
_weapon = createVehicle [_classname, _location, [], 0, "CAN_COLLIDE"];
_weapon setDir _dir;
//_weapon setpos _location;
player reveal _weapon;