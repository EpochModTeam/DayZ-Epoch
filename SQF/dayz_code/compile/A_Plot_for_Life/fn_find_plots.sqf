// Find Plots by RimBlock (http://epochmod.com/forum/index.php?/user/12612-rimblock/)

private ["_player","_ispole","_IsNearPlot","_nearestPole","_distance","_findNearestPoles","_findNearestPole","_friendly","_return"];

_player = _this select 0;
_ispole = _this select 1;
_IsNearPlot = 0;
_nearestPole = "";
_findNearestPole = [];

if(_isPole) then {
	_distance = DZE_PlotPole select 1;
}else{
	_distance = DZE_PlotPole select 0;
};

// check for near plot
_findNearestPole = (position (vehicle _player)) nearEntities ["Plastic_Pole_EP1_DZ", _distance];

_IsNearPlot = count (_findNearestPole);
if (_IsNearPlot > 0) then{_nearestPole = _findNearestPole select 0;}else{_nearestPole = objNull;};

_return = [_distance, _IsNearPlot, _nearestPole];
_return
