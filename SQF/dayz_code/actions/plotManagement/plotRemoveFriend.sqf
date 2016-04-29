private ["_list","_plots","_thePlot","_friends"];

_pos = _this select 0;
if (_pos < 0) exitWith {};
_plots = nearestObjects [player, ["Plastic_Pole_EP1_DZ"],15];	
_thePlot = _plots select 0;
_friends = _thePlot getVariable ["plotfriends", []];
_toRemove = (_friends select _pos);
_newList = [];
{
	if(_x select 0  != _toRemove select 0)then{
	_newList = _newList + [_x];
	};
} forEach _friends;
_thePlot setVariable ["plotfriends", _newList, true];

if (isServer) then {
	PVDZ_veh_Save call server_updateObject;
} else {
	PVDZ_veh_Save = [_thePlot,"gear"];
	publicVariableServer "PVDZ_veh_Save";
};

call PlotGetFriends;
call PlotNearbyHumans;