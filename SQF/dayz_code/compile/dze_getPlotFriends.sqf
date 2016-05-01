private ["_findNearestPoles","_AdminAccess","_IsNearPlot","_pole","_friendUID","_owner","_allowed","_friends","_fuid","_FindNearestPole"];
_pole = _this select 0;
_FindNearestPole = _this select 1;
_AdminAccess = _this select 2;
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
	_fuid = [];
	{
		_friendUID = _x select 0;
		_fuid set [(count _fuid), _friendUID];
	} count _friends;
	if (_AdminAccess) then {
		_allowed set [1, DZE_PlotManagementAdmins];
		_allowed set [2, _fuid];
	} else {
		_allowed set [1, _fuid];
	};
};
_allowed;