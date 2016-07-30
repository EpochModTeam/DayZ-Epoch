private ["_pos","_plots","_thePlot","_inList","_toAdd","_friends"];

_pos = _this select 0;
if (_pos < 0) exitWith {};
_toAdd = (Humans select _pos);
_plots = nearestObjects [[player] call FNC_getPos, ["Plastic_Pole_EP1_DZ"],15];	
_thePlot = _plots select 0;
_friends = _thePlot getVariable ["plotfriends",[]];
_inList = false;
{ if ((_x  select 0) == (_toAdd select 0)) exitWith { _inList = true; }; } count _friends;
if (_inList) exitWith {localize "STR_EPOCH_PLOTMANAGEMENT_ADDFRIEND_ALREADYONTHELIST" call dayz_rollingMessages};
if ((count _friends) == DZE_MaxPlotFriends) exitWith { format[localize "STR_EPOCH_PLOTMANAGEMENT_ADDFRIEND_FRIENDLIMIT", DZE_MaxPlotFriends] call dayz_rollingMessages;};
_friends set [(count _friends), _toAdd];
_thePlot setVariable ["plotfriends", _friends, true];
PVDZ_veh_Save = [_thePlot,"gear"];
if (isServer) then {
	PVDZ_veh_Save call server_updateObject;
} else {
	publicVariableServer "PVDZ_veh_Save";
};

call PlotGetFriends;
call PlotNearbyHumans;