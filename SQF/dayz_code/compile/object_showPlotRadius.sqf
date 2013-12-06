//Build preview adopted from Axe Cop (@vos) Base Destruction Script

private ["_location","_object","_objects","_i","_dir","_nearPlotPole"];

// global vars
_nearPlotPole = nearestObject [player, "Plastic_Pole_EP1_DZ", 3];


//"privatized" center variable
BD_radius = 30;
_BD_center = getPos _nearPlotPole;

player removeAction s_player_plotpole_preview;
s_player_plotpole_preview = 1;

 _objects = [];

// circle
for "_i" from 0 to 360 step (270 / BD_radius) do {
	_location = [(_BD_center select 0) + ((cos _i) * BD_radius), (_BD_center select 1) + ((sin _i) * BD_radius), _BD_center select 2];
	_object = createVehicleLocal ["WoodLargeWall_Preview_DZ", _location, [], 0, "CAN_COLLIDE"];
	_dir = ((_BD_center select 0) - (_location select 0)) atan2 ((_BD_center select 1) - (_location select 1));
	_object setDir _dir;
	_objects set [count _objects, _object];
  };

// top
  _location = [_BD_center select 0, _BD_center select 1, (_BD_center select 2) + BD_radius];
  _object = createVehicleLocal ["WoodFloor_Preview_DZ", _location, [], 0, "CAN_COLLIDE"];
  _objects set [count _objects, _object];
  

_previewCounter = 30;
while {_previewCounter > 0} do {
	cutText [format["Radius preview active for %1 seconds", _previewCounter], "PLAIN DOWN"];
	_previewCounter = _previewCounter - 1;
	sleep 1;
	};

// sleep now done in the while loop
// sleep 30;

        {
           deleteVehicle _x;
        } forEach _objects;

s_player_plotpole_preview = 1;
