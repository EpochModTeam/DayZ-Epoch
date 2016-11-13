private ["_pos","_plots","_thePlot","_friends","_toRemove","_newList"];

_pos = _this select 0;
if (_pos < 0) exitWith {};
_plots = nearestObjects [[player] call FNC_getPos, ["Plastic_Pole_EP1_DZ"],15];	
_thePlot = _plots select 0;
_friends = _thePlot getVariable ["plotfriends", []];
_toRemove = (_friends select _pos);
_newList = [];
{
	if (_x select 0  != _toRemove select 0) then {
	_newList set [(count _newList), _x];
	};
} count _friends;
_thePlot setVariable ["plotfriends", _newList, true];

PVDZ_veh_Save = [_thePlot,"gear"];
publicVariableServer "PVDZ_veh_Save";

call PlotGetFriends;
call PlotNearbyHumans;
