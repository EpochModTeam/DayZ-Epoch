private ["_plots","_thePlot","_inList","_toAdd","_friends","_friendUID","_friendName","_userList"];
disableSerialization;

_userList = (findDisplay 711194) displayCtrl 7001;

_friendUID = _this select 0;
_friendName = _userList lbText (lbCurSel _userList);

if (_friendUID == "") exitWith {};

_plots = nearestObjects [[player] call FNC_getPos, ["Plastic_Pole_EP1_DZ"],15];

_thePlot = _plots select 0;
_friends = _thePlot getVariable ["plotfriends",[]];
_toAdd = [_friendUID,toArray _friendName];
_inList = false;

{ if ((_x  select 0) == (_toAdd select 0)) exitWith { _inList = true; }; } count _friends;
if (_inList) exitWith { systemChat localize "STR_EPOCH_PLOTMANAGEMENT_ADDFRIEND_ALREADYONTHELIST"; };
if ((count _friends) == DZE_MaxPlotFriends) exitWith { systemChat format[localize "STR_EPOCH_PLOTMANAGEMENT_ADDFRIEND_FRIENDLIMIT", DZE_MaxPlotFriends]; };

_friends set [(count _friends), _toAdd];
_thePlot setVariable ["plotfriends", _friends, true];

PVDZ_veh_Save = [_thePlot,"gear"];
publicVariableServer "PVDZ_veh_Save";

call PlotGetFriends;
call PlotNearbyHumans;
