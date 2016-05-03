// Remove preview build by RimBlock (http://epochmod.com/forum/index.php?/user/12612-rimblock/)

private ["_location","_object","_objects","_i","_dir","_nearPlotPole","_validMarkers","_findNearestPoles","_poleinv","_IsNearPlot","_plotpole"];

_distance = (DZE_PlotPole select 0) + 5;

// check for near plot
_plotpole = nearestobject [(vehicle player),"Plastic_Pole_EP1_DZ"];
_findNearestPoles = (position _plotpole) nearEntities ["Land_coneLight", _distance];
_validMarkers = [];
_isnearplot = 0;

{
	_poleinv = _x getVariable ["inventory",[]];
	
	if (_poleinv select 0 == "PPMarker") then {
		_validMarkers set [count _validMarkers,_x];
	};
} count _findNearestPoles;

_IsNearPlot = count _validMarkers;

// If no plot poles found with ppMarker in the inventory.
if (_IsNearPlot > 0) then{ 
	{
		diag_log format["Object remove plot radius: [Destroying object: %1]",_x];
		deleteVehicle _x;
	} count _validMarkers;
};

