//Build preview adopted from Axe Cop (@vos) Base Destruction Script

private ["_location","_object","_objects","_i","_dir","_nearPlotPole"];

// global vars
_nearPlotPole = nearestObject [player, "Plastic_Pole_EP1_DZ"];

//"privatized" center variable
_BD_radius = DZE_PlotPole select 0;
_BD_center = [_nearPlotPole] call FNC_getPos;

 _objects = [];

// circle
for "_i" from 0 to 360 step (270 / _BD_radius) do {
	_location = [(_BD_center select 0) + ((cos _i) * _BD_radius), (_BD_center select 1) + ((sin _i) * _BD_radius), _BD_center select 2];
	_object = createVehicle ["Plastic_Pole_EP1", _location, [], 0, "CAN_COLLIDE"];
	_object setpos _location;
};
