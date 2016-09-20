private ["_name","_plots","_friendlies","_thePlot"];

lbClear 7002;
_plots = nearestObjects [[player] call FNC_getPos, ["Plastic_Pole_EP1_DZ"],15];	
_thePlot = _plots select 0;
_friendlies =  _thePlot getVariable ["plotfriends", []];
{
	_name = _x select 1;
	lbAdd [7002, if (typeName _name == "ARRAY") then {toString _name} else {_name}];
} forEach _friendlies;