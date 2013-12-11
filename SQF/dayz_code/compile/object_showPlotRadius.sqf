//Build preview adopted from Axe Cop (@vos) Base Destruction Script

private ["_location","_object","_objects","_i","_dir","_nearPlotPole"];

// global vars
_nearPlotPole = nearestObject [player, "Plastic_Pole_EP1_DZ", 3];


//"privatized" center variable
_BD_radius = 30;
_BD_center = getPos _nearPlotPole;

 _objects = [];

// circle
for "_i" from 0 to 360 step (270 / _BD_radius) do {
	_location = [(_BD_center select 0) + ((cos _i) * _BD_radius), (_BD_center select 1) + ((sin _i) * _BD_radius), _BD_center select 2];
	_object = createVehicleLocal ["Plastic_Pole_EP1", _location, [], 0, "CAN_COLLIDE"];
	_dir = ((_BD_center select 0) - (_location select 0)) atan2 ((_BD_center select 1) - (_location select 1));
	_object setDir _dir;
	_objects set [count _objects, _object];
  };
