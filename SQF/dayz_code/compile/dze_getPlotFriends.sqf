/************************************************************************************************************************************************
This file is used to obtain plot pole owners and friends, which includes plot management admins.
You should NOT call this file directly, you should call FNC_check_owner as below to obtain a list of the plot owner and friends.
[player, _cursorTarget] call FNC_check_owner;
************************************************************************************************************************************************/

private ["_findNearestPoles","_IsNearPlot","_pole","_friendUID","_owner","_allowed","_friends","_FindNearestPole"];
_pole = _this select 0;
_FindNearestPole = _this select 1;

_IsNearPlot = 0;
_allowed = [];
if (_FindNearestPole) then {
	_findNearestPoles = nearestObjects[[player] call FNC_getPos, ["Plastic_Pole_EP1_DZ"], DZE_PlotPole select 0];
	_IsNearPlot = count (_findNearestPoles);
	_pole = _findNearestPoles select 0;
};
if(!_FindNearestPole || {_IsNearPlot > 0}) then {
	_owner = if(DZE_plotforLife) then { _pole getVariable ["ownerPUID","0"]; } else { _pole getVariable ["characterID","0"]; };
	_allowed = [_owner];
	_friends = _pole getVariable ["plotfriends", []];
	{
		_friendUID = _x select 0;
		_allowed set [(count _allowed), _friendUID];
	} count _friends;
	if (count DZE_PlotManagementAdmins > 0) then {
		_allowed = _allowed + DZE_PlotManagementAdmins;
	};
};
_allowed;