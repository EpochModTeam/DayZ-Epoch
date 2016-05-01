private ["_pos","_plots","_thePlot","_inList"];
_pos = _this select 0;
if (_pos < 0) exitWith {};
_toAdd = (Humans select _pos);
_plots = nearestObjects [[player] call FNC_getPos, ["Plastic_Pole_EP1_DZ"],15];	
_thePlot = _plots select 0;
_friends = _thePlot getVariable ["plotfriends",[]];
_inList = false;
{ if ((_x  select 0) == (_toAdd select 0)) exitWith { _inList = true; }; } count _friends;
if (_inList) exitWith { cutText ["Already on the list", "PLAIN DOWN"]; };
if ((count _friends) == DZE_MaxPlotFriends) exitWith { cutText [format["Only %1 friends allowed", DZE_MaxPlotFriends], "PLAIN DOWN"]; };
_friends set [(count _friends), [_toAdd]];;
_thePlot setVariable ["plotfriends", _friends, true];

if (isServer) then {
	PVDZ_veh_Save call server_updateObject;
} else {
	PVDZ_veh_Save = [_thePlot,"gear"];
	publicVariableServer "PVDZ_veh_Save";
};


call PlotGetFriends;
call PlotNearbyHumans;