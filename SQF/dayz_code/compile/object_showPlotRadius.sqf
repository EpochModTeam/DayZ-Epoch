//Build preview adopted from Axe Cop (@vos) Base Destruction Script

private ["_location","_object","_objects","_i","_dir","_nearPlotPole"];

// global vars
_nearPlotPole = nearestObject [player, "Plastic_Pole_EP1_DZ", 3];

BD_radius = 30;
BD_center = getPos _nearPlotPole;


 _objects = [];
// center
_object = createVehicle ["Plastic_Pole_EP1_DZ", BD_center, [], 0, "CAN_COLLIDE"];
_objects set [0, _object];
// circle
for "_i" from 0 to 360 step (270 / BD_radius) do {
	_location = [(BD_center select 0) + ((cos _i) * BD_radius), (BD_center select 1) + ((sin _i) * BD_radius), BD_center select 2];
	_object = createVehicle ["WoodLargeWall_Preview_DZ", _location, [], 0, "CAN_COLLIDE"];
	_dir = ((BD_center select 0) - (_location select 0)) atan2 ((BD_center select 1) - (_location select 1));
	_object setDir _dir;
	_objects set [count _objects, _object];
  };

// top
  _location = [BD_center select 0, BD_center select 1, (BD_center select 2) + BD_radius];
  _object = createVehicle ["WoodFloor_Preview_DZ", _location, [], 0, "CAN_COLLIDE"];
  _objects set [count _objects, _object];
  
  //TODO add a countdown
  cutText ["Radius preview active for 30 seconds","PLAIN"];
  sleep 30;

        {
           deleteVehicle _x;
        } forEach _objects;
