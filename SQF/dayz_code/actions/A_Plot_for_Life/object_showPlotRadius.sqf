// Build preview adopted from Axe Cop (@vos) Base Destruction Script
// Amended by RimBlock (http://epochmod.com/forum/index.php?/user/12612-rimblock/) to allow plot radius removal.

private ["_location","_object","_i","_dir","_nearPlotPole","_light","_lightlocationtemp","_lightlocation","_lightarray"];

// global vars
_nearPlotPole = nearestObject [player, "Plastic_Pole_EP1_DZ"];
_lightarray = [];

//"privatized" center variable
_BD_radius = DZE_PlotPole select 0;
_BD_center = [_nearPlotPole] call FNC_getPos;

_color = "#(argb,8,8,3)color(0.99,0.65,0.06,1,ca)"; //dark orange
	
// circle
for "_i" from 0 to 360 step (450 / _BD_radius) do {
	_location = [(_BD_center select 0) + ((cos _i) * _BD_radius), (_BD_center select 1) + ((sin _i) * _BD_radius), (_BD_center select 2) - 0.18];

	_object = createVehicle ["Land_coneLight", _location, [], 0, "CAN_COLLIDE"];
	_object setVariable ["Inventory", ["PPMarker"],true];
	_object enableSimulation false;
	_object setpos _location;

};

